"""Renderer-independent 2D and 3D session projections."""

from __future__ import annotations

from copy import deepcopy
from typing import Any


def tactical_projection(
    entities: dict[str, dict[str, Any]],
    events: list[dict[str, Any]],
) -> dict[str, Any]:
    return {
        "mode": "2d-tactical",
        "entities": deepcopy(entities),
        "events": deepcopy(events),
        "controls": ["move", "target", "measure", "reveal"],
    }


def immersive_projection(
    entities: dict[str, dict[str, Any]],
    events: list[dict[str, Any]],
    assets: dict[str, str],
) -> dict[str, Any]:
    return {
        "mode": "3d-immersive",
        "entities": deepcopy(entities),
        "events": deepcopy(events),
        "presentation": [
            {
                "event_id": event["id"],
                "asset": assets.get(event.get("type"), "fallback:token"),
            }
            for event in events
        ],
    }


def event_log(events: list[dict[str, Any]]) -> list[dict[str, Any]]:
    return [{"id": event["id"], "type": event["type"]} for event in events]


def validate_range(
    entities: dict[str, dict[str, Any]],
    actor_id: str,
    target_id: str,
    maximum_range: int,
) -> tuple[bool, str | None]:
    actor = entities.get(actor_id)
    target = entities.get(target_id)
    if actor is None or target is None:
        return False, "unknown-entity"
    distance = abs(actor["position"]["x"] - target["position"]["x"]) + abs(
        actor["position"]["y"] - target["position"]["y"]
    )
    if distance > maximum_range:
        return False, "out-of-range"
    return True, None
