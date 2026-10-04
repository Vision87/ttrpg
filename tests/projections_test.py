from clients.projections import (
    event_log,
    immersive_projection,
    tactical_projection,
    validate_range,
)


def test_2d_and_3d_projections_share_authoritative_state() -> None:
    entities = {"character-1": {"position": {"x": 2, "y": 1}}}
    events = [{"id": "event-1", "type": "damage", "amount": 4}]
    tactical = tactical_projection(entities, events)
    immersive = immersive_projection(entities, events, {"damage": "effect.fire@1"})
    assert tactical["entities"] == immersive["entities"]
    assert tactical["events"] == immersive["events"]
    assert immersive["presentation"][0]["asset"] == "effect.fire@1"
    assert event_log(events) == [{"id": "event-1", "type": "damage"}]


def test_immersive_projection_uses_fallback_asset() -> None:
    projection = immersive_projection(
        {"character-1": {"position": {"x": 1, "y": 1}}},
        [{"id": "event-1", "type": "unknown"}],
        {},
    )
    assert projection["presentation"][0]["asset"] == "fallback:token"


def test_tactical_projection_reports_out_of_range_target() -> None:
    valid, reason = validate_range(
        {
            "character-1": {"position": {"x": 1, "y": 1}},
            "npc-1": {"position": {"x": 5, "y": 1}},
        },
        "character-1",
        "npc-1",
        3,
    )
    assert valid is False
    assert reason == "out-of-range"
