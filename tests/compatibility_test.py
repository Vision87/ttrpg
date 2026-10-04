from campaign.compatibility import analyze, migrate_branch, preview
from campaign.model import Campaign
from character.model import Character


def test_missing_custom_package_blocks_play_and_supports_read_only_preview() -> None:
    character = Character(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0", "homebrew-magic": "0.1.0"},
        {"strength": 16},
        choices={"feats": ["feat.ashen-step"]},
    )
    campaign = Campaign(
        "campaign-1",
        "Forgotten Crypts",
        "dnd35",
        {"dnd35-core": "1.0.0"},
    )
    report = analyze(character, campaign, required_mechanics=["homebrew-magic"])
    assert report.status == "incompatible"
    assert report.playable is False
    assert preview(character, report)["read_only"] is True


def test_migration_creates_a_new_branch_and_preserves_source() -> None:
    character = Character(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0"},
        {"strength": 16},
        choices={"feats": ["feat.power-attack", "feat.ashen-step"]},
    )
    branch, changes = migrate_branch(
        character,
        new_character_id="character-1-campaign-2",
        package_versions={"dnd35-core": "1.0.0"},
        removed_choices={"feats": ["feat.ashen-step"]},
    )
    assert branch.character_id != character.character_id
    assert "feat.ashen-step" in character.choices["feats"]
    assert changes == [{"category": "feats", "removed": "feat.ashen-step"}]
