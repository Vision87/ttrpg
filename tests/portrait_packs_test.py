from copy import deepcopy
import json
from pathlib import Path

import pytest

from assets.portrait_packs import (
    PortraitPackValidationError,
    load_portrait_packs,
    portrait_packs_for_ruleset,
    validate_portrait_pack,
)


def _pack() -> dict:
    return {
        "id": "dnd35-original",
        "version": "1.0.0",
        "kind": "base",
        "name": "Original Fantasy Portraits",
        "compatible_rulesets": ["dnd35-core"],
        "portraits": [
            {
                "id": "portrait.dnd35.adventurer",
                "revision": 1,
                "name": "Adventurer",
                "description": "A road-worn traveler ready for a new quest.",
                "tags": ["human", "adventurer"],
                "resource_path": "portrait/dnd35/adventurer",
                "source": "Original artwork created for Universal RPG Board",
                "attribution": "Universal RPG Board project",
                "license": "CC BY 4.0",
                "license_url": "https://creativecommons.org/licenses/by/4.0/",
            }
        ],
    }


def test_valid_portrait_pack_metadata_is_preserved() -> None:
    manifest = _pack()

    assert validate_portrait_pack(manifest) == manifest
    assert validate_portrait_pack(manifest) is not manifest


@pytest.mark.parametrize(
    ("mutate", "message"),
    [
        (lambda pack: pack.update(version="1"), "major.minor.patch"),
        (lambda pack: pack.update(compatible_rulesets=[]), "compatible ruleset"),
        (
            lambda pack: pack["portraits"][0].update(revision=0),
            "positive integer",
        ),
        (
            lambda pack: pack["portraits"][0].update(
                resource_path="portrait/../outside"
            ),
            "resource path",
        ),
        (
            lambda pack: pack["portraits"][0].update(license=""),
            "license metadata",
        ),
        (
            lambda pack: pack["portraits"][0].update(license_url="http://example.test"),
            "license_url must use HTTPS",
        ),
    ],
)
def test_invalid_portrait_pack_metadata_is_rejected(mutate, message: str) -> None:
    manifest = deepcopy(_pack())
    mutate(manifest)

    with pytest.raises(PortraitPackValidationError, match=message):
        validate_portrait_pack(manifest)


def test_base_pack_must_target_only_one_ruleset() -> None:
    manifest = _pack()
    manifest["compatible_rulesets"].append("dark-heresy-core")

    with pytest.raises(PortraitPackValidationError, match="exactly one ruleset"):
        validate_portrait_pack(manifest)


def test_base_portrait_packs_resolve_to_bundled_artwork() -> None:
    root = Path(__file__).resolve().parents[1]
    pack_directory = root / "content" / "portrait-packs"
    pack_paths = (
        pack_directory / "dnd35-original.json",
        pack_directory / "dark-heresy-original.json",
    )

    for pack_path in pack_paths:
        manifest = validate_portrait_pack(
            json.loads(pack_path.read_text(encoding="utf-8"))
        )
        assert manifest["kind"] == "base"
        for portrait in manifest["portraits"]:
            assert (root / portrait["source"]).is_file()
            image_path = (
                root
                / "UnityClient"
                / "Assets"
                / "Resources"
                / f'{portrait["resource_path"]}.png'
            )
            assert image_path.is_file(), portrait["id"]


def test_open_expansion_portraits_are_licensed_and_bundled() -> None:
    root = Path(__file__).resolve().parents[1]
    pack_path = (
        root / "content" / "portrait-packs" / "open-original-expansion.json"
    )
    manifest = validate_portrait_pack(
        json.loads(pack_path.read_text(encoding="utf-8"))
    )

    assert manifest["kind"] == "expansion"
    assert set(manifest["compatible_rulesets"]) == {
        "dnd35-core",
        "dark-heresy-core",
    }
    for portrait in manifest["portraits"]:
        assert portrait["license"] == "CC0-1.0"
        assert portrait["license_url"] == (
            "https://creativecommons.org/publicdomain/zero/1.0/"
        )
        assert portrait["source"].startswith("UnityClient/ArtSource/")
        assert portrait["attribution"]
        assert (root / portrait["source"]).is_file()
        assert (
            root
            / "UnityClient"
            / "Assets"
            / "Resources"
            / f'{portrait["resource_path"]}.png'
        ).is_file()


def test_portrait_pack_loading_filters_by_ruleset_and_keeps_expansions() -> None:
    root = Path(__file__).resolve().parents[1]
    packs = load_portrait_packs(root / "content" / "portrait-packs")

    dnd_packs = portrait_packs_for_ruleset(packs, "dnd35-core")
    heresy_packs = portrait_packs_for_ruleset(packs, "dark-heresy-core")

    assert [pack["kind"] for pack in dnd_packs] == ["base", "expansion"]
    assert [pack["kind"] for pack in heresy_packs] == ["base", "expansion"]
    assert {pack["id"] for pack in dnd_packs} == {
        "portrait-pack.dnd35-original",
        "portrait-pack.open-original-expansion",
    }
    assert {pack["id"] for pack in heresy_packs} == {
        "portrait-pack.dark-heresy-original",
        "portrait-pack.open-original-expansion",
    }
