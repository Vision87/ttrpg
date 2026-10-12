from pathlib import Path
from tempfile import TemporaryDirectory
from unittest.mock import patch

from clients.creation_service import CharacterCreationApplication


def _application(data_directory: str) -> CharacterCreationApplication:
    return CharacterCreationApplication(
        Path.cwd(),
        Path(data_directory),
    )


def test_creation_service_lists_flows_and_runs_template_to_board() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        status, response = app.handle("GET", "/api/rulesets")
        assert status == 200
        packages = {item["id"]: item for item in response["rulesets"]}
        assert set(packages) == {"dnd35-core", "dark-heresy-core"}
        assert packages["dnd35-core"]["theme"]["tokens"]["accent"] == "#D5AE67"
        assert packages["dnd35-core"]["theme"]["assets"] == [
            {"slot": "board_frame", "asset": "theme.dnd35.frame@1"},
            {"slot": "display_font", "asset": "theme.cinzel@1"},
            {"slot": "metal_trim", "asset": "theme.dnd35.metal@1"},
            {"slot": "ui_background", "asset": "theme.dnd35.wood@1"},
            {"slot": "ui_control", "asset": "theme.dnd35.wood@1"},
            {"slot": "ui_control_active", "asset": "theme.dnd35.wood-active@1"},
            {"slot": "ui_control_hover", "asset": "theme.dnd35.wood-hover@1"},
            {"slot": "ui_panel", "asset": "theme.dnd35.wood@1"},
        ]
        assert packages["dnd35-core"]["theme"]["diagnostics"] == []
        assert packages["dark-heresy-core"]["theme"]["assets"] == [
            {"slot": "display_font", "asset": "theme.medievalsharp@1"}
        ]
        status, flow = app.handle("GET", "/api/rulesets/dnd35-core/flow")
        assert status == 200
        assert flow["creation_flow"]["steps"][0]["id"] == "abilities"
        race_field = flow["creation_flow"]["steps"][1]["fields"][0]
        race_options = {
            choice["id"]: choice for choice in race_field["options"]
        }
        assert {
            option_id: option["label"]
            for option_id, option in race_options.items()
            if not option["parent_id"]
        } == {
            "race.dwarf": "Dwarf",
            "race.elf": "Elf",
            "race.gnome": "Gnome",
            "race.half-elf": "Half-Elf",
            "race.half-orc": "Half-Orc",
            "race.halfling": "Halfling",
            "race.human": "Human",
        }
        assert {
            option["label"]
            for option in race_options.values()
            if option["parent_id"] == "race.elf"
        } == {
            "High Elf",
            "Gray Elf",
            "Wild Elf",
            "Wood Elf",
            "Aquatic Elf",
            "Drow",
        }
        class_field = flow["creation_flow"]["steps"][2]["fields"][0]
        assert {
            option["id"]: option["label"]
            for option in class_field["options"]
            if not option["parent_id"]
        } == {
            "class.barbarian": "Barbarian",
            "class.bard": "Bard",
            "class.cleric": "Cleric",
            "class.druid": "Druid",
            "class.fighter": "Fighter",
            "class.monk": "Monk",
            "class.paladin": "Paladin",
            "class.ranger": "Ranger",
            "class.rogue": "Rogue",
            "class.sorcerer": "Sorcerer",
            "class.wizard": "Wizard",
        }
        assert {
            option["id"]: option["label"]
            for option in class_field["options"]
            if option["parent_id"] == "class.wizard"
        } == {
            "class.wizard.abjurer": "Abjurer",
            "class.wizard.conjurer": "Conjurer",
            "class.wizard.diviner": "Diviner",
            "class.wizard.enchanter": "Enchanter",
            "class.wizard.evoker": "Evoker",
            "class.wizard.illusionist": "Illusionist",
            "class.wizard.necromancer": "Necromancer",
            "class.wizard.transmuter": "Transmuter",
        }
        skills_field = flow["creation_flow"]["steps"][3]["fields"][0]
        assert skills_field["skill_selection"] == "ranks"
        assert len(skills_field["options"]) >= 35
        assert all(option["label"] and option["detail"] for option in skills_field["options"])
        assert "skill.appraise" in {option["id"] for option in skills_field["options"]}
        feats_field = flow["creation_flow"]["steps"][4]["fields"][0]
        feat_options = {option["id"]: option for option in feats_field["options"]}
        assert len(feat_options) >= 100
        assert feat_options["feat.power-attack"]["label"] == "Power Attack"
        assert all(
            option["description"].strip()
            for option in feat_options.values()
        )
        assert feat_options["feat.cleave"]["prerequisites"] == [
            {"rule": "strength", "minimum": 13},
            {
                "rule": "feat",
                "definition_id": "feat.power-attack",
                "description": "Power Attack",
            },
        ]

        status, draft_response = app.handle(
            "POST",
            "/api/drafts",
            {
                "ruleset_id": "dnd35-core",
                "name": "Arannis",
                "template_id": "template.defensive-fighter",
            },
        )
        assert status == 201
        draft = draft_response["draft"]
        assert draft["template_id"] == "template.defensive-fighter"
        draft_id = draft["id"]

        status, selected_race = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "race", "value": "race.elf.wood"},
        )
        assert status == 200
        assert selected_race["draft"]["choices"]["race"] == ["race.elf.wood"]
        status, selected_subclass = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "class", "value": "class.wizard.abjurer"},
        )
        assert status == 200
        assert selected_subclass["draft"]["choices"]["class"] == [
            "class.wizard.abjurer"
        ]

        status, resumed = app.handle("GET", f"/api/drafts/{draft_id}")
        assert status == 200
        assert resumed["current_step"] == "abilities"
        assert resumed["review"]["can_finalize"] is False

        status, updated = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "strength", "value": 18},
        )
        assert status == 200
        assert updated["draft"]["provenance"]["abilities"]["strength"] == "user"

        skill_ranks = [
            {"skill_id": "skill.concentration", "ranks": 4},
            {"skill_id": "skill.spellcraft", "ranks": 4},
        ]
        status, skill_update = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "skills", "value": skill_ranks},
        )
        assert status == 200
        allocation = next(
            value["skill_allocation"]
            for value in skill_update["field_values"]
            if value["field_id"] == "skills"
        )
        assert allocation["class_name"] == "Wizard"
        assert allocation["available_points"] == 8
        assert allocation["spent_points"] == 8

        status, reviewed = app.handle("POST", f"/api/drafts/{draft_id}/review")
        assert status == 200
        assert reviewed["can_finalize"] is True
        assert reviewed["package_versions"] == {"dnd35-core": "1.0.0"}

        status, finalized = app.handle("POST", f"/api/drafts/{draft_id}/finalize")
        assert status == 200
        character_id = finalized["character"]["id"]

        status, started = app.handle(
            "POST",
            f"/api/characters/{character_id}/start",
        )
        assert status == 200
        assert started["snapshot"]["controller_id"] == "local-human"
        entities = {entity["id"]: entity for entity in started["snapshot"]["entities"]}
        assert entities[character_id]["position"] == {"x": 2, "y": 1, "z": 0}
        assert "npc-1" in entities
        assert started["theme"] == updated["theme"]


