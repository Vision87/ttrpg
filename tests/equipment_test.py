from character.equipment import Equipment, EquipmentState
from character.equipment import calculate_starting_wealth


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
