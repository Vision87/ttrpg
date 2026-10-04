from rules.evaluator import evaluate_formula


def test_formula_is_deterministic_and_explainable() -> None:
    first = evaluate_formula("1d20 + strength_modifier + 2", {"strength_modifier": 3}, seed=7)
    second = evaluate_formula("1d20 + strength_modifier + 2", {"strength_modifier": 3}, seed=7)
    assert first == second
    assert first.total == 16
    assert [item.source for item in first.contributions] == [
        "1d20 (11)",
        "strength_modifier",
    ]


def test_unsafe_formula_is_rejected() -> None:
    try:
        evaluate_formula("__import__('os').system('true')", {}, seed=1)
    except Exception as error:
        assert "unsupported" in str(error).lower() or "invalid" in str(error).lower()
    else:
        raise AssertionError("expected formula error")


def test_dynamic_system_stat_evaluation() -> None:
    from rules.stat_evaluator import evaluate_stats
    from character.model import Character

    # 1. D&D d20 character stats
    dnd_stats = {
        "strength": 16,
        "dexterity": 14,
        "constitution": 12,
        "hit_die": 10,
        "armor_bonus": 4,
    }
    dnd_derived = evaluate_stats(dnd_stats, system_hint="dnd35")
    assert dnd_derived["strength_modifier"]["value"] == 3
    assert dnd_derived["dexterity_modifier"]["value"] == 2
    assert dnd_derived["constitution_modifier"]["value"] == 1
    assert dnd_derived["hit_points"]["value"] == 11  # 10 + 1
    assert dnd_derived["armor_class"]["value"] == 16  # 10 + 2 + 4

    # 2. Dark Heresy d100 character stats
    dh_stats = {
        "weapon_skill": 32,
        "ballistic_skill": 38,
        "toughness": 42,
        "agility": 35,
        "starting_wounds": 10,
        "fate_points": 3,
    }
    dh_derived = evaluate_stats(dh_stats, system_hint="dark_heresy")
    assert dh_derived["ballistic_skill_bonus"]["value"] == 3
    assert dh_derived["toughness_bonus"]["value"] == 4
    assert dh_derived["wounds"]["value"] == 14  # 10 + 4
    assert dh_derived["fate_points"]["value"] == 3
    assert dh_derived["fatigue_threshold"]["value"] == 4

    # 3. Test through Character model
    dh_char = Character(
        character_id="char-dh-1",
        name="Inquisitorial Acolyte",
        package_versions={"dark-heresy-core": "1.0.0"},
        abilities=dh_stats,
    )
    dh_char.recalculate()
    assert dh_char.derived["wounds"]["value"] == 14
    assert dh_char.derived["toughness_bonus"]["value"] == 4

