"""Authoritative event-driven session runtime."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


@dataclass
class Controller:
    controller_id: str
    kind: str
    entity_ids: set[str] = field(default_factory=set)


@dataclass
class Session:
    session_id: str
    entities: dict[str, dict[str, Any]]
    controllers: dict[str, Controller] = field(default_factory=dict)
    events: list[dict[str, Any]] = field(default_factory=list)
    _action_keys: set[str] = field(default_factory=set)

    def assign(self, controller: Controller) -> None:
        self.controllers[controller.controller_id] = controller

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
        if controller is None or action.get("actor_id") not in controller.entity_ids:
            return self._reject("controller-not-authorized")
        if action.get("type") == "move":
            actor = self.entities.get(action["actor_id"])
            if actor is None or not isinstance(action.get("position"), dict):
                return self._reject("invalid-move")
            actor["position"] = dict(action["position"])
            event = {"id": f"event-{len(self.events) + 1}", **action}
        elif action.get("type") == "damage":
            target = self.entities.get(action.get("target_id"))
            amount = action.get("amount")
            if target is None or not isinstance(amount, int) or amount < 0:
                return self._reject("invalid-damage")
            target["hit_points"] = target.get("hit_points", 0) - amount
            event = {"id": f"event-{len(self.events) + 1}", **action}
        else:
            return self._reject("unsupported-action")
        self._action_keys.add(action_key)
        self.events.append(event)
        return {"accepted": True, "event": event}

    def _reject(self, code: str) -> dict[str, Any]:
        event = {"id": f"event-{len(self.events) + 1}", "type": "ActionRejected", "code": code}
        self.events.append(event)
        return {"accepted": False, "event": event}
