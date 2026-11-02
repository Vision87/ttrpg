"""Ruleset-adaptive character creation workflow engine."""

from __future__ import annotations

from copy import deepcopy
import secrets
from typing import Any
import uuid

from character.builder import CharacterBuilder
from character.equipment import calculate_starting_wealth
from character.model import Character
from character.presentation import PresentationProfile
from character.templates import CharacterTemplate

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
        *,
        creation_flow: dict[str, Any] | None = None,
        package_versions: dict[str, str] | None = None,
        equipment_shop: dict[str, Any] | None = None,
    ) -> None:
        self.character_id = character_id
        self.name = name
        self.ruleset_id = ruleset_id
        self.definitions = ruleset_definitions or {}
        self.policy = policy
        self.equipment_shop = deepcopy(equipment_shop)
        self.equipment_state: dict[str, Any] = {
            "wealth_method": None,
            "wealth_definition_id": None,
            "starting_wealth": None,
            "remaining_wealth": None,
            "wealth_roll": None,
            "items": [],
            "template_migration_complete": False,
        }

        if creation_flow is not None:
            steps = creation_flow.get("steps")
            if not isinstance(steps, list) or not steps:
                raise ValueError("Package creation flow must contain ordered steps")
            self.flow = creation_flow
            self.steps = [step["id"] for step in steps]
        else:
            system_key = (
                "dark-heresy"
                if "dark-heresy" in ruleset_id
                else "dnd35"
                if "dnd35" in ruleset_id
                else None
            )
            if system_key is None:
                raise ValueError(
                    f"Ruleset {ruleset_id} requires package-defined creation flow metadata"
                )
            self.flow = {
                "steps": [
                    {"id": step_id, "label": step_id, "fields": []}
                    for step_id in RULESET_WORKFLOW_STEPS[system_key]
                ]
            }
            self.steps = list(RULESET_WORKFLOW_STEPS[system_key])
        self.current_step_index = 0
        self.ability_rolls: dict[str, list[dict[str, Any]]] = {}
        self.ability_roll_events: list[dict[str, Any]] = []

        self.builder = CharacterBuilder.from_scratch(
            character_id=character_id,
            name=name,
            package_versions=package_versions or {ruleset_id: "1.0.0"},
            policy=policy,
        )
        self.builder.character.ruleset_id = ruleset_id
        self.presentation = PresentationProfile()

    @classmethod
    def from_template(
        cls,
        character_id: str,
        name: str,
        ruleset_id: str,
        template: CharacterTemplate,
        ruleset_definitions: dict[str, dict[str, Any]],
        creation_flow: dict[str, Any],
        policy: str = "guided",
        *,
        equipment_shop: dict[str, Any] | None = None,
    ) -> "CreationWorkflow":
        workflow = cls(
            character_id,
            name,
            ruleset_id,
            ruleset_definitions,
            policy,
            creation_flow=creation_flow,
            package_versions=template.package_versions,
            equipment_shop=equipment_shop,
        )
        workflow.builder = CharacterBuilder.from_template(
            template,
            character_id,
            name,
            policy=policy,
        )
        workflow.builder.character.ruleset_id = ruleset_id
        workflow.presentation = PresentationProfile.from_record(
            workflow.builder.character.presentation
        )
        workflow.migrate_template_equipment()
        return workflow

    @property
    def current_step(self) -> str | None:
        if self.current_step_index < len(self.steps):
            return self.steps[self.current_step_index]
        return None

    def set_stat(self, stat_name: str, value: int) -> None:
        self.builder.set_ability(stat_name, value)

    def set_field(self, field_id: str, value: Any) -> None:
        field_data = next(
            (
                field
                for step in self.flow["steps"]
                for field in step["fields"]
                if field["id"] == field_id
            ),
            None,
        )
        if field_data is None:
            raise ValueError(f"Unknown creation field: {field_id}")

        field_type = field_data["type"]
        if value is None:
            self._clear_field(field_data)
            return

        if field_type == "number":
            if isinstance(value, bool) or not isinstance(value, int):
                raise ValueError(f"{field_id} must be an integer")
            minimum = field_data.get("minimum")
            maximum = field_data.get("maximum")
            if minimum is not None and value < minimum:
                raise ValueError(f"{field_id} must be at least {minimum}")
            if maximum is not None and value > maximum:
                raise ValueError(f"{field_id} must be at most {maximum}")
            self.set_stat(field_data["attribute"], value)
        elif field_type == "choice":
            if field_data.get("skill_selection") == "ranks":
                self._set_skill_ranks(field_data, value)
                return
            multiple = field_data.get("multiple", False)
            values = value if multiple else [value]
            if not isinstance(values, list) or not all(
                isinstance(item, str) for item in values
            ):
                raise ValueError(f"{field_id} must reference package definitions")
            for definition_id in values:
                definition = self.definitions.get(definition_id)
                if (
                    definition is None
                    or definition.get("type") != field_data["definition_type"]
                    or definition.get("_disabled", False)
                ):
                    raise ValueError(
                        f"{definition_id} is not an available "
                        f"{field_data['definition_type']} choice"
                    )
            category = field_data["category"]
            self.builder.character.choices[category] = list(values)
            self.builder.character.provenance.setdefault("choices", {})[
                category
            ] = "user"
            if (
                self.equipment_shop is not None
                and category == self.equipment_shop.get("wealth_definition_type")
            ):
                self._refresh_starting_wealth()
        elif field_type == "text":
            if not isinstance(value, str):
                raise ValueError(f"{field_id} must be text")
            minimum = field_data.get("minimum_length", 0)
            maximum = field_data.get("maximum_length")
            if len(value) < minimum:
                raise ValueError(f"{field_id} must contain at least {minimum} characters")
            if maximum is not None and len(value) > maximum:
                raise ValueError(f"{field_id} must contain at most {maximum} characters")
            self.name = value
            self.builder.character.name = value
            self.builder.character.provenance.setdefault("identity", {})[
                "name"
            ] = "user"
        elif field_type == "presentation":
            if field_data["slot"] == "scale":
                if isinstance(value, bool) or not isinstance(value, (int, float)):
                    raise ValueError(f"{field_id} must be a number")
                self.configure_appearance(scale=value)
            elif not isinstance(value, str):
                raise ValueError(f"{field_id} must be an asset reference")
            else:
                self.configure_appearance(**{field_data["slot"]: value})
        else:
            raise ValueError(f"Unsupported creation field type: {field_type}")

    def roll_field(self, field_id: str) -> dict[str, Any]:
        field_data = self._find_rollable_field(field_id)
        if not self._field_belongs_to_score_group(field_id):
            raise ValueError(
                f"Field is not enabled for rolling by a score group: {field_id}"
            )
        history = self.ability_rolls.setdefault(field_id, [])
        if history and not field_data["roll"].get("allow_reroll", False):
            raise ValueError(f"Reroll is not allowed for field: {field_id}")
        result = self._generate_field_roll(field_data, secrets.SystemRandom())
        history.append(result)
        self.builder.set_ability(field_data["attribute"], result["score"])
        self.builder.character.provenance["abilities"][field_data["attribute"]] = (
            "rerolled" if len(history) > 1 else "rolled"
        )
        self.ability_roll_events.append(
            {
                "scope": "individual",
                "field_id": field_id,
                "results": {field_id: deepcopy(result)},
            }
        )
        self._sync_roll_provenance()
        return result

    def roll_group(self, group_id: str) -> dict[str, dict[str, Any]]:
        group = next(
            (
                candidate
                for candidate in self.flow.get("score_groups", [])
                if candidate["id"] == group_id
            ),
            None,
        )
        if group is None:
            raise ValueError(f"Unknown ability score group: {group_id}")
        previous_group_rolls = [
            event
            for event in self.ability_roll_events
            if event.get("scope") == "group" and event.get("group_id") == group_id
        ]
        if previous_group_rolls and not group.get("allow_reroll", False):
            raise ValueError(f"Reroll is not allowed for score group: {group_id}")

        fields = {
            field["id"]: field
            for step in self.flow["steps"]
            for field in step["fields"]
        }
        group_fields = [
            self._find_rollable_field(field_id, fields)
            for field_id in group["field_ids"]
        ]
        rng = secrets.SystemRandom()
        results = {
            field["id"]: self._generate_field_roll(field, rng)
            for field in group_fields
        }

        for field in group_fields:
            field_id = field["id"]
            attribute = field["attribute"]
            history = self.ability_rolls.setdefault(field_id, [])
            history.append(results[field_id])
            self.builder.set_ability(attribute, results[field_id]["score"])
            self.builder.character.provenance["abilities"][attribute] = (
                "rerolled" if len(history) > 1 else "rolled"
            )
        self.ability_roll_events.append(
            {
                "scope": "group",
                "group_id": group_id,
                "results": deepcopy(results),
            }
        )
        self._sync_roll_provenance()
        return results

    def _find_rollable_field(
        self,
        field_id: str,
        fields: dict[str, dict[str, Any]] | None = None,
    ) -> dict[str, Any]:
        if fields is None:
            fields = {
                field["id"]: field
                for step in self.flow["steps"]
                for field in step["fields"]
            }
        field_data = fields.get(field_id)
        if (
            field_data is None
            or field_data["type"] != "number"
            or not isinstance(field_data.get("roll"), dict)
        ):
            raise ValueError(f"Field does not support rolling: {field_id}")
        return field_data

    def _field_belongs_to_score_group(self, field_id: str) -> bool:
        return any(
            field_id in group.get("field_ids", [])
            for group in self.flow.get("score_groups", [])
        )

    @staticmethod
    def _generate_field_roll(
        field_data: dict[str, Any],
        rng: Any,
    ) -> dict[str, Any]:
        roll_config = field_data["roll"]
        dice = [
            rng.randint(1, roll_config["die_sides"])
            for _ in range(roll_config["dice_count"])
        ]
        drop_count = roll_config.get("drop_lowest", 0)
        dropped = sorted(dice)[:drop_count]
        kept = list(dice)
        for die in dropped:
            kept.remove(die)
        score = sum(kept)
        minimum = field_data.get("minimum")
        maximum = field_data.get("maximum")
        if minimum is not None and score < minimum:
            raise ValueError(
                f"Generated {field_data['label']} score {score} is below {minimum}"
            )
        if maximum is not None and score > maximum:
            raise ValueError(
                f"Generated {field_data['label']} score {score} is above {maximum}"
            )
        return {
            "dice": dice,
            "dropped": dropped,
            "score": score,
        }

    def _sync_roll_provenance(self) -> None:
        provenance = self.builder.character.provenance
        provenance["ability_rolls"] = {
            field_id: deepcopy(results)
            for field_id, results in self.ability_rolls.items()
        }
        provenance["ability_roll_events"] = deepcopy(self.ability_roll_events)

    def _clear_field(self, field_data: dict[str, Any]) -> None:
        field_type = field_data["type"]
        if field_data.get("required", False):
            raise ValueError(f"{field_data['id']} is required")
        if field_type == "number":
            self.builder.character.abilities.pop(field_data["attribute"], None)
        elif field_type == "choice":
            if field_data.get("skill_selection") == "ranks":
                self.builder.character.skill_ranks.clear()
                self.builder.character.choices.pop(field_data["category"], None)
                return
            self.builder.character.choices.pop(field_data["category"], None)
        elif field_type == "text" and field_data.get("target") == "character_name":
            self.name = ""
            self.builder.character.name = ""
        elif field_type == "presentation":
            slot = field_data["slot"]
            if slot in {"portrait", "token", "token_frame", "model", "animation_style"}:
                setattr(self.presentation, slot, None)
            elif slot == "scale":
                self.presentation.scale = 1.0

    def choose(self, category: str, item_id: str) -> None:
        self.builder.choose(category, item_id)

    def _selected_class(self) -> dict[str, Any] | None:
        choices = self.builder.character.choices.get("class", [])
        if not choices:
            return None
        selected = self.definitions.get(choices[0])
        if selected is None:
            return None
        parent_id = selected.get("parent_class")
        return self.definitions.get(parent_id) if parent_id else selected

    def skill_allocation(self, field_data: dict[str, Any]) -> dict[str, Any]:
        class_definition = self._selected_class()
        class_name = class_definition.get("name", "") if class_definition else ""
        skill_points = 0
        if class_definition is not None and "intelligence" in self.builder.character.abilities:
            intelligence = self.builder.character.abilities["intelligence"]
            int_modifier = (intelligence - 10) // 2
            class_points = class_definition.get("skill_points", 0)
            skill_points = max(1, class_points + int_modifier) * 4
            if "race.human" in self.builder.character.choices.get("race", []):
                skill_points += 4

        class_skill_ids = set(
            class_definition.get("class_skills", []) if class_definition else []
        )
        options = []
        for skill_id, definition in sorted(self.definitions.items()):
            if definition.get("type") != field_data["definition_type"]:
                continue
            is_class_skill = skill_id in class_skill_ids
            language_skill = definition.get("language_skill", False)
            options.append(
                {
                    "skill_id": skill_id,
                    "label": definition.get("name", skill_id),
                    "detail": self._skill_detail(definition),
                    "is_class_skill": is_class_skill,
                    "maximum_ranks": (
                        skill_points
                        if language_skill
                        else 4 if is_class_skill else 2
                    ),
                    "cost_per_rank": (
                        1 if is_class_skill or language_skill else 2
                    ),
                    "ranks": self.builder.character.skill_ranks.get(skill_id, 0),
                    "language_skill": language_skill,
                }
            )
        spent_points = sum(
            ranks
            * (
                1
                if skill_id in class_skill_ids
                or self.definitions.get(skill_id, {}).get("language_skill", False)
                else 2
            )
            for skill_id, ranks in self.builder.character.skill_ranks.items()
        )
        return {
            "class_name": class_name,
            "available_points": skill_points,
            "spent_points": spent_points,
            "options": options,
        }

    @staticmethod
    def _skill_detail(definition: dict[str, Any]) -> str:
        ability = definition.get("ability")
        if ability:
            return ability.replace("_", " ").title()
        characteristic = definition.get("characteristic", "")
        if characteristic.startswith("characteristic."):
            return characteristic.removeprefix("characteristic.").replace(
                "_", " "
            ).title()
        if definition.get("language_skill"):
            return "One skill point per language"
        return "Specialty"

    def _set_skill_ranks(
        self,
        field_data: dict[str, Any],
        value: Any,
    ) -> None:
        if not isinstance(value, list):
            raise ValueError("Skill ranks must be a list of skill/rank entries")
        class_definition = self._selected_class()
        if class_definition is None:
            raise ValueError("Choose a class before allocating skill points")
        if "intelligence" not in self.builder.character.abilities:
            raise ValueError("Set Intelligence before allocating skill points")

        class_skill_ids = set(class_definition.get("class_skills", []))
        ranks_by_skill: dict[str, float] = {}
        spent_points = 0.0
        for entry in value:
            if not isinstance(entry, dict) or set(entry) != {"skill_id", "ranks"}:
                raise ValueError("Each skill rank entry requires skill_id and ranks")
            skill_id = entry["skill_id"]
            ranks = entry["ranks"]
            if isinstance(skill_id, str) and skill_id in ranks_by_skill:
                raise ValueError(f"Duplicate skill rank entry: {skill_id}")
            definition = self.definitions.get(skill_id)
            if (
                not isinstance(skill_id, str)
                or definition is None
                or definition.get("type") != field_data["definition_type"]
                or definition.get("_disabled", False)
            ):
                raise ValueError(f"{skill_id} is not an available skill")
            if isinstance(ranks, bool) or not isinstance(ranks, (int, float)):
                raise ValueError(f"{skill_id} ranks must be a non-negative number")
            if not 0 <= ranks <= 4:
                raise ValueError(f"{skill_id} ranks must be between 0 and 4")
            if ranks * 2 != int(ranks * 2):
                raise ValueError(f"{skill_id} ranks must use half-rank increments")
            is_class_skill = skill_id in class_skill_ids
            if is_class_skill and not definition.get("language_skill", False):
                if ranks > 4 or not float(ranks).is_integer():
                    raise ValueError(
                        f"{skill_id} is a class skill and requires whole ranks up to 4"
                    )
            elif ranks > 2 and not definition.get("language_skill", False):
                raise ValueError(f"{skill_id} is cross-class and is capped at 2 ranks")
            if definition.get("language_skill", False) and not float(ranks).is_integer():
                raise ValueError(f"{skill_id} languages must be whole numbers")
            if ranks == 0:
                ranks_by_skill[skill_id] = 0.0
                continue
            ranks_by_skill[skill_id] = float(ranks)
            point_cost = (
                1
                if is_class_skill or definition.get("language_skill", False)
                else 2
            )
            spent_points += ranks * point_cost

        allocation = self.skill_allocation(field_data)
        if spent_points > allocation["available_points"]:
            raise ValueError(
                f"Skill allocation spends {spent_points:g} points, but only "
                f"{allocation['available_points']} are available"
            )
        self.builder.character.skill_ranks = {
            skill_id: ranks
            for skill_id, ranks in ranks_by_skill.items()
            if ranks > 0
        }
        self.builder.character.choices[field_data["category"]] = list(
            self.builder.character.skill_ranks
        )
        self.builder.character.provenance.setdefault("skills", {}).update(
            {skill_id: "user" for skill_id in ranks_by_skill}
        )

    def configure_appearance(self, **kwargs: Any) -> None:
        for k, v in kwargs.items():
            self.presentation.set_asset(k, v)

    def advance_step(self) -> str | None:
        if self.current_step_index < len(self.steps):
            self.current_step_index += 1
        return self.current_step

    def set_current_step(self, step_id: str) -> str:
        try:
            step_index = self.steps.index(step_id)
        except ValueError as error:
            raise ValueError(f"Unknown creation step: {step_id}") from error
        self.current_step_index = step_index
        return step_id

    def choose_starting_wealth(
        self,
        method: str,
        rng: Any | None = None,
    ) -> dict[str, Any]:
        if self.equipment_shop is None:
            raise ValueError("This ruleset does not provide an equipment shop")
        definition_id, wealth_rule = self._resolve_starting_wealth_definition()

        previous_method = self.equipment_state["wealth_method"]
        if previous_method is not None:
            self._refresh_starting_wealth()
            if previous_method == method:
                return deepcopy(self.equipment_state)
            raise ValueError("Starting wealth has already been selected")

        self.migrate_template_equipment()
        result = calculate_starting_wealth(wealth_rule, method, rng=rng)
        self.equipment_state.update(
            {
                "wealth_method": result["method"],
                "wealth_definition_id": definition_id,
                "starting_wealth": result["amount"],
                "remaining_wealth": result["amount"],
                "wealth_roll": result["dice"] if result["dice"] else None,
            }
        )
        self._recalculate_remaining_wealth()
        return deepcopy(self.equipment_state)

    def _resolve_starting_wealth_definition(self) -> tuple[str, dict[str, Any]]:
        if self.equipment_shop is None:
            raise ValueError("This ruleset does not provide an equipment shop")
        wealth_definition_type = self.equipment_shop["wealth_definition_type"]
        selected = self.builder.character.choices.get(wealth_definition_type, [])
        if not selected:
            raise ValueError(
                f"Choose a {wealth_definition_type} before selecting starting wealth"
            )
        definition_id = selected[0]
        definition = self.definitions.get(definition_id)
        if definition is None or definition.get("type") != wealth_definition_type:
            raise ValueError(
                f"Selected {wealth_definition_type} is not available for starting wealth"
            )
        while definition.get("parent_class"):
            definition_id = definition["parent_class"]
            definition = self.definitions.get(definition_id)
            if definition is None or definition.get("type") != wealth_definition_type:
                raise ValueError("Selected class does not resolve to a wealth rule")
        wealth_rule = definition.get("starting_wealth")
        if not isinstance(wealth_rule, dict):
            raise ValueError(
                f"Selected {wealth_definition_type} has no starting wealth rule"
            )
        return definition_id, wealth_rule

    def _refresh_starting_wealth(self) -> None:
        method = self.equipment_state.get("wealth_method")
        if method is None:
            return
        definition_id, wealth_rule = self._resolve_starting_wealth_definition()
        if definition_id == self.equipment_state.get("wealth_definition_id"):
            return
        result = calculate_starting_wealth(
            wealth_rule,
            method,
            rng=secrets.SystemRandom(),
        )
        self.equipment_state.update(
            {
                "wealth_definition_id": definition_id,
                "starting_wealth": result["amount"],
                "wealth_roll": result["dice"] if result["dice"] else None,
            }
        )
        self._recalculate_remaining_wealth()

    def migrate_template_equipment(self) -> None:
        if self.equipment_state.get("template_migration_complete"):
            return
        self.equipment_state["template_migration_complete"] = True
        legacy_items = list(self.builder.character.choices.get("equipment", []))
        if not legacy_items:
            return
        items = list(self.equipment_state.get("items", []))
        if not items:
            for idx, item_id in enumerate(legacy_items):
                items.append({
                    "instance_id": f"migrated-{idx + 1}-{item_id}",
                    "item_id": item_id,
                    "slot": None,
                })
            self.equipment_state["items"] = items
        self._recalculate_remaining_wealth()

    def _recalculate_remaining_wealth(self) -> None:
        starting = self.equipment_state.get("starting_wealth")
        if starting is None:
            return
        spent = sum(
            self.definitions.get(item["item_id"], {}).get("cost", 0)
            for item in self.equipment_state.get("items", [])
        )
        self.equipment_state["remaining_wealth"] = starting - spent

    def purchase_item(self, item_id: str) -> dict[str, Any]:
        if self.equipment_shop is None:
            raise ValueError("This ruleset does not provide an equipment shop")
        if self.equipment_state.get("starting_wealth") is None:
            raise ValueError("Select starting wealth before purchasing equipment")
        definition = self.definitions.get(item_id)
        if not definition or definition.get("type") != "item":
            raise ValueError(f"Unknown or invalid equipment item: {item_id}")
        cost = definition.get("cost", 0)
        if not isinstance(cost, (int, float)) or cost < 0:
            raise ValueError(f"Invalid item cost: {cost}")
        remaining = self.equipment_state.get("remaining_wealth", 0)
        if remaining < cost:
            raise ValueError(
                f"Insufficient funds: item costs {cost} but only {remaining} available"
            )
        instance = {
            "instance_id": f"item-{uuid.uuid4().hex[:8]}",
            "item_id": item_id,
            "slot": None,
        }
        self.equipment_state["items"].append(instance)
        self.equipment_state["remaining_wealth"] = remaining - cost
        return deepcopy(self.equipment_state)

    def equip_item(self, instance_id: str, slot: str) -> dict[str, Any]:
        if not isinstance(instance_id, str) or not isinstance(slot, str):
            raise ValueError("instance_id and slot must be strings")
        candidate = deepcopy(self.equipment_state)
        items = candidate.get("items", [])
        target = next(
            (item for item in items if item.get("instance_id") == instance_id),
            None,
        )
        if target is None:
            raise ValueError(f"Owned item instance not found: {instance_id}")
        target["slot"] = slot
        errors = self._equipment_rule_errors(candidate)
        if errors:
            raise ValueError(errors[0])
        self.equipment_state = candidate
        return deepcopy(candidate)

    def _equipment_rule_errors(
        self,
        equipment_state: dict[str, Any] | None = None,
    ) -> list[str]:
        state = equipment_state or self.equipment_state
        items = state.get("items", [])
        if not items:
            return []
        if self.equipment_shop is None:
            return ["This ruleset does not provide equipment validation rules"]

        errors: list[str] = []
        try:
            wealth_definition_id, _ = self._resolve_starting_wealth_definition()
        except ValueError as error:
            errors.append(str(error))
            wealth_definition_id = ""
        wealth_definition = self.definitions.get(wealth_definition_id, {})
        proficient_groups = set(
            wealth_definition.get("equipment_proficiencies", [])
        )

        encumbrance = self.equipment_shop["encumbrance"]
        attribute = encumbrance["attribute"]
        score = self.builder.character.abilities.get(attribute)
        capacity: int | float | None = None
        if isinstance(score, bool) or not isinstance(score, (int, float)):
            errors.append(
                f"Cannot determine carrying capacity: {attribute} has not been assigned"
            )
        elif "capacity_by_attribute" in encumbrance:
            capacity = encumbrance["capacity_by_attribute"].get(str(int(score)))
            if capacity is None:
                errors.append(
                    f"No carrying capacity is defined for {attribute} {score}"
                )
        else:
            capacity = score * encumbrance["capacity_multiplier"]
        size_multipliers = encumbrance.get("size_multipliers")
        if capacity is not None and size_multipliers:
            race_choices = self.builder.character.choices.get("race", [])
            race_definition = (
                self.definitions.get(race_choices[0], {}) if race_choices else {}
            )
            while race_definition.get("parent_race"):
                race_definition = self.definitions.get(
                    race_definition["parent_race"], {}
                )
            size = race_definition.get("size", "medium")
            size_multiplier = size_multipliers.get(size)
            if size_multiplier is None:
                errors.append(f"No carrying-capacity modifier is defined for size {size}")
            else:
                capacity *= size_multiplier

        total_weight: int | float = 0
        occupied_slots: set[str] = set()
        has_two_handed = False
        has_hand_item = False
        for item in items:
            item_id = item.get("item_id")
            definition = self.definitions.get(item_id, {})
            if definition.get("type") != "item":
                errors.append(f"Item definition not found: {item_id}")
                continue
            weight = definition.get("weight")
            if isinstance(weight, bool) or not isinstance(weight, (int, float)):
                errors.append(f"Item {item_id} has no valid weight")
            else:
                total_weight += weight

            slot = item.get("slot")
            if slot is None:
                continue
            if slot not in definition.get("equipment_slots", []):
                errors.append(f"Item {item_id} is not compatible with slot {slot}")
            if slot in occupied_slots:
                errors.append(f"Slot {slot} is already occupied")
            occupied_slots.add(slot)
            if slot == "two_handed":
                has_two_handed = True
            elif slot in ("main_hand", "off_hand"):
                has_hand_item = True

            if definition.get("proficiency") and (
                definition["proficiency"] not in proficient_groups
            ):
                errors.append(
                    f"Not proficient with {item_id}: "
                    f"{definition['proficiency']}"
                )
            for stat, minimum in definition.get(
                "min_characteristic", {}
            ).items():
                actual = self.builder.character.abilities.get(stat, 0)
                if actual < minimum:
                    errors.append(
                        f"Unmet equipment prerequisite for {item_id}: "
                        f"{stat} {actual} < {minimum}"
                    )

        if has_two_handed and has_hand_item:
            errors.append(
                "Cannot equip two-handed item while hands are occupied"
            )
        if capacity is not None and total_weight > capacity:
            errors.append(
                f"Encumbrance limit exceeded: total weight {total_weight} "
                f"exceeds carrying capacity {capacity} "
                f"{encumbrance['weight_unit']}"
            )
        return errors

    def unequip_item(self, instance_id: str) -> dict[str, Any]:
        if not isinstance(instance_id, str):
            raise ValueError("instance_id must be a string")
        items = self.equipment_state.get("items", [])
        target = next((item for item in items if item.get("instance_id") == instance_id), None)
        if target is None:
            raise ValueError(f"Owned item instance not found: {instance_id}")
        target["slot"] = None
        return deepcopy(self.equipment_state)

    def validate(self) -> list[dict[str, str]]:
        issues: list[dict[str, str]] = []
        for step in self.flow["steps"]:
            for field_data in step["fields"]:
                field_type = field_data["type"]
                if field_type == "number":
                    value = self.builder.character.abilities.get(
                        field_data["attribute"]
                    )
                    present = value is not None
                    if present:
                        minimum = field_data.get("minimum")
                        maximum = field_data.get("maximum")
                        if minimum is not None and value < minimum:
                            issues.append(
                                self._field_issue(
                                    field_data,
                                    f"{field_data['label']} must be at least {minimum}",
                                )
                            )
                        if maximum is not None and value > maximum:
                            issues.append(
                                self._field_issue(
                                    field_data,
                                    f"{field_data['label']} must be at most {maximum}",
                                )
                            )
                elif field_type == "choice":
                    if field_data.get("skill_selection") == "ranks":
                        allocation = self.skill_allocation(field_data)
                        present = True
                        class_skill_ids = {
                            option["skill_id"]
                            for option in allocation["options"]
                            if option["is_class_skill"]
                        }
                        for skill_id, ranks in self.builder.character.skill_ranks.items():
                            definition = self.definitions.get(skill_id, {})
                            language_skill = definition.get("language_skill", False)
                            is_class_skill = skill_id in class_skill_ids
                            if is_class_skill and not language_skill:
                                invalid_ranks = (
                                    ranks > 4 or not float(ranks).is_integer()
                                )
                            elif language_skill:
                                invalid_ranks = not float(ranks).is_integer()
                            else:
                                invalid_ranks = ranks > 2
                            if invalid_ranks:
                                issues.append(
                                    self._field_issue(
                                        field_data,
                                        f"{skill_id} ranks are invalid for the selected class",
                                    )
                                )
                        if allocation["spent_points"] > allocation["available_points"]:
                            issues.append(
                                self._field_issue(
                                    field_data,
                                    "Skill ranks exceed the available skill points",
                                )
                            )
                        elif (
                            field_data.get("required", False)
                            and allocation["spent_points"]
                            != allocation["available_points"]
                        ):
                            issues.append(
                                self._field_issue(
                                    field_data,
                                    "Spend all skill points before finalizing",
                                )
                            )
                        if (
                            field_data.get("required", False)
                            and not self.builder.character.skill_ranks
                        ):
                            present = False
                        if not present:
                            issues.append(
                                self._field_issue(
                                    field_data,
                                    f"{field_data['label']} is required",
                                )
                            )
                        continue
                    choices = self.builder.character.choices.get(
                        field_data["category"], []
                    )
                    present = bool(choices)
                    if not field_data.get("multiple", False) and len(choices) > 1:
                        issues.append(
                            self._field_issue(
                                field_data,
                                f"{field_data['label']} allows only one selection",
                            )
                        )
                    for definition_id in choices:
                        definition = self.definitions.get(definition_id)
                        if (
                            definition is None
                            or definition.get("type") != field_data["definition_type"]
                            or definition.get("_disabled", False)
                        ):
                            issues.append(
                                self._field_issue(
                                    field_data,
                                    f"{definition_id} is not an available "
                                    f"{field_data['definition_type']} choice",
                                )
                            )
                elif field_type == "text":
                    text = self.builder.character.name
                    present = bool(text.strip())
                    minimum = field_data.get("minimum_length", 0)
                    maximum = field_data.get("maximum_length")
                    if len(text) < minimum:
                        issues.append(
                            self._field_issue(
                                field_data,
                                f"{field_data['label']} must contain at least {minimum} characters",
                            )
                        )
                    if maximum is not None and len(text) > maximum:
                        issues.append(
                            self._field_issue(
                                field_data,
                                f"{field_data['label']} must contain at most {maximum} characters",
                            )
                        )
                elif field_type == "presentation":
                    present = getattr(self.presentation, field_data["slot"], None) is not None
                else:
                    present = False
                if field_data.get("required", False) and not present:
                    issues.append(
                        self._field_issue(
                            field_data,
                            f"{field_data['label']} is required",
                        )
                    )
        return issues

    @staticmethod
    def _field_issue(
        field_data: dict[str, Any], message: str
    ) -> dict[str, str]:
        return {
            "code": "invalid-field",
            "severity": "error",
            "path": field_data["id"],
            "message": message,
        }

    def review(self) -> dict[str, Any]:
        self.builder.character.recalculate(self.definitions)
        issues = list(self.validate())
        issues.extend(
            {
                "code": "invalid-equipment",
                "severity": "error",
                "path": "equipment_state",
                "message": message,
            }
            for message in self._equipment_rule_errors()
        )
        remaining_wealth = self.equipment_state.get("remaining_wealth")
        if remaining_wealth is not None and remaining_wealth < 0:
            issues.append(
                {
                    "code": "equipment-budget-exceeded",
                    "severity": "error",
                    "path": "equipment_state.remaining_wealth",
                    "message": (
                        f"Equipment spending exceeds starting wealth by "
                        f"{-remaining_wealth}"
                    ),
                }
            )
        issues.extend(
            {
                "code": issue.code,
                "severity": issue.severity,
                "path": issue.path,
                "message": issue.message,
            }
            for issue in self.builder.validate_prerequisites(self.definitions)
        )
        issues.extend(
            {
                "code": "invalid-presentation",
                "severity": "error",
                "path": "presentation",
                "message": message,
            }
            for message in self.presentation.validate()
        )
        issues.extend(
            {
                "code": issue.code,
                "severity": issue.severity,
                "path": issue.path,
                "message": issue.message,
            }
            for issue in self.builder.validate()
        )
        unique_issues = list(
            {
                (issue["code"], issue["path"], issue["message"]): issue
                for issue in issues
            }.values()
        )
        blocking = any(issue["severity"] == "error" for issue in unique_issues)
        strict_warning = self.policy == "strict" and any(
            issue["severity"] == "warning" for issue in unique_issues
        )
        character = self.builder.character
        return {
            "can_finalize": not blocking and not strict_warning,
            "issues": unique_issues,
            "package_versions": dict(character.package_versions),
            "choices": {
                key: list(value) for key, value in character.choices.items()
            },
            "skill_ranks": dict(character.skill_ranks),
            "derived": deepcopy(character.derived),
            "overrides": deepcopy(character.overrides),
            "provenance": deepcopy(character.provenance),
            "presentation": self.presentation.to_record(),
            "equipment_state": deepcopy(self.equipment_state),
        }

    def to_draft_record(self) -> dict[str, Any]:
        character = self.builder.character
        return {
            "id": self.character_id,
            "name": self.name,
            "ruleset_id": self.ruleset_id,
            "package_versions": dict(character.package_versions),
            "policy": self.policy,
            "current_step_index": self.current_step_index,
            "abilities": dict(character.abilities),
            "choices": {key: list(value) for key, value in character.choices.items()},
            "skill_ranks": dict(character.skill_ranks),
            "overrides": deepcopy(character.overrides),
            "presentation": self.presentation.to_record(),
            "derived": deepcopy(character.derived),
            "provenance": deepcopy(character.provenance),
            "equipment_state": deepcopy(self.equipment_state),
            "template_id": self.builder.template_id,
            "template_values": deepcopy(self.builder.template_values),
            "ability_rolls": deepcopy(self.ability_rolls),
            "ability_roll_events": deepcopy(self.ability_roll_events),
        }

    @classmethod
    def from_draft_record(
        cls,
        record: dict[str, Any],
        *,
        ruleset_definitions: dict[str, dict[str, Any]],
        creation_flow: dict[str, Any],
        package_versions: dict[str, str],
        equipment_shop: dict[str, Any] | None = None,
    ) -> "CreationWorkflow":
        if record.get("package_versions") != package_versions:
            raise ValueError("Draft package versions do not match the resolved packages")
        workflow = cls(
            character_id=record["id"],
            name=record["name"],
            ruleset_id=record["ruleset_id"],
            ruleset_definitions=ruleset_definitions,
            policy=record["policy"],
            creation_flow=creation_flow,
            package_versions=package_versions,
            equipment_shop=equipment_shop,
        )
        step_index = record.get("current_step_index")
        if not isinstance(step_index, int) or not 0 <= step_index <= len(workflow.steps):
            raise ValueError("Draft has an invalid creation step")
        character = Character(
            character_id=record["id"],
            name=record["name"],
            package_versions=dict(package_versions),
            abilities=dict(record.get("abilities", {})),
            choices={
                key: list(value)
                for key, value in record.get("choices", {}).items()
            },
            overrides=deepcopy(record.get("overrides", [])),
            presentation={},
            derived=deepcopy(record.get("derived", {})),
            provenance=deepcopy(record.get("provenance", {})),
            ruleset_id=record.get("ruleset_id"),
            skill_ranks={
                key: float(value)
                for key, value in record.get("skill_ranks", {}).items()
            },
        )
        workflow.builder = CharacterBuilder(
            character=character,
            policy=record["policy"],
            template_id=record.get("template_id"),
            template_values=deepcopy(record.get("template_values", {})),
        )
        workflow.presentation = PresentationProfile.from_record(
            record.get("presentation", {})
        )
        workflow.current_step_index = step_index
        workflow.equipment_state = deepcopy(
            record.get("equipment_state", workflow.equipment_state)
        )
        workflow.ability_rolls = deepcopy(record.get("ability_rolls", {}))
        workflow.ability_roll_events = deepcopy(
            record.get("ability_roll_events", [])
        )
        workflow._refresh_starting_wealth()
        workflow.migrate_template_equipment()
        return workflow

    def finalize(self) -> Character:
        report = self.review()
        if not report["can_finalize"]:
            raise ValueError(
                "Character cannot be finalized: "
                + "; ".join(issue["message"] for issue in report["issues"])
            )
        char = self.builder.finalize()
        char.presentation = self.presentation.to_record()
        char.equipment_state = deepcopy(self.equipment_state)
        char.recalculate(self.definitions)
        return char
