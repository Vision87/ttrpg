from session.runtime import Controller, Session
from session.sync import apply_events, events_after


def test_authorized_action_is_atomic_and_replayable() -> None:
    session = Session(
        "session-1",
        {
            "character-1": {"position": {"x": 1, "y": 1}},
            "npc-1": {"position": {"x": 2, "y": 1}, "hit_points": 10},
        },
    )
    session.assign(Controller("player-1", "human", {"character-1"}))
    accepted = session.submit(
        "player-1",
        {
            "idempotency_key": "move-1",
            "type": "move",
            "actor_id": "character-1",
            "position": {"x": 2, "y": 1},
        },
    )
    assert accepted["accepted"] is True
    assert apply_events(
        {"character-1": {"position": {"x": 1, "y": 1}}},
        events_after(session.events, 0),
    )["character-1"]["position"] == {"x": 2, "y": 1}


def test_unauthorized_action_is_rejected_without_state_change() -> None:
    session = Session("session-1", {"character-1": {"position": {"x": 1, "y": 1}}})
    session.assign(Controller("player-1", "human", set()))
    result = session.submit(
        "player-1",
        {
            "idempotency_key": "move-1",
            "type": "move",
            "actor_id": "character-1",
            "position": {"x": 2, "y": 1},
        },
    )
    assert result["accepted"] is False
    assert session.entities["character-1"]["position"] == {"x": 1, "y": 1}
