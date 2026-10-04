"""Synthesizer that converts Intermediate Scene Manifests (ISM) into concrete board topologies."""

from __future__ import annotations

from typing import Any

from quest.model import (
    IntermediateSceneManifest,
    SynthesizedBoard,
    Tile,
)


def synthesize_board(
    manifest: IntermediateSceneManifest,
    ruleset_definitions: dict[str, dict[str, Any]] | None = None,
) -> SynthesizedBoard:
    """Transform an IntermediateSceneManifest into a concrete tactical board."""
    defs = ruleset_definitions or {}
    tiles: dict[str, Tile] = {}
    light_zones: dict[str, str] = {}
    board_entities: dict[str, dict[str, Any]] = {}
    triggers: dict[str, Any] = {}

    max_x = 0
    max_y = 0

    # 1. Synthesize tiles for each room
    for room in manifest.rooms:
        r_x = room.origin_x
        r_y = room.origin_y
        w = room.width
        h = room.height

        max_x = max(max_x, r_x + w)
        max_y = max(max_y, r_y + h)

        for x in range(r_x, r_x + w):
            for y in range(r_y, r_y + h):
                # Border tiles become walls
                is_wall = (x == r_x or x == r_x + w - 1 or y == r_y or y == r_y + h - 1)
                
                # Check if this border coordinate is an entry point or door connecting rooms
                is_door = any(ep.get("x") == x and ep.get("y") == y for ep in manifest.entry_points)
                if is_door:
                    is_wall = False

                tile_key = f"{x},{y}"
                tiles[tile_key] = Tile(
                    x=x,
                    y=y,
                    terrain="stone_wall" if is_wall else room.terrain,
                    walkable=not is_wall,
                    elevation=0,
                    blocks_vision=is_wall,
                    light_level=room.ambient_light,
                    cover="full" if is_wall else "none",
                )
                light_zones[tile_key] = room.ambient_light

    # Connect consecutive rooms with a walkable corridor if needed
    for i in range(len(manifest.rooms) - 1):
        r1 = manifest.rooms[i]
        r2 = manifest.rooms[i + 1]
        
        # Corridor from r1 right border to r2 left border
        c_y = r1.origin_y + r1.height // 2
        start_x = r1.origin_x + r1.width - 1
        end_x = r2.origin_x

        for cx in range(min(start_x, end_x), max(start_x, end_x) + 1):
            key = f"{cx},{c_y}"
            tiles[key] = Tile(
                x=cx,
                y=c_y,
                terrain="stone_floor",
                walkable=True,
                elevation=0,
                blocks_vision=False,
                light_level="dim",
            )
            light_zones[key] = "dim"

    # 2. Synthesize NPC and Monster entities
    for entity in manifest.entities:
        def_data = defs.get(entity.definition_ref or "", {})
        hit_points = def_data.get("wounds") or def_data.get("hit_die", 10)
        armor = def_data.get("armor", 0)

        # Entity record compatible with session runtime
        board_entities[entity.entity_id] = {
            "id": entity.entity_id,
            "name": entity.name,
            "kind": entity.kind,
            "position": dict(entity.position),
            "hit_points": hit_points,
            "armor": armor,
            "definition_ref": entity.definition_ref,
            "ruleset_system": entity.ruleset_system,
            "stats": {**def_data, **entity.stats_override},
        }

    # 3. Synthesize interactive triggers and hazards
    for trigger in manifest.triggers:
        triggers[trigger.trigger_id] = trigger

    # 4. Entry anchors
    entry_anchors = [dict(ep) for ep in manifest.entry_points]

    return SynthesizedBoard(
        board_id=f"board-{manifest.quest_id}",
        width=max_x,
        height=max_y,
        tiles=tiles,
        entities=board_entities,
        triggers=triggers,
        entry_anchors=entry_anchors,
        light_zones=light_zones,
    )
