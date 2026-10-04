from campaign.compatibility import analyze, migrate_branch
from campaign.model import Campaign
from character.builder import CharacterBuilder
from character.templates import CharacterTemplate
from clients.projections import immersive_projection, tactical_projection
from session.runtime import Controller, Session
from rules.sandbox import SandboxRuntime


def test_beginner_character_to_2d_and_3d_play() -> None:
    template = CharacterTemplate(
        "template.fighter",
        "Defensive Fighter",
        {"dnd35-core": "1.0.0"},
        {
            "abilities": {"strength": 16, "constitution": 14},
            "choices": {"class": ["class.fighter"]},
            "presentation": {"model": "model.fighter@1"},
        },
        {},
    )
    builder = CharacterBuilder.from_template(template, "character-1", "Arannis")
    character = builder.finalize()
    campaign = Campaign("campaign-1", "Crypts", "dnd35", {"dnd35-core": "1.0.0"})
    assert analyze(character, campaign).playable is True

    session = Session(
        "session-1",
        {"character-1": {"position": {"x": 1, "y": 1}}, "npc-1": {"position": {"x": 2, "y": 1}}},
    )
    session.assign(Controller("player-1", "human", {"character-1"}))
    result = session.submit(
        "player-1",
        {
            "idempotency_key": "move-1",
            "type": "move",
            "actor_id": "character-1",
            "position": {"x": 2, "y": 1},
        },
    )
    assert result["accepted"] is True
    tactical = tactical_projection(session.entities, session.events)
    immersive = immersive_projection(session.entities, session.events, {})
    assert tactical["entities"] == immersive["entities"]


def test_homebrew_character_is_blocked_and_branchable() -> None:
    builder = CharacterBuilder.from_scratch(
        "character-1",
        "Arannis",
        {"dnd35-core": "1.0.0", "homebrew-magic": "0.1.0"},
        policy="homebrew",
    )
    builder.set_ability("strength", 16)
    builder.add_override("choices.feats[0]", "approved custom feat")
    character = builder.finalize()
    sandbox_result = SandboxRuntime(
        capabilities={"apply_effect"}
    ).execute(
        lambda api: [{"type": "apply_effect", "effect_id": "effect.ashen-step"}],
        {"actor_id": character.character_id},
    )
    assert sandbox_result.operations[0]["effect_id"] == "effect.ashen-step"
    campaign = Campaign("campaign-2", "Core Only", "dnd35", {"dnd35-core": "1.0.0"})
    report = analyze(character, campaign, required_mechanics=["homebrew-magic"])
    assert report.playable is False
    branch, changes = migrate_branch(
        character,
        new_character_id="character-1-campaign-2",
        package_versions={"dnd35-core": "1.0.0"},
        removed_choices={"feats": ["feat.custom"]},
    )
    assert branch.character_id == "character-1-campaign-2"
    assert changes == []


def test_cross_campaign_state_and_asset_independence() -> None:
    template = CharacterTemplate(
        "template.fighter",
        "Fighter",
        {"dnd35-core": "1.0.0"},
        {"abilities": {"strength": 16}, "presentation": {"model": "model.fighter@1"}},
        {},
    )
    character = template.apply("character-1", "Arannis")
    campaign_a = Campaign("campaign-a", "A", "dnd35", {"dnd35-core": "1.0.0"})
    campaign_b = Campaign("campaign-b", "B", "dnd35", {"dnd35-core": "1.0.0"})
    assert analyze(character, campaign_a).playable
    assert analyze(character, campaign_b).playable
    assert character.presentation["model"] == "model.fighter@1"
