from character.equipment import Equipment, EquipmentState
from character.equipment import calculate_starting_wealth
from character.workflow import CreationWorkflow


def test_equipment_budget_and_proficiency() -> None:
    state = EquipmentState(
        starting_wealth=100,
        proficient_groups={"martial"},
        selected=[
            Equipment("item.longsword", 15, 4, "martial"),
            Equipment("item.heavy-armor", 120, 50, "heavy"),
        ],
    )
    errors = state.validate()
    assert "starting wealth exceeded" in errors
    assert "not proficient with item.heavy-armor" in errors
    assert state.total_weight == 54


def test_loadout_is_named_and_reusable() -> None:
    state = EquipmentState(100, selected=[Equipment("item.longsword", 15, 4)])
    state.save_loadout("combat")
    assert state.loadouts["combat"] == ["item.longsword"]


def test_starting_wealth_calculates_average_and_service_roll() -> None:
    rule = {"dice_count": 4, "die_sides": 4, "multiplier": 10}
    assert calculate_starting_wealth(rule, "average") == {
        "method": "average",
        "amount": 100,
        "dice": [],
    }

    class FixedDice:
        def __init__(self) -> None:
            self.results = iter([4, 3, 2, 1])

        def randint(self, minimum: int, maximum: int) -> int:
            assert minimum == 1
            assert maximum == 4
            return next(self.results)

    assert calculate_starting_wealth(rule, "roll", FixedDice()) == {
        "method": "roll",
        "amount": 100,
        "dice": [4, 3, 2, 1],
    }


def test_carried_only_item_can_be_purchased_but_not_equipped() -> None:
    definitions = {
        "class.fighter": {
            "id": "class.fighter",
            "type": "class",
            "name": "Fighter",
            "equipment_proficiencies": [],
            "starting_wealth": {
                "dice_count": 1,
                "die_sides": 4,
                "multiplier": 100,
            },
        },
        "item.potion": {
            "id": "item.potion",
            "type": "item",
            "name": "Potion",
            "description": "A carried consumable.",
            "cost": 100,
            "weight": 0.1,
            "equipment_slots": [],
        },
    }
    workflow = CreationWorkflow(
        "carried-item-test",
        "Carried Item",
        "dnd35-core",
        definitions,
        creation_flow={
            "steps": [
                {"id": "class", "label": "Class", "fields": []},
                {"id": "equipment", "label": "Equipment", "fields": []},
            ]
        },
        equipment_shop={
            "currency": {"id": "gold", "name": "Gold Piece", "abbreviation": "gp"},
            "wealth_definition_type": "class",
            "encumbrance": {
                "attribute": "strength",
                "weight_unit": "lb",
                "capacity_by_attribute": {"10": 33},
            },
        },
    )
    workflow.builder.character.choices["class"] = ["class.fighter"]
    workflow.set_stat("strength", 10)
    workflow.choose_starting_wealth("average")
    purchased = workflow.purchase_item("item.potion")
    assert purchased["items"][0]["slot"] is None

    try:
        workflow.equip_item(purchased["items"][0]["instance_id"], "accessory")
    except ValueError as error:
        assert "not compatible with slot accessory" in str(error)
    else:
        raise AssertionError("expected carried-only equipment operation to be rejected")
    assert workflow.equipment_state["items"][0]["slot"] is None
