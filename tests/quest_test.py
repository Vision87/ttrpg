"""Unit tests for text quest parsing, board synthesis, entity spawning, and trigger generation."""

from quest.parser import parse_quest_text
from quest.synthesizer import synthesize_board

SAMPLE_QUEST = """
# Quest: The Cultist Catacombs
System: dark-heresy
Atmosphere: Damp underground crypt with flickering phosphor lamps.

## Area 1: Entry Crypt
Dimensions: 6x8
Terrain: flagstone
Light: dim
Entry: (1, 1), (1, 2)
A tripwire trap is hidden on tile (3, 2). Test: awareness DC 15. Effect: 1d10 damage.

## Area 2: Ritual Chamber
Dimensions: 10x10
Terrain: desecrated_marble
Light: dark
Encounter:
- 2 cultist at (5, 5) with definition monster.cultist
A secret door is nestled in the alcove at (8, 9). Test: inquiry DC 20.
"""


def test_quest_text_parsing_to_ism() -> None:
    manifest = parse_quest_text(SAMPLE_QUEST)
    assert manifest.title == "The Cultist Catacombs"
    assert manifest.system_hint == "dark-heresy"
    assert len(manifest.rooms) == 2
    
    # Room 1 assertions
    room1 = manifest.rooms[0]
    assert room1.name == "Area 1: Entry Crypt"
    assert room1.width == 6
    assert room1.height == 8
    assert room1.terrain == "flagstone"
    assert room1.ambient_light == "dim"

    # Room 2 assertions
    room2 = manifest.rooms[1]
    assert room2.name == "Area 2: Ritual Chamber"
    assert room2.width == 10
    assert room2.height == 10
    assert room2.terrain == "desecrated_marble"

    # Entities
    assert len(manifest.entities) == 2
    assert manifest.entities[0].definition_ref == "monster.cultist"
    assert manifest.entities[0].name.startswith("cultist")

    # Triggers
    assert len(manifest.triggers) == 2
    assert manifest.triggers[0].kind == "trap"
    assert manifest.triggers[0].test_requirement["rule"] == "awareness"
    assert manifest.triggers[0].test_requirement["dc"] == 15

    # Entry points
    assert len(manifest.entry_points) >= 2


def test_board_grid_synthesis_and_topology() -> None:
    manifest = parse_quest_text(SAMPLE_QUEST)
    board = synthesize_board(manifest)
    
    # Check width and height
    assert board.width > 10
    assert board.height >= 10

    # Interior of Room 1 should be walkable flagstone
    interior_tile = board.get_tile(manifest.rooms[0].origin_x + 2, 2)
    assert interior_tile is not None
    assert interior_tile.walkable is True
    assert interior_tile.terrain == "flagstone"
    assert interior_tile.blocks_vision is False

    # Outer wall should block movement and vision
    wall_tile = board.get_tile(manifest.rooms[0].origin_x, 0)
    assert wall_tile is not None
    assert wall_tile.walkable is False
    assert wall_tile.blocks_vision is True


def test_npc_generation_with_ruleset_definitions() -> None:
    manifest = parse_quest_text(SAMPLE_QUEST)
    ruleset_defs = {
        "monster.cultist": {
            "id": "monster.cultist",
            "wounds": 8,
            "armor": 2,
            "ballistic_skill": 25,
            "weapon_skill": 25,
        }
    }
    board = synthesize_board(manifest, ruleset_definitions=ruleset_defs)
    assert len(board.entities) == 2
    npc = list(board.entities.values())[0]
    assert npc["hit_points"] == 8
    assert npc["armor"] == 2
    assert npc["stats"]["ballistic_skill"] == 25


def test_party_entry_anchors_and_deployment() -> None:
    manifest = parse_quest_text(SAMPLE_QUEST)
    board = synthesize_board(manifest)
    assert len(board.entry_anchors) >= 2

    # Deploy player characters to entry anchors
    player_party = [
        {"id": "char-1", "name": "Inquisitor"},
        {"id": "char-2", "name": "Guardsman"},
    ]
    deployed_party = {}
    for i, char in enumerate(player_party):
        anchor = board.entry_anchors[i % len(board.entry_anchors)]
        deployed_party[char["id"]] = {
            **char,
            "position": {"x": anchor["x"], "y": anchor["y"]},
        }
        tile = board.get_tile(anchor["x"], anchor["y"])
        assert tile is not None
        assert tile.walkable is True

    assert deployed_party["char-1"]["position"] == board.entry_anchors[0]
    assert deployed_party["char-2"]["position"] == board.entry_anchors[1]


def test_interactive_hazard_and_trigger_synthesis() -> None:
    manifest = parse_quest_text(SAMPLE_QUEST)
    board = synthesize_board(manifest)
    assert len(board.triggers) == 2

    trap_trigger = [t for t in board.triggers.values() if t.kind == "trap"][0]
    assert trap_trigger.test_requirement["rule"] == "awareness"
    assert trap_trigger.test_requirement["dc"] == 15

    # Simulate stepping on trigger
    step_pos = trap_trigger.position
    triggered = [
        t for t in board.triggers.values()
        if t.position["x"] == step_pos["x"] and t.position["y"] == step_pos["y"]
    ]
    assert len(triggered) == 1
    assert triggered[0].kind == "trap"
