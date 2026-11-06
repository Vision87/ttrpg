"""Local portrait prompt, provider, and generated-image storage adapters."""

from __future__ import annotations

from copy import deepcopy
from dataclasses import dataclass
from datetime import datetime, timezone
import json
import logging
from pathlib import Path
import re
import secrets
import struct
import threading
import time
from typing import Any
from urllib.error import HTTPError, URLError
from urllib.parse import quote, urlencode, urlsplit, urlunsplit
from urllib.request import Request, urlopen
import uuid
import zlib

from character.workflow import CreationWorkflow

logger = logging.getLogger(__name__)

PROMPT_PLACEHOLDER = "{{CHARACTER_PROMPT}}"
FACE_VISIBILITY_INSTRUCTION = (
    "Make this a close-up head-and-shoulders portrait, not a full-body or "
    "distant scene. Show the character facing the camera at eye level, with "
    "the face occupying at least one third of the image height. Both eyes, "
    "the nose, and the mouth must be clearly visible, unobstructed, and in "
    "sharp focus. Do not use a back view, hide the face in shadow, cover it "
    "with hair or gear, or crop the head."
)
MAX_DESCRIPTION_LENGTH = 1000
MAX_IMAGE_BYTES = 12 * 1024 * 1024
_SAFE_ID = re.compile(r"[A-Za-z0-9][A-Za-z0-9_-]{0,127}\Z")
_VISUAL_DEFINITION_TYPES = {
    "appearance",
    "background",
    "career",
    "class",
    "homeworld",
    "origin",
    "race",
    "species",
    "visual_style",
}
_VISUAL_PRESENTATION_SLOTS = {
    "appearance",
    "body_type",
    "clothing",
    "eye_color",
    "hair",
    "hair_color",
    "skin_tone",
}
_IMAGE_FORMATS = {
    "image/png": (".png", lambda data: data.startswith(b"\x89PNG\r\n\x1a\n")),
    "image/jpeg": (".jpg", lambda data: data.startswith(b"\xff\xd8\xff")),
    "image/webp": (
        ".webp",
        lambda data: len(data) >= 12 and data[:4] == b"RIFF" and data[8:12] == b"WEBP",
    ),
}


class PortraitGenerationError(RuntimeError):
    """A configured image-generation operation failed."""


class PortraitGenerationUnavailableError(RuntimeError):
    """The image-generation service is not configured for use."""


@dataclass(frozen=True)
class GeneratedImage:
    data: bytes
    content_type: str
    workflow_name: str
    model_name: str | None


def _validated_image(
    data: bytes,
    content_type: str,
    max_bytes: int = MAX_IMAGE_BYTES,
) -> tuple[bytes, str, str]:
    mime_type = content_type.split(";", 1)[0].strip().lower()
    image_format = _IMAGE_FORMATS.get(mime_type)
    if image_format is None or not isinstance(data, bytes):
        raise PortraitGenerationError("ComfyUI returned an unsupported image type")
    if len(data) < 16 or len(data) > max_bytes:
        raise PortraitGenerationError(
            f"ComfyUI image must be between 16 bytes and {max_bytes} bytes"
        )
    extension, signature_check = image_format
    if not signature_check(data):
        raise PortraitGenerationError(
            "ComfyUI response does not contain valid image data"
        )
    if mime_type == "image/png":
        if (
            len(data) < 57
            or data[12:16] != b"IHDR"
            or data[-12:-8] != b"\x00\x00\x00\x00"
            or data[-8:-4] != b"IEND"
            or data[-4:] != struct.pack(">I", zlib.crc32(b"IEND") & 0xFFFFFFFF)
            or b"IDAT" not in data
        ):
            raise PortraitGenerationError(
                "ComfyUI response does not contain a complete PNG image"
            )
        width, height = struct.unpack(">II", data[16:24])
        if width == 0 or height == 0 or width * height > 40_000_000:
            raise PortraitGenerationError(
                "ComfyUI PNG dimensions are invalid or too large"
            )
    elif mime_type == "image/jpeg":
        if not data.endswith(b"\xff\xd9") or b"\xff\xda" not in data:
            raise PortraitGenerationError(
                "ComfyUI response does not contain a complete JPEG image"
            )
    elif mime_type == "image/webp":
        if (
            struct.unpack(">I", data[4:8])[0] + 8 != len(data)
            or data[12:16] not in {b"VP8 ", b"VP8L", b"VP8X"}
        ):
            raise PortraitGenerationError(
                "ComfyUI response does not contain a complete WebP image"
            )
    return data, mime_type, extension


