import json
from contextlib import contextmanager
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
import struct
import threading
import zlib
from pathlib import Path

import pytest

from character.workflow import CreationWorkflow
from clients.portrait_generation import (
    ComfyUIWorkflowClient,
    OllamaPromptRefiner,
    PortraitGenerationService,
    PortraitGenerationUnavailableError,
    build_visual_prompt,
)


def _png_image() -> bytes:
    def chunk(name: bytes, data: bytes) -> bytes:
        content = name + data
        return (
            struct.pack(">I", len(data))
            + content
            + struct.pack(">I", zlib.crc32(content) & 0xFFFFFFFF)
        )

    return (
        b"\x89PNG\r\n\x1a\n"
        + chunk(b"IHDR", struct.pack(">2I5B", 1, 1, 8, 2, 0, 0, 0))
        + chunk(b"IDAT", zlib.compress(b"\x00\x00\x00\x00"))
        + chunk(b"IEND", b"")
    )


@contextmanager
def _fake_comfyui(mode: str = "success", image: bytes | None = None):
    class Handler(BaseHTTPRequestHandler):
        def log_message(self, *_args) -> None:
            pass

        def _write_json(self, status: int, value: dict) -> None:
            encoded = json.dumps(value).encode("utf-8")
            self.send_response(status)
            self.send_header("Content-Type", "application/json")
            self.send_header("Content-Length", str(len(encoded)))
            self.end_headers()
            self.wfile.write(encoded)

        def do_POST(self) -> None:
            payload = json.loads(self.rfile.read(int(self.headers["Content-Length"])))
            self.server.submitted_workflow = payload["prompt"]
            self.server.submitted_workflows.append(payload["prompt"])
            if self.server.mode == "service_failure":
                self._write_json(503, {"error": "provider unavailable"})
            elif self.server.mode == "node_failure":
                self._write_json(
                    200,
                    {
                        "prompt_id": "job-1",
                        "node_errors": {"6": {"errors": [{"message": "invalid node"}]}},
                    },
                )
            else:
                self._write_json(200, {"prompt_id": "job-1", "node_errors": {}})

        def do_GET(self) -> None:
            if self.path.startswith("/history/"):
                if self.server.mode == "timeout":
                    self._write_json(200, {})
                else:
                    self._write_json(
                        200,
                        {
                            "job-1": {
                                "outputs": {
                                    "9": {
                                        "images": [
                                            {
                                                "filename": "portrait.png",
                                                "subfolder": "",
                                                "type": "output",
                                            }
                                        ]
                                    }
                                }
                            }
                        },
                    )
                return
            data = self.server.image
            if self.server.mode == "invalid_image":
                data = b"not an image " * 3
            self.send_response(200)
            self.send_header("Content-Type", "image/png")
            self.send_header("Content-Length", str(len(data)))
            self.end_headers()
            self.wfile.write(data)

    server = ThreadingHTTPServer(("127.0.0.1", 0), Handler)
    server.mode = mode
    server.image = image if image is not None else _png_image()
    server.submitted_workflow = None
    server.submitted_workflows = []
    thread = threading.Thread(target=server.serve_forever, daemon=True)
    thread.start()
    try:
        yield f"http://127.0.0.1:{server.server_port}", server
    finally:
        server.shutdown()
        server.server_close()
        thread.join(timeout=2)


@contextmanager
def _fake_ollama(mode: str = "failure"):
    class Handler(BaseHTTPRequestHandler):
        def log_message(self, *_args) -> None:
            pass

        def do_POST(self) -> None:
            payload = json.loads(self.rfile.read(int(self.headers["Content-Length"])))
            self.server.received_model = payload["model"]
            if self.server.mode == "failure":
                status = 503
                result = {"error": "temporarily unavailable"}
            else:
                status = 200
                result = {"response": "Refined visual portrait prompt"}
            encoded = json.dumps(result).encode("utf-8")
            self.send_response(status)
            self.send_header("Content-Type", "application/json")
            self.send_header("Content-Length", str(len(encoded)))
            self.end_headers()
            self.wfile.write(encoded)

    server = ThreadingHTTPServer(("127.0.0.1", 0), Handler)
    server.mode = mode
    server.received_model = None
    thread = threading.Thread(target=server.serve_forever, daemon=True)
    thread.start()
    try:
        yield f"http://127.0.0.1:{server.server_port}", server
    finally:
        server.shutdown()
        server.server_close()
        thread.join(timeout=2)


def _workflow_path(directory: Path) -> Path:
    path = directory / "portrait-api.json"
    path.write_text(
        json.dumps(
            {
                "6": {
                    "class_type": "CLIPTextEncode",
                    "inputs": {"text": "{{CHARACTER_PROMPT}}"},
                },
                "4": {
                    "class_type": "CheckpointLoaderSimple",
                    "inputs": {"ckpt_name": "local-checkpoint.safetensors"},
                },
                "3": {
                    "class_type": "KSampler",
                    "inputs": {"seed": 12345},
                },
            }
        ),
        encoding="utf-8",
    )
    return path


