import json
from pathlib import Path

from rules.schema import (
    THEME_ASSET_SLOTS,
    DefinitionValidationError,
    validate_ruleset_package,
    validate_theme_profile,
)
from rules.theme import DEFAULT_THEME, resolve_theme_profile
from assets.registry import AssetRegistry, AssetRevision


def _package() -> dict:
    return {
        "id": "test-rpg",
        "version": "1.0.0",
        "definitions": {
            "attribute.might": {"id": "attribute.might", "type": "ability"},
            "race.stonekin": {"id": "race.stonekin", "type": "race"},
        },
        "creation_flow": {
            "steps": [
                {
                    "id": "attributes",
                    "label": "Attributes",
                    "fields": [
                        {
                            "id": "might",
                            "label": "Might",
                            "type": "number",
                            "attribute": "might",
                            "minimum": 1,
                            "maximum": 10,
                            "required": True,
                        }
                    ],
                },
                {
                    "id": "heritage",
                    "label": "Heritage",
                    "fields": [
                        {
                            "id": "heritage",
                            "label": "Choose heritage",
                            "type": "choice",
                            "category": "heritage",
                            "definition_type": "race",
                        }
                    ],
                },
                {
                    "id": "identity",
                    "label": "Identity",
                    "fields": [
                        {
                            "id": "name",
                            "label": "Character name",
                            "type": "text",
                            "target": "character_name",
                            "minimum_length": 1,
                            "maximum_length": 40,
                        },
                        {
                            "id": "portrait",
                            "label": "Portrait",
                            "type": "presentation",
                            "slot": "portrait",
                        },
                    ],
                },
            ],
            "validation_rules": ["prerequisites", "presentation"],
        },
        "theme": {
            "tokens": {"background": "#101820", "accent": "#ffcc00"},
            "assets": {"logo": "test.logo@1"},
        },
    }


def test_package_creation_flow_and_theme_validate() -> None:
    validate_ruleset_package(_package())


def test_creation_flow_rejects_unsupported_field_type() -> None:
    package = _package()
    package["creation_flow"]["steps"][0]["fields"][0]["type"] = "script"
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "unsupported" in str(error)
    else:
        raise AssertionError("expected unsupported creation field error")

def test_creation_flow_validates_package_declared_ability_rolls() -> None:
    package = _package()
    field = package["creation_flow"]["steps"][0]["fields"][0]
    field["minimum"] = 3
    field["maximum"] = 18
    field["roll"] = {
        "dice_count": 4,
        "die_sides": 6,
        "drop_lowest": 1,
        "allow_reroll": True,
    }
    validate_ruleset_package(package)

    for invalid_roll in (
        {"dice_count": 0, "die_sides": 6},
        {"dice_count": 4, "die_sides": 1},
        {"dice_count": 4, "die_sides": 6, "drop_lowest": 4},
        {"dice_count": 4, "die_sides": 6, "allow_reroll": "yes"},
        {"dice_count": 4, "die_sides": 6, "operation": "script"},
    ):
        package = _package()
        field = package["creation_flow"]["steps"][0]["fields"][0]
        field["minimum"] = 1
        field["maximum"] = 100
        field["roll"] = invalid_roll
        try:
            validate_ruleset_package(package)
        except DefinitionValidationError as error:
            assert "roll" in str(error)
        else:
            raise AssertionError("expected invalid ability roll metadata error")

    package = _package()
    package["creation_flow"]["steps"][0]["fields"][0]["minimum"] = 3
    package["creation_flow"]["steps"][0]["fields"][0]["maximum"] = 12
    package["creation_flow"]["steps"][0]["fields"][0]["roll"] = {
        "dice_count": 2,
        "die_sides": 6,
        "drop_lowest": 0,
    }
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "lowest possible" in str(error)
    else:
        raise AssertionError("expected incompatible roll range error")