def _safe_destination(endpoint: str) -> str:
    parsed = urlsplit(endpoint)
    host = parsed.hostname or ""
    if ":" in host:
        host = f"[{host}]"
    if parsed.port is not None:
        host += f":{parsed.port}"
    return urlunsplit((parsed.scheme, host, parsed.path.rstrip("/"), "", ""))


def _validate_endpoint(endpoint: str) -> str:
    try:
        parsed = urlsplit(endpoint)
        hostname = parsed.hostname
        parsed.port
    except ValueError as error:
        raise ValueError("Service endpoint must be a valid HTTP or HTTPS URL") from error
    if parsed.scheme not in {"http", "https"} or not hostname:
        raise ValueError("Service endpoint must be an absolute HTTP or HTTPS URL")
    if parsed.query or parsed.fragment:
        raise ValueError("Service endpoint must not contain a query or fragment")
    if parsed.username or parsed.password:
        raise ValueError("Service endpoint must not contain embedded credentials")
    return endpoint.rstrip("/")


def build_visual_prompt(workflow: CreationWorkflow, description: str) -> str:
    """Construct a prompt only from explicitly visual draft fields."""
    if not isinstance(description, str):
        raise ValueError("description must be text")
    description = description.strip()
    if len(description) > MAX_DESCRIPTION_LENGTH:
        raise ValueError(
            f"description must contain at most {MAX_DESCRIPTION_LENGTH} characters"
        )

    details: list[str] = []
    character = workflow.builder.character
    for step in workflow.flow.get("steps", []):
        for field in step.get("fields", []):
            field_type = field.get("type")
            if (
                field_type == "choice"
                and field.get("definition_type") in _VISUAL_DEFINITION_TYPES
            ):
                selected = character.choices.get(field.get("category"), [])
                if not isinstance(selected, list):
                    continue
                for definition_id in selected:
                    definition = workflow.definitions.get(definition_id, {})
                    label = definition.get("name")
                    if isinstance(label, str) and label.strip():
                        details.append(f"{field.get('label', 'Appearance')}: {label.strip()}")
            elif (
                field_type == "presentation"
                and field.get("slot") in _VISUAL_PRESENTATION_SLOTS
            ):
                value = workflow.presentation.to_record().get(field["slot"])
                if isinstance(value, str) and value.strip():
                    details.append(f"{field.get('label', 'Appearance')}: {value.strip()}")

    for slot, value in workflow.presentation.material_tints.items():
        if isinstance(value, str) and value.strip():
            details.append(f"Appearance color {slot}: {value.strip()}")
    for slot, value in workflow.presentation.equipment_visuals.items():
        if isinstance(value, str) and value.strip():
            details.append(f"Appearance gear {slot}: {value.strip()}")

    items = workflow.equipment_state.get("items", [])
    for item in items if isinstance(items, list) else []:
        if not isinstance(item, dict):
            continue
        definition = workflow.definitions.get(item.get("item_id"), {})
        name = definition.get("name")
        if not isinstance(name, str) or not name.strip():
            continue
        slot = item.get("slot")
        details.append(
            f"Gear: {name.strip()}" + (f" ({slot})" if isinstance(slot, str) and slot else "")
        )

    if description:
        details.insert(0, f"User description: {description}")
    if not details:
        details.append("A fantasy character portrait")
    return (
        "Create one original character portrait, centered on the character, "
        "with no text or lettering. Visual details: "
        + "; ".join(details)
        + ". "
        + FACE_VISIBILITY_INSTRUCTION
    )


def _replace_workflow_prompt(workflow: dict[str, Any], prompt: str) -> None:
    replacements = 0
    for node in workflow.values():
        if not isinstance(node, dict):
            continue
        inputs = node.get("inputs")
        if not isinstance(inputs, dict):
            continue

        def replace_input(value: Any) -> Any:
            nonlocal replacements
            if isinstance(value, str) and value == PROMPT_PLACEHOLDER:
                replacements += 1
                return prompt
            if isinstance(value, list):
                return [replace_input(child) for child in value]
            if isinstance(value, dict):
                return {key: replace_input(child) for key, child in value.items()}
            return value

        node["inputs"] = replace_input(inputs)
    if replacements != 1:
        raise PortraitGenerationUnavailableError(
            f"ComfyUI workflow must contain exactly one {PROMPT_PLACEHOLDER} "
            "inside a node input"
        )


