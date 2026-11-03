"""Validation for bundled, ruleset-aware portrait collections."""

from __future__ import annotations

import json
import re
from copy import deepcopy
from pathlib import Path
from typing import Any


class PortraitPackValidationError(ValueError):
    """Raised when portrait-pack metadata is invalid."""


_IDENTIFIER = re.compile(r"^[a-z0-9][a-z0-9._-]*$")
_VERSION = re.compile(r"^[0-9]+\.[0-9]+\.[0-9]+$")
_RESOURCE_PATH = re.compile(r"^portrait/[a-z0-9][a-z0-9._/-]*$")


def validate_portrait_pack(raw: Any) -> dict[str, Any]:
    """Validate a portrait-pack manifest and return an independent copy."""
    if not isinstance(raw, dict):
        raise PortraitPackValidationError("portrait pack must be an object")

    pack_id = raw.get("id")
    if not isinstance(pack_id, str) or not _IDENTIFIER.fullmatch(pack_id):
        raise PortraitPackValidationError("portrait pack id must be a stable identifier")

    version = raw.get("version")
    if not isinstance(version, str) or not _VERSION.fullmatch(version):
        raise PortraitPackValidationError(
            f"portrait pack {pack_id} version must use major.minor.patch"
        )

    kind = raw.get("kind")
    if kind not in {"base", "expansion"}:
        raise PortraitPackValidationError(
            f"portrait pack {pack_id} kind must be base or expansion"
        )

    compatible_rulesets = raw.get("compatible_rulesets")
    if (
        not isinstance(compatible_rulesets, list)
        or not compatible_rulesets
        or not all(
            isinstance(item, str) and _IDENTIFIER.fullmatch(item)
            for item in compatible_rulesets
        )
        or len(set(compatible_rulesets)) != len(compatible_rulesets)
    ):
        raise PortraitPackValidationError(
            f"portrait pack {pack_id} must list unique compatible ruleset ids"
        )
    if kind == "base" and len(compatible_rulesets) != 1:
        raise PortraitPackValidationError(
            f"base portrait pack {pack_id} must target exactly one ruleset"
        )

    name = raw.get("name")
    if not isinstance(name, str) or not name.strip():
        raise PortraitPackValidationError(f"portrait pack {pack_id} needs a name")

    portraits = raw.get("portraits")
    if not isinstance(portraits, list) or not portraits:
        raise PortraitPackValidationError(
            f"portrait pack {pack_id} must contain at least one portrait"
        )

    seen_asset_ids: set[str] = set()
    for portrait in portraits:
        if not isinstance(portrait, dict):
            raise PortraitPackValidationError(
                f"portrait pack {pack_id} entries must be objects"
            )
        asset_id = portrait.get("id")
        if not isinstance(asset_id, str) or not _IDENTIFIER.fullmatch(asset_id):
            raise PortraitPackValidationError(
                f"portrait pack {pack_id} has an invalid portrait id"
            )
        if asset_id in seen_asset_ids:
            raise PortraitPackValidationError(
                f"portrait pack {pack_id} repeats portrait id {asset_id}"
            )
        seen_asset_ids.add(asset_id)

        revision = portrait.get("revision")
        if isinstance(revision, bool) or not isinstance(revision, int) or revision < 1:
            raise PortraitPackValidationError(
                f"portrait {asset_id} revision must be a positive integer"
            )
        for field in (
            "name",
            "description",
            "source",
            "attribution",
            "license",
            "license_url",
        ):
            value = portrait.get(field)
            if not isinstance(value, str) or not value.strip():
                raise PortraitPackValidationError(
                    f"portrait {asset_id} needs {field} metadata"
                )
        if not portrait["license_url"].startswith("https://"):
            raise PortraitPackValidationError(
                f"portrait {asset_id} license_url must use HTTPS"
            )
        resource_path = portrait.get("resource_path")
        if (
            not isinstance(resource_path, str)
            or not _RESOURCE_PATH.fullmatch(resource_path)
            or ".." in resource_path.split("/")
        ):
            raise PortraitPackValidationError(
                f"portrait {asset_id} has an invalid bundled resource path"
            )
        tags = portrait.get("tags")
        if not isinstance(tags, list) or not all(
            isinstance(tag, str) and tag.strip() for tag in tags
        ):
            raise PortraitPackValidationError(
                f"portrait {asset_id} tags must be a list of non-empty strings"
            )

    return deepcopy(raw)


def load_portrait_packs(directory: Path) -> tuple[dict[str, Any], ...]:
    """Load and validate every bundled portrait pack in a directory."""
    if not directory.is_dir():
        raise PortraitPackValidationError(
            f"portrait pack directory does not exist: {directory}"
        )
    paths = sorted(directory.glob("*.json"))
    if not paths:
        raise PortraitPackValidationError(
            f"portrait pack directory contains no manifests: {directory}"
        )

    packs: list[dict[str, Any]] = []
    pack_keys: set[tuple[str, str]] = set()
    portrait_revisions: set[tuple[str, int]] = set()
    for path in paths:
        try:
            manifest = validate_portrait_pack(
                json.loads(path.read_text(encoding="utf-8"))
            )
        except (json.JSONDecodeError, PortraitPackValidationError) as error:
            raise PortraitPackValidationError(f"{path}: {error}") from error
        pack_key = (manifest["id"], manifest["version"])
        if pack_key in pack_keys:
            raise PortraitPackValidationError(
                f"duplicate portrait pack version: {manifest['id']}@{manifest['version']}"
            )
        pack_keys.add(pack_key)
        for portrait in manifest["portraits"]:
            revision_key = (portrait["id"], portrait["revision"])
            if revision_key in portrait_revisions:
                raise PortraitPackValidationError(
                    f"duplicate portrait revision: "
                    f"{portrait['id']}@{portrait['revision']}"
                )
            portrait_revisions.add(revision_key)
        packs.append(manifest)
    return tuple(packs)


def portrait_packs_for_ruleset(
    packs: tuple[dict[str, Any], ...], ruleset_id: str
) -> list[dict[str, Any]]:
    """Return one compatible base pack followed by any compatible expansions."""
    compatible = [
        pack
        for pack in packs
        if ruleset_id in pack["compatible_rulesets"]
    ]
    base_packs = [pack for pack in compatible if pack["kind"] == "base"]
    if len(base_packs) != 1:
        raise PortraitPackValidationError(
            f"ruleset {ruleset_id} must have exactly one compatible base portrait pack"
        )
    expansions = sorted(
        (pack for pack in compatible if pack["kind"] == "expansion"),
        key=lambda pack: (pack["id"], pack["version"]),
    )
    return deepcopy([base_packs[0], *expansions])
