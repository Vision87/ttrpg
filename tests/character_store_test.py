import json
from pathlib import Path
from tempfile import TemporaryDirectory

from character.model import Character
from character.store import CharacterStore, PackageVersionUnavailableError
from character.workflow import CreationWorkflow


def test_character_round_trip_preserves_revision_and_references() -> None:
    character = Character(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0"},
        {"strength": 16},
        choices={"feats": ["feat.power-attack"]},
        overrides=[{"path": "choices.feats[0]", "message": "approved homebrew"}],
        presentation={"model": "model.ash-knight@2"},
    )
    character.recalculate()
    with TemporaryDirectory() as directory:
        store = CharacterStore(Path(directory) / "character.json")
        store.save(character, revision=3)
        loaded, revision = store.load()
        assert revision == 3
        assert loaded.to_record() == character.to_record()


def test_store_saves_separate_resumable_drafts_and_pinned_characters() -> None:
    package = json.loads(Path("content/dnd35-core/package.json").read_text())
    versions = {package["id"]: package["version"]}
    flow = CreationWorkflow(
        "draft-alpha",
        "Arannis",
        package["id"],
        package["definitions"],
        creation_flow=package["creation_flow"],
        package_versions=versions,
    )
    flow.set_field("strength", 16)
    flow.configure_appearance(portrait="portrait:knight")
    flow.advance_step()

    second = CreationWorkflow(
        "draft-beta",
        "Bryn",
        package["id"],
        package["definitions"],
        creation_flow=package["creation_flow"],
        package_versions=versions,
    )
    with TemporaryDirectory() as directory:
        store = CharacterStore(Path(directory))
        store.save_draft(flow)
        store.save_draft(second)
        record = store.load_draft(
            "draft-alpha",
            available_package_versions=versions,
        )
        resumed = CreationWorkflow.from_draft_record(
            record,
            ruleset_definitions=package["definitions"],
            creation_flow=package["creation_flow"],
            package_versions=versions,
        )
        assert resumed.current_step == "race"
        assert resumed.builder.character.abilities == {"strength": 16}
        assert resumed.presentation.portrait == "portrait:knight"
        assert store.load_draft(
            "draft-beta",
            available_package_versions=versions,
        )["name"] == "Bryn"

        character = Character(
            "character-final",
            "Arannis",
            versions,
            {"strength": 16},
            provenance={"abilities": {"strength": "user"}},
        )
        store.save_character(character)
        loaded = store.load_character(
            "character-final",
            available_package_versions=versions,
        )
        assert loaded.to_record() == character.to_record()

        try:
            store.load_draft(
                "draft-alpha",
                available_package_versions={"dnd35-core": "2.0.0"},
            )
        except PackageVersionUnavailableError as error:
            assert "dnd35-core@1.0.0" in str(error)
        else:
            raise AssertionError("expected pinned package version error")


def test_store_rejects_unsafe_record_identifiers() -> None:
    with TemporaryDirectory() as directory:
        store = CharacterStore(Path(directory))
        try:
            store.load_draft(
                "../outside",
                available_package_versions={},
            )
        except ValueError as error:
            assert "Record id" in str(error)
        else:
            raise AssertionError("expected unsafe record id error")