class ComfyUIWorkflowClient:
    def __init__(
        self,
        endpoint: str,
        workflow_path: Path | None,
        *,
        model_name: str | None = None,
        timeout_seconds: float = 600.0,
        poll_interval_seconds: float = 0.5,
        max_image_bytes: int = MAX_IMAGE_BYTES,
    ) -> None:
        self.endpoint = _validate_endpoint(endpoint)
        self.workflow_path = workflow_path.expanduser() if workflow_path else None
        self.model_name = model_name.strip() if model_name else None
        self.timeout_seconds = timeout_seconds
        self.poll_interval_seconds = poll_interval_seconds
        self.max_image_bytes = max_image_bytes
        self._seed_lock = threading.Lock()
        self._last_seed_by_input: dict[tuple[str, str], int] = {}
        if timeout_seconds <= 0 or poll_interval_seconds < 0:
            raise ValueError("ComfyUI timeouts must be positive")

    @property
    def configured(self) -> bool:
        return self.workflow_path is not None and self.workflow_path.is_file()

    @property
    def destination(self) -> str:
        return _safe_destination(self.endpoint)

    def _randomize_workflow_seeds(self, workflow: dict[str, Any]) -> None:
        with self._seed_lock:
            randomized = 0
            for node_id, node in workflow.items():
                if not isinstance(node, dict):
                    continue
                inputs = node.get("inputs")
                if not isinstance(inputs, dict):
                    continue
                for input_name, value in inputs.items():
                    if (
                        not isinstance(input_name, str)
                        or not (
                            input_name.casefold() in {"seed", "noise_seed"}
                            or input_name.casefold().endswith("_seed")
                        )
                        or not isinstance(value, int)
                        or isinstance(value, bool)
                    ):
                        continue
                    seed_key = (node_id, input_name)
                    previous_seed = self._last_seed_by_input.get(seed_key)
                    seed = (
                        secrets.randbits(32)
                        if previous_seed is None
                        else (previous_seed + 1) % (1 << 32)
                    )
                    inputs[input_name] = seed
                    self._last_seed_by_input[seed_key] = seed
                    randomized += 1
            if randomized == 0:
                raise PortraitGenerationUnavailableError(
                    "ComfyUI workflow has no numeric seed input to vary; "
                    "add a seed or noise_seed input to its sampler node"
                )

    def generate(self, prompt: str) -> GeneratedImage:
        if self.workflow_path is None or not self.workflow_path.is_file():
            raise PortraitGenerationUnavailableError(
                "ComfyUI workflow file is not configured or is unavailable"
            )
        try:
            workflow = json.loads(self.workflow_path.read_text(encoding="utf-8"))
        except (OSError, json.JSONDecodeError) as error:
            raise PortraitGenerationUnavailableError(
                f"Could not read ComfyUI workflow {self.workflow_path}: {error}"
            ) from error
        if not isinstance(workflow, dict) or not workflow:
            raise PortraitGenerationUnavailableError(
                "ComfyUI workflow must be a non-empty API-format object"
            )
        workflow = deepcopy(workflow)
        model_identifiers = self._workflow_model_identifiers(workflow)
        _replace_workflow_prompt(workflow, prompt)
        self._randomize_workflow_seeds(workflow)

        queued = self._request_json(
            "POST",
            "/prompt",
            {"prompt": workflow},
        )
        prompt_id = queued.get("prompt_id")
        if not isinstance(prompt_id, str) or not prompt_id:
            raise PortraitGenerationError("ComfyUI did not return a prompt id")

        deadline = time.monotonic() + self.timeout_seconds
        image_info: dict[str, Any] | None = None
        while time.monotonic() < deadline:
            history = self._request_json(
                "GET",
                f"/history/{quote(prompt_id, safe='')}",
                timeout_seconds=min(
                    self.timeout_seconds,
                    max(0.01, deadline - time.monotonic()),
                ),
            )
            prompt_history = history.get(prompt_id)
            if isinstance(prompt_history, dict):
                status = prompt_history.get("status", {})
                if isinstance(status, dict) and status.get("status_str") == "error":
                    raise PortraitGenerationError(
                        "ComfyUI reported a workflow execution error"
                    )
                outputs = prompt_history.get("outputs", {})
                if isinstance(outputs, dict):
                    for output in outputs.values():
                        images = output.get("images", []) if isinstance(output, dict) else []
                        if images and isinstance(images[0], dict):
                            image_info = images[0]
                            break
                if image_info is not None:
                    break
            time.sleep(min(self.poll_interval_seconds, max(0, deadline - time.monotonic())))
        if image_info is None:
            raise PortraitGenerationError("Timed out waiting for ComfyUI image output")

        filename = image_info.get("filename")
        subfolder = image_info.get("subfolder", "")
        image_type = image_info.get("type", "output")
        if not isinstance(filename, str) or not filename:
            raise PortraitGenerationError("ComfyUI returned an invalid image reference")
        if not isinstance(subfolder, str) or not isinstance(image_type, str):
            raise PortraitGenerationError("ComfyUI returned an invalid image reference")
        query = urlencode(
            {"filename": filename, "subfolder": subfolder, "type": image_type}
        )
        image_bytes, content_type = self._request_bytes("GET", f"/view?{query}")
        data, mime_type, _ = _validated_image(
            image_bytes,
            content_type,
            self.max_image_bytes,
        )
        return GeneratedImage(
            data=data,
            content_type=mime_type,
            workflow_name=self.workflow_path.name,
            model_name=self.model_name or (", ".join(model_identifiers) or None),
        )

    @staticmethod
    def _workflow_model_identifiers(workflow: dict[str, Any]) -> list[str]:
        identifiers: list[str] = []
        model_inputs = {"ckpt_name", "unet_name", "model_name"}
        for node in workflow.values():
            if not isinstance(node, dict):
                continue
            inputs = node.get("inputs", {})
            if not isinstance(inputs, dict):
                continue
            for key, value in inputs.items():
                if key in model_inputs and isinstance(value, str) and value:
                    identifiers.append(value)
        return sorted(set(identifiers))

    def _request_json(
        self,
        method: str,
        path: str,
        payload: dict[str, Any] | None = None,
        *,
        timeout_seconds: float | None = None,
    ) -> dict[str, Any]:
        headers = {"Accept": "application/json"}
        data = None
        if payload is not None:
            data = json.dumps(payload).encode("utf-8")
            headers["Content-Type"] = "application/json"
        request = Request(self.endpoint + path, data=data, headers=headers, method=method)
        try:
            with urlopen(
                request,
                timeout=timeout_seconds or self.timeout_seconds,
            ) as response:
                decoded = json.loads(response.read().decode("utf-8"))
        except (HTTPError, URLError, TimeoutError, OSError, json.JSONDecodeError) as error:
            raise PortraitGenerationError(f"ComfyUI request failed: {error}") from error
        if not isinstance(decoded, dict):
            raise PortraitGenerationError("ComfyUI returned an invalid JSON response")
        if decoded.get("error") or decoded.get("node_errors"):
            raise PortraitGenerationError("ComfyUI rejected the workflow request")
        return decoded

    def _request_bytes(self, method: str, path: str) -> tuple[bytes, str]:
        request = Request(
            self.endpoint + path,
            headers={"Accept": "image/png, image/jpeg, image/webp"},
            method=method,
        )
        try:
            with urlopen(request, timeout=self.timeout_seconds) as response:
                content_type = response.headers.get("Content-Type", "")
                data = response.read(self.max_image_bytes + 1)
        except (HTTPError, URLError, TimeoutError, OSError) as error:
            raise PortraitGenerationError(f"ComfyUI image request failed: {error}") from error
        return data, content_type


