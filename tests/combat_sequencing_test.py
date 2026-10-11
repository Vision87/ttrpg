"""Unit tests for universal combat round, turn order, and initiative tracking."""

from session.runtime import GMController, PlayerController, Session


def test_universal_initiative_sorting_and_turn_progression() -> None:
    session = Session(
        "session-combat",
        entities={
            "rogue": {"name": "Rogue", "position": {"x": 1, "y": 1}},
            "orc": {"name": "Orc Warrior", "position": {"x": 4, "y": 4}},
            "cleric": {"name": "Cleric", "position": {"x": 1, "y": 2}},
        },
    )
    gm = GMController("gm-1")
    p_rogue = PlayerController("p-rogue", entity_ids={"rogue"})
    p_cleric = PlayerController("p-cleric", entity_ids={"cleric"})
    session.assign(gm)
    session.assign(p_rogue)
    session.assign(p_cleric)

    # Start combat with d20 / d100 style rolls:
    # rogue rolled 21, orc rolled 15, cleric rolled 10
    start_res = session.submit(
        "gm-1",
        {
            "idempotency_key": "combat-start-1",
            "type": "start_combat",
            "combatants": [
                {"entity_id": "cleric", "score": 10},
                {"entity_id": "rogue", "score": 21},
                {"entity_id": "orc", "score": 15},
            ],
        },
    )
    assert start_res["accepted"] is True
    assert start_res["event"]["round"] == 1
    assert start_res["event"]["turn_order"] == ["rogue", "orc", "cleric"]
    assert start_res["event"]["active_entity"] == "rogue"

    # Rogue takes an action: spends standard action
    action_res = session.submit(
        "p-rogue",
        {
            "idempotency_key": "rogue-act-1",
            "type": "use_action",
            "actor_id": "rogue",
            "action_name": "standard_action",
            "amount": 1,
        },
    )
    assert action_res["accepted"] is True
    assert action_res["event"]["remaining_pool"]["standard_action"] == 0

    # Cleric tries to act out of turn -> rejected
    out_of_turn = session.submit(
        "p-cleric",
        {
            "idempotency_key": "cleric-act-early",
            "type": "use_action",
            "actor_id": "cleric",
            "action_name": "standard_action",
            "amount": 1,
        },
    )
    assert out_of_turn["accepted"] is False
    assert out_of_turn["event"]["code"] == "not-active-turn"

    # Rogue ends turn -> advances to Orc
    end_rogue = session.submit(
        "p-rogue",
        {
            "idempotency_key": "rogue-end-1",
            "type": "end_turn",
            "actor_id": "rogue",
        },
    )
    assert end_rogue["accepted"] is True
    assert end_rogue["event"]["active_entity"] == "orc"
    assert end_rogue["event"]["round"] == 1
    assert end_rogue["event"]["action_pool"]["standard_action"] == 1  # fresh action pool

    # GM ends Orc turn -> advances to Cleric
    end_orc = session.submit(
        "gm-1",
        {
            "idempotency_key": "orc-end-1",
            "type": "end_turn",
            "actor_id": "orc",
        },
    )
    assert end_orc["accepted"] is True
    assert end_orc["event"]["active_entity"] == "cleric"
    assert end_orc["event"]["round"] == 1

    # Cleric ends turn -> advances to Round 2, rogue is active again with refreshed pool
    end_cleric = session.submit(
        "p-cleric",
        {
            "idempotency_key": "cleric-end-1",
            "type": "end_turn",
            "actor_id": "cleric",
        },
    )
    assert end_cleric["accepted"] is True
    assert end_cleric["event"]["active_entity"] == "rogue"
    assert end_cleric["event"]["round"] == 2
    assert end_cleric["event"]["new_round"] is True
    assert end_cleric["event"]["action_pool"]["standard_action"] == 1
