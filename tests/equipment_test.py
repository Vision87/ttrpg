from character.equipment import Equipment, EquipmentState


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
