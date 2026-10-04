"""Ruleset and personal character template operations."""

from __future__ import annotations

from copy import deepcopy
from dataclasses import dataclass
from typing import Any

from character.model import Character


@dataclass(frozen=True)
class CharacterTemplate:
    template_id: str
    name: str
    package_versions: dict[str, str]
    defaults: dict[str, Any]
    recommendations: dict[str, Any]

    def apply(self, character_id: str, name: str) -> Character:
        values = deepcopy(self.defaults)
        character = Character(
            character_id=character_id,
            name=name,
            package_versions=deepcopy(self.package_versions),
            abilities=values.pop("abilities", {}),
            choices=values.pop("choices", {}),
            presentation=values.pop("presentation", {}),
        )
        character.recalculate()
        return character


def save_personal_template(
    template_id: str,
    name: str,
    character: Character,
) -> CharacterTemplate:
    return CharacterTemplate(
        template_id=template_id,
        name=name,
        package_versions=deepcopy(character.package_versions),
        defaults={
            "abilities": deepcopy(character.abilities),
            "choices": deepcopy(character.choices),
            "presentation": deepcopy(character.presentation),
        },
        recommendations={},
    )
