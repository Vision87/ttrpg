from session.runtime import Controller, Session
from session.sync import apply_events, events_after


def test_duplicate_submission_does_not_duplicate_event() -> None:
    session = Session("session-1", {"character-1": {"position": {"x": 1, "y": 1}}})
    session.assign(Controller("player-1", "human", {"character-1"}))
    action = {
        "idempotency_key": "move-1",
        "type": "move",
        "actor_id": "character-1",
        "position": {"x": 2, "y": 1},
    }
    session.submit("player-1", action)
    duplicate = session.submit("player-1", action)
    assert duplicate["duplicate"] is True
    assert len(session.events) == 1
    assert apply_events(
        {"character-1": {"position": {"x": 1, "y": 1}}},
        events_after(session.events, 0),
    )["character-1"]["position"] == {"x": 2, "y": 1}
