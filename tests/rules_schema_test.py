from rules.schema import DefinitionValidationError, validate_definition, validate_ruleset_package


def test_representative_definition_validates() -> None:
    validate_definition(
        {
            "id": "feat.power-attack",
            "type": "feat",
            "prerequisites": [{"rule": "strength", "minimum": 13}],
            "modifiers": [
                {"target": "attack_roll", "formula": "-choice.penalty"},
                {"target": "melee_damage", "formula": "choice.penalty"},
            ],
            "triggers": [
                {"event": "AttackDeclared", "effects": [{"type": "choice"}]}
            ],
        }
    )


def test_invalid_definition_reports_field() -> None:
    try:
        validate_definition({"id": "bad", "type": "feat", "modifiers": "invalid"})
    except DefinitionValidationError as error:
        assert "modifiers" in str(error)
    else:
        raise AssertionError("expected schema validation error")


def test_generalized_ruleset_package_dice_models() -> None:
    # d100 roll under package
    d100_package = {
        "id": "dark-heresy-core",
        "version": "1.0.0",
        "dice_model": "d100_roll_under",
        "definitions": {
            "characteristic.ballistic_skill": {
                "id": "characteristic.ballistic_skill",
                "type": "characteristic",
            },
            "talent.marksman": {
                "id": "talent.marksman",
                "type": "talent",
                "prerequisites": [{"rule": "ballistic_skill", "minimum": 35}],
            },
        },
    }
    validate_ruleset_package(d100_package)

    # d20 roll high package
    d20_package = {
        "id": "dnd35-core",
        "version": "1.0.0",
        "dice_model": "d20_roll_high",
        "definitions": {
            "ability.strength": {
                "id": "ability.strength",
                "type": "ability",
            }
        },
    }
    validate_ruleset_package(d20_package)

    # dice pool package
    pool_package = {
        "id": "shadowrun-core",
        "version": "1.0.0",
        "dice_model": "dice_pool",
        "definitions": {
            "mechanic.pool": {
                "id": "mechanic.pool",
                "type": "mechanic",
                "dice_model": "dice_pool",
            }
        },
    }
    validate_ruleset_package(pool_package)


def test_invalid_dice_model_rejected() -> None:
    bad_package = {
        "id": "unknown-system",
        "version": "1.0.0",
        "dice_model": "invalid_dice_model",
        "definitions": {},
    }
    try:
        validate_ruleset_package(bad_package)
    except DefinitionValidationError as error:
        assert "Unsupported dice model" in str(error)
    else:
        raise AssertionError("expected unsupported dice model error")

