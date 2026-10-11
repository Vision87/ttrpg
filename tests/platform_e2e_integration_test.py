"""End-to-end integration tests for solo autonomous sessions and multi-user synchronized sessions."""

from clients.presentation import PresentationEventRegistry
from quest.parser import parse_quest_text
from quest.synthesizer import synthesize_board
from session.runtime import AutonomousDirectorController, GMController, PlayerController, Session
from session.sync import apply_events, events_after
from session.tactical_ai import ReactiveTacticalAI

SOLO_QUEST_FIXTURE = """
# Quest: Crypt of the Forgotten
System: dnd35

## Area 1: Tomb Chamber
Dimensions: 6x6
Terrain: stone_tile
Light: bright
Entry: (1, 1)
Encounter:
- 1 skeleton at (3, 3) with definition monster.skeleton
A poison dart trap is hidden on tile (2, 2). Test: search DC 14. Effect: 1d6 poison.
"""


def test_e2e_solo_session_ingestion_and_ai_combat() -> None:
    # 1. Ingest text quest to manifest
    manifest = parse_quest_text(SOLO_QUEST_FIXTURE)
    assert manifest.title == "Crypt of the Forgotten"

    # 2. Synthesize board topology, tiles, entities, and entry anchors
    board = synthesize_board(manifest)
    assert len(board.tiles) > 0
    assert len(board.entry_anchors) > 0

    # 3. Deploy player character at entry anchor
    entry_pos = board.entry_anchors[0]
    hero_entity = {
        "id": "hero-solo",
        "name": "Knight Errant",
        "kind": "player",
        "position": dict(entry_pos),
        "hit_points": 24,
        "vision_range": 8,
    }

    session_entities = dict(board.entities)
    session_entities["hero-solo"] = hero_entity

    # Find the spawned monster
    monster_id = [
        eid for eid, ent in board.entities.items()
        if "skeleton" in ent.get("name", "").lower() or "skeleton" in str(ent.get("definition_ref", "")).lower()
    ][0]
    session_entities[monster_id]["hit_points"] = 12
    session_entities[monster_id]["combat_role"] = "melee"
    session_entities[monster_id]["attack_damage"] = 4
    session_entities[monster_id]["move_budget"] = 3
    session_entities[monster_id]["attack_range"] = 1

    tiles_dict = {
        coord: {
            "x": t.x,
            "y": t.y,
            "terrain": t.terrain,
            "walkable": t.walkable,
            "blocks_vision": t.blocks_vision,
        }
        for coord, t in board.tiles.items()
    }

    # 4. Initialize session with Autonomous Director
    session = Session(
        "solo-e2e-session",
        entities=session_entities,
        tiles=tiles_dict,
    )
    director = AutonomousDirectorController("solo-director")
    player = PlayerController("solo-player", entity_ids={"hero-solo"})
    session.assign(director)
    session.assign(player)

    # 5. Director arbitrates a narrative world check using Solo Oracle
    oracle_res = session.submit(
        "solo-director",
        {
            "idempotency_key": "solo-oracle-check",
            "type": "oracle_query",
            "question": "Does the sarcophagus look undisturbed?",
            "likelihood": "likely",
            "roll": 15,
        },
    )
    assert oracle_res["accepted"] is True
    assert oracle_res["event"]["result"]["outcome"] in {"yes", "yes_and"}

    # 6. Start combat between Hero and Monster
    init_res = session.submit(
        "solo-director",
        {
            "idempotency_key": "combat-start-e2e",
            "type": "start_combat",
            "combatants": [
                {"entity_id": "hero-solo", "score": 18},
                {"entity_id": monster_id, "score": 14},
            ],
        },
    )
    assert init_res["accepted"] is True
    assert session.initiative.current_actor().entity_id == "hero-solo"

    # 7. Hero moves towards skeleton and attacks
    hero_move = session.submit(
        "solo-player",
        {
            "idempotency_key": "hero-move-e2e",
            "type": "move",
            "actor_id": "hero-solo",
            "position": {"x": 2, "y": 3},  # adjacent to skeleton at (3,3)
        },
    )
    assert hero_move["accepted"] is True

    hero_attack = session.submit(
        "solo-player",
        {
            "idempotency_key": "hero-att-e2e",
            "type": "damage",
            "actor_id": "hero-solo",
            "target_id": monster_id,
            "amount": 7,
        },
    )
    assert hero_attack["accepted"] is True
    assert session.entities[monster_id]["hit_points"] == 5

    hero_end = session.submit(
        "solo-player",
        {
            "idempotency_key": "hero-end-e2e",
            "type": "end_turn",
            "actor_id": "hero-solo",
        },
    )
    assert hero_end["accepted"] is True
    assert session.initiative.current_actor().entity_id == monster_id

    # 8. Automated NPC turn execution via ReactiveTacticalAI
    decision = ReactiveTacticalAI.execute_turn(
        session=session,
        npc_id=monster_id,
        controller_id="solo-director",
        idempotency_prefix="e2e-skeleton",
    )
    assert decision.target_id == "hero-solo"
    assert decision.damage_dealt == 4
    assert session.entities["hero-solo"]["hit_points"] == 20

    # 9. Verify presentation cues generated from event log
    registry = PresentationEventRegistry()
    cues = [registry.translate_event(ev, session.entities) for ev in session.events]
    assert any(len(c.audio_cues) > 0 for c in cues)
    assert any(len(c.animation_cues) > 0 for c in cues)