def test_creation_service_uses_generic_flows_and_validation_for_dark_heresy() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        status, flow = app.handle(
            "GET",
            "/api/rulesets/dark-heresy-core/flow",
        )
        assert status == 200
        assert flow["creation_flow"].get("score_groups", []) == []
        numeric_fields = [
            field
            for step in flow["creation_flow"]["steps"]
            for field in step["fields"]
            if field["type"] == "number"
        ]
        assert numeric_fields
        assert all("roll" not in field for field in numeric_fields)

        status, response = app.handle(
            "POST",
            "/api/drafts",
            {
                "ruleset_id": "dark-heresy-core",
                "name": "Kaelen",
                "template_id": "template.guardsman-scout",
                "policy": "strict",
            },
        )
        assert status == 201
        draft_id = response["draft"]["id"]
        assert response["current_step"] == "characteristics"
        assert response["review"]["can_finalize"] is True
        draft_id = response["draft"]["id"]
        status, error = app.handle(
            "POST",
            f"/api/drafts/{draft_id}/roll",
            {"field_id": numeric_fields[0]["id"]},
        )
        assert status == 400
        assert "does not support rolling" in error["error"]["message"]
        status, error = app.handle(
            "POST",
            f"/api/drafts/{draft_id}/roll-group",
            {"group_id": "ability-scores"},
        )
        assert status == 400
        assert "Unknown ability score group" in error["error"]["message"]

        status, resumed = app.handle("GET", f"/api/drafts/{draft_id}")
        assert status == 200
        assert resumed["draft"]["package_versions"] == {
            "dark-heresy-core": "1.0.0"
        }
        status, finalized = app.handle("POST", f"/api/drafts/{draft_id}/finalize")
        assert status == 200
        assert finalized["character"]["package_versions"] == {
            "dark-heresy-core": "1.0.0"
        }
        character_id = finalized["character"]["id"]
        status, started = app.handle(
            "POST",
            f"/api/characters/{character_id}/start",
        )
        assert status == 200
        assert started["theme"]["tokens"]["accent"] == "#A7463D"
        assert started["snapshot"]["controller_id"] == "local-human"
        entities = {entity["id"]: entity for entity in started["snapshot"]["entities"]}
        assert entities[character_id]["position"] == {"x": 2, "y": 1, "z": 0}
        assert "npc-1" in entities


