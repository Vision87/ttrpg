"""Universal round, turn order, and initiative tracking across game systems."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


DEFAULT_ACTION_POOL: dict[str, Any] = {
    "standard_action": 1,
    "move_action": 1,
    "reaction": 1,
    "movement_remaining": 30,
    "action_points": 2,
}


@dataclass
class CombatantEntry:
    entity_id: str
    score: float
    tie_breaker: float = 0.0
    action_pool: dict[str, Any] = field(default_factory=lambda: dict(DEFAULT_ACTION_POOL))
    action_pool_template: dict[str, Any] = field(default_factory=lambda: dict(DEFAULT_ACTION_POOL))


@dataclass
class InitiativeTracker:
    entries: list[CombatantEntry] = field(default_factory=list)
    round_number: int = 1
    active_index: int = 0
    in_combat: bool = False

    def add_combatant(
        self,
        entity_id: str,
        score: float,
        tie_breaker: float = 0.0,
        custom_pool: dict[str, Any] | None = None,
    ) -> None:
        template = dict(custom_pool) if custom_pool is not None else dict(DEFAULT_ACTION_POOL)
        entry = CombatantEntry(
            entity_id=entity_id,
            score=score,
            tie_breaker=tie_breaker,
            action_pool=dict(template),
            action_pool_template=template,
        )
        self.entries.append(entry)

    def start_combat(self) -> dict[str, Any]:
        if not self.entries:
            raise ValueError("Cannot start combat without combatants")
        # Sort descending by score, then tie_breaker
        self.entries.sort(key=lambda e: (e.score, e.tie_breaker), reverse=True)
        self.round_number = 1
        self.active_index = 0
        self.in_combat = True
        self._refresh_active_pool()
        active = self.current_actor()
        return {
            "round": self.round_number,
            "active_entity": active.entity_id if active else None,
            "turn_order": [e.entity_id for e in self.entries],
        }

    def current_actor(self) -> CombatantEntry | None:
        if not self.in_combat or not self.entries:
            return None
        return self.entries[self.active_index]

    def _refresh_active_pool(self) -> None:
        actor = self.current_actor()
        if actor:
            actor.action_pool = dict(actor.action_pool_template)

    def next_turn(self) -> dict[str, Any]:
        if not self.in_combat or not self.entries:
            raise RuntimeError("Combat is not active")

        self.active_index += 1
        new_round = False
        if self.active_index >= len(self.entries):
            self.active_index = 0
            self.round_number += 1
            new_round = True

        self._refresh_active_pool()
        actor = self.current_actor()
        return {
            "round": self.round_number,
            "new_round": new_round,
            "active_entity": actor.entity_id if actor else None,
            "action_pool": dict(actor.action_pool) if actor else {},
        }

    def spend_action(self, action_name: str, amount: int = 1) -> bool:
        actor = self.current_actor()
        if not actor:
            return False
        current = actor.action_pool.get(action_name, 0)
        if current >= amount:
            actor.action_pool[action_name] = current - amount
            return True
        return False

    def end_combat(self) -> None:
        self.in_combat = False
        self.entries.clear()
        self.active_index = 0
        self.round_number = 1
