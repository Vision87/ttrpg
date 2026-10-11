"""Multimedia presentation, animation state machines, spatial audio, and visual FX pipeline."""

from __future__ import annotations

import math
from dataclasses import dataclass, field
from typing import Any


@dataclass
class PresentationCueBundle:
    event_id: str
    animation_cues: list[dict[str, Any]] = field(default_factory=list)
    audio_cues: list[dict[str, Any]] = field(default_factory=list)
    fx_cues: list[dict[str, Any]] = field(default_factory=list)

    def to_dict(self) -> dict[str, Any]:
        return {
            "event_id": self.event_id,
            "animation_cues": list(self.animation_cues),
            "audio_cues": list(self.audio_cues),
            "fx_cues": list(self.fx_cues),
        }


class PresentationEventRegistry:
    """Translates authoritative session events into coordinated audiovisual cues."""

    def __init__(self, asset_mappings: dict[str, str] | None = None) -> None:
        self.asset_mappings = dict(asset_mappings or {})

    def resolve_asset(self, key: str, default: str) -> str:
        return self.asset_mappings.get(key, default)

    def translate_event(
        self,
        event: dict[str, Any],
        entities: dict[str, dict[str, Any]] | None = None,
    ) -> PresentationCueBundle:
        entities = entities or {}
        event_id = event.get("id", "event-unknown")
        event_type = event.get("type", "")
        bundle = PresentationCueBundle(event_id=event_id)

        if event_type == "move":
            actor_id = event.get("actor_id", "")
            pos = event.get("position", {})
            path = event.get("path", [pos])
            bundle.animation_cues.append({
                "entity_id": actor_id,
                "clip": "walk",
                "path": path,
                "duration": 0.3 * max(1, len(path)),
            })
            bundle.audio_cues.append({
                "sound_ref": self.resolve_asset("audio:footsteps", "sfx:footsteps_default"),
                "position": pos,
                "volume": 0.6,
                "spatial": True,
            })

        elif event_type in {"damage", "attack"}:
            actor_id = event.get("actor_id")
            target_id = event.get("target_id")
            amount = event.get("amount", 0)

            actor = entities.get(actor_id, {}) if actor_id else {}
            target = entities.get(target_id, {}) if target_id else {}
            actor_pos = actor.get("position", {})
            target_pos = target.get("position", {})

            if actor_id:
                bundle.animation_cues.append({
                    "entity_id": actor_id,
                    "clip": "attack",
                    "duration": 0.5,
                })

            if target_id:
                target_hp = target.get("hit_points", 10)
                is_down = (target_hp - amount) <= 0
                bundle.animation_cues.append({
                    "entity_id": target_id,
                    "clip": "down" if is_down else "hurt",
                    "duration": 0.4 if not is_down else 1.0,
                })

            bundle.audio_cues.append({
                "sound_ref": self.resolve_asset("audio:weapon_hit", "sfx:hit_impact"),
                "position": target_pos,
                "volume": 0.8,
                "spatial": True,
            })

            bundle.fx_cues.append({
                "particle_ref": self.resolve_asset("fx:hit_spark", "fx:sparks_burst"),
                "position": target_pos,
                "origin": actor_pos,
                "duration": 0.4,
            })

        elif event_type == "spell_cast":
            actor_id = event.get("actor_id")
            target_pos = event.get("target_position", {})
            spell_name = event.get("spell", "generic_spell")
            aoe_radius = event.get("aoe_radius", 0)

            if actor_id:
                bundle.animation_cues.append({
                    "entity_id": actor_id,
                    "clip": "cast",
                    "duration": 0.8,
                })

            bundle.audio_cues.append({
                "sound_ref": self.resolve_asset(f"audio:spell_{spell_name}", "sfx:spell_detonation"),
                "position": target_pos,
                "volume": 1.0,
                "spatial": True,
                "attenuation_radius": 20.0,
            })

            bundle.fx_cues.append({
                "particle_ref": self.resolve_asset(f"fx:spell_{spell_name}", "fx:fire_aoe_burst"),
                "position": target_pos,
                "aoe_radius": aoe_radius,
                "duration": 1.2,
            })

        return bundle


