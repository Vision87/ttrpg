from pathlib import Path


ROOT = Path("UnityClient")


def test_unity_client_contract_files_exist() -> None:
    expected = [
        ROOT / "Assets/Scripts/SessionDtos.cs",
        ROOT / "Assets/Scripts/SessionProjection.cs",
        ROOT / "Assets/Scripts/TacticalProjection.cs",
        ROOT / "Assets/Scripts/ImmersiveProjection.cs",
        ROOT / "Assets/Scripts/SessionClient.cs",
        ROOT / "Assets/Scripts/CharacterCreationClient.cs",
        ROOT / "Assets/StreamingAssets/session-fixture.json",
        ROOT / "Packages/manifest.json",
        ROOT / "ProjectSettings/ProjectVersion.txt",
    ]
    assert all(path.is_file() for path in expected)


def test_unity_client_keeps_rules_out_of_projections() -> None:
    source = (ROOT / "Assets/Scripts/SessionProjection.cs").read_text()
    tactical = (ROOT / "Assets/Scripts/TacticalProjection.cs").read_text()
    immersive = (ROOT / "Assets/Scripts/ImmersiveProjection.cs").read_text()
    assert "JsonUtility" not in source
    assert "Random" not in tactical
    assert "Random" not in immersive
    assert "SessionEnvelopeDto" in source


def test_unity_client_renders_package_flows_and_ruleset_themes_generically() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    projections = (ROOT / "Assets/Scripts/SessionProjection.cs").read_text()
    assert "/api/rulesets" in creator
    assert "/api/drafts" in creator
    assert "field.type" in creator
    assert "FindStepIndex" in creator
    assert "activeTheme" in creator
    assert "Resources.Load<Texture2D>" in creator
    assert "Resources.Load<Font>" in creator
    assert "assetReference.LastIndexOf('@')" in creator
    assert "ui_background" in creator
    assert "ui_panel" in creator
    assert "ui_control_hover" in creator
    assert "ui_control_active" in creator
    assert "metal_trim" in creator
    assert "board_frame" in creator
    assert "Resources.Load<Texture2D>" in creator
    assert "ApplyThemeStyles" in creator
    assert "CreateFrameStyle" in creator
    assert (ROOT / "Assets/Resources/theme.dnd35.wood.png").is_file()
    assert (ROOT / "Assets/Resources/theme.dnd35.wood-active.png").is_file()
    assert (ROOT / "Assets/Resources/theme.dnd35.wood-hover.png").is_file()
    assert (ROOT / "Assets/Resources/theme.dnd35.metal.png").is_file()
    assert (ROOT / "Assets/Resources/theme.dnd35.frame.png").is_file()
    assert (ROOT / "Assets/Resources/theme.cinzel.ttf").is_file()
    assert (ROOT / "Assets/Resources/Cinzel-OFL.txt").is_file()
    assert (ROOT / "Assets/Resources/theme.medievalsharp.ttf").is_file()
    assert (ROOT / "Assets/Resources/MedievalSharp-OFL.txt").is_file()
    assert "/roll" in creator
    assert "Reroll " in creator
    assert "/roll-group" in creator
    assert "Roll All Ability Scores" in creator
    assert "Reroll All Ability Scores" in creator
    assert "CreationScoreGroupDto" in creator
    assert 'field.type == "number" && IsIndividuallyRollable(field)' in creator
    assert "private bool IsIndividuallyRollable(CreationFieldDto field)" in creator
    assert "member == field.id" in creator
    assert "GroupIsOnStep" in creator
    assert "HasNestedOptions" in creator
    assert "DrawNestedChoices" in creator
    assert "DrawSkillRanks" in creator
    assert "DrawTrainedSkills" in creator
    assert "DrawFeatChoices" in creator
    assert "Only eligible feats" in creator
    assert '"  [Unavailable]"' in creator
    assert "Search feats" in creator
    assert "GetFeatPrerequisiteFailures" in creator
    assert "inspectedFeatId" in creator
    assert "DrawInspectedFeat" in creator
    assert '"Add feat"' in creator
    assert '"Remove feat"' in creator
    assert "FeatRequirementState" in creator
    assert '"CANNOT VERIFY"' in creator
    assert "new Color(1f, 0.3f, 0.28f)" in creator
    assert "GUILayout.Toggle(isInspected, rowLabel, \"Button\")" in creator
    assert "GetSelectedValues(field.id)" in creator
    assert "selected.Add(option.id);" in creator
    assert "GUILayout.Button(actionLabel)" in creator
    assert "HasFeatPrerequisiteFailures(option)" in creator
    assert "GUILayout.BeginHorizontal();" in creator
    assert "Screen.width >= 980f" in creator
    assert "option.description" in creator
    assert "public string description;" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "scrollPosition = Vector2.zero;" in creator
    assert "SkillAllocationOptionDto" in creator
    assert "skillRankValues[option.skill_id]" in creator
    assert 'GUILayout.Button("-", GUILayout.Width(32))' in creator
    assert 'GUILayout.Button("+", GUILayout.Width(32))' in creator
    assert "current = Mathf.Max(0f, current - rankStep);" in creator
    assert "pointCost <= remainingPoints" in creator
    assert '" remaining)"' in creator
    assert "public string skill_id;" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "CreationPrerequisiteDto" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "option.parent_id" in creator
    assert "parent_id" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "ApplyTheme(envelope.theme)" in projections


def test_theme_surfaces_and_board_frame_adapt_without_changing_play_surface() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    projection = (ROOT / "Assets/Scripts/SessionProjection.cs").read_text()
    assert "DrawBoardFrame();" in creator
    assert "DrawTextureWithTexCoords" in creator
    assert "Mathf.Max(0f, Screen.width - 2f * horizontalMargin)" in creator
    assert "Mathf.Min(340f, Mathf.Max(0f, boardWidth - 24f))" in creator
    assert "new RectOffset(24, 24, 24, 24)" in creator
    assert "themeBoardFrame" not in projection
    assert "Camera.main.backgroundColor = background" in projection


def test_feat_detail_pane_separates_inspection_from_selection() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    browsing = creator[
        creator.index("private void DrawFeatChoices"):
        creator.index("private static CreationOptionDto FindVisibleFeat")
    ]
    detail = creator[
        creator.index("private void DrawInspectedFeat"):
        creator.index("private List<string> GetFeatPrerequisiteFailures")
    ]
    requirement_status = creator[
        creator.index("private List<FeatRequirementStatus> GetFeatRequirementStatuses"):
        creator.index("private static string GetFeatRequirementDescription")
    ]
    assert "inspectedFeatId = option.id;" in browsing
    assert "selected.Add(option.id)" not in browsing
    assert "selected.Remove(option.id)" not in browsing
    assert "GUILayout.Button(actionLabel)" in detail
    assert "selected.Add(option.id);" in detail
    assert "selected.Remove(option.id);" in detail
    assert "FeatRequirementState.Met" in requirement_status
    assert "FeatRequirementState.Unmet" in requirement_status
    assert "FeatRequirementState.CannotVerify" in requirement_status
    assert 'prerequisite.rule == "feat"' in requirement_status
    assert 'prerequisite.rule == "skill"' in requirement_status
    assert "IsAbilityId(prerequisite.rule)" in requirement_status
    assert "Screen.width >= 980f" in browsing
    assert "GUILayout.BeginHorizontal();" in browsing
    assert "DrawInspectedFeat(visibleOptions, selected, false)" in browsing
