"""Global versioned asset registry and semantic presentation lookup."""

from __future__ import annotations

from dataclasses import dataclass, field
from typing import Any


class AssetValidationError(ValueError):
    """Raised when asset metadata is invalid."""


@dataclass(frozen=True)
class AssetRevision:
    asset_id: str
    revision: int
    asset_type: str
    tags: frozenset[str]
    renderers: frozenset[str]
    source: str
    dependencies: tuple[str, ...] = ()


@dataclass
class AssetRegistry:
    revisions: dict[tuple[str, int], AssetRevision] = field(default_factory=dict)

    def register(self, asset: AssetRevision) -> None:
        if not asset.asset_id or asset.revision < 1:
            raise AssetValidationError("asset id and positive revision are required")
        if not asset.renderers:
            raise AssetValidationError("asset must support at least one renderer")
        self.revisions[(asset.asset_id, asset.revision)] = asset

    def resolve(
        self,
        asset_id: str,
        revision: int,
        renderer: str,
        *,
        fallback: str = "fallback:token",
    ) -> dict[str, Any]:
        asset = self.revisions.get((asset_id, revision))
        if asset is None or renderer not in asset.renderers:
            return {"asset": fallback, "fallback": True}
        return {"asset": f"{asset.asset_id}@{asset.revision}", "fallback": False}

    def match_event(
        self,
        event_tags: set[str],
        renderer: str,
    ) -> AssetRevision | None:
        candidates = [
            asset
            for asset in self.revisions.values()
            if renderer in asset.renderers and event_tags.issubset(asset.tags)
        ]
        return sorted(candidates, key=lambda asset: asset.revision, reverse=True)[0] if candidates else None
