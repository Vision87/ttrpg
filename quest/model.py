"""Data models for Intermediate Scene Manifests (ISM) and synthesized board topology."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


@dataclass
class Tile:
    x: int
    y: int
    terrain: str = "stone_floor"
    walkable: bool = True
    elevation: int = 0
    blocks_vision: bool = False
    light_level: str = "bright"  # bright, dim, dark
    cover: str = "none"  # none, half, full


@dataclass
class SceneRoom:
    room_id: str
    name: str
    width: int
    height: int
    origin_x: int = 0
    origin_y: int = 0
    terrain: str = "stone_floor"
    description: str = ""
    ambient_light: str = "bright"


@dataclass
class SceneEntity:
    entity_id: str
    name: str
    kind: str  # "monster", "npc", "player_anchor"
    position: dict[str, int] = field(default_factory=lambda: {"x": 0, "y": 0})
    definition_ref: str | None = None  # e.g. "monster.goblin", "monster.cultist"
    ruleset_system: str = "dnd35"
    stats_override: dict[str, Any] = field(default_factory=dict)


@dataclass
class SceneTrigger:
    trigger_id: str
    name: str
    kind: str  # "trap", "secret_door", "ambush", "dialogue"
    position: dict[str, int] = field(default_factory=lambda: {"x": 0, "y": 0})
    test_requirement: dict[str, Any] = field(default_factory=dict)
    effect: dict[str, Any] = field(default_factory=dict)


@dataclass
class IntermediateSceneManifest:
    quest_id: str
    title: str
    system_hint: str = "dnd35"
    description: str = ""
    rooms: list[SceneRoom] = field(default_factory=list)
    entities: list[SceneEntity] = field(default_factory=list)
    triggers: list[SceneTrigger] = field(default_factory=list)
    entry_points: list[dict[str, int]] = field(default_factory=list)

    def to_dict(self) -> dict[str, Any]:
        return {
            "quest_id": self.quest_id,
            "title": self.title,
            "system_hint": self.system_hint,
            "description": self.description,
            "rooms": [
                {
                    "room_id": r.room_id,
                    "name": r.name,
                    "width": r.width,
                    "height": r.height,
                    "origin": {"x": r.origin_x, "y": r.origin_y},
                    "terrain": r.terrain,
                    "description": r.description,
                    "ambient_light": r.ambient_light,
                }
                for r in self.rooms
            ],
            "entities": [
                {
                    "entity_id": e.entity_id,
                    "name": e.name,
                    "kind": e.kind,
                    "position": dict(e.position),
                    "definition_ref": e.definition_ref,
                    "ruleset_system": e.ruleset_system,
                    "stats_override": dict(e.stats_override),
                }
                for e in self.entities
            ],
            "triggers": [
                {
                    "trigger_id": t.trigger_id,
                    "name": t.name,
                    "kind": t.kind,
                    "position": dict(t.position),
                    "test_requirement": dict(t.test_requirement),
                    "effect": dict(t.effect),
                }
                for t in self.triggers
            ],
            "entry_points": [dict(p) for p in self.entry_points],
        }


@dataclass
class SynthesizedBoard:
    board_id: str
    width: int
    height: int
    tiles: dict[str, Tile] = field(default_factory=dict)  # key: "x,y"
    entities: dict[str, dict[str, Any]] = field(default_factory=dict)
    triggers: dict[str, SceneTrigger] = field(default_factory=dict)
    entry_anchors: list[dict[str, int]] = field(default_factory=list)
    light_zones: dict[str, str] = field(default_factory=dict)

    def get_tile(self, x: int, y: int) -> Tile | None:
        return self.tiles.get(f"{x},{y}")
