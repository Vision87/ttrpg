"""Unit tests for dynamic fog-of-war, line-of-sight calculation, and client snapshot visibility."""

from session.runtime import GMController, PlayerController, Session


def test_hiding_unrevealed_monsters_and_tiles_from_player_snapshot() -> None:
    # Build a 6x3 grid:
    # (1,1) is player
    # (2,1) is open floor
    # (3,1), (3,2), (3,0) are solid walls that block vision
    # (4,1) is floor behind wall
    # (5,1) is monster behind wall
    tiles = {
        "1,1": {"x": 1, "y": 1, "blocks_vision": False, "terrain": "stone"},
        "2,1": {"x": 2, "y": 1, "blocks_vision": False, "terrain": "stone"},
        "3,0": {"x": 3, "y": 0, "blocks_vision": True, "terrain": "wall"},
        "3,1": {"x": 3, "y": 1, "blocks_vision": True, "terrain": "wall"},
        "3,2": {"x": 3, "y": 2, "blocks_vision": True, "terrain": "wall"},
        "4,1": {"x": 4, "y": 1, "blocks_vision": False, "terrain": "stone"},
        "5,1": {"x": 5, "y": 1, "blocks_vision": False, "terrain": "stone"},
        "2,0": {"x": 2, "y": 0, "blocks_vision": False, "terrain": "stone"},
    }

    entities = {
        "hero-1": {"position": {"x": 1, "y": 1}, "vision_range": 6, "name": "Warrior"},
        "visible-rat": {"position": {"x": 2, "y": 1}, "name": "Giant Rat"},
        "hidden-cultist": {"position": {"x": 5, "y": 1}, "name": "Dark Cultist"},
    }

    session = Session(
        "session-fow",
        entities=entities,
        tiles=tiles,
    )
    session.notes.append({"note_id": "secret-gm", "text": "Cultist has unholy blade", "hidden": True})
    session.notes.append({"note_id": "public-hint", "text": "The air smells foul", "hidden": False})

    player = PlayerController("p1", entity_ids={"hero-1"})
    gm = GMController("gm-1")
    session.assign(player)
    session.assign(gm)

    # Player snapshot
    player_snapshot = session.get_client_snapshot("p1")

    # The player sees their own character
    assert "hero-1" in player_snapshot["entities"]

    # The player sees the rat directly in front of the wall
    assert "visible-rat" in player_snapshot["entities"]

    # The player DOES NOT see the monster behind the wall
    assert "hidden-cultist" not in player_snapshot["entities"]

    # The player sees the near face of the wall at (3,1), but NOT tile (5,1) behind it
    assert "3,1" in player_snapshot["tiles"]
    assert "5,1" not in player_snapshot["tiles"]

    # Player sees public notes, but NOT hidden GM notes
    note_ids = [n["note_id"] for n in player_snapshot["notes"]]
    assert "public-hint" in note_ids
    assert "secret-gm" not in note_ids

    # GM snapshot
    gm_snapshot = session.get_client_snapshot("gm-1")
    assert "hidden-cultist" in gm_snapshot["entities"]
    assert "5,1" in gm_snapshot["tiles"]
    assert len(gm_snapshot["notes"]) == 2