class TokenAnimationAdapter:
    """Maintains token animation state machines (idle, walk, attack, hurt, down)."""

    VALID_STATES = {"idle", "walk", "attack", "hurt", "down"}

    def __init__(self, initial_state: str = "idle") -> None:
        if initial_state not in self.VALID_STATES:
            raise ValueError(f"Invalid initial state: {initial_state}")
        self.current_state = initial_state
        self.state_history: list[str] = [initial_state]

    def transition(self, next_state: str) -> str:
        if next_state not in self.VALID_STATES:
            raise ValueError(f"Unknown animation state: {next_state}")

        # 'down' is terminal until revived/reset
        if self.current_state == "down" and next_state != "idle":
            return self.current_state

        self.current_state = next_state
        self.state_history.append(next_state)
        return self.current_state

    def handle_event(self, event_type: str, context: dict[str, Any] | None = None) -> str:
        context = context or {}
        if event_type == "move":
            self.transition("walk")
            # After traversal completion returns to idle
            if context.get("arrival", True):
                self.transition("idle")
        elif event_type == "attack":
            self.transition("attack")
            self.transition("idle")
        elif event_type == "damage":
            if context.get("incapacitated", False):
                self.transition("down")
            else:
                self.transition("hurt")
                self.transition("idle")
        elif event_type == "revive":
            self.transition("idle")
        return self.current_state


class SpatialAudioManager:
    """Calculates spatial 3D audio attenuation and environmental ambient soundscapes."""

    @staticmethod
    def calculate_spatial_playback(
        listener_pos: dict[str, float],
        sound_pos: dict[str, float],
        max_radius: float = 20.0,
    ) -> dict[str, Any]:
        lx = listener_pos.get("x", 0.0)
        ly = listener_pos.get("y", 0.0)
        sx = sound_pos.get("x", 0.0)
        sy = sound_pos.get("y", 0.0)

        dist = math.hypot(sx - lx, sy - ly)
        if dist > max_radius:
            return {"is_audible": False, "volume": 0.0, "pan": 0.0, "distance": dist}

        # Distance attenuation curve
        volume = max(0.0, 1.0 - (dist / max_radius))
        # Panning (-1.0 left to +1.0 right)
        dx = sx - lx
        pan = max(-1.0, min(1.0, dx / max(1.0, max_radius * 0.5)))

        return {
            "is_audible": True,
            "volume": round(volume, 3),
            "pan": round(pan, 3),
            "distance": round(dist, 2),
        }

    @staticmethod
    def configure_ambient_soundscape(
        scene_type: str,
        combat_active: bool = False,
    ) -> dict[str, Any]:
        """Return the ambient soundscape loop matching scene atmosphere."""
        if combat_active:
            track = "ambient:combat_tension_loop"
        elif scene_type in {"crypt", "dungeon", "catacombs"}:
            track = "ambient:dungeon_drips_and_wind"
        elif scene_type in {"tavern", "town"}:
            track = "ambient:bustling_tavern"
        else:
            track = "ambient:quiet_wilderness"

        return {
            "track": track,
            "loop": True,
            "volume": 0.5,
        }


class VisualFXManager:
    """Manages visual FX particle triggers, projectile paths, and AOE boundaries."""

    @staticmethod
    def create_projectile_fx(
        origin: dict[str, int],
        destination: dict[str, int],
        fx_type: str = "magic_missile",
        speed: float = 12.0,
    ) -> dict[str, Any]:
        dist = math.hypot(destination["x"] - origin["x"], destination["y"] - origin["y"])
        duration = dist / max(1.0, speed)
        return {
            "fx_category": "projectile",
            "fx_type": fx_type,
            "origin": dict(origin),
            "destination": dict(destination),
            "distance": round(dist, 2),
            "duration": round(duration, 3),
            "trail_particle": f"fx:trail_{fx_type}",
        }

    @staticmethod
    def create_aoe_boundary_fx(
        center: dict[str, int],
        radius_tiles: int,
        fx_type: str = "fireball_blast",
    ) -> dict[str, Any]:
        affected_tiles = []
        cx, cy = center["x"], center["y"]
        for x in range(cx - radius_tiles, cx + radius_tiles + 1):
            for y in range(cy - radius_tiles, cy + radius_tiles + 1):
                if math.hypot(x - cx, y - cy) <= radius_tiles:
                    affected_tiles.append({"x": x, "y": y})

        return {
            "fx_category": "aoe",
            "fx_type": fx_type,
            "center": dict(center),
            "radius": radius_tiles,
            "affected_tiles": affected_tiles,
            "particle_burst": f"fx:burst_{fx_type}",
        }
