"""Tests for character presentation and modular 3D model recipe generation."""

import json
from pathlib import Path

from character.presentation import (
    ModelRecipe,
    PresentationProfile,
    RACE_APPEARANCE_COLOR_OPTIONS,
    generate_model_recipe,
    get_race_appearance_color_options,
    get_race_bone_scales,
    map_item_to_visual,
    DEFAULT_BASE_SLICES,
)


def test_model_recipe_serialization() -> None:
    recipe = ModelRecipe(
        race_profile="dwarf",
        race_choice_id="race.dwarf",
        bone_scales=get_race_bone_scales("dwarf"),
        slices={"torso": "armor_chainmail_torso", "legs": "armor_chainmail_legs"},
        sockets={"main_hand": "wpn_greataxe", "off_hand": "shield_round"},
        palette_tints={"skin": 4, "hair": 12},
    )
    data = recipe.to_record()
    assert data["race_profile"] == "dwarf"
    assert data["bone_scales"]["legs"] == [1.0, 0.75, 1.0]
    assert data["slices"]["torso"] == "armor_chainmail_torso"
    assert data["sockets"]["main_hand"] == "wpn_greataxe"

    restored = ModelRecipe.from_record(data)
    assert restored.race_profile == "dwarf"
    assert restored.race_choice_id == "race.dwarf"
    assert restored.bone_scales == recipe.bone_scales
    assert restored.slices == recipe.slices
    assert restored.sockets == recipe.sockets
    assert restored.palette_tints == recipe.palette_tints
    assert ModelRecipe.from_record({"race_profile": "elf"}).race_choice_id == (
        "race.elf"
    )


def test_race_bone_scaling_profiles() -> None:
    human_scales = get_race_bone_scales("Human")
    assert human_scales["legs"] == [1.0, 1.0, 1.0]

    dwarf_scales = get_race_bone_scales("Dwarf")
    assert dwarf_scales["legs"][1] < 1.0  # Shorter legs
    assert dwarf_scales["spine"][0] > 1.0  # Broader torso

    halfling_scales = get_race_bone_scales("Halfling")
    assert halfling_scales["root"][0] < 0.8  # Smaller stature
    assert halfling_scales["head"][0] > 1.0  # Chibi-style head proportion

    elf_scales = get_race_bone_scales("Elf")
    assert elf_scales["spine"][0] < 1.0  # Slender spine

    half_orc_scales = get_race_bone_scales("Half-Orc")
    assert half_orc_scales["shoulders"][0] > 1.1  # Broad shoulders


def test_item_visual_mapping_rules() -> None:
    # Armors map to slices
    chain_mapping = map_item_to_visual("dnd35-item:chainmail", slot="body")
    assert chain_mapping is not None
    kind, slot, visual_id = chain_mapping
    assert kind == "slice"
    assert slot == "torso"
    assert "chainmail" in visual_id

    leather_mapping = map_item_to_visual("dnd35-item:leather-armor", slot="body")
    assert leather_mapping is not None
    assert leather_mapping[0] == "slice"
    assert "leather" in leather_mapping[2]

    # Weapons map to sockets
    sword_mapping = map_item_to_visual("dnd35-item:longsword", slot="main_hand")
    assert sword_mapping is not None
    assert sword_mapping[0] == "socket"
    assert sword_mapping[1] == "main_hand"
    assert sword_mapping[2] == "wpn_sword"

    axe_mapping = map_item_to_visual("dnd35-item:greataxe", slot="main_hand")
    assert axe_mapping is not None
    assert axe_mapping[0] == "socket"
    assert axe_mapping[2] == "wpn_greataxe"

    shield_mapping = map_item_to_visual("dnd35-item:heavy-wooden-shield", slot="off_hand")
    assert shield_mapping is not None
    assert shield_mapping[0] == "socket"
    assert shield_mapping[1] == "off_hand"
    assert shield_mapping[2] == "shield_round"


def test_presentation_profile_with_model_recipe() -> None:
    recipe = ModelRecipe(
        race_profile="halfling",
        race_choice_id="race.halfling",
        bone_scales=get_race_bone_scales("halfling"),
        slices=DEFAULT_BASE_SLICES,
    )
    profile = PresentationProfile(model="humanoid_base", model_recipe=recipe)
    record = profile.to_record()
    assert "model_recipe" in record
    assert record["model_recipe"]["race_profile"] == "halfling"

    restored = PresentationProfile.from_record(record)
    assert restored.model_recipe is not None
    assert restored.model_recipe.race_profile == "halfling"


