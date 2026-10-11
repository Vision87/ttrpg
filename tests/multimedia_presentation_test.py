"""Unit tests for multimedia presentation, token animations, spatial audio, and visual FX."""

from clients.presentation import (
    PresentationEventRegistry,
    SpatialAudioManager,
    TokenAnimationAdapter,
    VisualFXManager,
)


def test_presentation_event_mapping_registry() -> None:
    registry = PresentationEventRegistry({
        "audio:weapon_hit": "sfx:heavy_slash",
        "fx:hit_spark": "fx:blood_splatter",
    })

    entities = {
        "hero": {"id": "hero", "position": {"x": 2, "y": 3}, "hit_points": 25},
        "goblin": {"id": "goblin", "position": {"x": 3, "y": 3}, "hit_points": 5},
    }

    # 1. Non-lethal attack event
    event = {
        "id": "event-att-1",
        "type": "damage",
        "actor_id": "hero",
        "target_id": "goblin",
        "amount": 3,
    }
    cues = registry.translate_event(event, entities)
    assert cues.event_id == "event-att-1"
    assert len(cues.animation_cues) == 2
    assert cues.animation_cues[0]["clip"] == "attack"
    assert cues.animation_cues[1]["clip"] == "hurt"
    assert cues.audio_cues[0]["sound_ref"] == "sfx:heavy_slash"
    assert cues.fx_cues[0]["particle_ref"] == "fx:blood_splatter"

    # 2. Lethal attack event -> target receives "down" animation
    lethal_event = {
        "id": "event-att-2",
        "type": "damage",
        "actor_id": "hero",
        "target_id": "goblin",
        "amount": 10,
    }
    lethal_cues = registry.translate_event(lethal_event, entities)
    assert lethal_cues.animation_cues[1]["clip"] == "down"

    # 3. Fallback when asset mapping is missing
    empty_registry = PresentationEventRegistry()
    fallback_cues = empty_registry.translate_event(event, entities)
    assert fallback_cues.audio_cues[0]["sound_ref"] == "sfx:hit_impact"


def test_token_animation_state_machine_transitions() -> None:
    adapter = TokenAnimationAdapter("idle")
    assert adapter.current_state == "idle"

    # Move traversal: idle -> walk -> idle on arrival
    adapter.handle_event("move", {"arrival": False})
    assert adapter.current_state == "walk"
    adapter.transition("idle")
    assert adapter.current_state == "idle"

    # Attack: returns to idle
    adapter.handle_event("attack")
    assert adapter.current_state == "idle"

    # Hurt: non-incapacitated
    adapter.handle_event("damage", {"incapacitated": False})
    assert adapter.current_state == "idle"

    # Down: lethal damage locks state
    adapter.handle_event("damage", {"incapacitated": True})
    assert adapter.current_state == "down"

    # Cannot walk while down
    adapter.transition("walk")
    assert adapter.current_state == "down"

    # Revive resets to idle
    adapter.handle_event("revive")
    assert adapter.current_state == "idle"


def test_spatial_3d_audio_and_ambient_soundscapes() -> None:
    listener = {"x": 5.0, "y": 5.0}

    # Close sound
    close_sound = {"x": 7.0, "y": 5.0}
    close_res = SpatialAudioManager.calculate_spatial_playback(listener, close_sound, max_radius=20.0)
    assert close_res["is_audible"] is True
    assert close_res["volume"] > 0.8
    assert close_res["pan"] > 0.0  # to the right

    # Distant sound beyond max radius
    far_sound = {"x": 30.0, "y": 5.0}
    far_res = SpatialAudioManager.calculate_spatial_playback(listener, far_sound, max_radius=20.0)
    assert far_res["is_audible"] is False
    assert far_res["volume"] == 0.0

    # Ambient soundscapes
    dungeon_amb = SpatialAudioManager.configure_ambient_soundscape("crypt", combat_active=False)
    assert dungeon_amb["track"] == "ambient:dungeon_drips_and_wind"

    combat_amb = SpatialAudioManager.configure_ambient_soundscape("crypt", combat_active=True)
    assert combat_amb["track"] == "ambient:combat_tension_loop"


def test_visual_fx_particle_and_aoe_bounds() -> None:
    # Projectile
    proj = VisualFXManager.create_projectile_fx(
        origin={"x": 1, "y": 1},
        destination={"x": 5, "y": 4},
        fx_type="firebolt",
        speed=10.0,
    )
    assert proj["fx_category"] == "projectile"
    assert proj["distance"] == 5.0
    assert proj["duration"] == 0.5
    assert proj["trail_particle"] == "fx:trail_firebolt"

    # AOE bounds (3x3 circular blast)
    aoe = VisualFXManager.create_aoe_boundary_fx(
        center={"x": 10, "y": 10},
        radius_tiles=1,
        fx_type="explosion",
    )
    assert aoe["fx_category"] == "aoe"
    assert len(aoe["affected_tiles"]) == 5  # center + 4 cardinal adjacent tiles
    assert aoe["particle_burst"] == "fx:burst_explosion"