def test_creation_flow_validates_roll_score_groups() -> None:
    package = _package()
    field = package["creation_flow"]["steps"][0]["fields"][0]
    field["maximum"] = 18
    field["roll"] = {
        "dice_count": 4,
        "die_sides": 6,
        "drop_lowest": 1,
        "allow_reroll": True,
    }
    package["creation_flow"]["score_groups"] = [
        {
            "id": "abilities",
            "field_ids": ["might"],
            "allow_reroll": True,
        }
    ]
    validate_ruleset_package(package)

    invalid_groups = (
        [{"id": "abilities", "field_ids": ["unknown"]}],
        [{"id": "abilities", "field_ids": ["might", "might"]}],
        [{"id": "abilities", "field_ids": ["might"], "allow_reroll": "yes"}],
        [
            {"id": "abilities", "field_ids": ["might"]},
            {"id": "abilities", "field_ids": ["might"]},
        ],
        [{"id": "abilities", "field_ids": []}],
    )
    for score_groups in invalid_groups:
        invalid_package = _package()
        invalid_field = invalid_package["creation_flow"]["steps"][0]["fields"][0]
        invalid_field["maximum"] = 18
        invalid_field["roll"] = {
            "dice_count": 4,
            "die_sides": 6,
            "drop_lowest": 1,
        }
        invalid_package["creation_flow"]["score_groups"] = score_groups
        try:
            validate_ruleset_package(invalid_package)
        except DefinitionValidationError as error:
            assert "score group" in str(error) or "score_groups" in str(error)
        else:
            raise AssertionError("expected invalid score group error")

    package = _package()
    package["creation_flow"]["score_groups"] = [
        {"id": "abilities", "field_ids": ["might"]}
    ]
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "non-rollable" in str(error)
    else:
        raise AssertionError("expected non-rollable score group field error")


def test_creation_flow_rejects_duplicate_step_and_invalid_definition_type() -> None:
    package = _package()
    package["creation_flow"]["steps"][1]["id"] = "attributes"
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "Duplicate creation step" in str(error)
    else:
        raise AssertionError("expected duplicate step error")

    package = _package()
    package["creation_flow"]["steps"][1]["fields"][0]["definition_type"] = "script"
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "definition_type is unsupported" in str(error)
    else:
        raise AssertionError("expected unsupported definition type error")


def test_theme_rejects_untrusted_tokens_and_asset_references() -> None:
    package = _package()
    package["theme"]["tokens"]["custom_css"] = "body{}"
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "Unsupported theme token" in str(error)
    else:
        raise AssertionError("expected unsupported theme token error")

    package = _package()
    package["theme"]["assets"]["logo"] = "https://example.test/logo.png"
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "asset reference format" in str(error)
    else:
        raise AssertionError("expected unsafe asset reference error")


def test_theme_accepts_only_finite_local_ui_asset_slots() -> None:
    profile = {
        "assets": {
            slot: "theme.surface@1"
            for slot in THEME_ASSET_SLOTS
        }
    }
    validate_theme_profile(profile)

    profile["assets"]["custom_css"] = "https://example.test/theme.css"
    try:
        validate_theme_profile(profile)
    except DefinitionValidationError as error:
        assert "Unsupported theme asset slot" in str(error)
    else:
        raise AssertionError("expected unsupported theme asset slot error")


def test_initial_package_flows_match_available_definitions() -> None:
    expected_steps = {
        "dnd35-core": [
            "abilities",
            "race",
            "class",
            "skills",
            "feats",
            "equipment",
            "appearance",
        ],
        "dark-heresy-core": [
            "characteristics",
            "homeworld",
            "career",
            "skills",
            "talents",
            "equipment",
            "appearance",
        ],
    }
    for package_id, expected in expected_steps.items():
        package_path = Path("content") / package_id / "package.json"
        package = json.loads(package_path.read_text())
        validate_ruleset_package(package)
        steps = package["creation_flow"]["steps"]
        assert [step["id"] for step in steps] == expected
        if package_id == "dnd35-core":
            ability_fields = steps[0]["fields"]
            assert all(
                field["roll"]
                == {
                    "dice_count": 4,
                    "die_sides": 6,
                    "drop_lowest": 1,
                    "allow_reroll": True,
                }
                for field in ability_fields
            )
            assert package["creation_flow"]["score_groups"] == [
                {
                    "id": "ability-scores",
                    "field_ids": [
                        "strength",
                        "dexterity",
                        "constitution",
                        "intelligence",
                        "wisdom",
                        "charisma",
                    ],
                    "allow_reroll": True,
                }
            ]
        else:
            assert all("roll" not in field for step in steps for field in step["fields"])
            assert package["creation_flow"].get("score_groups", []) == []
        available_types = {
            definition["type"] for definition in package["definitions"].values()
        }
        for step in steps:
            for field in step["fields"]:
                if field["type"] == "choice":
                    assert field["definition_type"] in available_types


