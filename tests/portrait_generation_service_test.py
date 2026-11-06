import json
from pathlib import Path
import struct
import zlib

from clients.creation_service import CharacterCreationApplication
from clients.portrait_generation import GeneratedImage


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


_IMAGE = _png_image()


class _PortraitGenerator:
    def configuration_payload(self) -> dict:
        return {
            "comfyui_configured": True,
            "comfyui_destination": "http://127.0.0.1:8188",
            "comfyui_workflow": "portrait.json",
            "comfyui_model": "local-checkpoint",
            "ollama_enabled": False,
            "ollama_destination": "",
            "ollama_model": "",
        }

    def generate(self, workflow, description: str):
        return (
            GeneratedImage(
                _IMAGE,
                "image/png",
                "portrait.json",
                "local-checkpoint",
            ),
            {
                "source": "ComfyUI",
                "workflow": "portrait.json",
                "image_model": "local-checkpoint",
                "ollama_model": None,
                "created_at": "2025-01-01T00:00:00+00:00",
                "description": description,
                "source_terms": "not supplied",
                "prompt": "visual-only prompt",
            },
        )


def _create_draft(app: CharacterCreationApplication) -> str:
    status, response = app.handle(
        "POST",
        "/api/drafts",
        {"ruleset_id": "dnd35-core", "name": "Portrait Test"},
    )
    assert status == 201
    return response["draft"]["id"]


def test_candidate_preview_apply_and_draft_resume_preserve_image_and_provenance(
    tmp_path: Path,
) -> None:
    data_directory = tmp_path / "data"
    app = CharacterCreationApplication(Path.cwd(), data_directory, _PortraitGenerator())
    draft_id = _create_draft(app)
    original_reference = "portrait:bundled"
    status, _ = app.handle(
        "PUT",
        f"/api/drafts/{draft_id}",
        {"field_id": "portrait", "value": original_reference},
    )
    assert status == 200

    status, generated = app.handle(
        "POST",
        f"/api/drafts/{draft_id}/portrait-candidates",
        {"description": "A weathered traveler"},
    )
    assert status == 201
    candidate = generated["portrait_generation"]["candidate"]
    assert generated["draft"]["presentation"]["portrait"] == original_reference
    assert candidate["provenance"]["description"] == "A weathered traveler"
    assert app.handle_image("GET", candidate["image_url"])[1] == _IMAGE

    status, applied = app.handle(
        "POST",
        f"/api/drafts/{draft_id}/portrait-candidates/"
        f"{candidate['candidate_id']}/apply",
        {},
    )
    assert status == 200
    portrait_reference = applied["draft"]["presentation"]["portrait"]
    assert portrait_reference.startswith("generated-portrait:")
    assert applied["portrait_generation"]["candidate"] is None
    assert applied["portrait_generation"]["applied"]["provenance"]["workflow"] == (
        "portrait.json"
    )
    library_asset = next(
        asset
        for asset in applied["generated_portraits"]
        if asset["reference"] == portrait_reference
    )
    image_status, image, content_type = app.handle_image(
        "GET",
        library_asset["image_url"],
    )
    assert (image_status, image, content_type) == (200, _IMAGE, "image/png")

    resumed = CharacterCreationApplication(Path.cwd(), data_directory)
    status, restored = resumed.handle("GET", f"/api/drafts/{draft_id}")
    assert status == 200
    assert restored["draft"]["presentation"]["portrait"] == portrait_reference
    assert restored["portrait_generation"]["applied"]["provenance"]["source_terms"] == (
        "not supplied"
    )
    image_status, image, content_type = resumed.handle_image(
        "GET",
        restored["portrait_generation"]["applied"]["image_url"],
    )
    assert (image_status, image, content_type) == (200, _IMAGE, "image/png")
    assert restored["draft"]["choices"] == applied["draft"]["choices"]
    assert any(
        asset["reference"] == portrait_reference
        for asset in restored["generated_portraits"]
    )

    other_draft_id = _create_draft(resumed)
    _, selected = resumed.handle(
        "PUT",
        f"/api/drafts/{other_draft_id}",
        {"field_id": "portrait", "value": portrait_reference},
    )
    assert selected["draft"]["presentation"]["portrait"] == portrait_reference
    assert selected["portrait_generation"]["applied"]["reference"] == portrait_reference
    assert resumed.handle_image(
        "GET",
        selected["portrait_generation"]["applied"]["image_url"],
    ) == (200, _IMAGE, "image/png")