def test_e2e_multi_user_session_synchronization_and_fog_of_war() -> None:
    # Set up multi-user board with two separate rooms divided by a solid wall
    # Room 1: (0,0) to (2,2)
    # Wall column at x=3
    # Room 2: (4,0) to (6,2)
    tiles = {}
    for y in range(3):
        for x in range(3):
            tiles[f"{x},{y}"] = {"x": x, "y": y, "blocks_vision": False, "terrain": "floor"}
        tiles[f"3,{y}"] = {"x": 3, "y": y, "blocks_vision": True, "terrain": "wall"}
        for x in range(4, 7):
            tiles[f"{x},{y}"] = {"x": x, "y": y, "blocks_vision": False, "terrain": "floor"}

    entities = {
        "hero-p1": {"position": {"x": 1, "y": 1}, "kind": "player", "hit_points": 20, "vision_range": 6},
        "hero-p2": {"position": {"x": 5, "y": 1}, "kind": "player", "hit_points": 22, "vision_range": 6},
        "hidden-ambusher": {"position": {"x": 6, "y": 2}, "kind": "monster", "hit_points": 15},
    }

    session = Session("multiuser-session", entities=entities, tiles=tiles)
    session.notes.append({"note_id": "gm-secret", "text": "Ambusher strikes from behind column", "hidden": True})
    session.notes.append({"note_id": "room-desc", "text": "Ancient torches illuminate the stone", "hidden": False})

    gm = GMController("gm")
    p1 = PlayerController("p1", entity_ids={"hero-p1"})
    p2 = PlayerController("p2", entity_ids={"hero-p2"})
    session.assign(gm)
    session.assign(p1)
    session.assign(p2)

    # Permission check: p1 cannot move hero-p2
    illegal_move = session.submit(
        "p1",
        {
            "idempotency_key": "illegal-p1-move",
            "type": "move",
            "actor_id": "hero-p2",
            "position": {"x": 5, "y": 2},
        },
    )
    assert illegal_move["accepted"] is False
    assert illegal_move["event"]["code"] == "controller-not-authorized"

    # Authorized move: p1 moves hero-p1
    legal_p1_move = session.submit(
        "p1",
        {
            "idempotency_key": "legal-p1-move",
            "type": "move",
            "actor_id": "hero-p1",
            "position": {"x": 2, "y": 1},
        },
    )
    assert legal_p1_move["accepted"] is True

    # GM edits tile and spawns entity
    gm_spawn = session.submit(
        "gm",
        {
            "idempotency_key": "gm-spawn-minion",
            "type": "spawn_entity",
            "entity": {"entity_id": "rat-1", "name": "Tunnel Rat", "position": {"x": 0, "y": 1}},
        },
    )
    assert gm_spawn["accepted"] is True

    # Fog of war validation:
    # Player 1 is in Room 1 (x <= 2). Cannot see through wall at x=3.
    snap_p1 = session.get_client_snapshot("p1")
    assert "hero-p1" in snap_p1["entities"]
    assert "rat-1" in snap_p1["entities"]  # In Room 1 within vision
    assert "hero-p2" not in snap_p1["entities"]  # Behind wall in Room 2
    assert "hidden-ambusher" not in snap_p1["entities"]  # Behind wall in Room 2
    assert "gm-secret" not in [n["note_id"] for n in snap_p1["notes"]]
    assert "room-desc" in [n["note_id"] for n in snap_p1["notes"]]

    # Player 2 is in Room 2 (x >= 4). Can see hero-p2 and hidden-ambusher, but not Room 1
    snap_p2 = session.get_client_snapshot("p2")
    assert "hero-p2" in snap_p2["entities"]
    assert "hidden-ambusher" in snap_p2["entities"]
    assert "hero-p1" not in snap_p2["entities"]
    assert "rat-1" not in snap_p2["entities"]

    # GM sees all entities and hidden notes
    snap_gm = session.get_client_snapshot("gm")
    assert len(snap_gm["entities"]) == 4
    assert len(snap_gm["notes"]) == 2

    # Verify event synchronization replay
    synced_state = apply_events(
        {"hero-p1": {"position": {"x": 1, "y": 1}}},
        events_after(session.events, 0),
    )
    assert synced_state["hero-p1"]["position"] == {"x": 2, "y": 1}