def test_dnd_package_has_original_summary_for_every_feat() -> None:
    package = json.loads(Path("content/dnd35-core/package.json").read_text())
    feat_ids = {
        definition_id
        for definition_id, definition in package["definitions"].items()
        if definition["type"] == "feat"
    }
    summaries = package["feat_descriptions"]
    assert set(summaries) == feat_ids
    assert all(
        isinstance(summary, str) and 0 < len(summary.strip()) <= 240
        for summary in summaries.values()
    )

    package["feat_descriptions"].pop(next(iter(feat_ids)))
    try:
        validate_ruleset_package(package)
    except DefinitionValidationError as error:
        assert "Missing feat descriptions" in str(error)
    else:
        raise AssertionError("expected missing feat description error")


def test_theme_profile_uses_default_and_falls_back_for_missing_assets() -> None:
    neutral = resolve_theme_profile(None)
    assert neutral["tokens"] == DEFAULT_THEME["tokens"]
    assert neutral["diagnostics"] == []

    registry = AssetRegistry()
    registry.register(
        AssetRevision(
            "theme.logo",
            1,
            "logo",
            frozenset(),
            frozenset({"ui"}),
            "package",
        )
    )
    resolved = resolve_theme_profile(
        {
            "tokens": {"background": "#101820"},
            "assets": {"logo": "theme.logo@1", "display_font": "theme.missing@1"},
        },
        registry,
    )
    assert resolved["tokens"]["background"] == "#101820"
    assert resolved["tokens"]["text"] == DEFAULT_THEME["tokens"]["text"]
    assert resolved["assets"] == {"logo": "theme.logo@1", "display_font": None}
    assert resolved["diagnostics"] == [
        {
            "code": "theme-asset-unavailable",
            "slot": "display_font",
            "asset": "theme.missing@1",
        }
    ]


def test_theme_asset_must_support_requested_renderer() -> None:
    registry = AssetRegistry()
    registry.register(
        AssetRevision(
            "theme.font",
            1,
            "font",
            frozenset(),
            frozenset({"3d"}),
            "package",
        )
    )
    resolved = resolve_theme_profile(
        {"assets": {"display_font": "theme.font@1"}},
        registry,
        renderer="2d",
    )
    assert resolved["assets"]["display_font"] is None
    assert resolved["diagnostics"][0]["code"] == "theme-asset-unavailable"


def test_theme_ui_assets_resolve_for_ui_and_fall_back_per_slot() -> None:
    registry = AssetRegistry()
    registry.register(
        AssetRevision(
            "theme.surface",
            1,
            "texture",
            frozenset({"wood"}),
            frozenset({"ui"}),
            "Unity Resources: theme.surface",
        )
    )
    resolved = resolve_theme_profile(
        {
            "assets": {
                "ui_panel": "theme.surface@1",
                "board_frame": "theme.missing@1",
            }
        },
        registry,
        renderer="3d",
    )
    assert resolved["assets"] == {
        "ui_panel": "theme.surface@1",
        "board_frame": None,
    }
    assert resolved["diagnostics"] == [
        {
            "code": "theme-asset-unavailable",
            "slot": "board_frame",
            "asset": "theme.missing@1",
        }
    ]