def test_generate_model_recipe_for_dwarf_fighter() -> None:
    from character.presentation import generate_model_recipe

    character_data = {
        "choices": {
            "race": ["dnd35-race:dwarf"],
            "class": ["dnd35-class:fighter"],
        },
        "equipment_state": {
            "items": [
                {"item_id": "dnd35-item:chainmail", "slot": "body"},
                {"item_id": "dnd35-item:greataxe", "slot": "main_hand"},
            ]
        },
        "presentation": {},
    }

    recipe = generate_model_recipe(character_data)
    assert recipe.race_profile == "dwarf"
    assert recipe.bone_scales["legs"][1] < 1.0  # dwarf leg scale
    assert recipe.slices["torso"] == "armor_chainmail_torso"
    assert recipe.slices["legs"] == "armor_chainmail_legs"
    assert recipe.slices["hair"] == "beard_braided"
    assert recipe.sockets["main_hand"] == "wpn_greataxe"


def test_generate_model_recipe_for_halfling_wizard() -> None:
    from character.presentation import generate_model_recipe

    character_data = {
        "choices": {
            "race": ["dnd35-race:halfling"],
            "class": ["dnd35-class:wizard"],
        },
        "equipment_state": {
            "items": [
                {"item_id": "dnd35-item:quarterstaff", "slot": "main_hand"},
            ]
        },
        "presentation": {},
    }

    recipe = generate_model_recipe(character_data)
    assert recipe.race_profile == "halfling"
    assert recipe.bone_scales["root"][0] == 0.65
    assert recipe.slices["torso"] == "armor_robes_torso"
    assert recipe.sockets["main_hand"] == "wpn_staff"


def test_generate_model_recipe_includes_saved_appearance_colors() -> None:
    from character.presentation import generate_model_recipe

    default_recipe = generate_model_recipe(
        {
            "choices": {},
            "equipment_state": {"items": []},
            "presentation": {},
        }
    )
    assert default_recipe.palette_tints["pants"] == 116
    assert default_recipe.palette_tints["iris"] == 31

    recipe = generate_model_recipe(
        {
            "choices": {},
            "equipment_state": {"items": []},
            "presentation": {
                "material_tints": {
                    "skin": "#D9A77E",
                    "hair": "#432B1E",
                    "cloths": "#4567A8",
                    "secondary": "#9A5F31",
                    "pants": "#385D47",
                    "iris": "#78614A",
                }
            },
        }
    )

    assert recipe.palette_tints["skin"] == "#D9A77E"
    assert recipe.palette_tints["hair"] == "#432B1E"
    assert recipe.palette_tints["cloths"] == "#4567A8"
    assert recipe.palette_tints["secondary"] == "#9A5F31"
    assert recipe.palette_tints["pants"] == "#385D47"
    assert recipe.palette_tints["iris"] == "#78614A"


def test_generate_model_recipe_uses_skin_and_hair_colors_for_selected_race() -> None:
    colors_by_race = {
        "human": {"skin": "#D9A77E", "hair": "#432B1E"},
        "dwarf": {"skin": "#A66B47", "hair": "#C89643"},
        "elf": {"skin": "#E7C7A1", "hair": "#8D8F98"},
        "gnome": {"skin": "#C28E69", "hair": "#7A4A35"},
        "half-elf": {"skin": "#E1AF8C", "hair": "#5B3828"},
        "half-orc": {"skin": "#73916A", "hair": "#35251E"},
        "halfling": {"skin": "#F0C8AA", "hair": "#B45A28"},
    }

    for race_name, race_colors in colors_by_race.items():
        recipe = generate_model_recipe(
            {
                "choices": {"race": [f"race.{race_name}"]},
                "equipment_state": {"items": []},
                "presentation": {
                    "material_tints": {},
                    "material_tints_by_race": {
                        f"race.{race_name}": colors
                        for race_name, colors in colors_by_race.items()
                    },
                },
            }
        )
        assert recipe.race_profile == race_name
        assert recipe.palette_tints["skin"] == race_colors["skin"]
        assert recipe.palette_tints["hair"] == race_colors["hair"]

    uncustomized_race = generate_model_recipe(
        {
            "choices": {"race": ["race.elf"]},
            "equipment_state": {"items": []},
            "presentation": {
                "material_tints": {
                    "skin": "#D9A77E",
                    "hair": "#432B1E",
                },
                "material_tints_by_race": {
                    f"race.{race_name}": colors
                    for race_name, colors in colors_by_race.items()
                },
            },
        }
    )
    assert uncustomized_race.palette_tints["skin"] == colors_by_race["elf"]["skin"]
    assert uncustomized_race.palette_tints["hair"] == colors_by_race["elf"]["hair"]


