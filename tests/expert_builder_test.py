from character.builder import CharacterBuilder


def test_homebrew_policy_exposes_prerequisite_warning() -> None:
    builder = CharacterBuilder.from_scratch(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0"},
        policy="homebrew",
    )
    issue = builder.explain_prerequisite(
        "choices.feats[0]", False, "Base attack bonus +1 is required"
    )
    assert issue is not None
    assert issue.severity == "warning"
    builder.add_override(issue.path, issue.message)
    builder.set_ability("strength", 16)
    assert any(item.code == "homebrew-override" for item in builder.validate())
