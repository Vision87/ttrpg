"""Unit tests for pluggable action and test resolution pipeline."""

from rules.resolution import ActionResolver, Modifier, apply_modifier_stacking


def test_d20_resolution_and_modifier_stacking() -> None:
    resolver = ActionResolver(dice_model="d20_roll_high")
    mods = [
        Modifier(source="Bless", value=1, kind="morale"),
        Modifier(source="Heroism", value=2, kind="morale"),  # Should take max morale (2)
        Modifier(source="Flank", value=2, kind="circumstance"),  # Should stack
    ]
    # base bonus 5, DC 15, forced roll 10 -> total = 10 + 5 + (2 + 2) = 19 >= 15 (success)
    result = resolver.resolve_test(base_value=5, target_value=15, modifiers=mods, forced_roll=10)
    assert result.is_success is True
    assert result.total == 19
    assert result.degrees_of_success == 0  # (19 - 15) // 5 = 0
    assert result.is_critical_success is False

    # Test critical success on natural 20
    crit_result = resolver.resolve_test(base_value=0, target_value=30, forced_roll=20)
    assert crit_result.is_success is True
    assert crit_result.is_critical_success is True

    # Test critical failure on natural 1
    fumble_result = resolver.resolve_test(base_value=25, target_value=10, forced_roll=1)
    assert fumble_result.is_success is False
    assert fumble_result.is_critical_failure is True


def test_d100_roll_under_and_degrees_of_success() -> None:
    resolver = ActionResolver(dice_model="d100_roll_under")
    # Dark Heresy: Ballistic Skill 40, +10 for Aim, +10 for Short Range -> Effective Target = 60
    mods = [
        Modifier(source="Aim", value=10, kind="untyped"),
        Modifier(source="Short Range", value=10, kind="untyped"),
    ]
    
    # Roll 25 <= 60 -> Success, DoS = (60 - 25) // 10 = 3
    result = resolver.resolve_test(base_value=40, target_value=0, modifiers=mods, forced_roll=25)
    assert result.is_success is True
    assert result.target == 60
    assert result.degrees_of_success == 3
    assert result.degrees_of_failure == 0

    # Roll 75 > 60 -> Failure, DoF = (75 - 60) // 10 = 1
    fail_result = resolver.resolve_test(base_value=40, target_value=0, modifiers=mods, forced_roll=75)
    assert fail_result.is_success is False
    assert fail_result.degrees_of_failure == 1
    assert fail_result.degrees_of_success == 0

    # Critical failure on 99
    crit_fail = resolver.resolve_test(base_value=90, target_value=0, forced_roll=99)
    assert crit_fail.is_critical_failure is True
    assert crit_fail.is_success is False


def test_dice_pool_resolution() -> None:
    resolver = ActionResolver(dice_model="dice_pool", config={"hit_target": 5})
    # Pool size 6, threshold 3 hits, forced roll 5 (each die hits)
    result = resolver.resolve_test(base_value=6, target_value=3, forced_roll=5)
    assert result.is_success is True
    assert result.total == 6  # 6 hits
    assert result.degrees_of_success == 3  # 6 - 3 = 3