def test_creation_service_uses_skill_ranks_for_dnd_and_training_for_dark_heresy() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        status, dnd_flow = app.handle(
            "GET",
            "/api/rulesets/dnd35-core/flow",
        )
        assert status == 200
        dnd_skills = next(
            field
            for step in dnd_flow["creation_flow"]["steps"]
            for field in step["fields"]
            if field["id"] == "skills"
        )
        assert dnd_skills["skill_selection"] == "ranks"
        assert len(dnd_skills["options"]) == 45
        assert {
            option["label"] for option in dnd_skills["options"]
        } >= {
            "Appraise",
            "Bluff",
            "Climb",
            "Disable Device",
            "Knowledge (Arcana)",
            "Listen",
            "Search",
            "Speak Language (one point per language)",
            "Use Magic Device",
        }

        status, created = app.handle(
            "POST",
            "/api/drafts",
            {"ruleset_id": "dnd35-core", "name": "Skill Expert"},
        )
        assert status == 201
        draft_id = created["draft"]["id"]
        for field_id, value in (
            ("strength", 10),
            ("dexterity", 10),
            ("constitution", 10),
            ("intelligence", 10),
            ("wisdom", 10),
            ("charisma", 10),
            ("race", "race.human"),
            ("class", "class.rogue"),
        ):
            status, _ = app.handle(
                "PUT",
                f"/api/drafts/{draft_id}",
                {"field_id": field_id, "value": value},
            )
            assert status == 200

        incomplete = [
            {"skill_id": "skill.hide", "ranks": 4},
            {"skill_id": "skill.climb", "ranks": 4},
        ]
        status, partial = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "skills", "value": incomplete},
        )
        assert status == 200
        assert partial["review"]["can_finalize"] is False
        assert any(
            "Spend all skill points" in issue["message"]
            for issue in partial["review"]["issues"]
        )

        allocation = [
            {"skill_id": "skill.hide", "ranks": 4},
            {"skill_id": "skill.climb", "ranks": 4},
            {"skill_id": "skill.listen", "ranks": 4},
            {"skill_id": "skill.move_silently", "ranks": 4},
            {"skill_id": "skill.search", "ranks": 4},
            {"skill_id": "skill.spot", "ranks": 4},
            {"skill_id": "skill.swim", "ranks": 4},
            {"skill_id": "skill.use_magic_device", "ranks": 2},
            {"skill_id": "skill.heal", "ranks": 1.5},
            {"skill_id": "skill.concentration", "ranks": 1.5},
        ]
        status, updated = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "skills", "value": allocation},
        )
        assert status == 200
        assert updated["draft"]["skill_ranks"] == {
            "skill.hide": 4.0,
            "skill.climb": 4.0,
            "skill.listen": 4.0,
            "skill.move_silently": 4.0,
            "skill.search": 4.0,
            "skill.spot": 4.0,
            "skill.swim": 4.0,
            "skill.use_magic_device": 2.0,
            "skill.heal": 1.5,
            "skill.concentration": 1.5,
        }
        points = next(
            value["skill_allocation"]
            for value in updated["field_values"]
            if value["field_id"] == "skills"
        )
        assert points["available_points"] == points["spent_points"] == 36
        assert updated["review"]["can_finalize"] is True

        status, error = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {
                "field_id": "skills",
                "value": allocation
                + [{"skill_id": "skill.heal", "ranks": 0.5}],
            },
        )
        assert status == 400
        assert "Duplicate skill rank entry" in error["error"]["message"]
        status, error = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {
                "field_id": "skills",
                "value": [
                    {"skill_id": "skill.hide", "ranks": 4},
                    {"skill_id": "skill.climb", "ranks": 4},
                    {"skill_id": "skill.listen", "ranks": 4},
                    {"skill_id": "skill.move_silently", "ranks": 4},
                    {"skill_id": "skill.search", "ranks": 4},
                    {"skill_id": "skill.spot", "ranks": 4},
                    {"skill_id": "skill.swim", "ranks": 4},
                    {"skill_id": "skill.use_magic_device", "ranks": 2},
                    {"skill_id": "skill.heal", "ranks": 3},
                ],
            },
        )
        assert status == 400
        assert "cross-class and is capped at 2" in error["error"]["message"]
        status, resumed = app.handle("GET", f"/api/drafts/{draft_id}")
        assert status == 200
        assert resumed["draft"]["skill_ranks"] == updated["draft"]["skill_ranks"]
        status, changed_class = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "class", "value": "class.fighter"},
        )
        assert status == 200
        assert changed_class["review"]["can_finalize"] is False
        status, restored_class = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "class", "value": "class.rogue"},
        )
        assert status == 200
        assert restored_class["review"]["can_finalize"] is True

        status, dark_heresy_flow = app.handle(
            "GET",
            "/api/rulesets/dark-heresy-core/flow",
        )
        assert status == 200
        dh_skills = next(
            field
            for step in dark_heresy_flow["creation_flow"]["steps"]
            for field in step["fields"]
            if field["id"] == "skills"
        )
        assert dh_skills["skill_selection"] == "trained"
        assert len(dh_skills["options"]) >= 40
        assert all(
            option["label"] and option["detail"] for option in dh_skills["options"]
        )
        dh_skill_options = {
            option["id"]: option for option in dh_skills["options"]
        }
        assert dh_skill_options["skill.command"]["trained_only"] is True
        assert dh_skill_options["skill.awareness"]["trained_only"] is False

        status, dh_draft = app.handle(
            "POST",
            "/api/drafts",
            {
                "ruleset_id": "dark-heresy-core",
                "name": "Trained Acolyte",
                "template_id": "template.guardsman-scout",
            },
        )
        assert status == 201
        dh_id = dh_draft["draft"]["id"]
        status, trained = app.handle(
            "PUT",
            f"/api/drafts/{dh_id}",
            {
                "field_id": "skills",
                "value": ["skill.awareness", "skill.command"],
            },
        )
        assert status == 200
        assert trained["draft"]["choices"]["skills"] == [
            "skill.awareness",
            "skill.command",
        ]
        assert trained["draft"]["skill_ranks"] == {}


