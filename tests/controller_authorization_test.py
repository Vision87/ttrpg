"""Unit tests for role-based controller authorization and session permission gating."""

from session.runtime import (
    AutonomousDirectorController,
    Controller,
    GMController,
    PlayerController,
    Session,
)


def test_gm_controller_omniscient_actions() -> None:
    session = Session(
        "session-test",
        entities={
            "hero-1": {"position": {"x": 2, "y": 2}, "hit_points": 25},
            "monster-1": {"position": {"x": 5, "y": 5}, "hit_points": 12},
        },
    )
    gm = GMController("gm-1")
    session.assign(gm)

    # GM can move any entity without explicit ownership
    move_res = session.submit(
        "gm-1",
        {
            "idempotency_key": "gm-move-1",
            "type": "move",
            "actor_id": "monster-1",
            "position": {"x": 6, "y": 5},
        },
    )
    assert move_res["accepted"] is True
    assert session.entities["monster-1"]["position"] == {"x": 6, "y": 5}

    # GM can modify environment tiles
    tile_res = session.submit(
        "gm-1",
        {
            "idempotency_key": "gm-tile-1",
            "type": "modify_tile",
            "position": {"x": 3, "y": 3},
            "tile": {"terrain": "lava", "walkable": False},
        },
    )
    assert tile_res["accepted"] is True
    assert session.tiles["3,3"]["terrain"] == "lava"
    assert session.tiles["3,3"]["walkable"] is False

    # GM can edit hidden GM notes
    note_res = session.submit(
        "gm-1",
        {
            "idempotency_key": "gm-note-1",
            "type": "edit_note",
            "note_id": "trap-secret",
            "text": "Secret pit trap triggers on pressure plate at (4,4)",
            "hidden": True,
        },
    )
    assert note_res["accepted"] is True
    assert len(session.notes) == 1
    assert session.notes[0]["hidden"] is True


def test_player_controller_restricted_permissions() -> None:
    session = Session(
        "session-test",
        entities={
            "hero-1": {"position": {"x": 1, "y": 1}, "hit_points": 20},
            "hero-2": {"position": {"x": 2, "y": 1}, "hit_points": 18},
        },
    )
    player1 = PlayerController("p1", entity_ids={"hero-1"})
    session.assign(player1)

    # Authorized move of owned character
    move_own = session.submit(
        "p1",
        {
            "idempotency_key": "p1-move-1",
            "type": "move",
            "actor_id": "hero-1",
            "position": {"x": 1, "y": 2},
        },
    )
    assert move_own["accepted"] is True
    assert session.entities["hero-1"]["position"] == {"x": 1, "y": 2}

    # Unauthorized attempt to move another character
    move_other = session.submit(
        "p1",
        {
            "idempotency_key": "p1-move-2",
            "type": "move",
            "actor_id": "hero-2",
            "position": {"x": 2, "y": 3},
        },
    )
    assert move_other["accepted"] is False
    assert move_other["event"]["code"] == "controller-not-authorized"
    assert session.entities["hero-2"]["position"] == {"x": 2, "y": 1}

    # Unauthorized attempt to modify tiles
    tile_attempt = session.submit(
        "p1",
        {
            "idempotency_key": "p1-tile-1",
            "type": "modify_tile",
            "position": {"x": 1, "y": 1},
            "tile": {"terrain": "void"},
        },
    )
    assert tile_attempt["accepted"] is False
    assert tile_attempt["event"]["code"] == "controller-not-authorized"
    assert "1,1" not in session.tiles

    # Unauthorized attempt to edit notes
    note_attempt = session.submit(
        "p1",
        {
            "idempotency_key": "p1-note-1",
            "type": "edit_note",
            "note_id": "cheat-note",
            "text": "Give 9999 gold",
        },
    )
    assert note_attempt["accepted"] is False
    assert note_attempt["event"]["code"] == "controller-not-authorized"
    assert len(session.notes) == 0


def test_autonomous_director_controller_permissions() -> None:
    session = Session(
        "session-test",
        entities={
            "goblin-1": {"position": {"x": 4, "y": 4}, "hit_points": 7},
        },
    )
    director = AutonomousDirectorController("director-1")
    session.assign(director)

    # Director can move monsters and arbitrate environment
    move_res = session.submit(
        "director-1",
        {
            "idempotency_key": "dir-move-1",
            "type": "move",
            "actor_id": "goblin-1",
            "position": {"x": 4, "y": 3},
        },
    )
    assert move_res["accepted"] is True
    assert session.entities["goblin-1"]["position"] == {"x": 4, "y": 3}

    # Director can spawn new encounter entities
    spawn_res = session.submit(
        "director-1",
        {
            "idempotency_key": "dir-spawn-1",
            "type": "spawn_entity",
            "entity": {"entity_id": "reinforcement-1", "name": "Orc Grunt", "position": {"x": 5, "y": 5}},
        },
    )
    assert spawn_res["accepted"] is True
    assert "reinforcement-1" in session.entities
