"""Ruleset-adaptive character creation workflow engine."""

from __future__ import annotations

from typing import Any

from character.builder import CharacterBuilder
from character.model import Character
from character.presentation import PresentationProfile

RULESET_WORKFLOW_STEPS = {
    "dnd35": ["abilities", "race", "class", "skills", "feats", "equipment", "appearance"],
    "dark-heresy": ["homeworld", "career", "characteristics", "skills", "talents", "equipment", "appearance"],
}


class CreationWorkflow:
    """Dynamic character creation sequence adapting to active ruleset."""

    def __init__(
        self,
        character_id: str,
        name: str,
        ruleset_id: str,
        ruleset_definitions: dict[str, dict[str, Any]] | None = None,
        policy: str = "guided",
    ) -> None:
        self.character_id = character_id
        self.name = name
        self.ruleset_id = ruleset_id
        self.definitions = ruleset_definitions or {}
        self.policy = policy

        system_key = "dark-heresy" if "dark-heresy" in ruleset_id else "dnd35"
        self.steps = list(RULESET_WORKFLOW_STEPS.get(system_key, RULESET_WORKFLOW_STEPS["dnd35"]))
        self.current_step_index = 0

        self.builder = CharacterBuilder.from_scratch(
            character_id=character_id,
            name=name,
            package_versions={ruleset_id: "1.0.0"},
            policy=policy,
        )
        self.presentation = PresentationProfile()

    @property
    def current_step(self) -> str | None:
        if self.current_step_index < len(self.steps):
            return self.steps[self.current_step_index]
        return None

    def set_stat(self, stat_name: str, value: int) -> None:
        self.builder.set_ability(stat_name, value)

    def choose(self, category: str, item_id: str) -> None:
        self.builder.choose(category, item_id)

    def configure_appearance(self, **kwargs: Any) -> None:
        for k, v in kwargs.items():
            self.presentation.set_asset(k, v)

    def advance_step(self) -> str | None:
        if self.current_step_index < len(self.steps):
            self.current_step_index += 1
        return self.current_step

    def finalize(self) -> Character:
        self.builder.validate_prerequisites(self.definitions)
        char = self.builder.finalize()
        char.presentation = self.presentation.to_record()
        char.recalculate(self.definitions)
        return char
