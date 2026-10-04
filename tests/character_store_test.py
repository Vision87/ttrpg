from pathlib import Path
from tempfile import TemporaryDirectory

from character.model import Character
from character.store import CharacterStore


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