def _client(endpoint: str, workflow_path: Path, **options) -> ComfyUIWorkflowClient:
    return ComfyUIWorkflowClient(
        endpoint,
        workflow_path,
        poll_interval_seconds=0.005,
        **options,
    )


def test_comfyui_configuration_reports_unavailable_workflow_and_disabled_ollama(
    tmp_path: Path,
) -> None:
    workflow_path = _workflow_path(tmp_path)
    service = PortraitGenerationService(
        _client("http://127.0.0.1:8188", workflow_path)
    )
    configuration = service.configuration_payload()
    assert configuration["comfyui_configured"] is True
    assert configuration["comfyui_destination"] == "http://127.0.0.1:8188"
    assert configuration["ollama_enabled"] is False
    assert configuration["comfyui_terms"] == "not supplied"

    unavailable = PortraitGenerationService(
        _client("http://127.0.0.1:8188", tmp_path / "missing.json")
    )
    assert unavailable.configuration_payload()["comfyui_configured"] is False
    with pytest.raises(PortraitGenerationUnavailableError):
        unavailable.comfyui.generate("portrait")


def test_visual_prompt_includes_appearance_and_gear_but_excludes_mechanics(
    tmp_path: Path,
) -> None:
    package = json.loads(Path("content/dnd35-core/package.json").read_text())
    race_id = next(
        identifier
        for identifier, definition in package["definitions"].items()
        if definition.get("type") == "race"
    )
    class_id = next(
        identifier
        for identifier, definition in package["definitions"].items()
        if definition.get("type") == "class"
    )
    item_id = next(
        identifier
        for identifier, definition in package["definitions"].items()
        if definition.get("type") == "item"
    )
    workflow = CreationWorkflow(
        "draft-visuals",
        "Private Name",
        package["id"],
        package["definitions"],
        creation_flow=package["creation_flow"],
        package_versions={package["id"]: package["version"]},
    )
    workflow.set_field("race", race_id)
    workflow.set_field("class", class_id)
    workflow.builder.character.abilities["strength"] = 18
    workflow.builder.character.choices["skills"] = ["skill.diplomacy"]
    workflow.equipment_state["items"] = [
        {"item_id": item_id, "slot": "main hand"}
    ]
    workflow.presentation.material_tints["hair"] = "silver"

    prompt = build_visual_prompt(workflow, "A weathered traveler in blue")
    assert package["definitions"][race_id]["name"] in prompt
    assert package["definitions"][class_id]["name"] in prompt
    assert package["definitions"][item_id]["name"] in prompt
    assert "silver" in prompt
    assert "A weathered traveler in blue" in prompt
    assert "Private Name" not in prompt
    assert "strength" not in prompt
    assert "18" not in prompt
    assert "skill.diplomacy" not in prompt
    assert "face occupying at least one third" in prompt


def test_visual_prompt_requires_a_visible_face_without_a_user_description(
    tmp_path: Path,
) -> None:
    package = json.loads(Path("content/dnd35-core/package.json").read_text())
    workflow = CreationWorkflow(
        "draft-face",
        "Private Name",
        package["id"],
        package["definitions"],
        creation_flow=package["creation_flow"],
        package_versions={package["id"]: package["version"]},
    )

    prompt = build_visual_prompt(workflow, "")

    assert "close-up head-and-shoulders portrait" in prompt
    assert "not a full-body or distant scene" in prompt
    assert "Both eyes, the nose, and the mouth" in prompt
    assert "at least one third of the image height" in prompt


def test_ollama_failure_falls_back_to_deterministic_visual_prompt(
    tmp_path: Path,
) -> None:
    package = json.loads(Path("content/dnd35-core/package.json").read_text())
    workflow = CreationWorkflow(
        "draft-fallback",
        "Private Name",
        package["id"],
        package["definitions"],
        creation_flow=package["creation_flow"],
        package_versions={package["id"]: package["version"]},
    )
    workflow.builder.character.choices["race"] = ["race.human"]
    workflow.definitions.setdefault("race.human", {"name": "Human"})
    deterministic_prompt = build_visual_prompt(workflow, "")
    workflow_path = _workflow_path(tmp_path)
    with _fake_comfyui() as (comfyui_url, comfyui):
        with _fake_ollama() as (ollama_url, ollama):
            service = PortraitGenerationService(
                _client(comfyui_url, workflow_path),
                OllamaPromptRefiner(ollama_url, "vision-model"),
            )
            _, provenance = service.generate(workflow, "")

    assert ollama.received_model == "vision-model"
    assert comfyui.submitted_workflow["6"]["inputs"]["text"] == deterministic_prompt
    assert provenance["ollama_model"] is None


