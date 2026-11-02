"""Equipment budget, proficiency, encumbrance, and loadout calculations."""

from __future__ import annotations

from dataclasses import dataclass, field
import secrets
from typing import Any


def calculate_starting_wealth(
    rule: dict[str, Any],
    method: str,
    rng: Any | None = None,
) -> dict[str, Any]:
    if method not in {"roll", "average"}:
        raise ValueError("Starting wealth method must be roll or average")
    dice_count = rule.get("dice_count")
    die_sides = rule.get("die_sides")
    multiplier = rule.get("multiplier")
    base = rule.get("base", 0)
    if (
        isinstance(dice_count, bool)
        or not isinstance(dice_count, int)
        or dice_count < 1
        or isinstance(die_sides, bool)
        or not isinstance(die_sides, int)
        or die_sides < 2
        or isinstance(multiplier, bool)
        or not isinstance(multiplier, (int, float))
        or multiplier <= 0
        or isinstance(base, bool)
        or not isinstance(base, (int, float))
        or base < 0
    ):
        raise ValueError("Starting wealth package formula is invalid")

    if method == "average":
        amount = base + dice_count * (die_sides + 1) / 2 * multiplier
        dice: list[int] = []
    else:
        source = rng or secrets.SystemRandom()
        dice = [source.randint(1, die_sides) for _ in range(dice_count)]
        amount = base + sum(dice) * multiplier
    if isinstance(amount, float) and amount.is_integer():
        amount = int(amount)
    return {"method": method, "amount": amount, "dice": dice}


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
