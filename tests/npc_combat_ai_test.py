"""Unit tests for reactive tactical NPC AI behaviors in solo mode encounters."""

from session.runtime import AutonomousDirectorController, Session
from session.tactical_ai import ReactiveTacticalAI


def test_npc_melee_movement_and_attack_turn() -> None:
    session = Session(
        "session-ai",
        entities={
            "hero": {
                "name": "Fighter",
                "kind": "player",
                "position": {"x": 2, "y": 5},
                "hit_points": 20,
            },
            "goblin": {
                "name": "Goblin Raider",
                "kind": "monster",
                "position": {"x": 5, "y": 5},
                "combat_role": "melee",
                "attack_range": 1,
                "move_budget": 3,
                "attack_damage": 6,
            },
        },
    )
    director = AutonomousDirectorController("dir-1")
    session.assign(director)

    # Start combat
    session.submit(
        "dir-1",
        {
            "idempotency_key": "ai-combat-init",
            "type": "start_combat",
            "combatants": [
                {"entity_id": "goblin", "score": 18},
                {"entity_id": "hero", "score": 12},
            ],
        },
    )
    assert session.initiative.current_actor().entity_id == "goblin"

    # Execute automated NPC turn
    decision = ReactiveTacticalAI.execute_turn(
        session=session,
        npc_id="goblin",
        controller_id="dir-1",
        idempotency_prefix="turn-1",
    )

    # Goblin should move adjacent to hero (x=3, y=5) and attack
    assert decision.target_id == "hero"
    assert decision.chosen_action == "move_and_attack"
    assert decision.destination == {"x": 3, "y": 5}
    assert decision.damage_dealt == 6

    # Verify hero took 6 damage
    assert session.entities["hero"]["hit_points"] == 14
    assert session.entities["goblin"]["position"] == {"x": 3, "y": 5}

    # Verify turn advanced in initiative
    assert session.initiative.current_actor().entity_id == "hero"


def test_npc_ranged_attack_without_closing_distance() -> None:
    session = Session(
        "session-ranged-ai",
        entities={
            "hero": {
                "name": "Paladin",
                "kind": "player",
                "position": {"x": 1, "y": 1},
                "hit_points": 25,
            },
            "archer": {
                "name": "Skeleton Archer",
                "kind": "monster",
                "position": {"x": 4, "y": 1},
                "combat_role": "ranged",
                "attack_range": 5,
                "attack_damage": 5,
            },
        },
    )
    director = AutonomousDirectorController("dir-1")
    session.assign(director)

    decision = ReactiveTacticalAI.execute_turn(
        session=session,
        npc_id="archer",
        controller_id="dir-1",
        idempotency_prefix="turn-ranged",
    )

    # Already within range 5 (distance is 3), so directly attacks without moving
    assert decision.target_id == "hero"
    assert decision.chosen_action == "attack"
    assert session.entities["hero"]["hit_points"] == 20
    assert session.entities["archer"]["position"] == {"x": 4, "y": 1}
