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
    assert "StepSummaryHeader" in creator
    assert "SaveStepAndNavigate" in creator
    assert "SaveCurrentStepFields" in creator
    assert '"/step"' in creator
    assert "public string step_id;" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
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
    assert "CreationUiStyles.Selection) && !isInspected" in creator
    assert "GetSelectedValues(field.id)" in creator
    assert "selected.Add(option.id);" in creator
    assert "CreationUiStyles.TertiaryButton(actionLabel)" in creator
    assert "HasFeatPrerequisiteFailures(option)" in creator
    assert "GUILayout.BeginHorizontal();" in creator
    assert "UiLayout.CurrentDensity.SideBySide" in creator
    assert "option.description" in creator
    assert "public string description;" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "scrollPosition = Vector2.zero;" in creator
    assert "SkillAllocationOptionDto" in creator
    assert "skillRankValues[option.skill_id]" in creator
    assert 'CreationUiStyles.IconButton(new GUIContent("-"), GUILayout.Width(40))' in creator
    assert 'CreationUiStyles.IconButton(new GUIContent("+"), GUILayout.Width(40))' in creator
    assert "current = Mathf.Max(0f, current - rankStep);" in creator
    assert "pointCost <= remainingPoints" in creator
    assert '" remaining)"' in creator
    assert "public string skill_id;" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "CreationPrerequisiteDto" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "option.parent_id" in creator
    assert "parent_id" in (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "field.required && choices.Length == 0" in creator
    assert "ApplyTheme(envelope.theme)" in projections


def test_ability_score_roll_uses_local_dice_icon() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    icons = (ROOT / "Assets/Scripts/CreationIcons.cs").read_text()
    field_start = creator.index("private void DrawField(CreationFieldDto field)")
    field_end = creator.index("\n    private ", field_start + 1)
    field_draw = creator[field_start:field_end]

    assert (ROOT / "ArtSource/ui.icon.dice.svg").is_file()
    assert (ROOT / "Assets/Resources/ui.icon.dice.png").is_file()
    assert 'public const string Dice = "dice";' in icons
    assert "Load(Dice);" in icons
    assert "Resources.Load<Texture2D>(\"ui.icon.\" + key)" in icons
    assert "field.type == \"number\" && IsIndividuallyRollable(field)" in field_draw
    assert "GUILayout.BeginHorizontal();" in field_draw
    assert "CreationUiStyles.IconButton(" in field_draw
    assert "CreationIcons.IconContent(CreationIcons.Dice, buttonLabel)" in field_draw
    assert "if (!hasRolled || field.roll.allow_reroll)" in field_draw
    assert '"Last roll: " + JoinValues(rollValue.roll_dice)' in field_draw


def test_score_group_roll_is_in_fixed_actions_above_scrollable_fields() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    draw_step_start = creator.index("private void DrawCreationStep()")
    group_draw_start = creator.index("private void DrawScoreGroups(CreationStepDto step)")
    draw_step = creator[draw_step_start:group_draw_start]
    group_draw_end = creator.index("\n    private ", group_draw_start + 1)
    group_draw = creator[group_draw_start:group_draw_end]

    assert draw_step.index("SaveStepAndExit(stepIndex)") < draw_step.index("DrawScoreGroups(step);")
    assert draw_step.index("DrawScoreGroups(step);") < draw_step.index("GUILayout.EndVertical();")
    assert draw_step.index("GUILayout.EndVertical();") < draw_step.index("GUILayout.BeginScrollView(")
    assert "GroupIsOnStep(group, step)" in group_draw
    assert "if (hasRolled && !group.allow_reroll)" in group_draw
    assert "StartCoroutine(RollGroup(group.id));" in group_draw


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


def test_webgl_build_configures_a_mobile_device_viewport() -> None:
    build = (ROOT / "Assets/Editor/WebGLBuild.cs").read_text()

    assert 'if (!html.Contains("name=\\"viewport\\""))' in build
    assert 'content=\\"width=device-width, initial-scale=1.0, user-scalable=no\\"' in build
    assert 'html.Replace(\n                headMarker,' in build
    assert "window.innerWidth" in build


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
    assert "CreationUiStyles.TertiaryButton(actionLabel)" in detail
    assert "selected.Add(option.id);" in detail
    assert "selected.Remove(option.id);" in detail
    assert "FeatRequirementState.Met" in requirement_status
    assert "FeatRequirementState.Unmet" in requirement_status
    assert "FeatRequirementState.CannotVerify" in requirement_status
    assert 'prerequisite.rule == "feat"' in requirement_status
    assert 'prerequisite.rule == "skill"' in requirement_status
    assert "IsAbilityId(prerequisite.rule)" in requirement_status
    assert "UiLayout.CurrentDensity.SideBySide" in browsing
    assert "GUILayout.BeginHorizontal();" in browsing
    assert "DrawInspectedFeat(visibleOptions, selected)" in browsing
    assert "GUILayout.BeginScrollView" not in detail
    assert "WrappedDetailStyle()" in detail


def test_step_navigation_saves_before_switch_and_preserves_sequential_flow() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    navigation = creator[
        creator.index("private IEnumerator SaveStepAndNavigate"):
        creator.index("private IEnumerator SaveCurrentStepFields")
    ]
    continuation = creator[
        creator.index("private IEnumerator SaveStepAndContinue"):
        creator.index("private IEnumerator SaveStepAndNavigate")
    ]
    exit_draft = creator[
        creator.index("private IEnumerator SaveStepAndExit"):
        creator.index("private IEnumerator UpdateField")
    ]
    assert "StepSummaryHeader" in creator
    assert "step.label" in creator
    assert navigation.index("yield return SaveCurrentStepFields") < navigation.index('"/step"')
    assert "ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true)" in navigation
    assert continuation.index("yield return SaveCurrentStepFields") < continuation.index('"/advance"')
    assert "yield return LoadReview();" in continuation
    assert "yield return SaveCurrentStepFields(stepIndex);" in exit_draft
    assert "SaveStepAndContinue" not in exit_draft


def test_equipment_shop_client_contract_dtos() -> None:
    session_dtos = (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    assert "public class EquipmentShopDto" in session_dtos
    assert "public ShopCurrencyDto currency;" in session_dtos
    assert "public ShopItemDto[] catalog;" in session_dtos
    assert "public EquipmentStateDto state;" in session_dtos
    assert "public class ShopItemDto" in session_dtos
    assert "public string[] equipment_slots;" in session_dtos
    assert "public class EquipmentStateDto" in session_dtos
    assert "public EquipmentItemInstanceDto[] items;" in session_dtos
    assert "public class StartingWealthRequestDto" in session_dtos
    assert "public class PurchaseEquipmentRequestDto" in session_dtos
    assert "public class EquipItemRequestDto" in session_dtos
    assert "public class UnequipItemRequestDto" in session_dtos
    assert "public EquipmentShopDto equipment_shop;" in session_dtos
    assert "public ShopCurrencyDenominationDto[] denominations;" in session_dtos
    assert "public EquipmentStateDto equipment_state;" in session_dtos


def test_equipment_shop_ui_rendering_and_interaction_contracts() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    assert "DrawEquipmentShop" in creator
    assert "draft.equipment_shop" in creator
    assert "shop.data_status == \"provisional\"" in creator
    assert "FormatCurrency(state.starting_wealth, shop.currency)" in creator
    assert "FormatCurrency(item.cost, shop.currency)" in creator
    assert "foreach (var s in itemDef.equipment_slots)" in creator
    assert "private const int ShopCatalogPageSize = 50;" in creator
    assert "MatchesShopSearch(item, shopSearchText)" in creator
    assert "Showing \" + matchingCount + \" matching items" in creator
    assert "if (shop.catalog != null)" in creator
    assert "searchRequired" not in creator
    assert creator.index("GUILayout.Label(\"Character Loadout\"") < creator.index(
        "GUILayout.Label(\"Details: \" + selectedItem.name"
    )


def test_equipment_item_icons_use_local_resources_and_visible_fallback() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    load_start = creator.index("private Texture2D LoadItemTexture")
    load_end = creator.index("\n    private ", load_start + 1)
    load_item_texture = creator[load_start:load_end]
    assert "Resources.Load<Texture2D>(ResourcePath(imageAsset))" in load_item_texture
    assert "return GetFallbackItemTexture();" in load_item_texture
    assert "selectedItem.source_reference" in creator
    assert "selectedItem.details" in creator
    assert "ShopItemDetailDto" in (
        ROOT / "Assets/Scripts/SessionDtos.cs"
    ).read_text()
    assert "public string source_reference;" in (
        ROOT / "Assets/Scripts/SessionDtos.cs"
    ).read_text()
    for item_id in (
        "item.longsword",
        "item.padded-armor",
        "item.backpack",
        "item.potion-of-cure-light-wounds",
        "item.ring-of-protection-1",
    ):
        assert (ROOT / f"Assets/Resources/{item_id}.png").is_file()
        assert (ROOT / f"Assets/Resources/{item_id}.png.meta").is_file()
    assert "Roll Starting Wealth" in creator
    assert "Average Starting Wealth" in creator
    assert "GetFallbackItemTexture" in creator
    assert "UiLayout.CurrentDensity.SideBySide" in creator
    assert "Character Loadout" in creator
    assert "Backpack" in creator
    assert "ChooseStartingWealth" in creator
    assert "PurchaseEquipmentItem" in creator
    assert "EquipEquipmentItem" in creator
    assert "UnequipEquipmentItem" in creator
    assert "/equipment/wealth" in creator
    assert "/equipment/purchase" in creator
    assert "/equipment/equip" in creator
    assert "/equipment/unequip" in creator


def test_portrait_picker_client_and_dto_contracts() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    session_dtos = (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    field = creator[
        creator.index("private void DrawField"):
        creator.index("private void DrawSkillRanks")
    ]
    apply = creator[
        creator.index("private IEnumerator ApplySelectedPortrait"):
        creator.index("private void DrawSkillRanks")
    ]
    close = creator[
        creator.index("private void ClosePortraitPicker"):
        creator.index("private IEnumerator ApplySelectedPortrait")
    ]
    field_ui = creator[
        creator.index("private void DrawPortraitField"):
        creator.index("private string CurrentPortraitReference")
    ]
    picker = creator[
        creator.index("private void DrawPortraitPickerOverlay"):
        creator.index("private List<PortraitGalleryEntry> GetFilteredPortraitEntries")
    ]
    tile = creator[
        creator.index("private void DrawPortraitTile"):
        creator.index("private static string WrapPortraitPath")
    ]
    save_fields = creator[
        creator.index("private IEnumerator SaveCurrentStepFields"):
        creator.index("private IEnumerator SaveStepAndExit")
    ]

    assert 'field.slot == "portrait"' in field
    assert "DrawPortraitField(field);" in field
    assert "Choose portrait" in creator
    assert "DrawPortraitPickerOverlay" in creator
    assert "DrawPortraitGallery" in creator
    assert "portraitSearchText" in creator
    assert "float innerContentWidth = Mathf.Max(0f, contentWidth - 32f);" in creator
    assert "Screen.height - margin - footerHeight" in creator
    assert "bool stackedHeader = Screen.width < UiLayout.MdMax;" in picker
    assert "if (stackedHeader)" in picker
    assert "GUILayout.Width(64f)" in picker
    assert "GUILayout.Width(500f)" in picker
    assert "GUILayout.Width(80f)" in picker
    assert "float galleryHeaderAllowance = stackedHeader ? 150f : 110f;" in picker
    assert "float galleryHeight = Mathf.Max(" in picker
    assert "contentHeight - galleryHeaderAllowance" in picker
    assert "DrawPortraitGallery(entries, galleryHeight, innerContentWidth);" in creator
    assert "portraitGalleryScrollPosition = GUILayout.BeginScrollView(" in creator
    assert "portraitPickerContentScrollPosition" not in creator
    assert "DrawPortraitPreview" not in creator
    assert '"Apply portrait"' not in creator
    assert "private static int PortraitGalleryColumns(float width)" in creator
    assert "const float minimumTileWidth = 144f;" in creator
    assert "Mathf.FloorToInt(availableWidth / minimumTileWidth)" in creator
    assert "Mathf.Max(1f, (width - 48f) / columns)" in creator
    assert "private void DrawPortraitTile(PortraitGalleryEntry entry, float tileSize)" in creator
    assert "new GUIContent(\n                LoadPortraitTexture(entry.Portrait),\n                entry.Portrait.name)" in creator
    assert "DrawPortraitCard" not in creator
    assert "Base collection" not in tile
    assert "StartCoroutine(ApplySelectedPortrait());" in tile
    assert "Source: " in field_ui
    assert "Attribution: " in field_ui
    assert "License: " in field_ui
    assert "portraitDetailsExpanded" in field_ui
    assert field_ui.index("GUILayout.EndHorizontal();") < field_ui.index("Source: ")
    assert 'Replace("/", "/\\n").Replace("-", "-\\n")' in creator
    assert "Resources.Load<Texture2D>(" in creator
    assert "ResourcePath(portrait.resource_path)" in creator
    assert "ReportMissingPortraitReference" in creator
    assert "portraitSelectionReference" in apply
    assert "UpdateField(JsonUtility.ToJson(request))" in apply
    assert "textValues[portraitFieldId] = portraitSelectionReference;" in apply
    assert "ClosePortraitPicker();" in apply
    assert "portraitPickerOpen = false;" in close
    assert "UpdateField" not in close
    assert "using a fallback portrait" in creator
    assert "Debug.LogWarning" in creator
    assert 'field.slot == "portrait"' in save_fields
    assert "continue;" in save_fields
    assert "public PortraitPackDto[] portrait_packs;" in session_dtos
    assert "public class PortraitPackDto" in session_dtos
    assert "public class PortraitOptionDto" in session_dtos
    assert "public string asset_reference;" in session_dtos
    assert "public string license_url;" in session_dtos


def test_generated_portrait_preview_disclosure_and_apply_contracts() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    session_dtos = (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    field_ui = creator[
        creator.index("private void DrawPortraitField"):
        creator.index("private string CurrentPortraitReference")
    ]
    generation_overlay = creator[
        creator.index("private void DrawPortraitGenerationOverlay"):
        creator.index("private void DrawPortraitGenerationComposer")
    ]
    composer = creator[
        creator.index("private void DrawPortraitGenerationComposer"):
        creator.index("private void DrawGeneratedPortraitProvenance")
    ]
    generate = creator[
        creator.index("private IEnumerator GeneratePortrait"):
        creator.index("private IEnumerator UsePortraitCandidate")
    ]
    use_candidate = creator[
        creator.index("private IEnumerator UsePortraitCandidate"):
        creator.index("private IEnumerator DiscardPortraitCandidate")
    ]
    preview = creator[
        creator.index("private void DrawPortraitCandidate"):
        creator.index("private string CurrentPortraitReference")
    ]

    assert "Generate portrait" in field_ui
    assert "portraitGenerationState = PortraitGenerationState.Composer;" in field_ui
    assert "StartCoroutine(GeneratePortrait(field.id));" not in field_ui
    assert "StartCoroutine(GeneratePortrait(portraitFieldId));" in generation_overlay
    assert 'CreationUiStyles.TertiaryButton("Close")' in generation_overlay
    assert "configuration.comfyui_destination" in composer
    assert "configuration.ollama_enabled" in composer
    assert "Ability scores and skill ranks are excluded." in composer
    assert 'GUILayout.TextArea(' in composer
    assert field_ui.index("Choose portrait") < field_ui.index("Generate portrait")
    assert generate.index("yield return SaveCurrentStepFields") < generate.index(
        '"/portrait-candidates"'
    )
    assert "description = portraitGenerationDescription" in generate
    assert "Portrait preview" in preview
    assert '"Use"' in preview
    assert '"Discard"' in preview
    assert "textValues[" not in preview
    assert '"/apply"' in use_candidate
    assert "ApplyDraft(updated, true);" in use_candidate
    assert "textValues[fieldId] = fieldValue.text_value ?? \"\";" in use_candidate
    assert "LoadGeneratedPortraitImage" in creator
    assert "ImageConversion.LoadImage" in creator
    assert "public PortraitGenerationDto portrait_generation;" in session_dtos
    assert "public class GeneratedPortraitProvenanceDto" in session_dtos


def test_generated_portrait_library_has_separate_searchable_picker_section() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    session_dtos = (ROOT / "Assets/Scripts/SessionDtos.cs").read_text()
    filtering = creator[
        creator.index("private List<PortraitGalleryEntry> GetFilteredPortraitEntries"):
        creator.index("private static bool MatchesPortraitSearch")
    ]
    tile = creator[
        creator.index("private void DrawPortraitTile"):
        creator.index("private static string WrapPortraitPath")
    ]

    assert "public GeneratedPortraitDto[] generated_portraits;" in session_dtos
    assert "draft?.generated_portraits" in filtering
    assert "Generated = portrait" in filtering
    assert "provenance?.description" in filtering
    assert "provenance?.source" in filtering
    assert '"Generated portraits"' in creator
    assert "GeneratedPortraitTooltip(entry.Generated)" in tile
    assert "GeneratedPortraitImageTarget.Library" in tile
    assert "portraitSelectionReference = reference;" in tile
    assert "StartCoroutine(ApplySelectedPortrait());" in tile


def test_mobile_candidate_swipes_require_a_loaded_preview_and_deliberate_motion() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    overlay = creator[
        creator.index("private void DrawPortraitGenerationOverlay"):
        creator.index("private void DrawPortraitGenerationProgress")
    ]
    preview = creator[
        creator.index("private void DrawPortraitCandidateOverlay"):
        creator.index("private void HandleCandidatePreviewTouch")
    ]
    touch_handler = creator[
        creator.index("private void HandleCandidatePreviewTouch"):
        creator.index("private void DrawPortraitGenerationComposer")
    ]

    assert '"< Swipe left: discard     Swipe right: use >"' in preview
    assert "currentCandidate != null &&\n            Screen.width >= UiLayout.MdMax" in overlay
    assert "Screen.width >= UiLayout.MdMax" in touch_handler
    assert "portraitGenerationState != PortraitGenerationState.CandidatePreview" in touch_handler
    assert "candidatePortraitTexture == null" in touch_handler
    assert "requestInProgress" in touch_handler
    assert "imageRect.Contains(guiPosition)" in touch_handler
    assert "touch.phase == TouchPhase.Canceled" in touch_handler
    assert "horizontalDistance < minimumDistance" in touch_handler
    assert "Mathf.Abs(displacement.y) * 1.25f" in touch_handler
    assert "StartCoroutine(UsePortraitCandidate(" in touch_handler
    assert "StartCoroutine(DiscardPortraitCandidate(" in touch_handler


def test_generated_portrait_overlay_progress_and_resume_contracts() -> None:
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    field_ui = creator[
        creator.index("private void DrawPortraitField"):
        creator.index("private void DrawPortraitGenerationOverlay")
    ]
    overlay = creator[
        creator.index("private void DrawPortraitGenerationOverlay"):
        creator.index("private void DrawPortraitGenerationProgress")
    ]
    preview = creator[
        creator.index("private void DrawPortraitCandidateOverlay"):
        creator.index("private void DrawPortraitGenerationComposer")
    ]
    generate = creator[
        creator.index("private IEnumerator GeneratePortrait"):
        creator.index("private IEnumerator UsePortraitCandidate")
    ]
    on_gui = creator[
        creator.index("private void OnGUI"):
        creator.index("private void DrawCreationSurfaces")
    ]

    assert "Review generated portrait" in field_ui
    assert "PortraitGenerationState.CandidatePreview" in field_ui
    assert "DrawPortraitGenerationProgress();" in overlay
    assert "DrawPortraitCandidateOverlay(candidate);" in overlay
    assert "ScaleMode.ScaleToFit" in preview
    assert "savingAppearanceForPortrait" in creator
    assert "PortraitGenerationState.CandidatePreview" in generate
    assert "PortraitGenerationState.Composer" in generate
    assert on_gui.index("DrawPortraitGenerationOverlay();") < on_gui.index(
        "if (requestInProgress)"
    )


def test_creation_layout_uses_shared_density_and_fixed_chrome() -> None:
    layout = (ROOT / "Assets/Scripts/UiLayout.cs").read_text()
    styles = (ROOT / "Assets/Scripts/CreationUiStyles.cs").read_text()
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    header = (ROOT / "Assets/Scripts/StepSummaryHeader.cs").read_text()
    assert "width < XsMax" in layout
    assert "width < SmMax" in layout
    assert "width < MdMax" in layout
    assert "width < LgMax" in layout
    assert "XsMax = 480f" in layout
    assert "SmMax = 680f" in layout
    assert "MdMax = 980f" in layout
    assert "LgMax = 1280f" in layout
    limits = (480, 680, 980, 1280)
    sample_modes = {
        375: "xs",
        768: "md",
        1024: "lg",
        1440: "xl",
    }
    for width, expected in sample_modes.items():
        actual = (
            "xs" if width < limits[0] else
            "sm" if width < limits[1] else
            "md" if width < limits[2] else
            "lg" if width < limits[3] else
            "xl"
        )
        assert actual == expected
    assert "SideBySide = false" in layout
    assert "SideBySide = true" in layout
    assert "UiLayout.CurrentDensity" in creator
    assert "UiLayout.CurrentDensity" in header
    assert "CreationUiStyles.PrimaryButton" in creator
    assert "CreationUiStyles.TertiaryButton" in creator
    assert "public static GUIStyle Selection" in styles
    editing = creator[
        creator.index("private void DrawCreationStep"):
        creator.index("private void DrawScoreGroups")
    ]
    assert editing.index("stepSummaryHeader.DrawHeader()") < editing.index(
        'GUILayout.Label(step.label, CreationUiStyles.Title)')
    assert editing.index("CreationUiStyles.PrimaryButton") < editing.index(
        "GUILayout.BeginScrollView")
    assert "editingAreaHeight - editingChromeBottom - 12f" in editing
    assert "GUILayout.Height(bodyHeight)" in editing
    assert editing.index("GUILayout.BeginScrollView") < editing.index(
        "foreach (var field in step.fields)")
    assert "GUILayout.EndScrollView();" in editing


def test_creation_ui_declares_readable_type_roles_and_theme_safe_surfaces() -> None:
    styles = (ROOT / "Assets/Scripts/CreationUiStyles.cs").read_text()
    layout = (ROOT / "Assets/Scripts/UiLayout.cs").read_text()
    creator = (ROOT / "Assets/Scripts/CharacterCreationClient.cs").read_text()
    webgl_builder = (ROOT / "Assets/Editor/WebGLBuild.cs").read_text()

    for role in ("Title", "Section", "Body", "FieldLabel", "Caption", "Status"):
        assert f"public static GUIStyle {role}" in styles
    assert "font = displayFont" in styles
    assert "font = readableFont" in styles
    assert 'Resources.GetBuiltinResource<Font>("Arial.ttf")' in styles
    assert "GUI.skin.font = readableFont" in styles
    assert "CreationUiStyles.Configure(" in creator
    assert "CreationUiStyles.DrawBackdrop(screenRect, themeBackground)" in creator
    assert "DrawTiledTexture(contentRect, themePanel)" in creator
    assert "themeControl," in creator
    assert "CreateFramedTexture" in styles
    assert "DrawDivider" in styles
    assert "themedControlTexture ?? buttonTexture" in styles
    assert "EnsureContrast(" in styles
    assert "4.5f" in styles
    assert "RelativeLuminance" in styles
    assert "wordWrap = true" in styles
    assert "ConfigureResponsiveCanvas(outputPath)" in webgl_builder
    assert "config.devicePixelRatio = 1;" in webgl_builder
    assert "window.innerWidth" in webgl_builder
    assert "window.innerHeight" in webgl_builder

    mobile = layout[
        layout.index("case Breakpoint.Xs:"):
        layout.index("case Breakpoint.Sm:")
    ]
    assert "BodyFont = 18" in mobile
    assert "LabelFont = 17" in mobile
    assert "CaptionFont = 15" in mobile
    assert "SideBySide = false" in mobile
    assert "if (!sideBySide)" in creator
