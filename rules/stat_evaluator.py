"""Generalized entity stat-block evaluation engine for multi-ruleset systems."""

from __future__ import annotations

from typing import Any


def evaluate_stats(
    attributes: dict[str, int],
    ruleset_definitions: dict[str, dict[str, Any]] | None = None,
    system_hint: str | None = None,
) -> dict[str, dict[str, Any]]:
    """Dynamically evaluate system-specific derived statistics for an entity."""
    derived: dict[str, dict[str, Any]] = {}
    defs = ruleset_definitions or {}

    # If ruleset provides custom modifier formulas, evaluate them first
    for def_id, definition in defs.items():
        if definition.get("type") in ("ability", "characteristic"):
            formula = definition.get("modifier_formula")
            key = def_id.split(".")[-1]
            if key in attributes and formula:
                score = attributes[key]
                if formula == "(score-10)//2":
                    val = (score - 10) // 2
                elif formula == "score//10":
                    val = score // 10
                else:
                    val = (score - 10) // 2
                derived[f"{key}_modifier"] = {
                    "value": val,
                    "sources": [{"field": f"abilities.{key}", "value": score}],
                }

    # Check if Dark Heresy / d100 characteristics are present
    is_dark_heresy = (
        system_hint == "dark_heresy"
        or "ballistic_skill" in attributes
        or "weapon_skill" in attributes
        or "toughness" in attributes
    )

    if is_dark_heresy:
        # Characteristic bonuses: score // 10
        for char_key in (
            "weapon_skill",
            "ballistic_skill",
            "strength",
            "toughness",
            "agility",
            "intelligence",
            "perception",
            "willpower",
            "fellowship",
        ):
            if char_key in attributes and f"{char_key}_bonus" not in derived:
                score = attributes[char_key]
                bonus = score // 10
                derived[f"{char_key}_bonus"] = {
                    "value": bonus,
                    "sources": [{"field": f"characteristics.{char_key}", "value": score}],
                }

        # Wounds: base starting wounds + Toughness Bonus
        t_bonus = derived.get("toughness_bonus", {}).get(
            "value", attributes.get("toughness", 30) // 10
        )
        base_wounds = attributes.get("starting_wounds", 10)
        derived["wounds"] = {
            "value": base_wounds + t_bonus,
            "sources": [
                {"field": "base_wounds", "value": base_wounds},
                {"field": "toughness_bonus", "value": t_bonus},
            ],
        }
        # Fate points
        fate = attributes.get("fate_points", 2)
        derived["fate_points"] = {
            "value": fate,
            "sources": [{"field": "fate_points", "value": fate}],
        }
        # Fatigue threshold: max(1, Toughness Bonus)
        derived["fatigue_threshold"] = {
            "value": max(1, t_bonus),
            "sources": [{"field": "toughness_bonus", "value": t_bonus}],
        }

    # Standard / d20 D&D ability attributes
    if not is_dark_heresy or "constitution" in attributes or ("strength" in attributes and "strength_modifier" not in derived):
        for ability in (
            "strength",
            "dexterity",
            "constitution",
            "intelligence",
            "wisdom",
            "charisma",
        ):
            if ability in attributes and f"{ability}_modifier" not in derived:
                score = attributes[ability]
                derived[f"{ability}_modifier"] = {
                    "value": (score - 10) // 2,
                    "sources": [{"field": f"abilities.{ability}", "value": score}],
                }

        # If D&D style HP
        if "hit_points" in attributes or "constitution_modifier" in derived:
            con_mod = derived.get("constitution_modifier", {}).get("value", 0)
            base_hp = attributes.get("hit_die", 10)
            derived["hit_points"] = {
                "value": max(1, base_hp + con_mod),
                "sources": [
                    {"field": "hit_die", "value": base_hp},
                    {"field": "constitution_modifier", "value": con_mod},
                ],
            }
        # Armor Class
        if "armor_class" not in derived and "dexterity_modifier" in derived:
            dex_mod = derived.get("dexterity_modifier", {}).get("value", 0)
            armor_bonus = attributes.get("armor_bonus", 0)
            shield_bonus = attributes.get("shield_bonus", 0)
            derived["armor_class"] = {
                "value": 10 + dex_mod + armor_bonus + shield_bonus,
                "sources": [
                    {"field": "base", "value": 10},
                    {"field": "dexterity_modifier", "value": dex_mod},
                    {"field": "armor_bonus", "value": armor_bonus},
                    {"field": "shield_bonus", "value": shield_bonus},
                ],
            }

    return derived
