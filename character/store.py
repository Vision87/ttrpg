"""Durable character draft and revision persistence."""

from __future__ import annotations

import json
import re
from copy import deepcopy
from pathlib import Path
from typing import Any

from character.model import Character
from character.workflow import CreationWorkflow


class PackageVersionUnavailableError(ValueError):
    """Raised when a stored record references a missing or different package version."""


_RECORD_ID = re.compile(r"^[A-Za-z0-9][A-Za-z0-9_-]{0,63}$")


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
            record.get("provenance", {}),
            record.get("ruleset_id"),
            record.get("skill_ranks", {}),
            record.get("equipment_state", {}),
        )
        return character, record["revision"]

    def save_draft(self, workflow: CreationWorkflow) -> None:
        record = workflow.to_draft_record()
        self._write_named_record("drafts", record["id"], record)

    def load_draft(
        self,
        draft_id: str,
        *,
        available_package_versions: dict[str, str],
    ) -> dict[str, Any]:
        record = self.load_draft_record(draft_id)
        self.ensure_package_versions(
            record.get("package_versions", {}),
            available_package_versions,
        )
        return record

    def load_draft_record(self, draft_id: str) -> dict[str, Any]:
        return self._read_named_record("drafts", draft_id)

    def list_drafts(self) -> list[dict[str, Any]]:
        directory = self.path / "drafts"
        if not directory.exists():
            return []
        drafts: list[dict[str, Any]] = []
        for record_path in sorted(directory.glob("*.json")):
            record_id = self._validate_record_id(record_path.stem)
            record = self._read_named_record("drafts", record_id)
            drafts.append(
                {
                    "id": record_id,
                    "name": record.get("name", ""),
                    "ruleset_id": record.get("ruleset_id", ""),
                    "package_versions": dict(record.get("package_versions", {})),
                    "current_step_index": record.get("current_step_index", 0),
                }
            )
        return drafts

    def save_character(self, character: Character) -> None:
        self._write_named_record("characters", character.character_id, character.to_record())

    def load_character(
        self,
        character_id: str,
        *,
        available_package_versions: dict[str, str],
    ) -> Character:
        record = self.load_character_record(character_id)
        self.ensure_package_versions(
            record.get("package_versions", {}),
            available_package_versions,
        )
        return self._character_from_record(record)

    def load_character_record(self, character_id: str) -> dict[str, Any]:
        return self._read_named_record("characters", character_id)

    def _write_named_record(
        self, collection: str, record_id: str, record: dict[str, Any]
    ) -> None:
        safe_id = self._validate_record_id(record_id)
        if collection not in {"drafts", "characters"}:
            raise ValueError(f"Unsupported record collection: {collection}")
        directory = self.path / collection
        directory.mkdir(parents=True, exist_ok=True)
        destination = directory / f"{safe_id}.json"
        destination.write_text(json.dumps(record, sort_keys=True, indent=2) + "\n")

    def _read_named_record(self, collection: str, record_id: str) -> dict[str, Any]:
        safe_id = self._validate_record_id(record_id)
        if collection not in {"drafts", "characters"}:
            raise ValueError(f"Unsupported record collection: {collection}")
        record_path = self.path / collection / f"{safe_id}.json"
        record: dict[str, Any] = json.loads(record_path.read_text())
        if record.get("id") != safe_id:
            raise ValueError(f"Stored {collection[:-1]} id does not match its filename")
        return record

    @staticmethod
    def _validate_record_id(record_id: str) -> str:
        if not isinstance(record_id, str) or not _RECORD_ID.fullmatch(record_id):
            raise ValueError("Record id must contain only letters, numbers, '_' or '-'")
        return record_id

    @staticmethod
    def ensure_package_versions(
        required: dict[str, str],
        available: dict[str, str],
    ) -> None:
        unavailable = {
            package_id: version
            for package_id, version in required.items()
            if available.get(package_id) != version
        }
        if unavailable:
            details = ", ".join(
                f"{package_id}@{version}"
                for package_id, version in sorted(unavailable.items())
            )
            raise PackageVersionUnavailableError(
                f"Required package version unavailable: {details}"
            )

    @staticmethod
    def _character_from_record(record: dict[str, Any]) -> Character:
        return Character(
            record["id"],
            record["name"],
            record["package_versions"],
            record["abilities"],
            record.get("choices", {}),
            record.get("overrides", []),
            record.get("presentation", {}),
            record.get("derived", {}),
            record.get("provenance", {}),
            record.get("ruleset_id"),
            record.get("skill_ranks", {}),
            record.get("equipment_state", {}),
        )

    @staticmethod
    def snapshot(character: Character) -> dict[str, Any]:
        return deepcopy(character.to_record())
