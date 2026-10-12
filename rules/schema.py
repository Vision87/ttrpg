"""Validation for the declarative rules-definition vocabulary."""

from __future__ import annotations

import re
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

CREATION_FIELD_TYPES = {"number", "choice", "text", "presentation"}
CREATION_VALIDATION_RULES = {
    "prerequisites",
    "ability_budget",
    "equipment",
    "presentation",
}
THEME_COLOR_TOKENS = {
    "background",
    "surface",
    "primary",
    "secondary",
    "accent",
    "text",
}
THEME_ASSET_SLOTS = {
    "logo",
    "display_font",
    "ui_background",
    "ui_panel",
    "ui_control",
    "ui_control_hover",
    "ui_control_active",
    "metal_trim",
    "board_frame",
}
THEME_UI_ASSET_SLOTS = THEME_ASSET_SLOTS
_THEME_COLOR = re.compile(r"^#[0-9a-fA-F]{6}(?:[0-9a-fA-F]{2})?$")
_THEME_ASSET_REF = re.compile(r"^[A-Za-z0-9._:-]+@[1-9][0-9]*$")


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

    feat_descriptions = package_data.get("feat_descriptions")
    if feat_descriptions is not None:
        if not isinstance(feat_descriptions, dict):
            raise DefinitionValidationError("feat_descriptions must be an object")
        feat_ids = {
            def_key
            for def_key, def_val in definitions.items()
            if isinstance(def_val, dict) and def_val.get("type") == "feat"
        }
        for feat_id, description in feat_descriptions.items():
            if feat_id not in feat_ids:
                raise DefinitionValidationError(
                    f"feat_descriptions references unknown feat '{feat_id}'"
                )
            if (
                not isinstance(description, str)
                or not description.strip()
                or len(description) > 240
            ):
                raise DefinitionValidationError(
                    f"feat_descriptions.{feat_id} must be a non-empty string "
                    "of at most 240 characters"
                )
        missing_descriptions = feat_ids - set(feat_descriptions)
        if missing_descriptions:
            raise DefinitionValidationError(
                "Missing feat descriptions: " + ", ".join(sorted(missing_descriptions))
            )

    for def_key, def_val in definitions.items():
        if not isinstance(def_val, dict):
            raise DefinitionValidationError(f"Definition '{def_key}' must be an object")
        validate_definition(def_val)
        if def_val.get("type") == "class":
            skill_points = def_val.get("skill_points")
            if skill_points is not None and (
                isinstance(skill_points, bool)
                or not isinstance(skill_points, int)
                or skill_points < 0
            ):
                raise DefinitionValidationError(
                    f"{def_key}.skill_points must be a non-negative integer"
                )
            class_skills = def_val.get("class_skills", [])
            if not isinstance(class_skills, list) or not all(
                isinstance(skill_id, str)
                and definitions.get(skill_id, {}).get("type") == "skill"
                for skill_id in class_skills
            ):
                raise DefinitionValidationError(
                    f"{def_key}.class_skills must reference package skill definitions"
                )

    creation_flow = package_data.get("creation_flow")
    if creation_flow is not None:
        validate_creation_flow(creation_flow, definitions)
        if not package_data.get("dependencies"):
            validate_creation_flow_references(creation_flow, definitions)

    theme = package_data.get("theme")
    if theme is not None:
        validate_theme_profile(theme)


