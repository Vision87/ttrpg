from campaign.model import Campaign, CharacterIncarnation


def test_campaign_records_locked_packages_and_policy() -> None:
    campaign = Campaign(
        "campaign-1",
        "Forgotten Crypts",
        "dnd35",
        {"dnd35-core": "1.0.0"},
        validation_policy="homebrew",
    )
    assert campaign.package_lock is True
    assert campaign.packages["dnd35-core"] == "1.0.0"


def test_incarnation_state_is_campaign_local() -> None:
    first = CharacterIncarnation("inc-1", "character-1", "campaign-a")
    second = CharacterIncarnation("inc-2", "character-1", "campaign-b")
    first.inventory.append("item.longsword")
    first.record_event({"type": "DamageApplied", "amount": 3})
    assert second.inventory == []
    assert second.history == []
