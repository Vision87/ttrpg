"""Parser for narrative text quests into Intermediate Scene Manifests (ISM)."""

from __future__ import annotations

import re
from typing import Any

from quest.model import (
    IntermediateSceneManifest,
    SceneEntity,
    SceneRoom,
    SceneTrigger,
)


def parse_quest_text(text: str, default_system: str = "dnd35") -> IntermediateSceneManifest:
    """Parse adventure quest text into an Intermediate Scene Manifest."""
    lines = text.strip().splitlines()
    title = "Untitled Quest"
    system_hint = default_system
    description_lines: list[str] = []
    rooms: list[SceneRoom] = []
    entities: list[SceneEntity] = []
    triggers: list[SceneTrigger] = []
    entry_points: list[dict[str, int]] = []

    current_room: SceneRoom | None = None
    in_header = True

    # Room offset tracker to layout rooms side-by-side or stacked
    current_x_offset = 0

    for line in lines:
        stripped = line.strip()
        if not stripped:
            continue

        # Quest title
        if stripped.startswith("# Quest:"):
            title = stripped[len("# Quest:"):].strip()
            continue
        elif stripped.startswith("# "):
            title = stripped[2:].strip()
            continue

        # System hint
        if stripped.lower().startswith("system:"):
            system_hint = stripped.split(":", 1)[1].strip()
            continue

        # Area / Room declaration
        if stripped.startswith("## Area ") or stripped.startswith("## Room ") or stripped.startswith("## "):
            in_header = False
            raw_title = stripped.lstrip("#").strip()
            room_id = f"room-{len(rooms) + 1}"
            
            # If previous room existed, advance offset
            if current_room:
                current_x_offset += current_room.width + 2

            current_room = SceneRoom(
                room_id=room_id,
                name=raw_title,
                width=8,
                height=8,
                origin_x=current_x_offset,
                origin_y=0,
                terrain="stone_floor",
                ambient_light="bright",
            )
            rooms.append(current_room)
            continue

        if in_header:
            description_lines.append(stripped)
            continue

        if current_room is None:
            continue

        # Room attributes
        dim_match = re.search(r"Dimensions:\s*(\d+)\s*x\s*(\d+)", stripped, re.IGNORECASE)
        if dim_match:
            current_room.width = int(dim_match.group(1))
            current_room.height = int(dim_match.group(2))
            continue

        terrain_match = re.search(r"Terrain:\s*([\w_]+)", stripped, re.IGNORECASE)
        if terrain_match:
            current_room.terrain = terrain_match.group(1)
            continue

        light_match = re.search(r"Light:\s*([\w_]+)", stripped, re.IGNORECASE)
        if light_match:
            current_room.ambient_light = light_match.group(1)
            continue

        entry_match = re.findall(r"\(\s*(\d+)\s*,\s*(\d+)\s*\)", stripped)
        if "entry" in stripped.lower() and entry_match:
            for x_s, y_s in entry_match:
                abs_x = current_room.origin_x + int(x_s)
                abs_y = current_room.origin_y + int(y_s)
                entry_points.append({"x": abs_x, "y": abs_y})
            continue

        # Traps / Triggers
        if any(keyword in stripped.lower() for keyword in ("trap", "secret door", "trigger", "hazard")):
            coord_match = re.search(r"\(\s*(\d+)\s*,\s*(\d+)\s*\)", stripped)
            trigger_pos = {"x": current_room.origin_x + 1, "y": current_room.origin_y + 1}
            if coord_match:
                trigger_pos = {
                    "x": current_room.origin_x + int(coord_match.group(1)),
                    "y": current_room.origin_y + int(coord_match.group(2)),
                }

            # Extract test requirements
            test_req: dict[str, Any] = {}
            test_match = re.search(r"test:\s*(\w+)\s*(?:dc|target)?\s*(\d+)?", stripped, re.IGNORECASE)
            if test_match:
                skill_rule = test_match.group(1).lower()
                dc_val = int(test_match.group(2)) if test_match.group(2) else 15
                test_req = {"rule": skill_rule, "dc": dc_val}

            kind = "trap" if "trap" in stripped.lower() else "secret_door" if "secret" in stripped.lower() else "hazard"
            triggers.append(
                SceneTrigger(
                    trigger_id=f"trigger-{len(triggers) + 1}",
                    name=f"{kind.replace('_', ' ').capitalize()} in {current_room.name}",
                    kind=kind,
                    position=trigger_pos,
                    test_requirement=test_req,
                    effect={"description": stripped},
                )
            )
            continue

        # Encounters / Monsters
        encounter_match = re.search(
            r"[-*]?\s*(?:(\d+)\s+)?([\w\s]+?)\s+at\s+\(\s*(\d+)\s*,\s*(\d+)\s*\)(?:.*?definition\s+([\w\.\-]+))?",
            stripped,
            re.IGNORECASE,
        )
        if encounter_match:
            count = int(encounter_match.group(1) or 1)
            monster_name = encounter_match.group(2).strip()
            local_x = int(encounter_match.group(3))
            local_y = int(encounter_match.group(4))
            def_ref = encounter_match.group(5) or (
                "monster.cultist" if "cultist" in monster_name.lower()
                else "monster.goblin" if "goblin" in monster_name.lower()
                else f"monster.{monster_name.lower().replace(' ', '_')}"
            )

            for i in range(count):
                entities.append(
                    SceneEntity(
                        entity_id=f"npc-{len(entities) + 1}",
                        name=f"{monster_name} {i+1}" if count > 1 else monster_name,
                        kind="monster",
                        position={
                            "x": current_room.origin_x + local_x + i,
                            "y": current_room.origin_y + local_y,
                        },
                        definition_ref=def_ref,
                        ruleset_system=system_hint,
                    )
                )
            continue

    # Default entry point if none specified
    if not entry_points and rooms:
        entry_points.append({"x": rooms[0].origin_x + 1, "y": rooms[0].origin_y + 1})

    return IntermediateSceneManifest(
        quest_id=f"quest-{re.sub(r'[^a-zA-Z0-9]+', '-', title).lower().strip('-')}",
        title=title,
        system_hint=system_hint,
        description=" ".join(description_lines),
        rooms=rooms,
        entities=entities,
        triggers=triggers,
        entry_points=entry_points,
    )
