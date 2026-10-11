"""Authoritative event-driven session runtime with role-based controller permissions."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


@dataclass
class Controller:
    controller_id: str
    kind: str = "base"
    entity_ids: set[str] = field(default_factory=set)

    def is_gm(self) -> bool:
        return self.kind in {"gm", "director"}

    def can_control(self, entity_id: str) -> bool:
        return self.is_gm() or (entity_id in self.entity_ids)


@dataclass
class GMController(Controller):
    kind: str = "gm"

    def can_control(self, entity_id: str) -> bool:
        return True


@dataclass
class PlayerController(Controller):
    kind: str = "player"


@dataclass
class AutonomousDirectorController(Controller):
    kind: str = "director"
    oracle: Any = None

    def __post_init__(self) -> None:
        if self.oracle is None:
            from session.director import SoloOracleEngine
            self.oracle = SoloOracleEngine()

    def can_control(self, entity_id: str) -> bool:
        return True

    def ask_oracle(self, question: str, likelihood: str = "even", roll: int | None = None) -> Any:
        return self.oracle.ask(question, likelihood=likelihood, roll=roll)


@dataclass
class Session:
    session_id: str
    entities: dict[str, dict[str, Any]]
    controllers: dict[str, Controller] = field(default_factory=dict)
    events: list[dict[str, Any]] = field(default_factory=list)
    tiles: dict[str, dict[str, Any]] = field(default_factory=dict)
    notes: list[dict[str, Any]] = field(default_factory=list)
    initiative: Any = None
    _action_keys: set[str] = field(default_factory=set)

    def assign(self, controller: Controller) -> None:
        self.controllers[controller.controller_id] = controller

    def get_controller(self, controller_id: str) -> Controller | None:
        return self.controllers.get(controller_id)

    def submit(
        self,
        controller_id: str,
        action: dict[str, Any],
    ) -> dict[str, Any]:
        action_key = action.get("idempotency_key")
        if not action_key:
            return self._reject("missing-idempotency-key")
        if action_key in self._action_keys:
            return {"accepted": False, "duplicate": True}

        controller = self.controllers.get(controller_id)
        if controller is None:
            return self._reject("controller-not-authorized")

        action_type = action.get("type")

        # GM-only administrative actions
        if action_type in {"modify_tile", "edit_note", "spawn_entity"}:
            if not controller.is_gm():
                return self._reject("controller-not-authorized")

            if action_type == "modify_tile":
                pos = action.get("position")
                if not isinstance(pos, dict) or "x" not in pos or "y" not in pos:
                    return self._reject("invalid-tile-position")
                key = f"{pos['x']},{pos['y']}"
                tile_props = dict(action.get("tile", {}))
                self.tiles[key] = {**self.tiles.get(key, {"x": pos["x"], "y": pos["y"]}), **tile_props}
                event = {"id": f"event-{len(self.events) + 1}", **action}

            elif action_type == "edit_note":
                note_id = action.get("note_id")
                text = action.get("text")
                if not note_id or text is None:
                    return self._reject("invalid-note")
                hidden = action.get("hidden", True)
                note_obj = {"note_id": note_id, "text": text, "hidden": hidden}
                # update or append
                updated = False
                for i, existing in enumerate(self.notes):
                    if existing.get("note_id") == note_id:
                        self.notes[i] = note_obj
                        updated = True
                        break
                if not updated:
                    self.notes.append(note_obj)
                event = {"id": f"event-{len(self.events) + 1}", **action}

            elif action_type == "spawn_entity":
                entity_data = action.get("entity")
                if not isinstance(entity_data, dict) or "entity_id" not in entity_data:
                    return self._reject("invalid-entity")
                eid = entity_data["entity_id"]
                self.entities[eid] = dict(entity_data)
                event = {"id": f"event-{len(self.events) + 1}", **action}

        # Actor-specific actions (move, damage, etc.)
        elif action_type == "move":
            actor_id = action.get("actor_id")
            if not actor_id or not controller.can_control(actor_id):
                return self._reject("controller-not-authorized")
            actor = self.entities.get(actor_id)
            if actor is None or not isinstance(action.get("position"), dict):
                return self._reject("invalid-move")
            actor["position"] = dict(action["position"])
            event = {"id": f"event-{len(self.events) + 1}", **action}

        elif action_type == "damage":
            actor_id = action.get("actor_id")
            if actor_id and not controller.can_control(actor_id):
                return self._reject("controller-not-authorized")
            target = self.entities.get(action.get("target_id"))
            amount = action.get("amount")
            if target is None or not isinstance(amount, int) or amount < 0:
                return self._reject("invalid-damage")
            target["hit_points"] = target.get("hit_points", 0) - amount
            event = {"id": f"event-{len(self.events) + 1}", **action}

        elif action_type == "start_combat":
            if not controller.is_gm():
                return self._reject("controller-not-authorized")
            from session.initiative import InitiativeTracker
            self.initiative = InitiativeTracker()
            combatants = action.get("combatants", [])
            for c in combatants:
                self.initiative.add_combatant(
                    entity_id=c["entity_id"],
                    score=c.get("score", 0.0),
                    tie_breaker=c.get("tie_breaker", 0.0),
                    custom_pool=c.get("custom_pool"),
                )
            start_info = self.initiative.start_combat()
            event = {"id": f"event-{len(self.events) + 1}", **action, **start_info}

        elif action_type == "end_turn":
            if self.initiative is None or not self.initiative.in_combat:
                return self._reject("combat-not-active")
            curr = self.initiative.current_actor()
            if not curr:
                return self._reject("combat-not-active")
            actor_id = action.get("actor_id", curr.entity_id)
            if actor_id != curr.entity_id or not controller.can_control(actor_id):
                return self._reject("controller-not-authorized")
            turn_info = self.initiative.next_turn()
            event = {"id": f"event-{len(self.events) + 1}", **action, **turn_info}

        elif action_type == "use_action":
            if self.initiative is None or not self.initiative.in_combat:
                return self._reject("combat-not-active")
            curr = self.initiative.current_actor()
            actor_id = action.get("actor_id")
            if not curr or curr.entity_id != actor_id:
                return self._reject("not-active-turn")
            if not controller.can_control(actor_id):
                return self._reject("controller-not-authorized")
            action_name = action.get("action_name", "standard_action")
            amount = action.get("amount", 1)
            spent = self.initiative.spend_action(action_name, amount)
            if not spent:
                return self._reject("insufficient-action-points")
            event = {"id": f"event-{len(self.events) + 1}", **action, "remaining_pool": dict(curr.action_pool)}

        elif action_type == "oracle_query":
            if not controller.is_gm():
                return self._reject("controller-not-authorized")
            from session.director import SoloOracleEngine
            oracle = getattr(controller, "oracle", None) or SoloOracleEngine()
            question = action.get("question", "")
            likelihood = action.get("likelihood", "even")
            roll = action.get("roll")
            res = oracle.ask(question, likelihood=likelihood, roll=roll)
            event = {"id": f"event-{len(self.events) + 1}", **action, "result": res.to_dict()}

        elif action_type == "advance_scene":
            if not controller.is_gm():
                return self._reject("controller-not-authorized")
            from session.director import SoloOracleEngine
            oracle = getattr(controller, "oracle", None) or SoloOracleEngine()
            scene_desc = action.get("scene", "")
            roll = action.get("roll")
            res = oracle.advance_scene(scene_desc, roll=roll)
            event = {"id": f"event-{len(self.events) + 1}", **action, **res}

        else:
            return self._reject("unsupported-action")

        self._action_keys.add(action_key)
        self.events.append(event)
        return {"accepted": True, "event": event}

    def _reject(self, code: str) -> dict[str, Any]:
        event = {"id": f"event-{len(self.events) + 1}", "type": "ActionRejected", "code": code}
        self.events.append(event)
        return {"accepted": False, "event": event}

    def get_client_snapshot(self, controller_id: str) -> dict[str, Any]:
        from session.visibility import generate_client_snapshot
        return generate_client_snapshot(self, controller_id)