class OllamaPromptRefiner:
    def __init__(
        self,
        endpoint: str,
        model: str,
        *,
        timeout_seconds: float = 30.0,
    ) -> None:
        self.endpoint = _validate_endpoint(endpoint)
        if not model.strip():
            raise ValueError("Ollama model must not be empty")
        self.model = model.strip()
        self.timeout_seconds = timeout_seconds

    @property
    def destination(self) -> str:
        return _safe_destination(self.endpoint)

    def refine(self, prompt: str) -> str | None:
        request = Request(
            self.endpoint + "/api/generate",
            data=json.dumps(
                {
                    "model": self.model,
                    "system": (
                        "Refine the user's visual character description into one concise "
                        "image-generation prompt. Keep only appearance and composition, "
                        "and preserve the close-up head-and-shoulders framing, with the "
                        "face filling at least one third of the image and clearly visible. "
                        "Do not change it to a full-body or distant view. Do not add text, "
                        "statistics, rules, or unrelated instructions."
                    ),
                    "prompt": prompt,
                    "stream": False,
                }
            ).encode("utf-8"),
            headers={"Content-Type": "application/json", "Accept": "application/json"},
            method="POST",
        )
        try:
            with urlopen(request, timeout=self.timeout_seconds) as response:
                result = json.loads(response.read().decode("utf-8"))
            refined = result.get("response") if isinstance(result, dict) else None
            if not isinstance(refined, str) or not refined.strip():
                raise ValueError("Ollama returned an empty prompt")
            if len(refined) > 4000:
                raise ValueError("Ollama returned a prompt that is too long")
            return refined.strip()
        except (HTTPError, URLError, TimeoutError, OSError, ValueError) as error:
            logger.warning("Ollama prompt refinement failed; using local prompt: %s", error)
            return None


