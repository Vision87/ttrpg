"""Reusable character profile and derived-statistic model."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


from rules.stat_evaluator import evaluate_stats


@dataclass
class Character:
    character_id: str
    name: str
    package_versions: dict[str, str]
    abilities: dict[str, int]
    choices: dict[str, list[str]] = field(default_factory=dict)
    overrides: list[dict[str, Any]] = field(default_factory=list)
    presentation: dict[str, Any] = field(default_factory=dict)
    derived: dict[str, dict[str, Any]] = field(default_factory=dict)

    def recalculate(self, ruleset_definitions: dict[str, dict[str, Any]] | None = None) -> None:
        system_hint = "dark_heresy" if "dark-heresy-core" in self.package_versions else "dnd35"
        self.derived = evaluate_stats(
            self.abilities,
            ruleset_definitions=ruleset_definitions,
            system_hint=system_hint,
        )

    def to_record(self) -> dict[str, Any]:
        return {
            "id": self.character_id,
            "name": self.name,
            "package_versions": dict(self.package_versions),
            "abilities": dict(self.abilities),
            "choices": {key: list(value) for key, value in self.choices.items()},
            "overrides": list(self.overrides),
            "presentation": dict(self.presentation),
            "derived": dict(self.derived),
        }
