"""Unit tests for universal character builder suite, presentation profile, equipment, and prerequisites."""

import json
from pathlib import Path

from character.workflow import CreationWorkflow
from character.presentation import PresentationProfile
from character.equipment import Equipment, EquipmentState
from character.builder import CharacterBuilder


def test_ruleset_driven_creation_workflow_dnd_and_dark_heresy() -> None:
    # 1. D&D 3.5 workflow
    dnd_flow = CreationWorkflow(
        character_id="char-dnd-1",
        name="Sir Gareth",
        ruleset_id="dnd35-core",
    )
    assert dnd_flow.current_step == "abilities"
    dnd_flow.set_stat("strength", 16)
    dnd_flow.set_stat("dexterity", 12)
    dnd_flow.advance_step()
    assert dnd_flow.current_step == "race"
    dnd_flow.choose("race", "race.human")
    dnd_flow.advance_step()
    assert dnd_flow.current_step == "class"
    dnd_flow.choose("class", "class.fighter")
    dnd_flow.configure_appearance(portrait="portrait:knight", model="mesh:paladin", scale=1.0)
    char_dnd = dnd_flow.finalize()
    assert char_dnd.abilities["strength"] == 16
    assert char_dnd.derived["strength_modifier"]["value"] == 3
    assert char_dnd.presentation["portrait"] == "portrait:knight"

    # 2. Dark Heresy workflow
    dh_defs = {
        "talent.marksman": {"id": "talent.marksman", "prerequisites": [{"rule": "ballistic_skill", "minimum": 35}]},
    }
    dh_flow = CreationWorkflow(
        character_id="char-dh-1",
        name="Kaelen",
        ruleset_id="dark-heresy-core",
        ruleset_definitions=dh_defs,
    )
    assert dh_flow.current_step == "homeworld"
    dh_flow.choose("homeworld", "homeworld.hive_world")
    dh_flow.advance_step()
    assert dh_flow.current_step == "career"
    dh_flow.choose("career", "career.guardsman")
    dh_flow.advance_step()
    assert dh_flow.current_step == "characteristics"
    dh_flow.set_stat("ballistic_skill", 40)
    dh_flow.set_stat("toughness", 38)
    dh_flow.advance_step()
    assert dh_flow.current_step == "skills"
    dh_flow.advance_step()
    assert dh_flow.current_step == "talents"
    dh_flow.choose("talents", "talent.marksman")
    dh_flow.configure_appearance(portrait="portrait:guardsman", token_frame="frame:hex_steel")
    char_dh = dh_flow.finalize()
    assert char_dh.abilities["ballistic_skill"] == 40
    assert char_dh.derived["ballistic_skill_bonus"]["value"] == 4
    assert char_dh.derived["toughness_bonus"]["value"] == 3
    assert char_dh.presentation["token_frame"] == "frame:hex_steel"


def test_presentation_profile_customization_and_validation() -> None:
    profile = PresentationProfile(
        portrait="portrait:inquisitor_01",
        token="token:inquisitor",
        token_frame="frame:golden_crest",
        model="mesh:inquisitor_heavy",
        scale=1.2,
    )
    profile.set_asset("tint:primary", "#7a1c1c")
    profile.set_asset("tint:secondary", "#d4af37")
    profile.set_asset("equipment:weapon", "model:plasma_pistol")
    profile.set_asset("sound:attack", "audio:plasma_discharge")
    profile.set_asset("effect:aura", "vfx:inquisition_halo")

    assert profile.validate() == []
    record = profile.to_record()
    assert record["scale"] == 1.2
    assert record["material_tints"]["primary"] == "#7a1c1c"
    assert record["token_frame"] == "frame:golden_crest"

    # Reconstruct from record
    restored = PresentationProfile.from_record(record)
    assert restored.portrait == "portrait:inquisitor_01"
    assert restored.material_tints["secondary"] == "#d4af37"

    # Invalid profile validation
    bad_profile = PresentationProfile(scale=-0.5)
    bad_profile.set_asset("tint:bad", "not_a_hex")
    errors = bad_profile.validate()
    assert len(errors) == 2
    assert any("scale" in e for e in errors)
    assert any("hex" in e for e in errors)