def test_race_appearance_palettes_cover_selectable_base_races_and_subraces() -> None:
    package_path = Path(__file__).parents[1] / "content/dnd35-core/package.json"
    definitions = json.loads(package_path.read_text())["definitions"]
    selectable_races = {
        definition_id
        for definition_id, definition in definitions.items()
        if definition.get("type") == "race"
    }

    assert set(RACE_APPEARANCE_COLOR_OPTIONS) == selectable_races
    for race_choice_id in selectable_races:
        options = get_race_appearance_color_options(race_choice_id)
        assert set(options) == {"skin", "hair", "iris"}
        assert all(
            colors and all(color.startswith("#") and len(color) == 7 for color in colors)
            for colors in options.values()
        )
        recipe = generate_model_recipe(
            {
                "choices": {"race": [race_choice_id]},
                "equipment_state": {"items": []},
                "presentation": {},
            }
        )
        assert recipe.race_choice_id == race_choice_id
        assert recipe.appearance_color_options == options
        parent_race = definitions[race_choice_id].get("parent_race")
        if parent_race:
            assert options != get_race_appearance_color_options(parent_race)

    assert get_race_appearance_color_options("race.dwarf.duergar")["skin"] == [
        "#A5A9B2", "#858B97", "#68717F", "#4A515F"
    ]
    assert get_race_appearance_color_options("race.elf.gray")["skin"] == [
        "#F0E8E2", "#D5D0CF", "#B6B8BC", "#8D8F98"
    ]
    assert get_race_appearance_color_options("race.elf.aquatic")["skin"] == [
        "#D8E9E0", "#A9D0C9", "#78B4B3", "#4B9098"
    ]
    assert get_race_appearance_color_options("race.gnome.deep")["skin"] == [
        "#B5B8C0", "#9299A4", "#6E7683", "#4D5663"
    ]


def test_model_recipe_keeps_subrace_palette_separate_from_geometry_profile() -> None:
    recipe = generate_model_recipe(
        {
            "choices": {"race": ["race.elf.wood"]},
            "equipment_state": {"items": []},
            "presentation": {
                "material_tints_by_race": {
                    "race.elf.wood": {
                        "skin": "#E1AF8C",
                        "hair": "#7A4A35",
                        "iris": "#436B4D",
                    }
                }
            },
        }
    )

    assert recipe.race_profile == "elf"
    assert recipe.race_choice_id == "race.elf.wood"
    assert recipe.palette_tints["skin"] == "#E1AF8C"
    assert recipe.palette_tints["hair"] == "#7A4A35"
    assert recipe.palette_tints["iris"] == "#436B4D"
    assert recipe.appearance_color_options == get_race_appearance_color_options(
        "race.elf.wood"
    )
    restored = ModelRecipe.from_record(recipe.to_record())
    assert restored.race_choice_id == "race.elf.wood"
    assert restored.appearance_color_options == recipe.appearance_color_options


def test_drow_skin_options_and_default_stay_in_ebony_range() -> None:
    drow_options = get_race_appearance_color_options("race.elf.drow")
    drow_skin_options = drow_options["skin"]

    assert drow_skin_options == ["#49302A", "#3A2824", "#35251E", "#241916"]
    assert all(
        max(
            int(color[index : index + 2], 16)
            for index in (1, 3, 5)
        )
        <= 73
        for color in drow_skin_options
    )

    recipe = generate_model_recipe(
        {
            "choices": {"race": ["race.elf.drow"]},
            "equipment_state": {"items": []},
            "presentation": {
                "material_tints_by_race": {
                    "race.elf.drow": {"skin": "#69412D"}
                }
            },
        }
    )

    assert recipe.palette_tints["skin"] == drow_skin_options[0]
    assert recipe.palette_tints["skin"] in drow_options["skin"]
