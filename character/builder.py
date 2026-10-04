"""Guided and expert character-building flows."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any

from character.model import Character
from character.templates import CharacterTemplate


@dataclass
class ValidationIssue:
    code: str
    message: str
    severity: str
    path: str


@dataclass
class CharacterBuilder:
    character: Character
    policy: str = "guided"
    template_id: str | None = None
    template_values: dict[str, Any] = field(default_factory=dict)
    issues: list[ValidationIssue] = field(default_factory=list)

    @classmethod
    def from_template(
        cls,
        template: CharacterTemplate,
        character_id: str,
        name: str,
        *,
        policy: str = "guided",
    ) -> "CharacterBuilder":
        character = template.apply(character_id, name)
        return cls(
            character=character,
            policy=policy,
            template_id=template.template_id,
            template_values={
                "abilities": dict(character.abilities),
                "choices": {key: list(value) for key, value in character.choices.items()},
            },
        )

    @classmethod
    def from_scratch(
        cls,
        character_id: str,
        name: str,
        package_versions: dict[str, str],
        *,
        policy: str = "guided",
    ) -> "CharacterBuilder":
        return cls(
            Character(character_id, name, dict(package_versions), {}),
            policy=policy,
        )

    def set_ability(self, ability: str, value: int) -> None:
        self.character.abilities[ability] = value
        self.character.recalculate()

    def choose(self, category: str, definition_id: str) -> None:
        self.character.choices.setdefault(category, []).append(definition_id)

    def add_override(self, path: str, message: str) -> None:
        self.character.overrides.append({"path": path, "message": message})

    def explain_prerequisite(
        self, path: str, satisfied: bool, message: str
    ) -> ValidationIssue | None:
        if satisfied:
            return None
        issue = ValidationIssue(
            "unmet-prerequisite",
            message,
            "error" if self.policy == "strict" else "warning",
            path,
        )
        if self.policy == "homebrew":
            issue = ValidationIssue(
                "homebrew-override-available",
                message,
                "warning",
                path,
            )
        self.issues.append(issue)
        return issue

    def validate_prerequisites(self, definitions: dict[str, dict[str, Any]]) -> list[ValidationIssue]:
        issues: list[ValidationIssue] = []
        for category in ("feats", "talents"):
            for choice_id in self.character.choices.get(category, []):
                def_data = definitions.get(choice_id, {})
                for req in def_data.get("prerequisites", []):
                    rule = req.get("rule")
                    min_val = req.get("minimum", 0)
                    actual_val = self.character.abilities.get(rule, 0)
                    if actual_val < min_val:
                        issue = self.explain_prerequisite(
                            path=f"choices.{category}.{choice_id}",
                            satisfied=False,
                            message=f"{choice_id} requires {rule} >= {min_val} (current: {actual_val})",
                        )
                        if issue:
                            issues.append(issue)
        return issues

    def validate(self) -> list[ValidationIssue]:
        issues: list[ValidationIssue] = []
        if not self.character.abilities:
            issues.append(
                ValidationIssue(
                    "missing-abilities",
                    "At least one ability score is required",
                    "error",
                    "abilities",
                )
            )
        for override in self.character.overrides:
            issues.append(
                ValidationIssue(
                    "homebrew-override",
                    override.get("message", "Homebrew override is active"),
                    "warning",
                    override.get("path", "overrides"),
                )
            )
        self.issues = issues
        return issues

    def finalize(self) -> Character:
        issues = self.validate()
        if any(issue.severity == "error" for issue in issues):
            raise ValueError("Character cannot be finalized with validation errors")
        if self.policy == "strict" and any(issue.severity == "warning" for issue in issues):
            raise ValueError("Character cannot be finalized under strict policy")
        self.character.recalculate()
        return self.character