def test_creation_service_returns_actionable_errors_for_invalid_inputs() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        status, error = app.handle(
            "POST",
            "/api/drafts",
            {"ruleset_id": "missing-rpg", "name": "Test"},
        )
        assert status == 400
        assert "not installed" in error["error"]["message"]

        status, error = app.handle("PUT", "/api/drafts/../outside", {})
        assert status == 400
        assert "Record id" in error["error"]["message"]


def test_creation_service_rolls_and_rerolls_individual_ability_scores() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        status, created = app.handle(
            "POST",
            "/api/drafts",
            {"ruleset_id": "dnd35-core", "name": "Test Adventurer"},
        )
        assert status == 201
        draft_id = created["draft"]["id"]

        with patch("character.workflow.secrets.SystemRandom") as random_source:
            random_source.return_value.randint.side_effect = [6, 5, 2, 1]
            status, rolled = app.handle(
                "POST",
                f"/api/drafts/{draft_id}/roll",
                {"field_id": "strength"},
            )
        assert status == 200
        strength_value = next(
            value for value in rolled["field_values"]
            if value["field_id"] == "strength"
        )
        assert strength_value["number_value"] == 13
        assert strength_value["roll_dice"] == [6, 5, 2, 1]
        assert strength_value["roll_dropped"] == [1]
        assert strength_value["roll_score"] == 13
        assert strength_value["roll_count"] == 1
        assert rolled["draft"]["provenance"]["abilities"]["strength"] == "rolled"

        with patch("character.workflow.secrets.SystemRandom") as random_source:
            random_source.return_value.randint.side_effect = [3, 4, 2, 1]
            status, rerolled = app.handle(
                "POST",
                f"/api/drafts/{draft_id}/roll",
                {"field_id": "strength"},
            )
        assert status == 200
        assert rerolled["field_values"][0]["field_id"] == "strength"
        rerolled_strength = next(
            value for value in rerolled["field_values"]
            if value["field_id"] == "strength"
        )
        assert rerolled_strength["number_value"] == 9
        assert rerolled_strength["roll_score"] == 9
        assert rerolled_strength["roll_count"] == 2
        assert rerolled["draft"]["provenance"]["abilities"]["strength"] == "rerolled"
        assert len(
            rerolled["draft"]["provenance"]["ability_rolls"]["strength"]
        ) == 2

        status, resumed = app.handle("GET", f"/api/drafts/{draft_id}")
        assert status == 200
        assert resumed["field_values"] == rerolled["field_values"]
        assert len(resumed["draft"]["ability_rolls"]["strength"]) == 2

        status, error = app.handle(
            "POST",
            f"/api/drafts/{draft_id}/roll",
            {"field_id": "race"},
        )
        assert status == 400
        assert "does not support rolling" in error["error"]["message"]

        status, error = app.handle(
            "POST",
            f"/api/drafts/{draft_id}/roll",
            {"field_id": "strength", "value": 18, "dice": [6, 6, 6, 6]},
        )
        assert status == 400
        assert "only field_id" in error["error"]["message"]