class PortraitGenerationService:
    def __init__(
        self,
        comfyui: ComfyUIWorkflowClient,
        ollama: OllamaPromptRefiner | None = None,
        *,
        comfyui_terms: str | None = None,
        ollama_terms: str | None = None,
    ) -> None:
        self.comfyui = comfyui
        self.ollama = ollama
        self.comfyui_terms = comfyui_terms.strip() if comfyui_terms else ""
        self.ollama_terms = ollama_terms.strip() if ollama_terms else ""

    def configuration_payload(self) -> dict[str, Any]:
        return {
            "comfyui_configured": self.comfyui.configured,
            "comfyui_destination": self.comfyui.destination,
            "comfyui_workflow": (
                self.comfyui.workflow_path.name
                if self.comfyui.workflow_path is not None
                else ""
            ),
            "comfyui_model": self.comfyui.model_name,
            "comfyui_terms": self.comfyui_terms or "not supplied",
            "ollama_enabled": self.ollama is not None,
            "ollama_destination": self.ollama.destination if self.ollama else "",
            "ollama_model": self.ollama.model if self.ollama else "",
            "ollama_terms": self.ollama_terms or "not supplied",
        }

    def generate(
        self,
        workflow: CreationWorkflow,
        description: str,
    ) -> tuple[GeneratedImage, dict[str, Any]]:
        if not self.comfyui.configured:
            raise PortraitGenerationUnavailableError(
                "Configure a valid ComfyUI API workflow with "
                "--comfyui-workflow before generating portraits"
            )
        prompt = build_visual_prompt(workflow, description)
        ollama_used = False
        if self.ollama is not None:
            refined = self.ollama.refine(prompt)
            if refined:
                prompt = f"{refined.rstrip()}\n{FACE_VISIBILITY_INSTRUCTION}"
                ollama_used = True
        image = self.comfyui.generate(prompt)
        metadata = {
            "source": "ComfyUI",
            "workflow": image.workflow_name,
            "image_model": image.model_name or "not supplied",
            "ollama_model": self.ollama.model if ollama_used and self.ollama else None,
            "ollama_terms": (
                self.ollama_terms or "not supplied"
                if ollama_used
                else None
            ),
            "created_at": datetime.now(timezone.utc).isoformat(),
            "description": description.strip(),
            "source_terms": self.comfyui_terms or "not supplied",
            "prompt": prompt,
        }
        return image, metadata


