"""Equipment budget, proficiency, encumbrance, and loadout calculations."""

from __future__ import annotations

from dataclasses import dataclass, field


@dataclass(frozen=True)
class Equipment:
    item_id: str
    cost: int
    weight: int
    proficiency: str | None = None
    slot: str = "main_hand"  # main_hand, off_hand, two_handed, body, head, feet, accessory
    min_characteristic: dict[str, int] = field(default_factory=dict)


@dataclass
class EquipmentState:
    starting_wealth: int
    proficient_groups: set[str] = field(default_factory=set)
    selected: list[Equipment] = field(default_factory=list)
    loadouts: dict[str, list[str]] = field(default_factory=dict)
    max_carrying_capacity: int = 100
    character_abilities: dict[str, int] = field(default_factory=dict)

    @property
    def spent(self) -> int:
        return sum(item.cost for item in self.selected)

    @property
    def remaining_wealth(self) -> int:
        return self.starting_wealth - self.spent

    @property
    def total_weight(self) -> int:
        return sum(item.weight for item in self.selected)

    def validate(self) -> list[str]:
        errors: list[str] = []
        if self.remaining_wealth < 0:
            errors.append("starting wealth exceeded")
        if self.total_weight > self.max_carrying_capacity:
            errors.append(f"encumbrance limit exceeded: {self.total_weight} > {self.max_carrying_capacity}")

        slots_used: dict[str, int] = {}
        hands_used = 0

        for item in self.selected:
            if item.proficiency and item.proficiency not in self.proficient_groups:
                errors.append(f"not proficient with {item.item_id}")

            # Check characteristic prerequisites
            for char_name, min_val in item.min_characteristic.items():
                actual_val = self.character_abilities.get(char_name, 0)
                if actual_val < min_val:
                    errors.append(
                        f"unmet equipment prerequisite for {item.item_id}: {char_name} {actual_val} < {min_val}"
                    )

            # Slot & hands checking
            if item.slot == "two_handed":
                hands_used += 2
            elif item.slot in ("main_hand", "off_hand"):
                hands_used += 1
            else:
                slots_used[item.slot] = slots_used.get(item.slot, 0) + 1

        if hands_used > 2:
            errors.append(f"too many hands required: {hands_used} > 2")
        for slot_name, count in slots_used.items():
            if slot_name == "body" and count > 1:
                errors.append(f"too many armor items in body slot: {count} > 1")

        return errors

    def save_loadout(self, name: str) -> None:
        self.loadouts[name] = [item.item_id for item in self.selected]

