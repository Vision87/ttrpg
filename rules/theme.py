"""Safe resolution of package-provided interface theme profiles."""

from __future__ import annotations

from copy import deepcopy
from typing import Any

from assets.registry import AssetRegistry
from rules.schema import THEME_UI_ASSET_SLOTS, validate_theme_profile

DEFAULT_THEME: dict[str, Any] = {
    "tokens": {
        "background": "#202124",
        "surface": "#303134",
        "primary": "#5f6368",
        "secondary": "#45474a",
        "accent": "#8ab4f8",
        "text": "#f1f3f4",
    },
    "assets": {},
}

_THEME_RENDERERS = {"ui", "2d", "3d"}


def resolve_theme_profile(
    theme: dict[str, Any] | None,
    registry: AssetRegistry | None = None,
    *,
    renderer: str = "ui",
) -> dict[str, Any]:
    """Merge a validated theme with safe defaults and resolve installed assets."""
    if renderer not in _THEME_RENDERERS:
        raise ValueError(f"Unsupported theme renderer: {renderer}")
    if theme is not None:
        validate_theme_profile(theme)

    resolved = deepcopy(DEFAULT_THEME)
    if theme is None:
        return resolved | {"diagnostics": []}

    resolved["tokens"].update(theme.get("tokens", {}))
    diagnostics: list[dict[str, str]] = []
    for slot, asset_ref in theme.get("assets", {}).items():
        asset_id, revision_text = asset_ref.rsplit("@", 1)
        asset = registry.revisions.get((asset_id, int(revision_text))) if registry else None
        required_renderer = "ui" if slot in THEME_UI_ASSET_SLOTS else renderer
        if asset is None or required_renderer not in asset.renderers:
            resolved["assets"][slot] = None
            diagnostics.append(
                {
                    "code": "theme-asset-unavailable",
                    "slot": slot,
                    "asset": asset_ref,
                }
            )
            continue
        resolved["assets"][slot] = asset_ref

    resolved["diagnostics"] = diagnostics
    return resolved
