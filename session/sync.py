"""Idempotent local projection synchronization helpers."""

from __future__ import annotations

from copy import deepcopy
from typing import Any


def events_after(events: list[dict[str, Any]], cursor: int) -> list[dict[str, Any]]:
    return deepcopy(events[cursor:])


def apply_events(
    entities: dict[str, dict[str, Any]],
    events: list[dict[str, Any]],
) -> dict[str, dict[str, Any]]:
    result = deepcopy(entities)
    for event in events:
        if event["type"] == "move":
            result[event["actor_id"]]["position"] = dict(event["position"])
        elif event["type"] == "damage":
            result[event["target_id"]]["hit_points"] -= event["amount"]
    return result