def test_ollama_success_is_recorded_as_prompt_provenance(tmp_path: Path) -> None:
    package = json.loads(Path("content/dnd35-core/package.json").read_text())
    workflow = CreationWorkflow(
        "draft-refined",
        "Private Name",
        package["id"],
        package["definitions"],
        creation_flow=package["creation_flow"],
        package_versions={package["id"]: package["version"]},
    )
    workflow_path = _workflow_path(tmp_path)
    with _fake_comfyui() as (comfyui_url, comfyui):
        with _fake_ollama("success") as (ollama_url, ollama):
            service = PortraitGenerationService(
                _client(comfyui_url, workflow_path),
                OllamaPromptRefiner(ollama_url, "vision-model"),
                comfyui_terms="checkpoint usage terms",
                ollama_terms="prompt model terms",
            )
            _, provenance = service.generate(workflow, "")

    assert ollama.received_model == "vision-model"
    assert comfyui.submitted_workflow["6"]["inputs"]["text"] == (
        "Refined visual portrait prompt\n"
        "Make this a close-up head-and-shoulders portrait, not a full-body or "
        "distant scene. Show the character facing the camera at eye level, with "
        "the face occupying at least one third of the image height. Both eyes, "
        "the nose, and the mouth must be clearly visible, unobstructed, and in "
        "sharp focus. Do not use a back view, hide the face in shadow, cover it "
        "with hair or gear, or crop the head."
    )
    assert provenance["ollama_model"] == "vision-model"
    assert provenance["source_terms"] == "checkpoint usage terms"
    assert provenance["ollama_terms"] == "prompt model terms"


def test_comfyui_submits_api_workflow_and_retrieves_validated_image(
    tmp_path: Path,
) -> None:
    workflow_path = _workflow_path(tmp_path)
    with _fake_comfyui() as (endpoint, server):
        result = _client(endpoint, workflow_path).generate("A cloaked ranger")

    assert result.data == _png_image()
    assert result.content_type == "image/png"
    assert result.workflow_name == workflow_path.name
    assert result.model_name == "local-checkpoint.safetensors"
    assert server.submitted_workflow["6"]["inputs"]["text"] == "A cloaked ranger"
    assert server.submitted_workflow["3"]["inputs"]["seed"] != 12345


def test_comfyui_uses_a_different_seed_for_each_generation(
    tmp_path: Path,
) -> None:
    workflow_path = _workflow_path(tmp_path)
    with _fake_comfyui() as (endpoint, server):
        client = _client(endpoint, workflow_path)
        client.generate("A cloaked ranger")
        client.generate("A cloaked ranger")

    seeds = [
        workflow["3"]["inputs"]["seed"]
        for workflow in server.submitted_workflows
    ]
    assert len(seeds) == 2
    assert seeds[0] != seeds[1]
    assert json.loads(workflow_path.read_text(encoding="utf-8"))["3"]["inputs"][
        "seed"
    ] == 12345


def test_comfyui_rejects_workflow_without_numeric_seed(tmp_path: Path) -> None:
    workflow_path = _workflow_path(tmp_path)
    workflow = json.loads(workflow_path.read_text(encoding="utf-8"))
    del workflow["3"]
    workflow_path.write_text(json.dumps(workflow), encoding="utf-8")

    with _fake_comfyui() as (endpoint, server):
        client = _client(endpoint, workflow_path)
        with pytest.raises(PortraitGenerationUnavailableError, match="no numeric seed"):
            client.generate("A cloaked ranger")

    assert server.submitted_workflow is None


@pytest.mark.parametrize(
    ("mode", "error"),
    [
        ("timeout", "Timed out"),
        ("service_failure", "request failed"),
        ("node_failure", "rejected the workflow request"),
        ("invalid_image", "valid image data"),
    ],
)
def test_comfyui_errors_do_not_return_images(
    tmp_path: Path,
    mode: str,
    error: str,
) -> None:
    workflow_path = _workflow_path(tmp_path)
    with _fake_comfyui(mode) as (endpoint, _):
        client = _client(
            endpoint,
            workflow_path,
            timeout_seconds=0.03,
        )
        with pytest.raises(RuntimeError, match=error):
            client.generate("portrait")


def test_comfyui_rejects_images_over_configured_size_limit(tmp_path: Path) -> None:
    workflow_path = _workflow_path(tmp_path)
    with _fake_comfyui() as (endpoint, _):
        client = _client(
            endpoint,
            workflow_path,
            max_image_bytes=16,
        )
        with pytest.raises(RuntimeError, match="16 bytes"):
            client.generate("portrait")
