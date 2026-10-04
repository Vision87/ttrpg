from character.model import Character
from character.templates import CharacterTemplate, save_personal_template


def test_template_application_is_a_copy() -> None:
    template = CharacterTemplate(
        "template.fighter",
        "Defensive Fighter",
        {"dnd35-core": "1.0.0"},
        {
            "abilities": {"strength": 16, "constitution": 14},
            "choices": {"feats": ["feat.power-attack"]},
        },
        {"role": "frontline"},
    )
    character = template.apply("character-1", "Arannis")
    character.abilities["strength"] = 18
    assert template.defaults["abilities"]["strength"] == 16


def test_personal_template_preserves_creation_inputs_not_campaign_state() -> None:
    character = Character(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0"},
        {"strength": 16},
        choices={"feats": ["feat.power-attack"]},
        presentation={"token": "token.fighter@1"},
    )
    template = save_personal_template("template.personal", "Arannis Base", character)
    assert template.defaults["choices"]["feats"] == ["feat.power-attack"]
    assert "campaign_state" not in template.defaults
