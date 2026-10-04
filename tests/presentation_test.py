from character.presentation import PresentationProfile


def test_presentation_profile_updates_without_rules_data() -> None:
    profile = PresentationProfile()
    profile.set_asset("model", "model.ash-knight@2")
    profile.set_asset("equipment:main-hand", "model.emberbound-blade@1")
    profile.set_asset("sound:attack", "sound.fire-slash@1")
    profile.set_asset("effect:damage.fire", "effect.ember-impact@3")
    preview = profile.preview()
    assert preview["model"] == "model.ash-knight@2"
    assert preview["equipment_visuals"]["main-hand"] == "model.emberbound-blade@1"
    assert preview["sounds"]["attack"] == "sound.fire-slash@1"
