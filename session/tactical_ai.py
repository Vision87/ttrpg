"""Reactive tactical NPC AI behaviors for solo mode encounters."""

from __future__ import annotations

import math
from dataclasses import dataclass
from typing import TYPE_CHECKING, Any

if TYPE_CHECKING:
    from session.runtime import Session


@dataclass
class TacticalDecision:
    npc_id: str
    target_id: str | None
    chosen_action: str  # "attack", "move_and_attack", "flee", "idle"
    destination: dict[str, int] | None
    damage_dealt: int = 0
    details: str = ""


class ReactiveTacticalAI:
    """Evaluates combat situations and executes tactical decisions for automated NPCs."""

    @staticmethod
    def assess_targets(
        session: Session,
        npc_id: str,
    ) -> list[tuple[str, float]]:
        """Assess potential targets and rank them by threat/utility score (higher is prioritized)."""
        npc = session.entities.get(npc_id)
        if not npc:
            return []

        npc_pos = npc.get("position", {"x": 0, "y": 0})
        scored_targets: list[tuple[str, float]] = []

        for eid, entity in session.entities.items():
            if eid == npc_id:
                continue
            # Treat player characters / non-monsters as targets
            is_opponent = entity.get("kind") in {"player", "character"} or entity.get("is_player", False)
            if not is_opponent and not entity.get("hostile_to_npcs", True):
                continue

            target_pos = entity.get("position", {"x": 0, "y": 0})
            dist = math.hypot(target_pos["x"] - npc_pos["x"], target_pos["y"] - npc_pos["y"])
            if dist == 0:
                dist = 0.5

            hp = entity.get("hit_points", 20)
            # Higher score for closer and lower-health targets
            score = (100.0 / dist) + max(0, (30.0 - hp))
            scored_targets.append((eid, score))

        scored_targets.sort(key=lambda x: x[1], reverse=True)
        return scored_targets

    @staticmethod
    def step_towards(
        start: tuple[int, int],
        target: tuple[int, int],
        max_steps: int,
        is_blocked_fn: Any = None,
    ) -> tuple[int, int]:
        """Simple greedy step towards target, stopping adjacent if melee."""
        curr_x, curr_y = start
        target_x, target_y = target

        for _ in range(max_steps):
            dist = math.hypot(target_x - curr_x, target_y - curr_y)
            if dist <= 1.0:
                break  # Already in melee range

            dx = target_x - curr_x
            dy = target_y - curr_y

            step_x = 1 if dx > 0 else (-1 if dx < 0 else 0)
            step_y = 1 if dy > 0 else (-1 if dy < 0 else 0)

            # Move along the larger axis first
            candidates = []
            if abs(dx) >= abs(dy):
                candidates = [(curr_x + step_x, curr_y), (curr_x, curr_y + step_y)]
            else:
                candidates = [(curr_x, curr_y + step_y), (curr_x + step_x, curr_y)]

            moved = False
            for cand_x, cand_y in candidates:
                if is_blocked_fn and is_blocked_fn(cand_x, cand_y):
                    continue
                curr_x, curr_y = cand_x, cand_y
                moved = True
                break

            if not moved:
                break

        return curr_x, curr_y

    @classmethod
    def execute_turn(
        cls,
        session: Session,
        npc_id: str,
        controller_id: str,
        idempotency_prefix: str = "ai-turn",
    ) -> TacticalDecision:
        """Execute an automated combat turn for an NPC: assess, move, attack, and end turn."""
        npc = session.entities.get(npc_id)
        if not npc:
            return TacticalDecision(npc_id, None, "idle", None, details="NPC not found")

        targets = cls.assess_targets(session, npc_id)
        if not targets:
            return TacticalDecision(npc_id, None, "idle", None, details="No targets found")

        target_id = targets[0][0]
        target = session.entities[target_id]

        npc_pos = npc.get("position", {"x": 0, "y": 0})
        target_pos = target.get("position", {"x": 0, "y": 0})
        combat_role = npc.get("combat_role", "melee")  # "melee" or "ranged"
        attack_range = npc.get("attack_range", 1 if combat_role == "melee" else 4)
        move_budget = npc.get("move_budget", 4)
        attack_damage = npc.get("attack_damage", 6)

        def is_blocked(x: int, y: int) -> bool:
            tile = session.tiles.get(f"{x},{y}")
            if tile and (not tile.get("walkable", True) or tile.get("blocks_vision", False)):
                return True
            return False

        current_dist = math.hypot(target_pos["x"] - npc_pos["x"], target_pos["y"] - npc_pos["y"])
        new_pos = dict(npc_pos)

        # 1. Movement phase if out of attack range
        if current_dist > attack_range:
            dest_x, dest_y = cls.step_towards(
                (npc_pos["x"], npc_pos["y"]),
                (target_pos["x"], target_pos["y"]),
                max_steps=move_budget,
                is_blocked_fn=is_blocked,
            )
            if dest_x != npc_pos["x"] or dest_y != npc_pos["y"]:
                new_pos = {"x": dest_x, "y": dest_y}
                session.submit(
                    controller_id,
                    {
                        "idempotency_key": f"{idempotency_prefix}-move-{npc_id}",
                        "type": "move",
                        "actor_id": npc_id,
                        "position": new_pos,
                    },
                )

        # 2. Attack phase
        dist_after_move = math.hypot(target_pos["x"] - new_pos["x"], target_pos["y"] - new_pos["y"])
        damage_dealt = 0
        chosen_action = "move"

        if dist_after_move <= attack_range:
            damage_res = session.submit(
                controller_id,
                {
                    "idempotency_key": f"{idempotency_prefix}-attack-{npc_id}",
                    "type": "damage",
                    "actor_id": npc_id,
                    "target_id": target_id,
                    "amount": attack_damage,
                },
            )
            if damage_res["accepted"]:
                damage_dealt = attack_damage
                chosen_action = "attack" if current_dist <= attack_range else "move_and_attack"

        # 3. End turn if combat tracker is active
        if session.initiative and session.initiative.in_combat:
            curr_actor = session.initiative.current_actor()
            if curr_actor and curr_actor.entity_id == npc_id:
                session.submit(
                    controller_id,
                    {
                        "idempotency_key": f"{idempotency_prefix}-end-{npc_id}",
                        "type": "end_turn",
                        "actor_id": npc_id,
                    },
                )

        return TacticalDecision(
            npc_id=npc_id,
            target_id=target_id,
            chosen_action=chosen_action,
            destination=new_pos,
            damage_dealt=damage_dealt,
            details=f"Targeted {target_id}, action: {chosen_action}, damage: {damage_dealt}",
        )
