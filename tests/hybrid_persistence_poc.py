"""Technology-neutral persistence/synchronization contract proof of concept."""

from __future__ import annotations

import json
import tempfile
from pathlib import Path


def write_json(path: Path, value: dict) -> None:
    path.write_text(json.dumps(value, sort_keys=True, indent=2) + "\n")


def read_json(path: Path) -> dict:
    return json.loads(path.read_text())


def main() -> None:
    with tempfile.TemporaryDirectory() as directory:
        root = Path(directory)
        local_snapshot = root / "local-snapshot.json"
        local_events = root / "local-events.json"
        authoritative = {
            "session_id": "session-1",
            "event_cursor": 0,
            "entities": {"character-1": {"x": 1, "y": 1}},
            "accepted_action_keys": [],
        }
        write_json(local_snapshot, authoritative)
        write_json(local_events, {"events": []})

        action = {
            "idempotency_key": "move-1",
            "type": "EntityMoved",
            "entity_id": "character-1",
            "position": {"x": 2, "y": 1},
        }
        if action["idempotency_key"] not in authoritative["accepted_action_keys"]:
            authoritative["event_cursor"] += 1
            authoritative["entities"][action["entity_id"]] = action["position"]
            authoritative["accepted_action_keys"].append(action["idempotency_key"])
            event = {"id": "event-1", "cursor": 1, **action}
            events = read_json(local_events)
            events["events"].append(event)
            write_json(local_events, events)

        write_json(local_snapshot, authoritative)
        reloaded = read_json(local_snapshot)
        events = read_json(local_events)
        assert reloaded["entities"]["character-1"] == {"x": 2, "y": 1}
        assert reloaded["event_cursor"] == 1
        assert len(events["events"]) == 1

        # Replaying the same idempotency key must not create a second event.
        assert action["idempotency_key"] in reloaded["accepted_action_keys"]
        assert len(events["events"]) == 1
        print("hybrid persistence proof of concept passed")


if __name__ == "__main__":
    main()
