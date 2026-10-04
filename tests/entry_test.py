from campaign.compatibility import CompatibilityReport
from clients.entry import can_enter_gameplay, entry_state


def test_incompatible_character_can_preview_but_not_play() -> None:
    report = CompatibilityReport("incompatible", [{"code": "missing-package"}])
    assert can_enter_gameplay(report) is False
    assert entry_state(report) == {
        "can_play": False,
        "preview_available": True,
        "status": "incompatible",
        "conflicts": [{"code": "missing-package"}],
    }
