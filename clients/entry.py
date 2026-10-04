"""Session-entry gate shared by solo and multiplayer UI flows."""

from __future__ import annotations

from campaign.compatibility import CompatibilityReport


def can_enter_gameplay(report: CompatibilityReport) -> bool:
    return report.playable


def entry_state(report: CompatibilityReport) -> dict[str, object]:
    return {
        "can_play": report.playable,
        "preview_available": True,
        "status": report.status,
        "conflicts": list(report.conflicts),
    }
