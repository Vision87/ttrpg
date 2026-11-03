from copy import deepcopy

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


def test_equipment_shop_package_validates_currency_wealth_and_items() -> None:
    package = {
        "id": "equipment-test",
        "version": "1.0.0",
        "equipment_shop": {
            "currency": {
                "id": "gold",
                "name": "Gold Piece",
                "abbreviation": "gp",
            },
            "wealth_definition_type": "class",
            "data_status": "verified",
            "source_references": ["https://rules.example.test/equipment"],
            "encumbrance": {
                "attribute": "strength",
                "weight_unit": "lb",
                "capacity_by_attribute": {"10": 33},
            },
        },
        "definitions": {
            "class.fighter": {
                "id": "class.fighter",
                "type": "class",
                "name": "Fighter",
                "equipment_proficiencies": ["simple", "martial"],
                "starting_wealth": {
                    "dice_count": 4,
                    "die_sides": 4,
                    "multiplier": 10,
                },
            },
            "item.sword": {
                "id": "item.sword",
                "type": "item",
                "name": "Sword",
                "description": "A simple sword.",
                "cost": 15,
                "weight": 4,
                "proficiency": "martial",
                "equipment_slots": ["main_hand", "off_hand"],
                "image_asset": "item.sword@1",
                "source_reference": "https://rules.example.test/sword",
            },
        },
    }
    validate_ruleset_package(package)

    invalid_package = {
        **package,
        "definitions": {
            key: dict(value) for key, value in package["definitions"].items()
        },
    }
    invalid_package["definitions"]["item.sword"]["image_asset"] = (
        "https://example.test/sword.png"
    )
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "local asset reference" in str(error)
    else:
        raise AssertionError("expected remote item artwork reference rejection")

    invalid_package = {
        **package,
        "definitions": {
            key: dict(value) for key, value in package["definitions"].items()
        },
    }
    invalid_package["definitions"]["item.sword"]["source_reference"] = (
        "file:///sword"
    )
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "source_reference must be an HTTPS URL" in str(error)
    else:
        raise AssertionError("expected invalid item source reference rejection")

    invalid_package = {
        **package,
        "definitions": {
            key: dict(value) for key, value in package["definitions"].items()
        },
    }
    invalid_package["definitions"]["item.sword"]["details"] = [
        {"label": "Damage", "value": ""}
    ]
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "details must contain label/value string pairs" in str(error)
    else:
        raise AssertionError("expected invalid item detail rejection")

    invalid_package = {
        **package,
        "definitions": {
            key: dict(value) for key, value in package["definitions"].items()
        },
    }
    invalid_package["definitions"]["class.fighter"].pop("starting_wealth")
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "starting_wealth" in str(error)
    else:
        raise AssertionError("expected missing starting wealth rejection")

    invalid_package = {
        **package,
        "definitions": {
            key: dict(value) for key, value in package["definitions"].items()
        },
    }
    invalid_package["definitions"]["item.sword"]["cost"] = -1
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "cost must be a non-negative number" in str(error)
    else:
        raise AssertionError("expected invalid item cost rejection")

    invalid_package = {
        **package,
        "definitions": {
            key: dict(value) for key, value in package["definitions"].items()
        },
    }
    invalid_package["definitions"]["item.sword"].pop("weight")
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "weight must be a non-negative number" in str(error)
    else:
        raise AssertionError("expected missing item weight rejection")

    invalid_package = deepcopy(package)
    invalid_package["equipment_shop"]["encumbrance"]["capacity_multiplier"] = 2
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "exactly one of capacity_by_attribute or capacity_multiplier" in str(error)
    else:
        raise AssertionError("expected ambiguous encumbrance rule rejection")

    invalid_package = {
        **package,
        "definitions": {
            key: dict(value) for key, value in package["definitions"].items()
        },
    }
    invalid_package["definitions"]["item.sword"]["proficiency"] = "exotic"
    try:
        validate_ruleset_package(invalid_package)
    except DefinitionValidationError as error:
        assert "declared equipment proficiency group" in str(error)
    else:
        raise AssertionError("expected undeclared proficiency rejection")

    denominated_package = deepcopy(package)
    denominated_package["equipment_shop"]["currency"].update(
        {
            "base_unit": "cp",
            "denominations": [
                {"id": "gp", "name": "Gold Piece", "abbreviation": "gp", "value": 100},
                {"id": "sp", "name": "Silver Piece", "abbreviation": "sp", "value": 10},
                {"id": "cp", "name": "Copper Piece", "abbreviation": "cp", "value": 1},
            ],
        }
    )
    validate_ruleset_package(denominated_package)

    denominated_package["equipment_shop"]["currency"]["denominations"][1]["value"] = 100
    try:
        validate_ruleset_package(denominated_package)
    except DefinitionValidationError as error:
        assert "descending order" in str(error)
    else:
        raise AssertionError("expected invalid denomination ordering rejection")

    carried_only_package = deepcopy(package)
    carried_only_package["definitions"]["item.sword"]["equipment_slots"] = []
    validate_ruleset_package(carried_only_package)


def test_equipment_shop_requires_provenance_for_verified_and_provisional_data() -> None:
    package = {
        "id": "equipment-test",
        "version": "1.0.0",
        "equipment_shop": {
            "currency": {
                "id": "throne",
                "name": "Throne",
                "abbreviation": "Thrones",
            },
            "wealth_definition_type": "career",
            "data_status": "provisional",
            "encumbrance": {
                "attribute": "strength",
                "weight_unit": "kg",
                "capacity_multiplier": 2,
            },
        },
        "definitions": {
            "career.guard": {
                "id": "career.guard",
                "type": "career",
                "equipment_proficiencies": ["basic_ranged"],
                "starting_wealth": {
                    "dice_count": 1,
                    "die_sides": 10,
                    "multiplier": 10,
                },
            },
            "item.weapon": {
                "id": "item.weapon",
                "type": "item",
                "name": "Weapon",
                "description": "A provisional item.",
                "cost": 1,
                "weight": 1,
                "proficiency": "basic_ranged",
                "equipment_slots": ["main_hand"],
            },
        },
    }
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "data_note" in str(error)
    else:
        raise AssertionError("expected provisional data note requirement")

    package["equipment_shop"]["data_note"] = "Values require verification."
    validate_ruleset_package(package)
