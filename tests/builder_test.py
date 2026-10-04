from character.builder import CharacterBuilder
from character.templates import CharacterTemplate


def test_beginner_builder_starts_from_template() -> None:
    template = CharacterTemplate(
        "template.fighter",
        "Defensive Fighter",
        {"dnd35-core": "1.0.0"},
        {"abilities": {"strength": 16}, "choices": {"class": ["class.fighter"]}},
        {},
    )
    builder = CharacterBuilder.from_template(template, "character-1", "Arannis")
    builder.set_ability("constitution", 14)
    character = builder.finalize()
    assert character.choices["class"] == ["class.fighter"]
    assert character.derived["strength_modifier"]["value"] == 3


def test_expert_builder_requires_a_valid_draft() -> None:
    builder = CharacterBuilder.from_scratch(
        "character-1", "Arannis", {"dnd35-core": "1.0.0"}
    )
    assert builder.validate()[0].code == "missing-abilities"
    builder.set_ability("strength", 16)
    assert builder.finalize().name == "Arannis"