def test_creation_service_rolls_and_rerolls_ability_score_groups_atomically() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        status, created = app.handle(
            "POST",
            "/api/drafts",
            {"ruleset_id": "dnd35-core", "name": "Set Roller"},
        )
        assert status == 201
        draft_id = created["draft"]["id"]

        with patch("character.workflow.secrets.SystemRandom") as random_source:
            random_source.return_value.randint.side_effect = [6, 5, 2, 1] * 6
            status, rolled = app.handle(
                "POST",
                f"/api/drafts/{draft_id}/roll-group",
                {"group_id": "ability-scores"},
            )
        assert status == 200
        values = {value["field_id"]: value for value in rolled["field_values"]}
        abilities = {
            "strength", "dexterity", "constitution",
            "intelligence", "wisdom", "charisma",
        }
        assert all(values[field_id]["number_value"] == 13 for field_id in abilities)
        assert all(values[field_id]["roll_dice"] == [6, 5, 2, 1] for field_id in abilities)
        assert all(values[field_id]["roll_dropped"] == [1] for field_id in abilities)
        assert all(values[field_id]["roll_count"] == 1 for field_id in abilities)

        with patch("character.workflow.secrets.SystemRandom") as random_source:
            random_source.return_value.randint.side_effect = [2, 4, 3, 1]
            status, individually_rerolled = app.handle(
                "POST",
                f"/api/drafts/{draft_id}/roll",
                {"field_id": "strength"},
            )
        assert status == 200
        strength = next(
            value
            for value in individually_rerolled["field_values"]
            if value["field_id"] == "strength"
        )
        assert strength["number_value"] == 9
        assert strength["roll_count"] == 2

        with patch("character.workflow.secrets.SystemRandom") as random_source:
            random_source.return_value.randint.side_effect = [3, 4, 2, 1] * 6
            status, rerolled = app.handle(
                "POST",
                f"/api/drafts/{draft_id}/roll-group",
                {"group_id": "ability-scores"},
            )
        assert status == 200
        rerolled_values = {
            value["field_id"]: value for value in rerolled["field_values"]
        }
        assert all(
            rerolled_values[field_id]["number_value"] == 9
            for field_id in abilities
        )
        assert rerolled_values["strength"]["roll_count"] == 3
        assert all(
            rerolled_values[field_id]["roll_count"] == 2
            for field_id in abilities - {"strength"}
        )
        events = rerolled["draft"]["ability_roll_events"]
        assert [event["scope"] for event in events] == [
            "group",
            "individual",
            "group",
        ]
        assert set(events[0]["results"]) == abilities
        assert set(events[1]["results"]) == {"strength"}
        assert set(events[2]["results"]) == abilities

        status, error = app.handle(
            "POST",
            f"/api/drafts/{draft_id}/roll-group",
            {"group_id": "ability-scores", "scores": {"strength": 18}},
        )
        assert status == 400
        assert "only group_id" in error["error"]["message"]

        status, resumed = app.handle("GET", f"/api/drafts/{draft_id}")
        assert status == 200
        assert resumed["draft"]["ability_roll_events"] == events
        assert {
            value["field_id"]: value["number_value"]
            for value in resumed["field_values"]
            if value["field_id"] in abilities
        } == {
            field_id: 9
            for field_id in abilities
        }
        for field_id, value in (
            ("race", "race.human"),
            ("class", "class.fighter"),
        ):
            status, _ = app.handle(
                "PUT",
                f"/api/drafts/{draft_id}",
                {"field_id": field_id, "value": value},
            )
            assert status == 200
        status, allocated = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {
                "field_id": "skills",
                "value": [
                    {"skill_id": "skill.climb", "ranks": 4},
                    {"skill_id": "skill.jump", "ranks": 4},
                ],
            },
        )
        assert status == 200
        status, finalized = app.handle(
            "POST",
            f"/api/drafts/{draft_id}/finalize",
        )
        assert status == 200
        assert finalized["character"]["provenance"]["ability_roll_events"] == events
        assert len(
            finalized["character"]["provenance"]["ability_rolls"]["strength"]
        ) == 3


