"""Pluggable action and test resolution pipeline for diverse TTRPG rulesets."""

from __future__ import annotations

import random
from dataclasses import dataclass, field
from typing import Any


@dataclass(frozen=True)
class Modifier:
    source: str
    value: int
    kind: str = "untyped"  # untyped, circumstance, morale, equipment, trait, enhancement


@dataclass(frozen=True)
class TestResult:
    dice_model: str
    roll: int
    target: int
    total: int
    is_success: bool
    degrees_of_success: int
    degrees_of_failure: int
    is_critical_success: bool
    is_critical_failure: bool
    modifiers: tuple[Modifier, ...]
    details: dict[str, Any] = field(default_factory=dict)


def apply_modifier_stacking(
    modifiers: list[Modifier],
    stacking_policy: str = "dnd_typed",
) -> tuple[int, list[Modifier]]:
    """Resolve modifier stacking according to system policy.
    
    If 'dnd_typed', highest value of each non-untyped kind applies; untyped all stack.
    If 'allow_all', all modifiers stack additively.
    """
    if stacking_policy == "allow_all":
        total = sum(m.value for m in modifiers)
        return total, list(modifiers)

    active: list[Modifier] = []
    by_kind: dict[str, list[Modifier]] = {}
    for mod in modifiers:
        if mod.kind in ("untyped", "circumstance", "dodge"):
            active.append(mod)
        else:
            by_kind.setdefault(mod.kind, []).append(mod)

    for kind, mods in by_kind.items():
        if not mods:
            continue
        # Highest bonus applies, or most severe penalty if all negative
        best = max(mods, key=lambda m: m.value)
        active.append(best)

    total = sum(m.value for m in active)
    return total, active


class ActionResolver:
    """Action resolution engine adapting to injected ruleset mechanics."""

    def __init__(
        self,
        dice_model: str = "d20_roll_high",
        config: dict[str, Any] | None = None,
    ) -> None:
        self.dice_model = dice_model
        self.config = config or {}

    def resolve_test(
        self,
        base_value: int,
        target_value: int,
        modifiers: list[Modifier] | None = None,
        *,
        seed: int | None = None,
        forced_roll: int | None = None,
    ) -> TestResult:
        mods = modifiers or []
        rng = random.Random(seed) if seed is not None else random.Random()

        if self.dice_model == "d100_roll_under":
            return self._resolve_d100(
                base_characteristic=base_value,
                modifiers=mods,
                rng=rng,
                forced_roll=forced_roll,
            )
        elif self.dice_model == "d20_roll_high":
            return self._resolve_d20(
                base_bonus=base_value,
                dc=target_value,
                modifiers=mods,
                rng=rng,
                forced_roll=forced_roll,
            )
        elif self.dice_model == "dice_pool":
            return self._resolve_pool(
                pool_size=base_value,
                threshold=target_value,
                modifiers=mods,
                rng=rng,
                forced_roll=forced_roll,
            )
        else:
            raise ValueError(f"Unsupported dice model: {self.dice_model}")

    def _resolve_d20(
        self,
        base_bonus: int,
        dc: int,
        modifiers: list[Modifier],
        rng: random.Random,
        forced_roll: int | None,
    ) -> TestResult:
        mod_sum, active_mods = apply_modifier_stacking(modifiers)
        roll = forced_roll if forced_roll is not None else rng.randint(1, 20)
        total = roll + base_bonus + mod_sum
        crit_success_threshold = self.config.get("crit_success_threshold", 20)
        crit_failure_threshold = self.config.get("crit_failure_threshold", 1)

        is_crit_success = roll >= crit_success_threshold
        is_crit_failure = roll <= crit_failure_threshold

        is_success = (total >= dc or is_crit_success) and not is_crit_failure
        dos = max(0, (total - dc) // 5) if is_success else 0
        dof = max(0, (dc - total) // 5) if not is_success else 0

        return TestResult(
            dice_model="d20_roll_high",
            roll=roll,
            target=dc,
            total=total,
            is_success=is_success,
            degrees_of_success=dos,
            degrees_of_failure=dof,
            is_critical_success=is_crit_success,
            is_critical_failure=is_crit_failure,
            modifiers=tuple(active_mods),
            details={"margin": total - dc, "base_bonus": base_bonus},
        )

    def _resolve_d100(
        self,
        base_characteristic: int,
        modifiers: list[Modifier],
        rng: random.Random,
        forced_roll: int | None,
    ) -> TestResult:
        mod_sum, active_mods = apply_modifier_stacking(modifiers, stacking_policy="allow_all")
        effective_target = max(1, base_characteristic + mod_sum)
        roll = forced_roll if forced_roll is not None else rng.randint(1, 100)

        crit_success_threshold = self.config.get("crit_success_threshold", 5)
        crit_failure_threshold = self.config.get("crit_failure_threshold", 96)

        is_crit_success = roll <= crit_success_threshold
        is_crit_failure = roll >= crit_failure_threshold

        # Success in roll-under: roll <= effective_target
        is_success = (roll <= effective_target or is_crit_success) and not is_crit_failure

        if is_success:
            # Degrees of success: standard Dark Heresy degrees = (Target - Roll) // 10
            dos = max(1, (effective_target - roll) // 10)
            dof = 0
        else:
            dos = 0
            dof = max(1, (roll - effective_target) // 10)

        return TestResult(
            dice_model="d100_roll_under",
            roll=roll,
            target=effective_target,
            total=roll,
            is_success=is_success,
            degrees_of_success=dos,
            degrees_of_failure=dof,
            is_critical_success=is_crit_success,
            is_critical_failure=is_crit_failure,
            modifiers=tuple(active_mods),
            details={
                "effective_target": effective_target,
                "base_characteristic": base_characteristic,
                "modifier_sum": mod_sum,
            },
        )

    def _resolve_pool(
        self,
        pool_size: int,
        threshold: int,
        modifiers: list[Modifier],
        rng: random.Random,
        forced_roll: int | None,
    ) -> TestResult:
        mod_sum, active_mods = apply_modifier_stacking(modifiers, stacking_policy="allow_all")
        effective_pool = max(1, pool_size + mod_sum)
        hit_target = self.config.get("hit_target", 5)  # 5 or 6 on d6

        if forced_roll is not None:
            rolls = [forced_roll] * effective_pool
        else:
            rolls = [rng.randint(1, 6) for _ in range(effective_pool)]

        hits = sum(1 for r in rolls if r >= hit_target)
        is_success = hits >= threshold
        dos = max(0, hits - threshold) if is_success else 0
        dof = max(0, threshold - hits) if not is_success else 0

        ones = sum(1 for r in rolls if r == 1)
        is_crit_failure = ones > (effective_pool / 2) and not is_success
        is_crit_success = hits >= (threshold * 2) and hits > 0

        return TestResult(
            dice_model="dice_pool",
            roll=hits,
            target=threshold,
            total=hits,
            is_success=is_success,
            degrees_of_success=dos,
            degrees_of_failure=dof,
            is_critical_success=is_crit_success,
            is_critical_failure=is_crit_failure,
            modifiers=tuple(active_mods),
            details={"pool_size": effective_pool, "rolls": rolls, "hits": hits},
        )