def test_ruleset_validated_equipment_and_slots() -> None:
    state = EquipmentState(
        starting_wealth=500,
        proficient_groups={"martial"},
        max_carrying_capacity=50,
        character_abilities={"strength": 14},
    )
    heavy_sword = Equipment(
        item_id="item.greatsword",
        cost=50,
        weight=8,
        proficiency="martial",
        slot="two_handed",
        min_characteristic={"strength": 12},
    )
    armor = Equipment(
        item_id="item.breastplate",
        cost=200,
        weight=30,
        slot="body",
    )
    state.selected.extend([heavy_sword, armor])
    assert state.validate() == []

    # Exceeding hands limit (trying to equip an off-hand shield with two-handed sword)
    shield = Equipment(item_id="item.shield", cost=15, weight=6, slot="off_hand")
    state.selected.append(shield)
    errors = state.validate()
    assert any("hands" in e for e in errors)

    # Exceeding strength prerequisite
    state.selected.remove(shield)
    req_sword = Equipment(
        item_id="item.titan_blade",
        cost=100,
        weight=20,
        slot="main_hand",
        min_characteristic={"strength": 18},  # character has 14
    )
    state.selected.append(req_sword)
    errs2 = state.validate()
    assert any("prerequisite" in e for e in errs2)


def test_talent_and_feat_prerequisite_validation() -> None:
    builder = CharacterBuilder.from_scratch(
        character_id="char-test",
        name="Acolyte",
        package_versions={"dark-heresy-core": "1.0.0"},
        policy="strict",
    )
    builder.set_ability("ballistic_skill", 25)  # Less than 35
    builder.choose("talents", "talent.marksman")

    defs = {
        "talent.marksman": {
            "id": "talent.marksman",
            "prerequisites": [{"rule": "ballistic_skill", "minimum": 35}],
        }
    }
    issues = builder.validate_prerequisites(defs)
    assert len(issues) == 1
    assert issues[0].code == "unmet-prerequisite"
    assert "ballistic_skill >= 35" in issues[0].message


def test_feat_prerequisite_validation_supports_feats_skills_and_unknown_rules() -> None:
    builder = CharacterBuilder.from_scratch(
        character_id="feat-prerequisites",
        name="A fighter",
        package_versions={"dnd35-core": "1.0.0"},
        policy="strict",
    )
    builder.set_ability("strength", 13)
    builder.choose("feats", "feat.power-attack")
    builder.choose("feats", "feat.cleave")
    builder.character.skill_ranks["skill.ride"] = 1
    builder.choose("feats", "feat.mounted-combat")
    definitions = {
        "feat.power-attack": {"id": "feat.power-attack", "name": "Power Attack"},
        "feat.cleave": {
            "id": "feat.cleave",
            "name": "Cleave",
            "prerequisites": [
                {"rule": "strength", "minimum": 13},
                {
                    "rule": "feat",
                    "definition_id": "feat.power-attack",
                    "description": "Power Attack",
                },
            ],
        },
        "feat.mounted-combat": {
            "id": "feat.mounted-combat",
            "name": "Mounted Combat",
            "prerequisites": [
                {
                    "rule": "skill",
                    "skill_id": "skill.ride",
                    "minimum": 1,
                    "description": "Ride 1 rank",
                }
            ],
        },
    }
    assert builder.validate_prerequisites(definitions) == []

    builder.character.skill_ranks["skill.ride"] = 0
    issues = builder.validate_prerequisites(definitions)
    assert len(issues) == 1
    assert "Ride 1 rank" in issues[0].message

    definitions["feat.mounted-combat"]["prerequisites"] = [
        {"rule": "unsupported", "description": "Wild shape ability"}
    ]
    issues = builder.validate_prerequisites(definitions)
    assert any("Wild shape ability" in issue.message for issue in issues)


