"""Pinned presentation references and semantic event mapping."""

from __future__ import annotations

from dataclasses import dataclass, field

from assets.registry import AssetRegistry


@dataclass
class PinnedAsset:
    asset_id: str
    revision: int


@dataclass
class PresentationResolver:
    registry: AssetRegistry
    mappings: dict[str, PinnedAsset] = field(default_factory=dict)

    def pin(self, slot: str, asset_id: str, revision: int) -> None:
        self.mappings[slot] = PinnedAsset(asset_id, revision)

    def update(self, slot: str, revision: int) -> None:
        if slot not in self.mappings:
            raise KeyError(slot)
        self.mappings[slot].revision = revision

    def resolve_event(self, event_type: str, renderer: str) -> dict[str, object]:
        pinned = self.mappings.get(event_type)
        if pinned is None:
            return {
                "asset": "fallback:token",
                "fallback": True,
                "diagnostic": "no-mapping",
            }
        resolved = self.registry.resolve(
            pinned.asset_id,
            pinned.revision,
            renderer,
        )
        if resolved["fallback"]:
            resolved["diagnostic"] = "asset-unavailable"
        return resolved
