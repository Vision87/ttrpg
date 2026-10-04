from assets.presentation import PresentationResolver
from assets.registry import AssetRegistry, AssetRevision


def test_asset_reference_stays_pinned_until_explicit_update() -> None:
    registry = AssetRegistry()
    registry.register(
        AssetRevision(
            "effect.fire",
            1,
            "effect",
            frozenset({"damage"}),
            frozenset({"2d", "3d"}),
            "private",
        )
    )
    registry.register(
        AssetRevision(
            "effect.fire",
            2,
            "effect",
            frozenset({"damage"}),
            frozenset({"2d", "3d"}),
            "private",
        )
    )
    resolver = PresentationResolver(registry)
    resolver.pin("damage", "effect.fire", 1)
    assert resolver.resolve_event("damage", "3d")["asset"] == "effect.fire@1"
    resolver.update("damage", 2)
    assert resolver.resolve_event("damage", "3d")["asset"] == "effect.fire@2"


def test_missing_presentation_asset_is_diagnostic_only() -> None:
    resolver = PresentationResolver(AssetRegistry())
    resolver.pin("damage", "effect.fire", 1)
    assert resolver.resolve_event("damage", "3d") == {
        "asset": "fallback:token",
        "fallback": True,
        "diagnostic": "asset-unavailable",
    }
