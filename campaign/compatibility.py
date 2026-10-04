"""Pre-play compatibility analysis and explicit migration branching."""

from __future__ import annotations

from copy import deepcopy
from dataclasses import dataclass, field
from typing import Any

from campaign.model import Campaign
from character.model import Character


@dataclass
class CompatibilityReport:
    status: str
    conflicts: list[dict[str, Any]] = field(default_factory=list)

    @property
    def playable(self) -> bool:
        return self.status in {"compatible", "compatible-with-warnings"}


def analyze(
    character: Character,
    campaign: Campaign,
    *,
    required_packages: dict[str, str] | None = None,
    required_mechanics: list[str] | None = None,
) -> CompatibilityReport:
    conflicts: list[dict[str, Any]] = []
    required_packages = required_packages or character.package_versions
    for package_id, version in required_packages.items():
        if campaign.packages.get(package_id) != version:
            conflicts.append(
                {
                    "kind": "gameplay-critical",
                    "code": "missing-package",
                    "package_id": package_id,
                    "required": version,
                    "available": campaign.packages.get(package_id),
                }
            )
    for mechanic in required_mechanics or []:
        if mechanic not in campaign.packages:
            conflicts.append(
                {
                    "kind": "gameplay-critical",
                    "code": "missing-mechanic",
                    "mechanic": mechanic,
                }
            )
    if conflicts:
        return CompatibilityReport("incompatible", conflicts)
    return CompatibilityReport("compatible", [])


def preview(character: Character, report: CompatibilityReport) -> dict[str, Any]:
    return {
        "read_only": True,
        "character": character.to_record(),
        "status": report.status,
        "conflicts": deepcopy(report.conflicts),
        "migration_options": ["enable-packages", "replace-content", "remove-content"],
    }


def migrate_branch(
    character: Character,
    *,
    new_character_id: str,
    package_versions: dict[str, str],
    removed_choices: dict[str, list[str]] | None = None,
) -> tuple[Character, list[dict[str, Any]]]:
    branch = deepcopy(character)
    branch.character_id = new_character_id
    branch.package_versions = dict(package_versions)
    changes: list[dict[str, Any]] = []
    for category, values in (removed_choices or {}).items():
        old_values = branch.choices.get(category, [])
        branch.choices[category] = [value for value in old_values if value not in values]
        for value in values:
            if value in old_values:
                changes.append({"category": category, "removed": value})
    branch.recalculate()
    return branch, changes
