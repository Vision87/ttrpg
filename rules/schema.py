"""Validation for the declarative rules-definition vocabulary."""

from __future__ import annotations

from typing import Any


class DefinitionValidationError(ValueError):
    """Raised when a declarative rules definition is invalid."""


ALLOWED_TYPES = {
    "race",
    "class",
    "feat",
    "skill",
    "spell",
    "item",
    "condition",
    "action",
    "resource",
    "monster",
    "template",
    "ability",
    "level",
    "characteristic",
    "homeworld",
    "career",
    "talent",
    "trait",
    "psychic_power",
    "mechanic",
    "damage_model",
}

ALLOWED_DICE_MODELS = {
    "d20_roll_high",
    "d100_roll_under",
    "dice_pool",
    "custom",
}


def validate_ruleset_package(package_data: dict[str, Any]) -> None:
    """Validate a complete ruleset package manifest including dice models and definitions."""
    if not isinstance(package_data, dict):
        raise DefinitionValidationError("Ruleset package must be a dictionary")

    package_id = package_data.get("id") or package_data.get("package_id")
    if not isinstance(package_id, str) or not package_id.strip():
        raise DefinitionValidationError("Ruleset package must have a non-empty string id")

    version = package_data.get("version")
    if not isinstance(version, str) or not version.strip():
        raise DefinitionValidationError("Ruleset package must have a non-empty version string")

    dice_model = package_data.get("dice_model")
    if dice_model is not None and dice_model not in ALLOWED_DICE_MODELS:
        raise DefinitionValidationError(
            f"Unsupported dice model '{dice_model}'. Allowed models: {sorted(ALLOWED_DICE_MODELS)}"
        )

    mechanics = package_data.get("mechanics")
    if mechanics is not None:
        if not isinstance(mechanics, dict):
            raise DefinitionValidationError("mechanics must be an object if provided")
        mechanics_model = mechanics.get("dice_model")
        if mechanics_model is not None and mechanics_model not in ALLOWED_DICE_MODELS:
            raise DefinitionValidationError(
                f"Unsupported mechanics dice model '{mechanics_model}'. Allowed models: {sorted(ALLOWED_DICE_MODELS)}"
            )

    definitions = package_data.get("definitions", {})
    if not isinstance(definitions, dict):
        raise DefinitionValidationError("Package definitions must be a dictionary")

    for def_key, def_val in definitions.items():
        if not isinstance(def_val, dict):
            raise DefinitionValidationError(f"Definition '{def_key}' must be an object")
        validate_definition(def_val)


def validate_definition(definition: dict[str, Any]) -> None:
    definition_id = definition.get("id")
    definition_type = definition.get("type")
    if not isinstance(definition_id, str) or not definition_id:
        raise DefinitionValidationError("Definition id must be a non-empty string")
    if definition_type not in ALLOWED_TYPES:
        raise DefinitionValidationError(f"Unsupported definition type: {definition_type}")

    dice_model = definition.get("dice_model")
    if dice_model is not None and dice_model not in ALLOWED_DICE_MODELS:
        raise DefinitionValidationError(f"Unsupported definition dice_model: {dice_model}")

    for field in ("prerequisites", "modifiers", "triggers", "effects"):
        value = definition.get(field, [])
        if not isinstance(value, list):
            raise DefinitionValidationError(f"{field} must be a list")
        if not all(isinstance(item, dict) for item in value):
            raise DefinitionValidationError(f"{field} entries must be objects")

    if "duration" in definition and not isinstance(definition["duration"], dict):
        raise DefinitionValidationError("duration must be an object")
    if "formula" in definition and not isinstance(definition["formula"], str):
        raise DefinitionValidationError("formula must be a string")
    if "cost" in definition and not isinstance(definition["cost"], (int, str, dict)):
        raise DefinitionValidationError("cost must be a number, string, or object")

    for modifier in definition.get("modifiers", []):
        if not isinstance(modifier.get("target"), str):
            raise DefinitionValidationError("modifier target must be a string")
        if not isinstance(modifier.get("formula"), str):
            raise DefinitionValidationError("modifier formula must be a string")

    for trigger in definition.get("triggers", []):
        if not isinstance(trigger.get("event"), str):
            raise DefinitionValidationError("trigger event must be a string")
        if not isinstance(trigger.get("effects", []), list):
            raise DefinitionValidationError("trigger effects must be a list")
