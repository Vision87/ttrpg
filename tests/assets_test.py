from assets.registry import AssetRegistry, AssetRevision, AssetValidationError


def test_asset_revision_and_renderer_fallback() -> None:
    registry = AssetRegistry()
    registry.register(
        AssetRevision(
            "effect.fire-impact",
            2,
            "effect",
            frozenset({"damage", "fire"}),
            frozenset({"2d", "3d"}),
            "private",
        )
    )
    assert registry.resolve("effect.fire-impact", 2, "3d")["fallback"] is False
    assert registry.resolve("effect.fire-impact", 1, "3d") == {
        "asset": "fallback:token",
        "fallback": True,
    }


def test_invalid_asset_metadata_is_rejected() -> None:
    try:
        AssetRegistry().register(
            AssetRevision("broken", 0, "effect", frozenset(), frozenset(), "private")
        )
    except AssetValidationError as error:
        assert "revision" in str(error) or "renderer" in str(error)
    else:
        raise AssertionError("expected asset validation error")
