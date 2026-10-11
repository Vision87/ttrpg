"""Unit tests for solo oracle engine, narrative arbitration, and scene progression."""

from session.director import SoloOracleEngine
from session.runtime import AutonomousDirectorController, PlayerController, Session


def test_oracle_determines_probabilistic_narrative_outcomes() -> None:
    oracle = SoloOracleEngine(chaos_factor=5)

    # 1. Exceptional Yes ("yes_and") on low roll
    res_crit_yes = oracle.ask("Is there an escape route?", likelihood="even", roll=5)
    assert res_crit_yes.outcome == "yes_and"
    assert "Yes" in res_crit_yes.answer_text

    # 2. Straight Yes
    res_yes = oracle.ask("Is the door wooden?", likelihood="even", roll=30)
    assert res_yes.outcome == "yes"

    # 3. Straight No
    res_no = oracle.ask("Are the guards asleep?", likelihood="unlikely", roll=60)
    assert res_no.outcome == "no"

    # 4. Exceptional No ("no_and") on high roll
    res_crit_no = oracle.ask("Can we sneak past without noise?", likelihood="unlikely", roll=96)
    assert res_crit_no.outcome == "no_and"

    # 5. Doubles within chaos factor trigger random event twist
    # Roll 22 on chaos factor 5 -> 22 // 11 = 2 <= 5 -> triggers twist
    res_twist = oracle.ask("Is the chest trapped?", likelihood="even", roll=22)
    assert res_twist.twist is not None
    assert "action" in res_twist.twist
    assert "theme" in res_twist.twist


def test_oracle_scene_advancement_and_interruption() -> None:
    oracle = SoloOracleEngine(chaos_factor=5)

    # Roll higher than chaos factor -> expected scene
    normal_scene = oracle.advance_scene("Entering the sanctum", roll=8)
    assert normal_scene["status"] == "expected_scene"
    assert normal_scene["event"] is None

    # Roll at or lower than chaos factor -> altered / interrupted scene
    altered_scene = oracle.advance_scene("Entering the sanctum", roll=3)
    assert altered_scene["status"] == "altered_scene"
    assert altered_scene["event"] is not None
    assert "summary" in altered_scene["event"]


def test_autonomous_director_session_submission() -> None:
    session = Session("solo-session", entities={"solo-hero": {"position": {"x": 1, "y": 1}}})
    director = AutonomousDirectorController("dir-1")
    player = PlayerController("p1", entity_ids={"solo-hero"})
    session.assign(director)
    session.assign(player)

    # Director submits oracle query
    res = session.submit(
        "dir-1",
        {
            "idempotency_key": "oracle-q1",
            "type": "oracle_query",
            "question": "Is the ancient tome legible?",
            "likelihood": "likely",
            "roll": 20,
        },
    )
    assert res["accepted"] is True
    assert res["event"]["result"]["outcome"] in {"yes", "yes_and"}

    # Player cannot submit oracle query
    p_attempt = session.submit(
        "p1",
        {
            "idempotency_key": "player-oracle-fail",
            "type": "oracle_query",
            "question": "Do I find 1000 gold?",
        },
    )
    assert p_attempt["accepted"] is False
    assert p_attempt["event"]["code"] == "controller-not-authorized"
