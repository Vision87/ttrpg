from character.model import Character


def test_derived_values_recalculate_from_explicit_choices() -> None:
    character = Character(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0"},
        {"strength": 16, "dexterity": 12, "constitution": 14},
    )
    character.recalculate()
    assert character.derived["strength_modifier"]["value"] == 3
    character.abilities["strength"] = 18
    character.recalculate()
    assert character.derived["strength_modifier"]["value"] == 4
    assert character.derived["strength_modifier"]["sources"][0]["field"] == "abilities.strength"


def test_presentation_is_separate_from_mechanics() -> None:
    character = Character(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0"},
        {"strength": 10},
        presentation={"model": "model.ash-knight@2"},
    )
    character.recalculate()
    before = character.derived
    character.presentation["model"] = "model.fallback@1"
    assert character.derived == before
