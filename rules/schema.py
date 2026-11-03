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
_LOCAL_ASSET_REF = re.compile(r"^[A-Za-z0-9._:-]+@[1-9][0-9]*$")
EQUIPMENT_SLOTS = {
    "main_hand",
    "off_hand",
    "two_handed",
    "body",
    "head",
    "feet",
    "accessory",
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

    equipment_shop = package_data.get("equipment_shop")
    if equipment_shop is not None:
        validate_equipment_shop(equipment_shop, definitions)

    creation_flow = package_data.get("creation_flow")
    if creation_flow is not None:
        validate_creation_flow(creation_flow, definitions)
        if not package_data.get("dependencies"):
            validate_creation_flow_references(creation_flow, definitions)

    theme = package_data.get("theme")
    if theme is not None:
        validate_theme_profile(theme)


def validate_equipment_shop(
    equipment_shop: Any,
    definitions: dict[str, Any],
) -> None:
    if not isinstance(equipment_shop, dict):
        raise DefinitionValidationError("equipment_shop must be an object")
    if set(equipment_shop) - {
        "currency",
        "wealth_definition_type",
        "data_status",
        "source_references",
        "data_note",
        "encumbrance",
    }:
        raise DefinitionValidationError("equipment_shop contains unsupported fields")

    encumbrance = equipment_shop.get("encumbrance")
    if not isinstance(encumbrance, dict) or set(encumbrance) - {
        "attribute",
        "weight_unit",
        "capacity_by_attribute",
        "capacity_multiplier",
        "size_multipliers",
    }:
        raise DefinitionValidationError(
            "equipment_shop.encumbrance must declare a supported capacity rule"
        )
    attribute = encumbrance.get("attribute")
    if not isinstance(attribute, str) or not attribute.strip():
        raise DefinitionValidationError(
            "equipment_shop.encumbrance.attribute must be a non-empty string"
        )
    weight_unit = encumbrance.get("weight_unit")
    if not isinstance(weight_unit, str) or not weight_unit.strip():
        raise DefinitionValidationError(
            "equipment_shop.encumbrance.weight_unit must be a non-empty string"
        )
    capacity_by_attribute = encumbrance.get("capacity_by_attribute")
    capacity_multiplier = encumbrance.get("capacity_multiplier")
    if (capacity_by_attribute is None) == (capacity_multiplier is None):
        raise DefinitionValidationError(
            "equipment_shop.encumbrance must declare exactly one of "
            "capacity_by_attribute or capacity_multiplier"
        )
    if capacity_by_attribute is not None:
        if not isinstance(capacity_by_attribute, dict) or not capacity_by_attribute:
            raise DefinitionValidationError(
                "equipment_shop.encumbrance.capacity_by_attribute must be a non-empty object"
            )
        for score, capacity in capacity_by_attribute.items():
            try:
                parsed_score = int(score)
            except (TypeError, ValueError) as error:
                raise DefinitionValidationError(
                    "equipment_shop.encumbrance.capacity_by_attribute keys must be integers"
                ) from error
            if str(parsed_score) != score or parsed_score < 0:
                raise DefinitionValidationError(
                    "equipment_shop.encumbrance.capacity_by_attribute keys must be non-negative integers"
                )
            if (
                isinstance(capacity, bool)
                or not isinstance(capacity, (int, float))
                or capacity <= 0
            ):
                raise DefinitionValidationError(
                    "equipment_shop.encumbrance capacities must be positive numbers"
                )
    elif (
        isinstance(capacity_multiplier, bool)
        or not isinstance(capacity_multiplier, (int, float))
        or capacity_multiplier <= 0
    ):
        raise DefinitionValidationError(
            "equipment_shop.encumbrance.capacity_multiplier must be a positive number"
        )
    size_multipliers = encumbrance.get("size_multipliers")
    if size_multipliers is not None and (
        not isinstance(size_multipliers, dict)
        or not size_multipliers
        or any(
            not isinstance(size, str)
            or not size.strip()
            or isinstance(multiplier, bool)
            or not isinstance(multiplier, (int, float))
            or multiplier <= 0
            for size, multiplier in size_multipliers.items()
        )
    ):
        raise DefinitionValidationError(
            "equipment_shop.encumbrance.size_multipliers must map sizes to positive numbers"
        )

    currency = equipment_shop.get("currency")
    if (
        not isinstance(currency, dict)
        or {"id", "name", "abbreviation"} - set(currency)
        or set(currency)
        - {
            "id",
            "name",
            "abbreviation",
            "base_unit",
            "denominations",
        }
    ):
        raise DefinitionValidationError(
            "equipment_shop.currency must declare id, name, and abbreviation and "
            "may declare base_unit and denominations"
        )
    for field_name in ("id", "name", "abbreviation"):
        value = currency.get(field_name)
        if not isinstance(value, str) or not value.strip():
            raise DefinitionValidationError(
                f"equipment_shop.currency.{field_name} must be a non-empty string"
            )
    base_unit = currency.get("base_unit")
    denominations = currency.get("denominations")
    if base_unit is None:
        if denominations is not None:
            raise DefinitionValidationError(
                "equipment_shop.currency.denominations requires base_unit"
            )
    else:
        if not isinstance(base_unit, str) or not base_unit.strip():
            raise DefinitionValidationError(
                "equipment_shop.currency.base_unit must be a non-empty string"
            )
        if not isinstance(denominations, list) or not denominations:
            raise DefinitionValidationError(
                "equipment_shop.currency.denominations must be a non-empty list"
            )
        denomination_ids: set[str] = set()
        previous_value: int | None = None
        base_matches = False
        for index, denomination in enumerate(denominations):
            path = f"equipment_shop.currency.denominations[{index}]"
            if not isinstance(denomination, dict) or set(denomination) != {
                "id",
                "name",
                "abbreviation",
                "value",
            }:
                raise DefinitionValidationError(
                    f"{path} must declare id, name, abbreviation, and value"
                )
            for field_name in ("id", "name", "abbreviation"):
                value = denomination.get(field_name)
                if not isinstance(value, str) or not value.strip():
                    raise DefinitionValidationError(
                        f"{path}.{field_name} must be a non-empty string"
                    )
            denomination_id = denomination["id"]
            if denomination_id in denomination_ids:
                raise DefinitionValidationError(
                    "equipment_shop.currency.denominations ids must be unique"
                )
            denomination_ids.add(denomination_id)
            value = denomination.get("value")
            if (
                isinstance(value, bool)
                or not isinstance(value, int)
                or value < 1
                or (previous_value is not None and value >= previous_value)
            ):
                raise DefinitionValidationError(
                    f"{path}.value must be a positive integer in descending order"
                )
            previous_value = value
            if denomination_id == base_unit and value == 1:
                base_matches = True
        if not base_matches:
            raise DefinitionValidationError(
                "equipment_shop.currency.base_unit must identify the denomination "
                "whose value is 1"
            )

    wealth_definition_type = equipment_shop.get("wealth_definition_type")
    if wealth_definition_type not in {"class", "career"}:
        raise DefinitionValidationError(
            "equipment_shop.wealth_definition_type must be class or career"
        )

    data_status = equipment_shop.get("data_status")
    if data_status not in {"verified", "provisional"}:
        raise DefinitionValidationError(
            "equipment_shop.data_status must be verified or provisional"
        )
    source_references = equipment_shop.get("source_references", [])
    if not isinstance(source_references, list) or not all(
        isinstance(reference, str)
        and reference.startswith("https://")
        for reference in source_references
    ):
        raise DefinitionValidationError(
            "equipment_shop.source_references must contain HTTPS URLs"
        )
    if data_status == "verified" and not source_references:
        raise DefinitionValidationError(
            "Verified equipment_shop data requires source_references"
        )
    data_note = equipment_shop.get("data_note")
    if data_status == "provisional" and (
        not isinstance(data_note, str) or not data_note.strip()
    ):
        raise DefinitionValidationError(
            "Provisional equipment_shop data requires a data_note"
        )

    wealth_definitions = [
        (definition_id, definition)
        for definition_id, definition in definitions.items()
        if definition.get("type") == wealth_definition_type
        and not definition.get("_disabled", False)
        and not definition.get("parent_class")
    ]
    if not wealth_definitions:
        raise DefinitionValidationError(
            "equipment_shop.wealth_definition_type has no available package definitions"
        )
    proficiency_groups: set[str] = set()
    for definition_id, definition in wealth_definitions:
        equipment_proficiencies = definition.get("equipment_proficiencies")
        if (
            not isinstance(equipment_proficiencies, list)
            or not all(
                isinstance(group, str) and group.strip()
                for group in equipment_proficiencies
            )
            or len(set(equipment_proficiencies)) != len(equipment_proficiencies)
        ):
            raise DefinitionValidationError(
                f"definitions.{definition_id}.equipment_proficiencies must be a list "
                "of unique non-empty strings"
            )
        proficiency_groups.update(equipment_proficiencies)

        starting_wealth = definition.get("starting_wealth")
        path = f"definitions.{definition_id}.starting_wealth"
        if not isinstance(starting_wealth, dict) or set(starting_wealth) - {
            "dice_count",
            "die_sides",
            "multiplier",
            "base",
        }:
            raise DefinitionValidationError(
                f"{path} must declare a supported dice formula"
            )
        dice_count = starting_wealth.get("dice_count")
        die_sides = starting_wealth.get("die_sides")
        if (
            isinstance(dice_count, bool)
            or not isinstance(dice_count, int)
            or not 1 <= dice_count <= 20
        ):
            raise DefinitionValidationError(
                f"{path}.dice_count must be an integer from 1 to 20"
            )
        if (
            isinstance(die_sides, bool)
            or not isinstance(die_sides, int)
            or not 2 <= die_sides <= 100
        ):
            raise DefinitionValidationError(
                f"{path}.die_sides must be an integer from 2 to 100"
            )
        multiplier = starting_wealth.get("multiplier")
        if (
            isinstance(multiplier, bool)
            or not isinstance(multiplier, (int, float))
            or multiplier <= 0
        ):
            raise DefinitionValidationError(
                f"{path}.multiplier must be a positive number"
            )
        base = starting_wealth.get("base", 0)
        if (
            isinstance(base, bool)
            or not isinstance(base, (int, float))
            or base < 0
        ):
            raise DefinitionValidationError(
                f"{path}.base must be a non-negative number"
            )

    item_definitions = [
        (definition_id, definition)
        for definition_id, definition in definitions.items()
        if definition.get("type") == "item"
        and not definition.get("_disabled", False)
    ]
    if not item_definitions:
        raise DefinitionValidationError(
            "equipment_shop requires at least one available item definition"
        )
    for definition_id, definition in item_definitions:
        path = f"definitions.{definition_id}"
        name = definition.get("name")
        if not isinstance(name, str) or not name.strip():
            raise DefinitionValidationError(f"{path}.name is required for the shop")
        description = definition.get("description")
        if not isinstance(description, str) or not description.strip():
            raise DefinitionValidationError(
                f"{path}.description is required for the shop"
            )
        weight = definition.get("weight")
        if (
            isinstance(weight, bool)
            or not isinstance(weight, (int, float))
            or weight < 0
        ):
            raise DefinitionValidationError(
                f"{path}.weight must be a non-negative number"
            )
        proficiency = definition.get("proficiency")
        if proficiency is not None and (
            not isinstance(proficiency, str)
            or proficiency not in proficiency_groups
        ):
            raise DefinitionValidationError(
                f"{path}.proficiency must reference a declared equipment proficiency group"
            )
        cost = definition.get("cost")
        if isinstance(cost, bool) or not isinstance(cost, (int, float)) or cost < 0:
            raise DefinitionValidationError(
                f"{path}.cost must be a non-negative number"
            )
        slots = definition.get("equipment_slots")
        if (
            not isinstance(slots, list)
            or not all(isinstance(slot, str) and slot in EQUIPMENT_SLOTS for slot in slots)
            or len(set(slots)) != len(slots)
        ):
            raise DefinitionValidationError(
                f"{path}.equipment_slots must be a list of unique supported slots"
            )
        image_asset = definition.get("image_asset")
        if image_asset is not None and (
            not isinstance(image_asset, str)
            or not _LOCAL_ASSET_REF.fullmatch(image_asset)
        ):
            raise DefinitionValidationError(
                f"{path}.image_asset must use the local asset reference format id@revision"
            )
        source_reference = definition.get("source_reference")
        if source_reference is not None and (
            not isinstance(source_reference, str)
            or not source_reference.startswith("https://")
        ):
            raise DefinitionValidationError(
                f"{path}.source_reference must be an HTTPS URL"
            )
        if data_status == "verified" and source_reference is None:
            raise DefinitionValidationError(
                f"{path}.source_reference is required for verified equipment data"
            )
        details = definition.get("details", [])
        if not isinstance(details, list) or any(
            not isinstance(detail, dict)
            or set(detail) != {"label", "value"}
            or not isinstance(detail["label"], str)
            or not detail["label"].strip()
            or not isinstance(detail["value"], str)
            or not detail["value"].strip()
            for detail in details
        ):
            raise DefinitionValidationError(
                f"{path}.details must contain label/value string pairs"
            )


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
