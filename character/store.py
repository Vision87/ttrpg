"""Durable character draft and revision persistence."""

from __future__ import annotations

import json
from copy import deepcopy
from pathlib import Path
from typing import Any

from character.model import Character


class CharacterStore:
    def __init__(self, path: Path) -> None:
        self.path = path

    def save(self, character: Character, *, revision: int) -> None:
        record = character.to_record()
        record["revision"] = revision
        self.path.write_text(json.dumps(record, sort_keys=True, indent=2) + "\n")

    def load(self) -> tuple[Character, int]:
        record: dict[str, Any] = json.loads(self.path.read_text())
        character = Character(
            record["id"],
            record["name"],
            record["package_versions"],
            record["abilities"],
            record.get("choices", {}),
            record.get("overrides", []),
            record.get("presentation", {}),
            record.get("derived", {}),
        )
        return character, record["revision"]

    @staticmethod
    def snapshot(character: Character) -> dict[str, Any]:
        return deepcopy(character.to_record())