class GeneratedPortraitStorage:
    def __init__(self, data_directory: Path) -> None:
        self.root = data_directory / "generated_portraits"
        self._legacy_applied_import_complete = False

    def _library_directory(self, *, create: bool = False) -> Path:
        if self.root.is_symlink():
            raise FileNotFoundError("Generated portrait storage is unavailable")
        root = self.root.resolve()
        directory = self.root / "library"
        if directory.is_symlink():
            raise FileNotFoundError("Generated portrait library is unavailable")
        try:
            directory.resolve().relative_to(root)
        except ValueError as error:
            raise FileNotFoundError(
                "Generated portrait library is outside its data directory"
            ) from error
        if create:
            directory.mkdir(parents=True, exist_ok=True)
        return directory

    def _area_directory(
        self,
        draft_id: str,
        area: str,
        *,
        create: bool = False,
    ) -> Path:
        root = self.root.resolve()
        draft_directory = self.root / self._validate_id(draft_id)
        directory = draft_directory / area
        for path in (draft_directory, directory):
            if path.is_symlink():
                raise FileNotFoundError("Generated portrait storage is unavailable")
            try:
                path.resolve().relative_to(root)
            except ValueError as error:
                raise FileNotFoundError(
                    "Generated portrait storage is outside its data directory"
                ) from error
        if create:
            directory.mkdir(parents=True, exist_ok=True)
        return directory

    @staticmethod
    def _validate_id(value: str) -> str:
        if not isinstance(value, str) or not _SAFE_ID.fullmatch(value):
            raise ValueError("Invalid generated portrait identifier")
        return value

    def save_candidate(
        self,
        draft_id: str,
        image: GeneratedImage,
        provenance: dict[str, Any],
    ) -> dict[str, Any]:
        draft_id = self._validate_id(draft_id)
        data, content_type, extension = _validated_image(
            image.data,
            image.content_type,
        )
        candidate_id = uuid.uuid4().hex
        directory = self._area_directory(draft_id, "candidates", create=True)
        record = {
            "candidate_id": candidate_id,
            "content_type": content_type,
            "provenance": deepcopy(provenance),
        }
        (directory / f"{candidate_id}{extension}").write_bytes(data)
        (directory / f"{candidate_id}.json").write_text(
            json.dumps(record, sort_keys=True),
            encoding="utf-8",
        )
        return record

    def list_candidates(self, draft_id: str) -> list[dict[str, Any]]:
        directory = self._area_directory(draft_id, "candidates")
        if not directory.is_dir():
            return []
        records: list[dict[str, Any]] = []
        for metadata_path in sorted(directory.glob("*.json")):
            if metadata_path.is_symlink():
                continue
            try:
                record = json.loads(metadata_path.read_text(encoding="utf-8"))
            except (OSError, json.JSONDecodeError):
                continue
            if (
                isinstance(record, dict)
                and isinstance(record.get("candidate_id"), str)
                and metadata_path.stem == record["candidate_id"]
            ):
                records.append(record)
        return records

    def read_candidate(
        self,
        draft_id: str,
        candidate_id: str,
    ) -> tuple[bytes, str, dict[str, Any]]:
        directory = self._area_directory(draft_id, "candidates")
        record = self._load_record(directory, candidate_id)
        return self._read_image(directory, candidate_id, record), record["content_type"], record

    def promote_candidate(
        self,
        draft_id: str,
        candidate_id: str,
    ) -> tuple[str, dict[str, Any]]:
        image, content_type, candidate = self.read_candidate(draft_id, candidate_id)
        record = self.save_library_asset(
            image,
            content_type,
            candidate.get("provenance", {}),
        )
        return record["reference"], record

    def list_library(self) -> list[dict[str, Any]]:
        self._import_legacy_applied_portraits()
        directory = self._library_directory()
        if not directory.is_dir():
            return []
        records = [
            self._load_record(directory, metadata_path.stem, "portrait_id")
            for metadata_path in sorted(directory.glob("*.json"))
            if not metadata_path.is_symlink()
        ]
        return sorted(
            records,
            key=lambda record: (
                str(record.get("provenance", {}).get("created_at", "")),
                record["portrait_id"],
            ),
        )

    def _import_legacy_applied_portraits(self) -> None:
        if self._legacy_applied_import_complete:
            return
        if self.root.is_symlink():
            raise FileNotFoundError("Generated portrait storage is unavailable")
        if not self.root.is_dir():
            self._legacy_applied_import_complete = True
            return
        for draft_directory in sorted(self.root.iterdir()):
            if (
                draft_directory.name == "library"
                or draft_directory.is_symlink()
                or not draft_directory.is_dir()
                or not _SAFE_ID.fullmatch(draft_directory.name)
            ):
                continue
            applied_directory = draft_directory / "applied"
            if applied_directory.is_symlink() or not applied_directory.is_dir():
                continue
            for metadata_path in sorted(applied_directory.glob("*.json")):
                if metadata_path.is_symlink():
                    continue
                record = self._load_record(
                    applied_directory,
                    metadata_path.stem,
                    "portrait_id",
                )
                reference = record.get("reference")
                if (
                    not isinstance(reference, str)
                    or self._portrait_id(reference) != record["portrait_id"]
                ):
                    raise ValueError("Generated portrait metadata is invalid")
                if self.library_record(reference) is not None:
                    continue
                image, content_type, legacy_record = self.read_applied(
                    draft_directory.name,
                    reference,
                )
                self.save_library_asset(
                    image,
                    content_type,
                    legacy_record.get("provenance", {}),
                    portrait_id=record["portrait_id"],
                )
        self._legacy_applied_import_complete = True

    def read_library_asset(
        self,
        portrait_id: str,
    ) -> tuple[bytes, str, dict[str, Any]]:
        directory = self._library_directory()
        record = self._load_record(directory, portrait_id, "portrait_id")
        return (
            self._read_image(directory, portrait_id, record),
            record["content_type"],
            record,
        )

    def library_record(self, reference: str) -> dict[str, Any] | None:
        portrait_id = self._portrait_id(reference)
        directory = self._library_directory()
        try:
            return self._load_record(directory, portrait_id, "portrait_id")
        except FileNotFoundError:
            return None

    def save_library_asset(
        self,
        image: bytes,
        content_type: str,
        provenance: dict[str, Any],
        *,
        portrait_id: str | None = None,
    ) -> dict[str, Any]:
        data, content_type, extension = _validated_image(image, content_type)
        portrait_id = self._validate_id(portrait_id or uuid.uuid4().hex)
        directory = self._library_directory(create=True)
        image_path = directory / f"{portrait_id}{extension}"
        record_path = directory / f"{portrait_id}.json"
        if (
            image_path.exists()
            or image_path.is_symlink()
            or record_path.exists()
            or record_path.is_symlink()
        ):
            raise FileExistsError("Generated portrait asset already exists")
        record = {
            "portrait_id": portrait_id,
            "reference": f"generated-portrait:{portrait_id}",
            "content_type": content_type,
            "provenance": deepcopy(provenance),
        }
        image_path.write_bytes(data)
        record_path.write_text(
            json.dumps(record, sort_keys=True),
            encoding="utf-8",
        )
        return record

    def delete_candidate(self, draft_id: str, candidate_id: str) -> None:
        directory = self._area_directory(draft_id, "candidates")
        self._load_record(directory, candidate_id)
        for path in directory.glob(f"{candidate_id}.*"):
            if path.is_file() and not path.is_symlink():
                path.unlink()

    def read_applied(
        self,
        draft_id: str,
        reference: str,
    ) -> tuple[bytes, str, dict[str, Any]]:
        portrait_id = self._portrait_id(reference)
        directory = self._area_directory(draft_id, "applied")
        record = self._load_record(directory, portrait_id, "portrait_id")
        return self._read_image(directory, portrait_id, record), record["content_type"], record

    def applied_record(self, draft_id: str, reference: str) -> dict[str, Any] | None:
        portrait_id = self._portrait_id(reference)
        directory = self._area_directory(draft_id, "applied")
        try:
            return self._load_record(directory, portrait_id, "portrait_id")
        except FileNotFoundError:
            return None

    @staticmethod
    def _portrait_id(reference: str) -> str:
        prefix, separator, portrait_id = reference.partition(":")
        if prefix != "generated-portrait" or not separator:
            raise ValueError("Invalid generated portrait reference")
        return GeneratedPortraitStorage._validate_id(portrait_id)

    @staticmethod
    def _load_record(
        directory: Path,
        identifier: str,
        field: str = "candidate_id",
    ) -> dict[str, Any]:
        identifier = GeneratedPortraitStorage._validate_id(identifier)
        record_path = directory / f"{identifier}.json"
        if record_path.is_symlink():
            raise FileNotFoundError(identifier)
        try:
            record = json.loads(record_path.read_text(encoding="utf-8"))
        except FileNotFoundError:
            raise
        except (OSError, json.JSONDecodeError) as error:
            raise ValueError("Generated portrait metadata is invalid") from error
        if not isinstance(record, dict) or record.get(field) != identifier:
            raise FileNotFoundError(identifier)
        return record

    @staticmethod
    def _read_image(
        directory: Path,
        identifier: str,
        record: dict[str, Any],
    ) -> bytes:
        content_type = record.get("content_type")
        image_format = _IMAGE_FORMATS.get(content_type)
        if image_format is None:
            raise ValueError("Generated portrait has an unsupported content type")
        image_path = directory / f"{identifier}{image_format[0]}"
        if image_path.is_symlink():
            raise FileNotFoundError(identifier)
        data, _, _ = _validated_image(
            image_path.read_bytes(),
            content_type,
        )
        return data