def test_creation_workflow_uses_package_flow_for_initial_and_new_rulesets() -> None:
    for package_id in ("dnd35-core", "dark-heresy-core"):
        package = json.loads(
            (Path("content") / package_id / "package.json").read_text()
        )
        workflow = CreationWorkflow(
            character_id=f"character-{package_id}",
            name="Test",
            ruleset_id=package_id,
            ruleset_definitions=package["definitions"],
            creation_flow=package["creation_flow"],
            package_versions={package_id: package["version"]},
        )
        assert workflow.steps == [
            step["id"] for step in package["creation_flow"]["steps"]
        ]
        assert workflow.current_step == package["creation_flow"]["steps"][0]["id"]

    custom_workflow = CreationWorkflow(
        character_id="character-custom",
        name="Test",
        ruleset_id="custom-rpg",
        creation_flow={
            "steps": [
                {"id": "origin", "label": "Origin", "fields": []},
                {"id": "attributes", "label": "Attributes", "fields": []},
            ]
        },
        package_versions={"custom-rpg": "3.2.1"},
    )
    assert custom_workflow.current_step == "origin"
    assert custom_workflow.advance_step() == "attributes"
    assert custom_workflow.builder.character.package_versions == {
        "custom-rpg": "3.2.1"
    }


def test_package_fields_update_validate_and_finalize_character() -> None:
    package = json.loads(
        (Path("content/dnd35-core/package.json")).read_text()
    )
    workflow = CreationWorkflow(
        character_id="character-fields",
        name="Draft",
        ruleset_id=package["id"],
        ruleset_definitions=package["definitions"],
        creation_flow=package["creation_flow"],
        package_versions={package["id"]: package["version"]},
    )
    for attribute in (
        "strength",
        "dexterity",
        "constitution",
        "intelligence",
        "wisdom",
        "charisma",
    ):
        workflow.set_field(attribute, 12)
    workflow.set_field("race", "race.human")
    workflow.set_field("class", "class.fighter")
    workflow.set_field(
        "skills",
        [
            {"skill_id": "skill.climb", "ranks": 4},
            {"skill_id": "skill.jump", "ranks": 4},
            {"skill_id": "skill.ride", "ranks": 4},
            {"skill_id": "skill.swim", "ranks": 4},
        ],
    )
    assert workflow.validate() == []
    character = workflow.finalize()
    assert character.abilities["strength"] == 12
    assert character.choices == {
        "race": ["race.human"],
        "class": ["class.fighter"],
        "skills": ["skill.climb", "skill.jump", "skill.ride", "skill.swim"],
    }
    assert character.skill_ranks == {
        "skill.climb": 4,
        "skill.jump": 4,
        "skill.ride": 4,
        "skill.swim": 4,
    }
    assert character.provenance["abilities"]["strength"] == "user"
    assert character.provenance["choices"]["race"] == "user"

    try:
        workflow.set_field("strength", 99)
    except ValueError as error:
        assert "at most 18" in str(error)
    else:
        raise AssertionError("expected ability range validation error")

    try:
        workflow.set_field("race", "class.fighter")
    except ValueError as error:
        assert "not an available race choice" in str(error)
    else:
        raise AssertionError("expected choice definition validation error")


def test_final_review_reports_prerequisites_provenance_and_package_versions() -> None:
    package = json.loads(Path("content/dnd35-core/package.json").read_text())
    workflow = CreationWorkflow(
        character_id="character-review",
        name="Review",
        ruleset_id=package["id"],
        ruleset_definitions=package["definitions"],
        policy="strict",
        creation_flow=package["creation_flow"],
        package_versions={package["id"]: package["version"]},
    )
    for attribute in (
        "strength",
        "dexterity",
        "constitution",
        "intelligence",
        "wisdom",
        "charisma",
    ):
        workflow.set_field(attribute, 10)
    workflow.set_field("race", "race.human")
    workflow.set_field("class", "class.fighter")
    workflow.set_field(
        "skills",
        [
            {"skill_id": "skill.climb", "ranks": 4},
            {"skill_id": "skill.jump", "ranks": 4},
            {"skill_id": "skill.ride", "ranks": 4},
        ],
    )
    workflow.set_field("feats", ["feat.power-attack"])

    report = workflow.review()
    assert report["can_finalize"] is False
    assert any(issue["code"] == "unmet-prerequisite" for issue in report["issues"])
    assert report["package_versions"] == {"dnd35-core": "1.0.0"}
    assert report["provenance"]["choices"]["race"] == "user"
    assert "strength_modifier" in report["derived"]

    workflow.set_field("strength", 16)
    report = workflow.review()
    assert report["can_finalize"] is True
    character = workflow.finalize()
    assert character.abilities["strength"] == 16
