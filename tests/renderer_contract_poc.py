"""Architecture-neutral proof of concept for the shared renderer contract."""

from __future__ import annotations

import json
from pathlib import Path


FIXTURE = Path(__file__).with_name("renderer_contract_fixture.json")


def project_2d(snapshot: dict, events: list[dict]) -> dict:
    entities = {entity["id"]: dict(entity) for entity in snapshot["entities"]}
    for event in events:
        if event["type"] == "EntityMoved":
            entities[event["entity_id"]]["position"] = event["position"]
    return {
        "mode": "2d",
        "entities": {
            entity_id: entity["position"] for entity_id, entity in entities.items()
        },
        "outcomes": [event for event in events if event["type"] == "DamageApplied"],
    }


def project_3d(snapshot: dict, events: list[dict]) -> dict:
    entities = {entity["id"]: dict(entity) for entity in snapshot["entities"]}
    for event in events:
        if event["type"] == "EntityMoved":
            entities[event["entity_id"]]["position"] = event["position"]
    return {
        "mode": "3d",
        "entities": {
            entity_id: entity["position"] for entity_id, entity in entities.items()
        },
        "outcomes": [event for event in events if event["type"] == "DamageApplied"],
        "presentation": [
            {
                "event_id": event["id"],
                "asset": event.get("preferred_asset", "fallback:token"),
            }
            for event in events
            if event["type"] == "DamageApplied"
        ],
    }


def main() -> None:
    fixture = json.loads(FIXTURE.read_text())
    snapshot = fixture["snapshot"]
    events = fixture["events"]
    projection_2d = project_2d(snapshot, events)
    projection_3d = project_3d(snapshot, events)

    assert projection_2d["entities"] == projection_3d["entities"]
    assert projection_2d["outcomes"] == projection_3d["outcomes"]
    assert projection_3d["presentation"] == [
        {"event_id": "event-2", "asset": "fallback:token"}
    ]
    print("renderer contract proof of concept passed")


if __name__ == "__main__":
    main()