def test_discard_and_generation_failure_leave_selected_portrait_unchanged(
    tmp_path: Path,
) -> None:
    app = CharacterCreationApplication(Path.cwd(), tmp_path / "data", _PortraitGenerator())
    draft_id = _create_draft(app)
    original_reference = "portrait:bundled"
    app.handle(
        "PUT",
        f"/api/drafts/{draft_id}",
        {"field_id": "portrait", "value": original_reference},
    )
    _, generated = app.handle(
        "POST",
        f"/api/drafts/{draft_id}/portrait-candidates",
        {"description": ""},
    )
    candidate_id = generated["portrait_generation"]["candidate"]["candidate_id"]

    status, discarded = app.handle(
        "POST",
        f"/api/drafts/{draft_id}/portrait-candidates/{candidate_id}/discard",
        {},
    )
    assert status == 200
    assert discarded["draft"]["presentation"]["portrait"] == original_reference
    assert discarded["portrait_generation"]["candidate"] is None
    assert app.handle_image(
        "GET",
        f"/api/drafts/{draft_id}/portrait-candidates/{candidate_id}/image",
    )[0] == 404
    assert len(discarded["generated_portraits"]) == 1
    discarded_asset = discarded["generated_portraits"][0]
    assert discarded_asset["provenance"]["description"] == ""
    assert app.handle_image(
        "GET",
        discarded_asset["image_url"],
    ) == (200, _IMAGE, "image/png")

    unconfigured = CharacterCreationApplication(Path.cwd(), tmp_path / "other-data")
    other_draft_id = _create_draft(unconfigured)
    status, error = unconfigured.handle(
        "POST",
        f"/api/drafts/{other_draft_id}/portrait-candidates",
        {"description": "A traveler"},
    )
    assert status == 503
    assert "ComfyUI" in error["error"]["message"]
    _, unchanged = unconfigured.handle("GET", f"/api/drafts/{other_draft_id}")
    assert unchanged["draft"]["presentation"]["portrait"] is None


def test_existing_applied_portraits_are_imported_into_shared_library(
    tmp_path: Path,
) -> None:
    data_directory = tmp_path / "data"
    app = CharacterCreationApplication(Path.cwd(), data_directory)
    draft_id = _create_draft(app)
    portrait_id = "legacy-portrait-001"
    reference = f"generated-portrait:{portrait_id}"
    app.handle(
        "PUT",
        f"/api/drafts/{draft_id}",
        {"field_id": "portrait", "value": reference},
    )

    legacy_directory = (
        data_directory / "generated_portraits" / draft_id / "applied"
    )
    legacy_directory.mkdir(parents=True)
    legacy_image = legacy_directory / f"{portrait_id}.png"
    legacy_image.write_bytes(_IMAGE)
    (legacy_directory / f"{portrait_id}.json").write_text(
        json.dumps(
            {
                "portrait_id": portrait_id,
                "reference": reference,
                "content_type": "image/png",
                "provenance": {
                    "workflow": "legacy-workflow",
                    "description": "Previously applied",
                },
            }
        ),
        encoding="utf-8",
    )

    resumed = CharacterCreationApplication(Path.cwd(), data_directory)
    status, restored = resumed.handle("GET", f"/api/drafts/{draft_id}")
    assert status == 200
    assert restored["portrait_generation"]["applied"]["reference"] == reference
    assert restored["portrait_generation"]["applied"]["provenance"]["workflow"] == (
        "legacy-workflow"
    )
    assert len(restored["generated_portraits"]) == 1
    assert restored["generated_portraits"][0]["reference"] == reference
    assert resumed.handle_image(
        "GET",
        restored["generated_portraits"][0]["image_url"],
    ) == (200, _IMAGE, "image/png")
    assert legacy_image.exists()

    restarted = CharacterCreationApplication(Path.cwd(), data_directory)
    _, listed_again = restarted.handle("GET", f"/api/drafts/{draft_id}")
    assert len(listed_again["generated_portraits"]) == 1


def test_portrait_api_rejects_unknown_drafts_and_unsafe_references(
    tmp_path: Path,
) -> None:
    app = CharacterCreationApplication(Path.cwd(), tmp_path / "data", _PortraitGenerator())
    status, error = app.handle(
        "POST",
        "/api/drafts/missing/portrait-candidates",
        {"description": ""},
    )
    assert status == 404
    assert error["error"]["code"] == "not-found"

    status, body, _ = app.handle_image(
        "GET",
        "/api/drafts/draft-safe/portrait-candidates/../../outside/image",
    )
    assert status in {400, 404}
    assert body == b""


def test_portrait_image_route_does_not_follow_storage_symlinks(
    tmp_path: Path,
) -> None:
    app = CharacterCreationApplication(Path.cwd(), tmp_path / "data", _PortraitGenerator())
    draft_id = _create_draft(app)
    external = tmp_path / "outside"
    external.mkdir()
    candidate_id = "outside-candidate"
    (external / f"{candidate_id}.png").write_bytes(_IMAGE)
    (external / f"{candidate_id}.json").write_text(
        json.dumps(
            {
                "candidate_id": candidate_id,
                "content_type": "image/png",
                "provenance": {},
            }
        ),
        encoding="utf-8",
    )
    draft_storage = app.portrait_storage.root / draft_id
    draft_storage.mkdir(parents=True, exist_ok=True)
    (draft_storage / "candidates").symlink_to(external, target_is_directory=True)

    status, image, _ = app.handle_image(
        "GET",
        f"/api/drafts/{draft_id}/portrait-candidates/{candidate_id}/image",
    )
    assert status == 404
    assert image == b""