def validate_creation_flow(
    creation_flow: Any,
    definitions: dict[str, Any],
) -> None:
    if not isinstance(creation_flow, dict):
        raise DefinitionValidationError("creation_flow must be an object")
    unknown_flow_fields = set(creation_flow) - {
        "steps",
        "validation_rules",
        "score_groups",
    }
    if unknown_flow_fields:
        raise DefinitionValidationError(
            f"creation_flow has unsupported fields: {sorted(unknown_flow_fields)}"
        )

    steps = creation_flow.get("steps")
    if not isinstance(steps, list) or not steps:
        raise DefinitionValidationError("creation_flow.steps must be a non-empty list")

    step_ids: set[str] = set()
    field_ids: set[str] = set()
    rollable_fields: set[str] = set()
    for step_index, step in enumerate(steps):
        path = f"creation_flow.steps[{step_index}]"
        if not isinstance(step, dict):
            raise DefinitionValidationError(f"{path} must be an object")
        if set(step) - {"id", "label", "fields"}:
            raise DefinitionValidationError(f"{path} contains unsupported fields")
        step_id = step.get("id")
        label = step.get("label")
        fields = step.get("fields")
        if not isinstance(step_id, str) or not step_id.strip():
            raise DefinitionValidationError(f"{path}.id must be a non-empty string")
        if step_id in step_ids:
            raise DefinitionValidationError(f"Duplicate creation step id: {step_id}")
        step_ids.add(step_id)
        if not isinstance(label, str) or not label.strip():
            raise DefinitionValidationError(f"{path}.label must be a non-empty string")
        if not isinstance(fields, list) or not fields:
            raise DefinitionValidationError(f"{path}.fields must be a non-empty list")

        for field_index, field_data in enumerate(fields):
            field_path = f"{path}.fields[{field_index}]"
            if not isinstance(field_data, dict):
                raise DefinitionValidationError(f"{field_path} must be an object")
            field_type = field_data.get("type")
            common_keys = {"id", "label", "type", "required"}
            type_keys = {
                "number": {"attribute", "minimum", "maximum", "roll"},
                "choice": {
                    "category",
                    "definition_type",
                    "multiple",
                    "skill_selection",
                },
                "text": {"target", "minimum_length", "maximum_length"},
                "presentation": {"slot"},
            }.get(field_type)
            if type_keys is None:
                raise DefinitionValidationError(
                    f"{field_path}.type is unsupported: {field_type}"
                )
            if set(field_data) - common_keys - type_keys:
                raise DefinitionValidationError(
                    f"{field_path} contains unsupported fields"
                )

            field_id = field_data.get("id")
            field_label = field_data.get("label")
            if not isinstance(field_id, str) or not field_id.strip():
                raise DefinitionValidationError(
                    f"{field_path}.id must be a non-empty string"
                )
            if field_id in field_ids:
                raise DefinitionValidationError(
                    f"Duplicate creation field id: {field_id}"
                )
            field_ids.add(field_id)
            if not isinstance(field_label, str) or not field_label.strip():
                raise DefinitionValidationError(
                    f"{field_path}.label must be a non-empty string"
                )
            if "required" in field_data and not isinstance(
                field_data["required"], bool
            ):
                raise DefinitionValidationError(f"{field_path}.required must be boolean")

            if field_type == "number":
                attribute = field_data.get("attribute")
                if not isinstance(attribute, str) or not attribute.strip():
                    raise DefinitionValidationError(
                        f"{field_path}.attribute must be a non-empty string"
                    )
                minimum = field_data.get("minimum")
                maximum = field_data.get("maximum")
                if minimum is not None and not isinstance(minimum, int):
                    raise DefinitionValidationError(f"{field_path}.minimum must be an integer")
                if maximum is not None and not isinstance(maximum, int):
                    raise DefinitionValidationError(f"{field_path}.maximum must be an integer")
                if minimum is not None and maximum is not None and minimum > maximum:
                    raise DefinitionValidationError(
                        f"{field_path}.minimum cannot exceed maximum"
                    )
                roll = field_data.get("roll")
                if roll is not None:
                    rollable_fields.add(field_id)
                    if not isinstance(roll, dict):
                        raise DefinitionValidationError(
                            f"{field_path}.roll must be an object"
                        )
                    if set(roll) - {
                        "dice_count",
                        "die_sides",
                        "drop_lowest",
                        "allow_reroll",
                    }:
                        raise DefinitionValidationError(
                            f"{field_path}.roll contains unsupported fields"
                        )
                    dice_count = roll.get("dice_count")
                    die_sides = roll.get("die_sides")
                    drop_lowest = roll.get("drop_lowest", 0)
                    if (
                        isinstance(dice_count, bool)
                        or not isinstance(dice_count, int)
                        or not 1 <= dice_count <= 20
                    ):
                        raise DefinitionValidationError(
                            f"{field_path}.roll.dice_count must be an integer from 1 to 20"
                        )
                    if (
                        isinstance(die_sides, bool)
                        or not isinstance(die_sides, int)
                        or not 2 <= die_sides <= 100
                    ):
                        raise DefinitionValidationError(
                            f"{field_path}.roll.die_sides must be an integer from 2 to 100"
                        )
                    if (
                        isinstance(drop_lowest, bool)
                        or not isinstance(drop_lowest, int)
                        or not 0 <= drop_lowest < dice_count
                    ):
                        raise DefinitionValidationError(
                            f"{field_path}.roll.drop_lowest must be an integer from 0 to dice_count - 1"
                        )
                    if "allow_reroll" in roll and not isinstance(
                        roll["allow_reroll"], bool
                    ):
                        raise DefinitionValidationError(
                            f"{field_path}.roll.allow_reroll must be boolean"
                        )
                    generated_dice_count = dice_count - drop_lowest
                    if minimum is not None and minimum > generated_dice_count:
                        raise DefinitionValidationError(
                            f"{field_path}.minimum exceeds the lowest possible roll score"
                        )
                    if maximum is not None and maximum < generated_dice_count * die_sides:
                        raise DefinitionValidationError(
                            f"{field_path}.maximum is below the highest possible roll score"
                        )
            elif field_type == "choice":
                category = field_data.get("category")
                definition_type = field_data.get("definition_type")
                if not isinstance(category, str) or not category.strip():
                    raise DefinitionValidationError(
                        f"{field_path}.category must be a non-empty string"
                    )
                if definition_type not in ALLOWED_TYPES:
                    raise DefinitionValidationError(
                        f"{field_path}.definition_type is unsupported: {definition_type}"
                    )
                if "multiple" in field_data and not isinstance(
                    field_data["multiple"], bool
                ):
                    raise DefinitionValidationError(
                        f"{field_path}.multiple must be boolean"
                    )
                skill_selection = field_data.get("skill_selection")
                if skill_selection is not None and (
                    definition_type != "skill"
                    or skill_selection not in {"ranks", "trained"}
                ):
                    raise DefinitionValidationError(
                        f"{field_path}.skill_selection must be ranks or trained for skills"
                    )
                if skill_selection == "ranks" and not field_data.get(
                    "multiple", False
                ):
                    raise DefinitionValidationError(
                        f"{field_path} ranked skill selection must allow multiple skills"
                    )
            elif field_type == "text":
                target = field_data.get("target")
                if target != "character_name":
                    raise DefinitionValidationError(
                        f"{field_path}.target must be 'character_name'"
                    )
                for length_key in ("minimum_length", "maximum_length"):
                    value = field_data.get(length_key)
                    if value is not None and (not isinstance(value, int) or value < 0):
                        raise DefinitionValidationError(
                            f"{field_path}.{length_key} must be a non-negative integer"
                        )
            elif field_type == "presentation":
                slot = field_data.get("slot")
                if slot not in {
                    "portrait",
                    "token",
                    "token_frame",
                    "model",
                    "scale",
                    "animation_style",
                }:
                    raise DefinitionValidationError(
                        f"{field_path}.slot is unsupported: {slot}"
                    )

    score_groups = creation_flow.get("score_groups", [])
    if not isinstance(score_groups, list):
        raise DefinitionValidationError("creation_flow.score_groups must be a list")
    score_group_ids: set[str] = set()
    for group_index, group in enumerate(score_groups):
        group_path = f"creation_flow.score_groups[{group_index}]"
        if not isinstance(group, dict):
            raise DefinitionValidationError(f"{group_path} must be an object")
        if set(group) - {"id", "field_ids", "allow_reroll"}:
            raise DefinitionValidationError(
                f"{group_path} contains unsupported fields"
            )
        group_id = group.get("id")
        if not isinstance(group_id, str) or not group_id.strip():
            raise DefinitionValidationError(
                f"{group_path}.id must be a non-empty string"
            )
        if group_id in score_group_ids:
            raise DefinitionValidationError(
                f"Duplicate creation score group id: {group_id}"
            )
        score_group_ids.add(group_id)
        members = group.get("field_ids")
        if not isinstance(members, list) or not members:
            raise DefinitionValidationError(
                f"{group_path}.field_ids must be a non-empty list"
            )
        if not all(isinstance(field_id, str) and field_id for field_id in members):
            raise DefinitionValidationError(
                f"{group_path}.field_ids must contain non-empty field ids"
            )
        if len(set(members)) != len(members):
            raise DefinitionValidationError(
                f"{group_path}.field_ids must not contain duplicates"
            )
        for field_id in members:
            if field_id not in rollable_fields:
                raise DefinitionValidationError(
                    f"{group_path} references non-rollable or unknown field '{field_id}'"
                )
        if "allow_reroll" in group and not isinstance(
            group["allow_reroll"], bool
        ):
            raise DefinitionValidationError(
                f"{group_path}.allow_reroll must be boolean"
            )

    validation_rules = creation_flow.get("validation_rules", [])
    if not isinstance(validation_rules, list) or not all(
        isinstance(rule, str) for rule in validation_rules
    ):
        raise DefinitionValidationError(
            "creation_flow.validation_rules must be a list of rule names"
        )
    unsupported_rules = set(validation_rules) - CREATION_VALIDATION_RULES
    if unsupported_rules:
        raise DefinitionValidationError(
            f"Unsupported creation validation rules: {sorted(unsupported_rules)}"
        )