def test_creation_service_group_roll_failure_preserves_existing_scores() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        status, created = app.handle(
            "POST",
            "/api/drafts",
            {"ruleset_id": "dnd35-core", "name": "Atomic Roller"},
        )
        assert status == 201
        draft_id = created["draft"]["id"]

        with patch("character.workflow.secrets.SystemRandom") as random_source:
            random_source.return_value.randint.side_effect = [6, 5, 2, 1] * 6
            status, rolled = app.handle(
                "POST",
                f"/api/drafts/{draft_id}/roll-group",
                {"group_id": "ability-scores"},
            )
        assert status == 200
        original_values = {
            item["field_id"]: item["number_value"]
            for item in rolled["field_values"]
            if "number_value" in item
        }

        manifest = app.manifests[("dnd35-core", "1.0.0")]
        charisma_field = manifest["creation_flow"]["steps"][0]["fields"][-1]
        charisma_field["maximum"] = 3
        with patch("character.workflow.secrets.SystemRandom") as random_source:
            random_source.return_value.randint.return_value = 6
            status, error = app.handle(
                "POST",
                f"/api/drafts/{draft_id}/roll-group",
                {"group_id": "ability-scores"},
            )
        assert status == 400
        assert "above 3" in error["error"]["message"]

        status, resumed = app.handle("GET", f"/api/drafts/{draft_id}")
        assert status == 200
        assert {
            item["field_id"]: item["number_value"]
            for item in resumed["field_values"]
            if "number_value" in item
        } == original_values
        assert len(resumed["draft"]["ability_roll_events"]) == 1
        charisma_field["maximum"] = 18

        for field_id, value in (
            ("race", "race.human"),
            ("class", "class.fighter"),
        ):
            status, _ = app.handle(
                "PUT",
                f"/api/drafts/{draft_id}",
                {"field_id": field_id, "value": value},
            )
            assert status == 200
        status, allocation_preview = app.handle(
            "GET",
            f"/api/drafts/{draft_id}",
        )
        assert status == 200
        skill_budget = next(
            value["skill_allocation"]
            for value in allocation_preview["field_values"]
            if value["field_id"] == "skills"
        )["available_points"]
        skill_ranks = []
        remaining = skill_budget
        for skill_id in (
            "skill.climb",
            "skill.craft",
            "skill.handle_animal",
            "skill.intimidate",
            "skill.jump",
            "skill.ride",
            "skill.swim",
        ):
            if remaining <= 0:
                break
            rank = min(4, remaining)
            skill_ranks.append({"skill_id": skill_id, "ranks": rank})
            remaining -= rank
        assert remaining == 0
        status, allocated = app.handle(
            "PUT",
            f"/api/drafts/{draft_id}",
            {"field_id": "skills", "value": skill_ranks},
        )
        assert status == 200
        status, finalized = app.handle(
            "POST",
            f"/api/drafts/{draft_id}/finalize",
        )
        assert status == 200
        character = finalized["character"]
        assert character["provenance"]["ability_roll_events"] == [
            {
                "scope": "group",
                "group_id": "ability-scores",
                "results": rolled["draft"]["ability_roll_events"][0]["results"],
            }
        ]
        assert len(character["provenance"]["ability_rolls"]["strength"]) == 1


def test_individual_roll_requires_score_group_configuration() -> None:
    with TemporaryDirectory() as directory:
        app = _application(directory)
        manifest = app.manifests[("dnd35-core", "1.0.0")]
        manifest["creation_flow"]["score_groups"] = []
        status, created = app.handle(
            "POST",
            "/api/drafts",
            {"ruleset_id": "dnd35-core", "name": "Ungrouped"},
        )
        assert status == 201
        status, error = app.handle(
            "POST",
            f"/api/drafts/{created['draft']['id']}/roll",
            {"field_id": "strength"},
        )
        assert status == 400
        assert "not enabled for rolling by a score group" in error["error"]["message"]