def validate_theme_profile(theme: Any) -> None:
    if not isinstance(theme, dict):
        raise DefinitionValidationError("theme must be an object")
    if set(theme) - {"tokens", "assets"}:
        raise DefinitionValidationError("theme contains unsupported fields")

    tokens = theme.get("tokens", {})
    if not isinstance(tokens, dict):
        raise DefinitionValidationError("theme.tokens must be an object")
    for token, value in tokens.items():
        if token not in THEME_COLOR_TOKENS:
            raise DefinitionValidationError(f"Unsupported theme token: {token}")
        if not isinstance(value, str) or not _THEME_COLOR.fullmatch(value):
            raise DefinitionValidationError(
                f"theme.tokens.{token} must be a six- or eight-digit hex color"
            )

    assets = theme.get("assets", {})
    if not isinstance(assets, dict):
        raise DefinitionValidationError("theme.assets must be an object")
    for slot, asset_ref in assets.items():
        if slot not in THEME_ASSET_SLOTS:
            raise DefinitionValidationError(f"Unsupported theme asset slot: {slot}")
        if not isinstance(asset_ref, str) or not _THEME_ASSET_REF.fullmatch(asset_ref):
            raise DefinitionValidationError(
                f"theme.assets.{slot} must use the installed asset reference format id@revision"
            )


def validate_creation_flow_references(
    creation_flow: dict[str, Any],
    definitions: dict[str, dict[str, Any]],
) -> None:
    for step in creation_flow["steps"]:
        for field_data in step["fields"]:
            if field_data["type"] != "choice":
                continue
            expected_type = field_data["definition_type"]
            if not any(
                definition.get("type") == expected_type
                and not definition.get("_disabled", False)
                for definition in definitions.values()
            ):
                raise DefinitionValidationError(
                    f"Creation field '{field_data['id']}' references "
                    f"definition type '{expected_type}' with no available definitions"
                )


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
