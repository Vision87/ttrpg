using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;

public sealed class CharacterCreationClient : MonoBehaviour
{
    private enum ClientScreen
    {
        Loading,
        Rulesets,
        Templates,
        Drafts,
        Editing,
        Review,
        Board
    }

    private enum PortraitGenerationState
    {
        Closed,
        Composer,
        Progress,
        CandidatePreview
    }

    private ClientScreen screen = ClientScreen.Loading;
    private string apiBaseUrl;
    private string errorMessage = "";
    private string characterName = "";
    private string featSearchText = "";
    private string inspectedFeatId = "";
    private string draftId = "";
    private string characterId = "";
    private bool requestInProgress;
    private bool savingAppearanceForPortrait;
    private bool generatingPortrait;
    private bool showOnlyEligibleFeats;
    private RulesetOptionDto[] rulesets = new RulesetOptionDto[0];
    private DraftRecordDto[] savedDrafts = new DraftRecordDto[0];
    private RulesetOptionDto selectedRuleset;
    private RulesetFlowDto flow;
    private DraftResponseDto draft;
    private ThemeDto activeTheme;
    private Texture2D themeLogo;
    private Texture2D themeBackground;
    private Texture2D themePanel;
    private Texture2D themeControl;
    private Texture2D themeControlHover;
    private Texture2D themeControlActive;
    private Texture2D themeMetalTrim;
    private Texture2D themeBoardFrame;
    private Font themeFont;
    private GUISkin defaultSkin;
    private GUISkin themedSkin;
    private GUIStyle boardFrameStyle;
    private string loadedThemeKey = "";
    private readonly Dictionary<string, string> textValues =
        new Dictionary<string, string>();
    private readonly Dictionary<string, DraftFieldValueDto> serverFieldValues =
        new Dictionary<string, DraftFieldValueDto>();
    private readonly Dictionary<string, HashSet<string>> selectedValues =
        new Dictionary<string, HashSet<string>>();
    private readonly Dictionary<string, float> skillRankValues =
        new Dictionary<string, float>();
    private readonly HashSet<string> expandedChoiceFields = new HashSet<string>();
    private TacticalProjection tacticalProjection;
    private ImmersiveProjection immersiveProjection;
    private Vector2 scrollPosition;
    private Vector2 bodyScrollPosition;
    private string bodyScrollStepId = "";
    private float editingAreaHeight;
    private float editingChromeBottom;
    private Vector2 featListScrollPosition;
    private string selectedShopItemId = "";
    private string hoveredShopItemId = "";
    private string shopSearchText = "";
    private int shopCatalogPage;
    private Vector2 shopListScrollPosition;
    private Vector2 backpackScrollPosition;
    private Texture2D fallbackItemTexture;
    private const int ShopCatalogPageSize = 50;
    private bool portraitPickerOpen;
    private PortraitGenerationState portraitGenerationState;
    private string portraitFieldId = "";
    private string portraitSelectionReference = "";
    private string portraitSearchText = "";
    private string portraitGenerationDescription = "";
    private Vector2 portraitGalleryScrollPosition;
    private Vector2 portraitGenerationScrollPosition;
    private bool portraitDetailsExpanded;
    private Texture2D fallbackPortraitTexture;
    private Texture2D appliedGeneratedPortraitTexture;
    private Texture2D candidatePortraitTexture;
    private string appliedGeneratedPortraitReference = "";
    private string candidatePortraitId = "";
    private int candidateSwipeFingerId = -1;
    private Vector2 candidateSwipeStartPosition;
    private readonly HashSet<string> loadingGeneratedPortraitUrls =
        new HashSet<string>();
    private readonly HashSet<string> failedGeneratedPortraitUrls =
        new HashSet<string>();
    private readonly HashSet<string> reportedMissingPortraitReferences =
        new HashSet<string>();
    [SerializeField]
    private StepSummaryData stepSummaryData;
    private StepSummaryHeader stepSummaryHeader;

    private enum FeatRequirementState
    {
        Met,
        Unmet,
        CannotVerify
    }

    private sealed class FeatRequirementStatus
    {
        public string Description;
        public FeatRequirementState State;
    }

    private sealed class PortraitGalleryEntry
    {
        public PortraitPackDto Pack;
        public PortraitOptionDto Portrait;
        public GeneratedPortraitDto Generated;
    }

    private enum GeneratedPortraitImageTarget
    {
        Candidate,
        Applied,
        Library
    }

    private readonly Dictionary<string, Texture2D> generatedPortraitTextures =
        new Dictionary<string, Texture2D>();

    public void Configure(
        TacticalProjection tactical,
        ImmersiveProjection immersive)
    {
        tacticalProjection = tactical;
        immersiveProjection = immersive;
    }

    private void Start()
    {
        apiBaseUrl = ResolveApiBaseUrl();
        stepSummaryHeader = gameObject.AddComponent<StepSummaryHeader>();
        if (stepSummaryData != null && stepSummaryData.stepTitles != null)
        {
            stepSummaryHeader.UpdateSteps(
                new List<string>(stepSummaryData.stepTitles));
        }
        StartCoroutine(LoadRulesets());
    }

    private void OnDestroy()
    {
        foreach (var texture in generatedPortraitTextures.Values)
        {
            if (texture != null)
            {
                Destroy(texture);
            }
        }
        generatedPortraitTextures.Clear();
    }

    private static string ResolveApiBaseUrl()
    {
        if (string.IsNullOrEmpty(Application.absoluteURL))
        {
            return "http://127.0.0.1:8000";
        }

        return new Uri(Application.absoluteURL).GetLeftPart(UriPartial.Authority);
    }

    private IEnumerator LoadRulesets()
    {
        yield return SendRequest(
            "GET",
            "/api/rulesets",
            null,
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }

                var result = JsonUtility.FromJson<RulesetListDto>(response);
                rulesets = result?.rulesets ?? new RulesetOptionDto[0];
                screen = ClientScreen.Rulesets;
            });
    }

    private void OnGUI()
    {
        LoadThemeAssets();
        ApplyThemeStyles();
        CreationIcons.EnsureLoaded();
        if (screen != ClientScreen.Board)
        {
            CreationUiStyles.Configure(
                themeFont,
                defaultSkin != null ? defaultSkin.font : null,
                ThemeColor("accent", new Color(0.82f, 0.62f, 0.30f)),
                ThemeColor("text", new Color(0.94f, 0.89f, 0.78f)),
                ThemeColor("background", new Color(0.08f, 0.065f, 0.055f)),
                ThemeColor("surface", new Color(0.15f, 0.12f, 0.095f)),
                themeControl,
                themeControlHover,
                themeControlActive);
            CreationUiStyles.Ensure();
        }
        if (portraitGenerationState != PortraitGenerationState.Closed)
        {
            DrawPortraitGenerationOverlay();
            RestoreThemeColors();
            return;
        }
        if (portraitPickerOpen)
        {
            DrawPortraitPickerOverlay();
            RestoreThemeColors();
            return;
        }
        if (screen != ClientScreen.Board)
        {
            DrawCreationSurfaces();
        }
        else
        {
            DrawBoardFrame();
            GUILayout.BeginArea(new Rect(12, 12, 340, 150));
        }

        if (screen == ClientScreen.Editing && !requestInProgress)
        {
            DrawEditingShell();
        }
        else
        {
            scrollPosition = GUILayout.BeginScrollView(scrollPosition);
            DrawBrandHeader(forceShowLogo: true);
            if (!string.IsNullOrEmpty(errorMessage))
            {
                GUILayout.Label(errorMessage, ErrorStyle());
            }

            if (requestInProgress)
            {
                GUILayout.Label(
                    savingAppearanceForPortrait
                        ? "Saving appearance details before portrait generation..."
                        : generatingPortrait
                            ? "Generating portrait with ComfyUI..."
                            : "Connecting to local game service...",
                    CreationUiStyles.Status);
            }
            else
            {
                switch (screen)
                {
                    case ClientScreen.Loading:
                        GUILayout.Label("Loading installed rulesets...", CreationUiStyles.Status);
                        break;
                    case ClientScreen.Rulesets:
                        DrawRulesets();
                        break;
                    case ClientScreen.Templates:
                        DrawTemplateSelection();
                        break;
                    case ClientScreen.Drafts:
                        DrawDraftList();
                        break;
                    case ClientScreen.Review:
                        DrawReview();
                        break;
                    case ClientScreen.Board:
                        DrawBoardStatus();
                        break;
                }
            }
            GUILayout.EndScrollView();
        }
        GUILayout.EndArea();
        RestoreThemeColors();
    }

    private void DrawBrandHeader(bool forceShowLogo)
    {
        UiLayout.Density density = UiLayout.CurrentDensity;
        bool showLogo = forceShowLogo || density.ShowLogo;
        if (showLogo && themeLogo != null)
        {
            float size = forceShowLogo && density.LogoSize <= 0f ? 64f : Mathf.Max(40f, density.LogoSize);
            if (forceShowLogo && screen == ClientScreen.Rulesets)
            {
                size = Mathf.Max(size, 64f);
            }
            GUILayout.Label(themeLogo, GUILayout.Width(size), GUILayout.Height(size));
        }
        GUILayout.Label("Universal RPG Board", CreationUiStyles.Title);
    }

    private void DrawEditingShell()
    {
        DrawBrandHeader(forceShowLogo: false);
        if (!string.IsNullOrEmpty(errorMessage))
        {
            GUILayout.Label(errorMessage, ErrorStyle());
        }
        DrawCreationStep();
    }

    private void DrawRulesets()
    {
        GUILayout.Label("Choose a role-playing game", CreationUiStyles.Title);
        foreach (var ruleset in rulesets)
        {
            if (CreationUiStyles.PrimaryButton(ruleset.name + " (" + ruleset.id + ")"))
            {
                selectedRuleset = ruleset;
                activeTheme = ruleset.theme;
                errorMessage = "";
                StartCoroutine(LoadFlow(ruleset.id));
            }
            GUILayout.Space(UiLayout.CurrentDensity.Spacing);
        }
        GUILayout.Space(16);
        if (CreationUiStyles.SecondaryButton(
            CreationIcons.ActionContent(CreationIcons.Save, "Resume a saved draft")))
        {
            StartCoroutine(LoadDraftList());
        }
    }

    private IEnumerator LoadFlow(string rulesetId)
    {
        yield return SendRequest(
            "GET",
            "/api/rulesets/" + Uri.EscapeDataString(rulesetId) + "/flow",
            null,
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    screen = ClientScreen.Rulesets;
                    return;
                }

                flow = JsonUtility.FromJson<RulesetFlowDto>(response);
                expandedChoiceFields.Clear();
                activeTheme = flow.theme;
                screen = ClientScreen.Templates;
            });
    }

    private void DrawTemplateSelection()
    {
        GUILayout.Label("Create a " + selectedRuleset.name + " character", CreationUiStyles.Title);
        characterName = GUILayout.TextField(characterName, CreationUiStyles.Input);
        GUILayout.Space(8);
        GUILayout.Label("Choose a starting point", CreationUiStyles.Section);
        if (CreationUiStyles.PrimaryButton("Start from scratch"))
        {
            StartCoroutine(CreateDraft(""));
        }

        foreach (var template in flow.templates ?? new CharacterTemplateOptionDto[0])
        {
            GUILayout.Space(UiLayout.CurrentDensity.Spacing);
            if (CreationUiStyles.SecondaryButton("Use template: " + template.name))
            {
                StartCoroutine(CreateDraft(template.id));
            }
        }
        GUILayout.Space(12);
        if (CreationUiStyles.TertiaryButton("Back to rulesets"))
        {
            screen = ClientScreen.Rulesets;
        }
    }

    private IEnumerator CreateDraft(string templateId)
    {
        var request = new CreateDraftRequestDto
        {
            ruleset_id = selectedRuleset.id,
            name = characterName,
            policy = "guided",
            template_id = templateId
        };
        yield return SendRequest(
            "POST",
            "/api/drafts",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }

                ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response));
                screen = ClientScreen.Editing;
            });
    }

    private IEnumerator LoadDraftList()
    {
        yield return SendRequest(
            "GET",
            "/api/drafts",
            null,
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }

                savedDrafts = JsonUtility.FromJson<DraftListDto>(response)?.drafts
                    ?? new DraftRecordDto[0];
                screen = ClientScreen.Drafts;
            });
    }

    private void DrawDraftList()
    {
        GUILayout.Label("Saved drafts", CreationUiStyles.Title);
        if (savedDrafts.Length == 0)
        {
            GUILayout.Label("No saved drafts yet.", CreationUiStyles.Body);
        }
        foreach (var saved in savedDrafts)
        {
            if (CreationUiStyles.SecondaryButton(
                saved.name + " - " + saved.ruleset_id))
            {
                StartCoroutine(ResumeDraft(saved.id, saved.ruleset_id));
            }
        }
        if (CreationUiStyles.TertiaryButton("Back"))
        {
            screen = ClientScreen.Rulesets;
        }
    }

    private IEnumerator ResumeDraft(string id, string rulesetId)
    {
        var matchingRuleset = FindRuleset(rulesetId);
        if (matchingRuleset == null)
        {
            SetError("The ruleset used by this draft is not installed.");
            yield break;
        }
        selectedRuleset = matchingRuleset;
        activeTheme = matchingRuleset.theme;
        var loaded = false;
        yield return SendRequest(
            "GET",
            "/api/drafts/" + Uri.EscapeDataString(id),
            null,
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response));
                loaded = true;
            });
        if (!loaded)
        {
            yield break;
        }
        yield return LoadFlow(rulesetId);
        screen = ClientScreen.Editing;
    }

    private RulesetOptionDto FindRuleset(string id)
    {
        foreach (var item in rulesets)
        {
            if (item.id == id)
            {
                return item;
            }
        }
        return null;
    }

    // JsonUtility materializes JSON null object fields as empty DTO instances.
    private static GeneratedPortraitDto NormalizeCandidate(
        GeneratedPortraitDto candidate)
    {
        return candidate != null && !string.IsNullOrEmpty(candidate.candidate_id)
            ? candidate
            : null;
    }

    private static GeneratedPortraitDto NormalizeAppliedPortrait(
        GeneratedPortraitDto applied)
    {
        return applied != null && !string.IsNullOrEmpty(applied.portrait_id)
            ? applied
            : null;
    }

    private void ApplyDraft(DraftResponseDto response, bool preserveLocalValues = false)
    {
        draft = response;
        draftId = response.draft.id;
        characterName = response.draft.name;
        activeTheme = response.theme;
        serverFieldValues.Clear();
        if (!preserveLocalValues)
        {
            textValues.Clear();
            selectedValues.Clear();
            skillRankValues.Clear();
            scrollPosition = Vector2.zero;
            portraitPickerOpen = false;
        }
        foreach (var fieldValue in response.field_values ?? new DraftFieldValueDto[0])
        {
            serverFieldValues[fieldValue.field_id] = fieldValue;
            if (preserveLocalValues)
            {
                if (!selectedValues.ContainsKey(fieldValue.field_id) &&
                    fieldValue.selected_values != null &&
                    fieldValue.selected_values.Length > 0)
                {
                    selectedValues[fieldValue.field_id] =
                        new HashSet<string>(fieldValue.selected_values);
                }
                continue;
            }
            if (fieldValue.is_number)
            {
                textValues[fieldValue.field_id] =
                    fieldValue.number_value.ToString(
                        System.Globalization.CultureInfo.InvariantCulture);
            }
            else if (!string.IsNullOrEmpty(fieldValue.text_value))
            {
                textValues[fieldValue.field_id] = fieldValue.text_value;
            }
            selectedValues[fieldValue.field_id] =
                new HashSet<string>(fieldValue.selected_values ?? new string[0]);
            if (fieldValue.skill_allocation != null)
            {
                foreach (var option in fieldValue.skill_allocation.options
                    ?? new SkillAllocationOptionDto[0])
                {
                    skillRankValues[option.skill_id] = option.ranks;
                }
            }
        }

        var generation = response.portrait_generation;
        var candidate = generation != null
            ? NormalizeCandidate(generation.candidate)
            : null;
        var applied = generation != null
            ? NormalizeAppliedPortrait(generation.applied)
            : null;
        if (!preserveLocalValues)
        {
            portraitGenerationDescription = candidate != null &&
                candidate.provenance != null
                ? candidate.provenance.description ?? ""
                : applied != null && applied.provenance != null
                    ? applied.provenance.description ?? ""
                    : "";
        }
        if (candidate == null)
        {
            candidatePortraitId = "";
            if (candidatePortraitTexture != null)
            {
                Destroy(candidatePortraitTexture);
                candidatePortraitTexture = null;
            }
        }
        else if (!string.IsNullOrEmpty(candidate.image_url))
        {
            if (candidatePortraitId != candidate.candidate_id)
            {
                candidatePortraitId = candidate.candidate_id;
                if (candidatePortraitTexture != null)
                {
                    Destroy(candidatePortraitTexture);
                    candidatePortraitTexture = null;
                }
            }
            if (candidatePortraitTexture == null)
            {
                StartCoroutine(LoadGeneratedPortraitImage(
                    candidate.image_url,
                    candidate.candidate_id,
                    GeneratedPortraitImageTarget.Candidate));
            }
        }
        if (applied == null)
        {
            appliedGeneratedPortraitReference = "";
            if (appliedGeneratedPortraitTexture != null)
            {
                Destroy(appliedGeneratedPortraitTexture);
                appliedGeneratedPortraitTexture = null;
            }
        }
        else if (!string.IsNullOrEmpty(applied.image_url))
        {
            if (appliedGeneratedPortraitReference != applied.reference)
            {
                appliedGeneratedPortraitReference = applied.reference;
                if (appliedGeneratedPortraitTexture != null)
                {
                    Destroy(appliedGeneratedPortraitTexture);
                    appliedGeneratedPortraitTexture = null;
                }
            }
            if (appliedGeneratedPortraitTexture == null)
            {
                StartCoroutine(LoadGeneratedPortraitImage(
                    applied.image_url,
                    applied.reference,
                    GeneratedPortraitImageTarget.Applied));
            }
        }
    }

    private void DrawCreationStep()
    {
        int stepIndex = FindStepIndex(draft.current_step);
        if (stepIndex < 0 || stepIndex >= flow.creation_flow.steps.Length)
        {
            GUILayout.Label(
                "The saved draft references an unavailable creation step.",
                CreationUiStyles.Body);
            if (CreationUiStyles.TertiaryButton("Back to rulesets"))
            {
                screen = ClientScreen.Rulesets;
            }
            return;
        }

        var step = flow.creation_flow.steps[stepIndex];
        if (bodyScrollStepId != step.id)
        {
            bodyScrollStepId = step.id;
            bodyScrollPosition = Vector2.zero;
        }

        if (stepSummaryHeader == null)
        {
            stepSummaryHeader = GetComponent<StepSummaryHeader>() ?? gameObject.AddComponent<StepSummaryHeader>();
        }

        Color accentColor = new Color(0.84f, 0.68f, 0.40f);
        Color textColor = Color.white;
        if (activeTheme != null && activeTheme.tokens != null)
        {
            if (ColorUtility.TryParseHtmlString(activeTheme.tokens.accent, out var parsedAccent))
            {
                accentColor = parsedAccent;
            }
            if (ColorUtility.TryParseHtmlString(activeTheme.tokens.text, out var parsedText))
            {
                textColor = parsedText;
            }
        }

        var progressItems = BuildStepProgress(stepIndex);
        stepSummaryHeader.UpdateProgress(progressItems, accentColor, textColor);
        int requestedFromSummary = stepSummaryHeader.DrawHeader();
        if (requestedFromSummary >= 0 && requestedFromSummary != stepIndex)
        {
            StartCoroutine(SaveStepAndNavigate(stepIndex, requestedFromSummary));
            return;
        }

        GUILayout.Label(step.label, CreationUiStyles.Title);
        GUILayout.BeginVertical(GUI.skin.box);
        string primaryAction = stepIndex + 1 < flow.creation_flow.steps.Length
            ? "Save and continue"
            : "Review character";
        bool previousEnabled = GUI.enabled;
        GUI.enabled = previousEnabled && !requestInProgress;
        if (CreationUiStyles.PrimaryButton(
            CreationIcons.ActionContent(CreationIcons.Continue, primaryAction)))
        {
            StartCoroutine(SaveStepAndContinue(stepIndex));
        }
        GUI.enabled = previousEnabled && !requestInProgress;
        if (CreationUiStyles.TertiaryButton(
            CreationIcons.ActionContent(CreationIcons.Save, "Save draft and exit"),
            GUILayout.ExpandWidth(true)))
        {
            StartCoroutine(SaveStepAndExit(stepIndex));
        }
        GUI.enabled = previousEnabled;
        DrawScoreGroups(step);
        GUILayout.EndVertical();
        CreationUiStyles.DrawDivider();

        if (Event.current.type == EventType.Repaint)
        {
            Rect chromeRect = GUILayoutUtility.GetLastRect();
            if (chromeRect.height > 0f)
            {
                editingChromeBottom = chromeRect.yMax;
            }
        }
        float bodyHeight = Mathf.Max(
            120f,
            editingChromeBottom > 0f
                ? editingAreaHeight - editingChromeBottom - 12f
                : editingAreaHeight * 0.35f);
        bodyScrollPosition = GUILayout.BeginScrollView(
            bodyScrollPosition,
            false,
            false,
            GUILayout.Height(bodyHeight));
        foreach (var field in step.fields)
        {
            DrawField(field);
        }
        GUILayout.EndScrollView();
    }

    private void DrawScoreGroups(CreationStepDto step)
    {
        foreach (var group in flow.creation_flow.score_groups
            ?? new CreationScoreGroupDto[0])
        {
            if (!GroupIsOnStep(group, step))
            {
                continue;
            }

            bool hasRolled = GroupRollCount(group.id) > 0;
            if (hasRolled && !group.allow_reroll)
            {
                continue;
            }
            GUILayout.Space(8);
            string label = hasRolled
                ? "Reroll All Ability Scores"
                : "Roll All Ability Scores";
            if (CreationUiStyles.TertiaryButton(
                CreationIcons.ActionContent(CreationIcons.Ability, label)))
            {
                StartCoroutine(RollGroup(group.id));
            }
        }
    }

    private static bool GroupIsOnStep(
        CreationScoreGroupDto group,
        CreationStepDto step)
    {
        if (group.field_ids == null || group.field_ids.Length == 0)
        {
            return false;
        }
        foreach (var fieldId in group.field_ids)
        {
            bool found = false;
            foreach (var field in step.fields)
            {
                if (field.id == fieldId)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                return false;
            }
        }
        return true;
    }

    private int GroupRollCount(string groupId)
    {
        int count = 0;
        foreach (var rollEvent in draft.draft.ability_roll_events
            ?? new AbilityRollEventDto[0])
        {
            if (rollEvent.scope == "group" && rollEvent.group_id == groupId)
            {
                count++;
            }
        }
        return count;
    }

    private int FindStepIndex(string stepId)
    {
        if (flow == null || flow.creation_flow == null)
        {
            return -1;
        }
        for (int index = 0; index < flow.creation_flow.steps.Length; index++)
        {
            if (flow.creation_flow.steps[index].id == stepId)
            {
                return index;
            }
        }
        return -1;
    }

    private List<StepSummaryHeader.StepSummaryItem> BuildStepProgress(int currentStepIndex)
    {
        var items = new List<StepSummaryHeader.StepSummaryItem>();
        if (flow == null || flow.creation_flow == null || flow.creation_flow.steps == null)
        {
            return items;
        }

        for (int i = 0; i < flow.creation_flow.steps.Length; i++)
        {
            var step = flow.creation_flow.steps[i];
            bool isCurrent = i == currentStepIndex;
            bool isPast = i < currentStepIndex;
            string summary = GetStepSummaryText(step);
            bool hasSelection = !string.IsNullOrEmpty(summary);

            items.Add(new StepSummaryHeader.StepSummaryItem
            {
                Index = i,
                Title = step.label,
                Summary = summary,
                IsCurrent = isCurrent,
                IsPast = isPast,
                HasSelection = hasSelection
            });
        }
        return items;
    }

    private string GetStepSummaryText(CreationStepDto step)
    {
        if (step.fields == null || step.fields.Length == 0)
        {
            return "";
        }

        // 1. Check number fields (Ability Scores / Characteristics)
        var numParts = new List<string>();
        foreach (var field in step.fields)
        {
            if (field.type == "number")
            {
                string val = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
                if (string.IsNullOrEmpty(val) && serverFieldValues.TryGetValue(field.id, out var sv) && sv.is_number)
                {
                    val = sv.number_value.ToString(System.Globalization.CultureInfo.InvariantCulture);
                }
                if (!string.IsNullOrEmpty(val) && val != "0")
                {
                    string abbr = field.label.Length > 3 ? field.label.Substring(0, 3).ToUpper() : field.label.ToUpper();
                    numParts.Add(abbr + " " + val);
                }
            }
        }
        if (numParts.Count > 0)
        {
            return string.Join(" · ", numParts.ToArray());
        }

        // 2. Check skill allocation
        foreach (var field in step.fields)
        {
            if (field.skill_selection == "ranks")
            {
                int count = 0;
                float totalRanks = 0;
                foreach (var kvp in skillRankValues)
                {
                    if (kvp.Value > 0)
                    {
                        count++;
                        totalRanks += kvp.Value;
                    }
                }
                if (count > 0)
                {
                    return count + " skills (" + totalRanks + " ranks)";
                }
            }
            else if (field.skill_selection == "trained")
            {
                var selected = GetSelectedValues(field.id);
                if (selected.Count > 0)
                {
                    return selected.Count + " trained skills";
                }
            }
        }

        // 3. Check equipment
        foreach (var field in step.fields)
        {
            if (field.definition_type == "item" || field.category == "equipment")
            {
                if (draft != null && draft.equipment_shop != null && draft.equipment_shop.state != null)
                {
                    var state = draft.equipment_shop.state;
                    int itemCount = state.items != null ? state.items.Length : 0;
                    string wealth = state.remaining_wealth != null
                        ? FormatCurrency(state.remaining_wealth, draft.equipment_shop.currency)
                        : "";
                    if (itemCount > 0 && !string.IsNullOrEmpty(wealth))
                    {
                        return itemCount + " items · " + wealth;
                    }
                    if (itemCount > 0) return itemCount + " items";
                    if (!string.IsNullOrEmpty(wealth)) return wealth;
                }
                var selected = GetSelectedValues(field.id);
                if (selected.Count > 0)
                {
                    return selected.Count + " items selected";
                }
            }
        }

        // 4. Check multiple-choice fields (feats, talents)
        foreach (var field in step.fields)
        {
            if (field.type == "choice" && field.multiple)
            {
                var selected = GetSelectedValues(field.id);
                if (selected.Count > 0)
                {
                    var labels = new List<string>();
                    foreach (var optId in selected)
                    {
                        labels.Add(FindOptionLabel(field, optId));
                    }
                    if (labels.Count <= 2)
                    {
                        return string.Join(", ", labels.ToArray());
                    }
                    return labels[0] + " (+" + (labels.Count - 1) + " more)";
                }
            }
        }

        // 5. Check single-choice fields (race, class, homeworld, career)
        foreach (var field in step.fields)
        {
            if (field.type == "choice" && !field.multiple)
            {
                var selected = GetSelectedValues(field.id);
                if (selected.Count == 0 && serverFieldValues.TryGetValue(field.id, out var sv) && sv.selected_values != null && sv.selected_values.Length > 0)
                {
                    selected = new HashSet<string>(sv.selected_values);
                }
                if (selected.Count > 0)
                {
                    foreach (var optId in selected)
                    {
                        return FindOptionLabel(field, optId);
                    }
                }
            }
        }

        // 6. Check presentation fields (portrait, token, model, name)
        foreach (var field in step.fields)
        {
            if (field.type == "presentation")
            {
                string val = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
                if (!string.IsNullOrEmpty(val))
                {
                    return field.label + " configured";
                }
            }
            if (field.type == "text" && field.id == "name")
            {
                string val = textValues.ContainsKey(field.id) ? textValues[field.id] : characterName;
                if (!string.IsNullOrEmpty(val))
                {
                    return val;
                }
            }
        }

        return "";
    }

    private static string FindOptionLabel(CreationFieldDto field, string optionId)
    {
        if (field.options != null)
        {
            foreach (var opt in field.options)
            {
                if (opt.id == optionId)
                {
                    return opt.label;
                }
            }
        }
        return optionId;
    }

    private void DrawField(CreationFieldDto field)
    {
        GUILayout.Space(6);
        GUILayout.Label(field.label + (field.required ? " *" : ""), CreationUiStyles.FieldLabel);
        if (field.type == "presentation" && field.slot == "portrait")
        {
            DrawPortraitField(field);
            return;
        }
        if (field.type == "number" ||
            (field.type == "presentation" && field.slot == "scale"))
        {
            bool individuallyRollable =
                field.type == "number" && IsIndividuallyRollable(field);
            string value = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
            if (individuallyRollable)
            {
                GUILayout.BeginHorizontal();
                textValues[field.id] = GUILayout.TextField(
                    value,
                    CreationUiStyles.Input,
                    GUILayout.ExpandWidth(true));
                var rollValue = serverFieldValues.ContainsKey(field.id)
                    ? serverFieldValues[field.id]
                    : null;
                bool hasRolled = rollValue != null && rollValue.roll_count > 0;
                string buttonLabel = hasRolled
                    ? "Reroll " + field.label
                    : "Roll " + field.label;
                if (!hasRolled || field.roll.allow_reroll)
                {
                    if (CreationUiStyles.IconButton(
                        CreationIcons.IconContent(CreationIcons.Dice, buttonLabel)))
                    {
                        StartCoroutine(RollField(field.id));
                    }
                }
                GUILayout.EndHorizontal();
            }
            else
            {
                textValues[field.id] = GUILayout.TextField(value, CreationUiStyles.Input);
            }
            GUILayout.Label(
                "Allowed range: " + field.minimum + " - " + field.maximum,
                CreationUiStyles.Caption);
            if (individuallyRollable)
            {
                GUILayout.Label(
                    "Roll " + field.roll.dice_count + "d" + field.roll.die_sides +
                    (field.roll.drop_lowest > 0
                        ? ", drop lowest " + field.roll.drop_lowest
                        : ""),
                    CreationUiStyles.Caption);
                var rollValue = serverFieldValues.ContainsKey(field.id)
                    ? serverFieldValues[field.id]
                    : null;
                bool hasRolled = rollValue != null && rollValue.roll_count > 0;
                if (hasRolled)
                {
                    GUILayout.Label(
                        "Last roll: " + JoinValues(rollValue.roll_dice) +
                        FormatDroppedDice(rollValue.roll_dropped) +
                        " = " + rollValue.roll_score,
                        CreationUiStyles.Caption);
                }
            }
        }
        else if (field.type == "text" || field.type == "presentation")
        {
            string value = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
            textValues[field.id] = GUILayout.TextField(value, CreationUiStyles.Input);
        }
        else if (field.type == "choice")
        {
            if (field.skill_selection == "ranks")
            {
                DrawSkillRanks(field);
                return;
            }
            if (field.skill_selection == "trained")
            {
                DrawTrainedSkills(field);
                return;
            }
            if (field.definition_type == "feat")
            {
                DrawFeatChoices(field);
                return;
            }
            if ((field.definition_type == "item" || field.category == "equipment") &&
                draft != null && draft.equipment_shop != null)
            {
                DrawEquipmentShop(field);
                return;
            }
            if (HasNestedOptions(field))
            {
                DrawNestedChoices(field);
                return;
            }
            var selected = GetSelectedValues(field.id);
            foreach (var option in field.options ?? new CreationOptionDto[0])
            {
                bool isSelected = selected.Contains(option.id);
                string displayLabel = option.label + (isSelected ? "  [Selected]" : "");
                bool next = GUILayout.Toggle(
                    isSelected,
                    displayLabel,
                    CreationUiStyles.Selection);
                if (next)
                {
                    if (!field.multiple)
                    {
                        selected.Clear();
                    }
                    selected.Add(option.id);
                }
                else if (field.multiple)
                {
                    selected.Remove(option.id);
                }
                else if (isSelected && !field.required)
                {
                    selected.Clear();
                }
            }
        }
        else
        {
            GUILayout.Label("Unsupported field: " + field.type);
        }
    }

    private void DrawTrainedSkills(CreationFieldDto field)
    {
        foreach (var option in field.options ?? new CreationOptionDto[0])
        {
            string description = string.IsNullOrEmpty(option.detail)
                ? option.label
                : option.label + " (" + option.detail + ")";
            DrawChoiceOption(field, option, description);
        }
    }

    private void DrawFeatChoices(CreationFieldDto field)
    {
        showOnlyEligibleFeats = GUILayout.Toolbar(
            showOnlyEligibleFeats ? 1 : 0,
            new[] { "All feats", "Only eligible feats" },
            CreationUiStyles.Secondary) == 1;
        GUILayout.Label(
            showOnlyEligibleFeats
                ? "Feats with unmet or unsupported prerequisites are hidden."
                : "Unavailable feats remain visible with their requirements.");
        GUILayout.Label("Search feats", CreationUiStyles.FieldLabel);
        featSearchText = GUILayout.TextField(featSearchText, CreationUiStyles.Input);

        var selected = GetSelectedValues(field.id);
        var visibleOptions = new List<CreationOptionDto>();
        foreach (var option in field.options ?? new CreationOptionDto[0])
        {
            if (!string.IsNullOrWhiteSpace(featSearchText) &&
                (option.label ?? option.id).IndexOf(
                    featSearchText,
                    StringComparison.OrdinalIgnoreCase) < 0)
            {
                continue;
            }

            bool isSelected = selected.Contains(option.id);
            if (showOnlyEligibleFeats &&
                HasFeatPrerequisiteFailures(option) &&
                !isSelected)
            {
                continue;
            }
            visibleOptions.Add(option);
        }

        if (FindVisibleFeat(visibleOptions, inspectedFeatId) == null)
        {
            inspectedFeatId = visibleOptions.Count > 0
                ? visibleOptions[0].id
                : "";
        }

        bool sideBySide = UiLayout.CurrentDensity.SideBySide;
        float listWidth = Mathf.Clamp((Screen.width - 90f) * 0.38f, 320f, 430f);
        if (sideBySide)
        {
            GUILayout.BeginHorizontal();
        }

        GUILayout.BeginVertical(
            GUI.skin.box,
            GUILayout.MinWidth(280f),
            sideBySide
                ? GUILayout.Width(listWidth)
                : GUILayout.ExpandWidth(true));
        float listHeight = UiLayout.BodyListHeight(
            sideBySide ? 0.62f : 0.42f,
            sideBySide ? 200f : 150f,
            sideBySide ? 560f : 300f);
        featListScrollPosition = GUILayout.BeginScrollView(
            featListScrollPosition,
            GUILayout.Height(Mathf.Max(160f, listHeight)));
        foreach (var option in visibleOptions)
        {
            bool isInspected = option.id == inspectedFeatId;
            bool isSelected = selected.Contains(option.id);
            var statuses = GetFeatRequirementStatuses(option);
            string rowLabel = option.label +
                (isSelected ? "  [Selected]" : "") +
                (statuses.Exists(status =>
                    status.State != FeatRequirementState.Met)
                    ? "  [Unavailable]"
                    : "");
            if (GUILayout.Toggle(
                isInspected,
                rowLabel,
                CreationUiStyles.Selection) && !isInspected)
            {
                inspectedFeatId = option.id;
            }
        }
        if (visibleOptions.Count == 0)
        {
            GUILayout.Label("No feats match the current filter.");
        }
        GUILayout.EndScrollView();
        GUILayout.EndVertical();

        if (sideBySide)
        {
            GUILayout.BeginVertical(GUI.skin.box, GUILayout.MinWidth(360f));
            DrawInspectedFeat(visibleOptions, selected);
            GUILayout.EndVertical();
            GUILayout.EndHorizontal();
        }
        else
        {
            GUILayout.Space(8);
            GUILayout.BeginVertical(GUI.skin.box);
            DrawInspectedFeat(visibleOptions, selected);
            GUILayout.EndVertical();
        }
    }

    private static CreationOptionDto FindVisibleFeat(
        List<CreationOptionDto> options,
        string featId)
    {
        return options.Find(option => option.id == featId);
    }

    private void DrawInspectedFeat(
        List<CreationOptionDto> visibleOptions,
        HashSet<string> selected)
    {
        var option = FindVisibleFeat(visibleOptions, inspectedFeatId);
        if (option == null)
        {
            GUILayout.Label("Select a feat to inspect its details.");
            return;
        }

        GUILayout.Label(option.label, CreationUiStyles.Title);
        GUILayout.Label(string.IsNullOrWhiteSpace(option.description)
            ? "No concise description is available for this feat."
            : option.description,
            WrappedDetailStyle());

        GUILayout.Space(8);
        GUILayout.Label("Requirements", CreationUiStyles.Section);
        var statuses = GetFeatRequirementStatuses(option);
        if (statuses.Count == 0)
        {
            GUILayout.Label("No prerequisites.");
        }
        foreach (var status in statuses)
        {
            var previousColor = GUI.contentColor;
            if (status.State == FeatRequirementState.Unmet)
            {
                GUI.contentColor = new Color(1f, 0.3f, 0.28f);
            }
            else if (status.State == FeatRequirementState.CannotVerify)
            {
                GUI.contentColor = new Color(1f, 0.72f, 0.35f);
            }
            string stateLabel = status.State == FeatRequirementState.Met
                ? "MET"
                : status.State == FeatRequirementState.Unmet
                    ? "UNMET"
                    : "CANNOT VERIFY";
            GUILayout.Label(stateLabel + " - " + status.Description,
                WrappedDetailStyle());
            GUI.contentColor = previousColor;
        }

        bool isSelected = selected.Contains(option.id);
        bool hasFailures = HasFeatPrerequisiteFailures(option);
        bool previousEnabled = GUI.enabled;
        GUI.enabled = previousEnabled && (isSelected || !hasFailures);
        string actionLabel = isSelected ? "Remove feat" : "Add feat";
        if (CreationUiStyles.TertiaryButton(actionLabel))
        {
            if (isSelected)
            {
                selected.Remove(option.id);
            }
            else
            {
                selected.Add(option.id);
            }
        }
        GUI.enabled = previousEnabled;
        if (!isSelected && hasFailures)
        {
            GUILayout.Label("This feat cannot be added until its requirements are met.");
        }
    }

    private List<string> GetFeatPrerequisiteFailures(CreationOptionDto option)
    {
        var blockers = new List<string>();
        foreach (var status in GetFeatRequirementStatuses(option))
        {
            if (status.State != FeatRequirementState.Met)
            {
                blockers.Add(status.Description);
            }
        }
        return blockers;
    }

    private bool HasFeatPrerequisiteFailures(CreationOptionDto option)
    {
        return GetFeatPrerequisiteFailures(option).Count > 0;
    }

    private List<FeatRequirementStatus> GetFeatRequirementStatuses(
        CreationOptionDto option)
    {
        var statuses = new List<FeatRequirementStatus>();
        foreach (var prerequisite in option.prerequisites
            ?? new CreationPrerequisiteDto[0])
        {
            int currentValue;
            FeatRequirementState state;
            if (IsAbilityId(prerequisite.rule))
            {
                string score = textValues.TryGetValue(
                    prerequisite.rule,
                    out var rawScore) ? rawScore : "";
                state = int.TryParse(score, out currentValue) &&
                    currentValue >= prerequisite.minimum
                    ? FeatRequirementState.Met
                    : FeatRequirementState.Unmet;
            }
            else if (prerequisite.rule == "feat")
            {
                state = GetSelectedValues("feats").Contains(
                    prerequisite.definition_id)
                    ? FeatRequirementState.Met
                    : FeatRequirementState.Unmet;
            }
            else if (prerequisite.rule == "skill")
            {
                float currentRanks = skillRankValues.TryGetValue(
                    prerequisite.skill_id,
                    out var ranks) ? ranks : 0f;
                state = currentRanks >= prerequisite.minimum
                    ? FeatRequirementState.Met
                    : FeatRequirementState.Unmet;
            }
            else
            {
                state = FeatRequirementState.CannotVerify;
            }

            statuses.Add(new FeatRequirementStatus
            {
                Description = GetFeatRequirementDescription(prerequisite),
                State = state
            });
        }
        return statuses;
    }

    private static string GetFeatRequirementDescription(
        CreationPrerequisiteDto prerequisite)
    {
        if (!string.IsNullOrWhiteSpace(prerequisite.description))
        {
            return prerequisite.description;
        }
        if (prerequisite.rule == "feat")
        {
            return prerequisite.definition_id ?? "Required feat";
        }
        if (prerequisite.rule == "skill")
        {
            return (prerequisite.skill_id ?? "Required skill") + " " +
                prerequisite.minimum + " rank(s)";
        }
        if (IsAbilityId(prerequisite.rule))
        {
            return prerequisite.rule + " " + prerequisite.minimum;
        }
        return "Unsupported prerequisite: " + prerequisite.rule;
    }

    private static GUIStyle WrappedDetailStyle()
    {
        return new GUIStyle(CreationUiStyles.Body)
        {
            wordWrap = true,
            stretchWidth = true
        };
    }

    private static string FormatCurrency(int amount, ShopCurrencyDto currency)
    {
        if (currency == null || currency.denominations == null || currency.denominations.Length == 0)
        {
            return amount + " " + (currency != null ? currency.abbreviation : "gp");
        }

        long remaining = Math.Abs((long)amount);
        var parts = new List<string>();
        foreach (var denomination in currency.denominations)
        {
            if (denomination == null || denomination.value <= 0)
            {
                continue;
            }
            long count = remaining / denomination.value;
            if (count > 0)
            {
                parts.Add(count + " " + denomination.abbreviation);
                remaining %= denomination.value;
            }
        }
        if (parts.Count == 0)
        {
            parts.Add("0 " + currency.abbreviation);
        }
        return (amount < 0 ? "-" : "") + string.Join(" ", parts);
    }

    private static bool IsAbilityId(string rule)
    {
        switch (rule)
        {
            case "strength":
            case "dexterity":
            case "constitution":
            case "intelligence":
            case "wisdom":
            case "charisma":
                return true;
            default:
                return false;
        }
    }

    private void DrawEquipmentShop(CreationFieldDto field)
    {
        var shop = draft.equipment_shop;
        if (shop == null)
        {
            GUILayout.Label("Equipment shop unavailable.");
            return;
        }

        if (shop.data_status == "provisional")
        {
            GUILayout.BeginVertical(GUI.skin.box);
            GUILayout.Label("WARNING: This ruleset uses provisional equipment and starting wealth data. " +
                (string.IsNullOrEmpty(shop.data_note) ? "Values require verification against official rulebooks." : shop.data_note));
            GUILayout.EndVertical();
            GUILayout.Space(6);
        }

        var state = shop.state;
        bool hasChosenWealth = state != null && !string.IsNullOrEmpty(state.wealth_method);
        bool sideBySide = UiLayout.CurrentDensity.SideBySide;

        GUILayout.BeginVertical(GUI.skin.box);
        if (!hasChosenWealth)
        {
            GUILayout.Label(
                "Choose Starting Wealth (" + (shop.wealth_definition_type ?? "class") + "):",
                CreationUiStyles.Title);
            if (sideBySide)
            {
                GUILayout.BeginHorizontal();
            }
            if (CreationUiStyles.SecondaryButton(
                CreationIcons.ActionContent(CreationIcons.Buy, "Roll Starting Wealth")))
            {
                StartCoroutine(ChooseStartingWealth("roll"));
            }
            if (CreationUiStyles.SecondaryButton("Average Starting Wealth"))
            {
                StartCoroutine(ChooseStartingWealth("average"));
            }
            if (sideBySide)
            {
                GUILayout.EndHorizontal();
            }
        }
        else
        {
            if (sideBySide)
            {
                GUILayout.BeginHorizontal();
            }
            else
            {
                GUILayout.BeginVertical();
            }
            GUILayout.Label(
                "Wealth Method: " + state.wealth_method.ToUpperInvariant(),
                CreationUiStyles.Caption);
            GUILayout.Label(
                "Starting Budget: " + FormatCurrency(state.starting_wealth, shop.currency),
                CreationUiStyles.Body);
            GUILayout.Label(
                "Remaining: " + FormatCurrency(state.remaining_wealth, shop.currency),
                CreationUiStyles.Status);
            if (state.wealth_roll != null && state.wealth_roll.Length > 0)
            {
                GUILayout.Label(
                    "Rolled: [" + string.Join(", ", state.wealth_roll) + "]",
                    CreationUiStyles.Caption);
            }
            if (sideBySide)
            {
                GUILayout.EndHorizontal();
            }
            else
            {
                GUILayout.EndVertical();
            }
        }
        GUILayout.EndVertical();
        CreationUiStyles.DrawDivider(4f);

        float shopLayoutWidth = Mathf.Min(Screen.width - 90f, 1100f);
        if (sideBySide)
        {
            GUILayout.BeginHorizontal();
        }

        // Left column: Shop Catalog & Item Detail
        GUILayout.BeginVertical(
            GUI.skin.box,
            GUILayout.MinWidth(320f),
            sideBySide ? GUILayout.Width(shopLayoutWidth * 0.58f) : GUILayout.ExpandWidth(true));

        GUILayout.Label(
            "Equipment Shop (" + (shop.catalog != null ? shop.catalog.Length : 0) + " items)",
            CreationUiStyles.Title);
        GUILayout.Label("Search item name or details", CreationUiStyles.Caption);
        string updatedSearchText = GUILayout.TextField(shopSearchText);
        if (updatedSearchText != shopSearchText)
        {
            shopSearchText = updatedSearchText;
            shopCatalogPage = 0;
        }

        int catalogCount = shop.catalog != null ? shop.catalog.Length : 0;
        int matchingCount = 0;
        if (shop.catalog != null)
        {
            foreach (var item in shop.catalog)
            {
                if (MatchesShopSearch(item, shopSearchText))
                {
                    matchingCount++;
                }
            }
        }
        int pageCount = Mathf.Max(
            1,
            Mathf.CeilToInt(matchingCount / (float)ShopCatalogPageSize));
        shopCatalogPage = Mathf.Clamp(shopCatalogPage, 0, pageCount - 1);
        GUILayout.Label(
            "Showing " + matchingCount + " matching items",
            CreationUiStyles.Caption);
        if (pageCount > 1)
        {
            bool paginationWasEnabled = GUI.enabled;
            GUILayout.BeginHorizontal();
            GUI.enabled = paginationWasEnabled && shopCatalogPage > 0;
            if (CreationUiStyles.SecondaryButton("Previous"))
            {
                shopCatalogPage--;
            }
            GUI.enabled = paginationWasEnabled && shopCatalogPage < pageCount - 1;
            if (CreationUiStyles.SecondaryButton(
                "Next (" + (shopCatalogPage + 1) + "/" + pageCount + ")"))
            {
                shopCatalogPage++;
            }
            GUI.enabled = paginationWasEnabled;
            GUILayout.EndHorizontal();
        }
        float catalogHeight = UiLayout.BodyListHeight(
            sideBySide ? 0.58f : 0.4f,
            sideBySide ? 200f : 140f,
            sideBySide ? 520f : 280f);
        shopListScrollPosition = GUILayout.BeginScrollView(
            shopListScrollPosition,
            GUILayout.Height(catalogHeight));

        ShopItemDto selectedItem = null;
        int matchingIndex = 0;
        int visibleCount = 0;
        if (shop.catalog != null)
        {
            foreach (var item in shop.catalog)
            {
                if (!MatchesShopSearch(item, shopSearchText))
                {
                    continue;
                }
                if (matchingIndex < shopCatalogPage * ShopCatalogPageSize)
                {
                    matchingIndex++;
                    continue;
                }
                if (visibleCount >= ShopCatalogPageSize)
                {
                    break;
                }
                matchingIndex++;
                visibleCount++;
                if (item.id == selectedShopItemId || (string.IsNullOrEmpty(selectedShopItemId) && item.id == hoveredShopItemId))
                {
                    selectedItem = item;
                }

                GUILayout.BeginVertical(GUI.skin.box);
                GUILayout.BeginHorizontal();
                var texture = LoadItemTexture(item.image_asset);
                GUILayout.Label(texture, GUILayout.Width(40), GUILayout.Height(40));
                GUILayout.BeginVertical();
                GUILayout.Label(
                    item.name + " (" + FormatCurrency(item.cost, shop.currency) + ")",
                    CreationUiStyles.FieldLabel);
                if (!string.IsNullOrEmpty(item.description))
                {
                    GUILayout.Label(item.description, WrappedDetailStyle());
                }
                GUILayout.EndVertical();
                bool canAfford = hasChosenWealth && state.remaining_wealth >= item.cost;
                bool previousEnabled = GUI.enabled;
                GUI.enabled = previousEnabled && canAfford && !requestInProgress;
                string buyLabel = "Buy (" + FormatCurrency(item.cost, shop.currency) + ")";
                if (sideBySide)
                {
                    GUILayout.FlexibleSpace();
                    if (CreationUiStyles.TertiaryButton(
                        CreationIcons.ActionContent(CreationIcons.Buy, buyLabel),
                        GUILayout.Width(128)))
                    {
                        StartCoroutine(PurchaseEquipmentItem(item.id));
                    }
                }
                GUI.enabled = previousEnabled;
                GUILayout.EndHorizontal();
                if (!sideBySide)
                {
                    GUI.enabled = previousEnabled && canAfford && !requestInProgress;
                    if (CreationUiStyles.TertiaryButton(
                        CreationIcons.ActionContent(CreationIcons.Buy, buyLabel),
                        GUILayout.ExpandWidth(true)))
                    {
                        StartCoroutine(PurchaseEquipmentItem(item.id));
                    }
                    GUI.enabled = previousEnabled;
                }
                GUILayout.EndVertical();

                Rect itemRect = GUILayoutUtility.GetLastRect();
                if (Event.current.type == EventType.Repaint && itemRect.Contains(Event.current.mousePosition))
                {
                    hoveredShopItemId = item.id;
                }
                if (Event.current.type == EventType.MouseDown && itemRect.Contains(Event.current.mousePosition))
                {
                    selectedShopItemId = item.id;
                }
            }
        }
        GUILayout.EndScrollView();
        if (matchingCount == 0)
        {
            GUILayout.Label("No equipment matches this search.", CreationUiStyles.Caption);
        }

        var ownedItems = state != null && state.items != null ? state.items : new EquipmentItemInstanceDto[0];
        var slotNames = new List<string> { "main_hand", "off_hand", "body" };
        foreach (var it in ownedItems)
        {
            if (!string.IsNullOrEmpty(it.slot) && !slotNames.Contains(it.slot))
            {
                slotNames.Add(it.slot);
            }
        }

        GUILayout.Space(8);
        GUILayout.Label("Character Loadout", CreationUiStyles.Title);

        foreach (var slotName in slotNames)
        {
            EquipmentItemInstanceDto equippedInstance = null;
            foreach (var it in ownedItems)
            {
                if (it.slot == slotName)
                {
                    equippedInstance = it;
                    break;
                }
            }

            if (sideBySide)
            {
                GUILayout.BeginHorizontal(GUI.skin.box);
                GUILayout.Label(slotName + ":", CreationUiStyles.FieldLabel, GUILayout.Width(90));
            }
            else
            {
                GUILayout.BeginVertical(GUI.skin.box);
                GUILayout.Label(slotName + ":", CreationUiStyles.FieldLabel);
            }
            if (equippedInstance != null)
            {
                string itemName = GetItemDisplayName(equippedInstance.item_id, shop);
                GUILayout.Label(itemName);
                if (sideBySide)
                {
                    GUILayout.FlexibleSpace();
                }
                if (CreationUiStyles.TertiaryButton(
                    CreationIcons.ActionContent(CreationIcons.Equip, "Unequip"),
                    sideBySide
                        ? new[] { GUILayout.Width(96) }
                        : new[] { GUILayout.ExpandWidth(true) }))
                {
                    StartCoroutine(UnequipEquipmentItem(equippedInstance.instance_id));
                }
            }
            else
            {
                GUILayout.Label("[Empty]");
            }
            if (sideBySide)
            {
                GUILayout.EndHorizontal();
            }
            else
            {
                GUILayout.EndVertical();
            }
        }

        GUILayout.Space(8);
        GUILayout.Label("Backpack", CreationUiStyles.Title);

        var backpackItems = new List<EquipmentItemInstanceDto>();
        foreach (var it in ownedItems)
        {
            if (string.IsNullOrEmpty(it.slot))
            {
                backpackItems.Add(it);
            }
        }

        if (backpackItems.Count == 0)
        {
            GUILayout.Label("Backpack is empty.");
        }
        else
        {
            float bpHeight = UiLayout.BodyListHeight(
                sideBySide ? 0.3f : 0.24f,
                sideBySide ? 120f : 100f,
                sideBySide ? 280f : 180f);
            backpackScrollPosition = GUILayout.BeginScrollView(
                backpackScrollPosition,
                GUILayout.Height(bpHeight));

            foreach (var bpItem in backpackItems)
            {
                string itemName = GetItemDisplayName(bpItem.item_id, shop);
                if (sideBySide)
                {
                    GUILayout.BeginHorizontal(GUI.skin.box);
                    GUILayout.Label(itemName);
                    GUILayout.FlexibleSpace();
                }
                else
                {
                    GUILayout.BeginVertical(GUI.skin.box);
                    GUILayout.Label(itemName, CreationUiStyles.FieldLabel);
                }
                var itemDef = FindShopItem(bpItem.item_id, shop);
                if (itemDef != null && itemDef.equipment_slots != null)
                {
                    foreach (var s in itemDef.equipment_slots)
                    {
                        if (CreationUiStyles.TertiaryButton(
                            CreationIcons.ActionContent(
                                CreationIcons.Equip,
                                "Equip (" + s + ")"),
                            sideBySide
                                ? new[] { GUILayout.Width(120) }
                                : new[] { GUILayout.ExpandWidth(true) }))
                        {
                            StartCoroutine(EquipEquipmentItem(bpItem.instance_id, s));
                        }
                    }
                }
                if (sideBySide)
                {
                    GUILayout.EndHorizontal();
                }
                else
                {
                    GUILayout.EndVertical();
                }
            }
            GUILayout.EndScrollView();
        }

        GUILayout.EndVertical();

        if (sideBySide)
        {
            GUILayout.Space(12);
        }

        GUILayout.BeginVertical(
            GUI.skin.box,
            GUILayout.MinWidth(280f),
            sideBySide ? GUILayout.Width(shopLayoutWidth * 0.38f) : GUILayout.ExpandWidth(true));

        if (selectedItem != null)
        {
            GUILayout.BeginVertical(GUI.skin.box);
            GUILayout.Label("Details: " + selectedItem.name, CreationUiStyles.Title);
            GUILayout.Label(
                "Cost: " + FormatCurrency(selectedItem.cost, shop.currency),
                CreationUiStyles.Body);
            if (selectedItem.equipment_slots != null && selectedItem.equipment_slots.Length > 0)
            {
                GUILayout.Label("Compatible Slots: " + string.Join(", ", selectedItem.equipment_slots));
            }
            if (!string.IsNullOrEmpty(selectedItem.description))
            {
                GUILayout.Label(selectedItem.description, WrappedDetailStyle());
            }
            if (selectedItem.details != null)
            {
                foreach (var detail in selectedItem.details)
                {
                    if (detail != null &&
                        !string.IsNullOrEmpty(detail.label) &&
                        !string.IsNullOrEmpty(detail.value))
                    {
                        GUILayout.Label(
                            detail.label + ": " + detail.value,
                            CreationUiStyles.Body);
                    }
                }
            }
            if (!string.IsNullOrEmpty(selectedItem.source_reference))
            {
                GUILayout.Label("Source: " + selectedItem.source_reference, WrappedDetailStyle());
            }
            GUILayout.EndVertical();
        }

        GUILayout.EndVertical();

        if (sideBySide)
        {
            GUILayout.EndHorizontal();
        }
    }

    private static bool MatchesShopSearch(ShopItemDto item, string searchText)
    {
        if (item == null || string.IsNullOrWhiteSpace(searchText))
        {
            return item != null;
        }
        if (ContainsShopSearchText(item.name, searchText) ||
            ContainsShopSearchText(item.description, searchText))
        {
            return true;
        }
        if (item.details == null)
        {
            return false;
        }
        foreach (var detail in item.details)
        {
            if (detail != null &&
                (ContainsShopSearchText(detail.label, searchText) ||
                 ContainsShopSearchText(detail.value, searchText)))
            {
                return true;
            }
        }
        return false;
    }

    private static bool ContainsShopSearchText(string value, string searchText)
    {
        return !string.IsNullOrEmpty(value) &&
            value.IndexOf(searchText.Trim(), StringComparison.OrdinalIgnoreCase) >= 0;
    }

    private Texture2D GetFallbackItemTexture()
    {
        if (fallbackItemTexture == null)
        {
            fallbackItemTexture = new Texture2D(32, 32);
            var pixels = new Color[32 * 32];
            Color baseColor = new Color(0.28f, 0.28f, 0.32f, 1f);
            Color borderColor = new Color(0.5f, 0.5f, 0.55f, 1f);
            for (int y = 0; y < 32; y++)
            {
                for (int x = 0; x < 32; x++)
                {
                    bool isBorder = x == 0 || x == 31 || y == 0 || y == 31;
                    pixels[y * 32 + x] = isBorder ? borderColor : baseColor;
                }
            }
            fallbackItemTexture.SetPixels(pixels);
            fallbackItemTexture.Apply();
        }
        return fallbackItemTexture;
    }

    private Texture2D LoadItemTexture(string imageAsset)
    {
        if (!string.IsNullOrEmpty(imageAsset))
        {
            var tex = Resources.Load<Texture2D>(ResourcePath(imageAsset));
            if (tex != null)
            {
                return tex;
            }
        }
        return GetFallbackItemTexture();
    }

    private static string GetItemDisplayName(string itemId, EquipmentShopDto shop)
    {
        var item = FindShopItem(itemId, shop);
        return item != null ? item.name : itemId;
    }

    private static ShopItemDto FindShopItem(string itemId, EquipmentShopDto shop)
    {
        if (shop?.catalog == null)
        {
            return null;
        }
        foreach (var item in shop.catalog)
        {
            if (item.id == itemId)
            {
                return item;
            }
        }
        return null;
    }

    private void DrawPortraitField(CreationFieldDto field)
    {
        portraitFieldId = field.id;
        string reference = CurrentPortraitReference(field.id);
        var entry = FindPortraitEntry(reference);
        var generation = draft != null ? draft.portrait_generation : null;
        var configuration = generation != null ? generation.configuration : null;
        var candidate = generation != null
            ? NormalizeCandidate(generation.candidate)
            : null;
        var applied = generation != null
            ? NormalizeAppliedPortrait(generation.applied)
            : null;
        bool selectedGenerated =
            applied != null && applied.reference == reference;
        if (!string.IsNullOrEmpty(reference) &&
            entry == null &&
            !selectedGenerated &&
            !reference.StartsWith("generated-portrait:", StringComparison.Ordinal))
        {
            ReportMissingPortraitReference(reference, "no bundled catalog entry");
        }

        GUILayout.BeginVertical(GUI.skin.box);
        GUILayout.BeginHorizontal();
        GUILayout.Label(
            entry != null
                ? LoadPortraitTexture(entry.Portrait)
                : selectedGenerated && appliedGeneratedPortraitTexture != null
                    ? appliedGeneratedPortraitTexture
                    : GetFallbackPortraitTexture(),
            GUILayout.Width(76f),
            GUILayout.Height(96f));
        GUILayout.BeginVertical();
        GUILayout.Label(
            entry != null
                ? entry.Portrait.name
                : selectedGenerated
                    ? "Generated portrait"
                : string.IsNullOrEmpty(reference)
                    ? "No portrait selected"
                    : "Selected portrait unavailable",
            CreationUiStyles.Body);
        if (entry != null)
        {
            GUILayout.Label(entry.Pack.name, CreationUiStyles.Caption);
            if (CreationUiStyles.TertiaryButton(
                portraitDetailsExpanded ? "Hide portrait details" : "Portrait details"))
            {
                portraitDetailsExpanded = !portraitDetailsExpanded;
            }
        }
        else if (selectedGenerated && CreationUiStyles.TertiaryButton(
            portraitDetailsExpanded ? "Hide portrait details" : "Portrait details"))
        {
            portraitDetailsExpanded = !portraitDetailsExpanded;
        }
        else if (!string.IsNullOrEmpty(reference))
        {
            GUILayout.Label(reference, CreationUiStyles.Caption);
        }
        if (CreationUiStyles.SecondaryButton("Choose portrait"))
        {
            portraitFieldId = field.id;
            portraitSelectionReference = reference;
            portraitSearchText = "";
            portraitGalleryScrollPosition = Vector2.zero;
            failedGeneratedPortraitUrls.Clear();
            errorMessage = "";
            portraitPickerOpen = true;
        }
        bool previousEnabled = GUI.enabled;
        GUI.enabled = previousEnabled && !requestInProgress;
        if (candidate != null)
        {
            if (CreationUiStyles.SecondaryButton("Review generated portrait"))
            {
                portraitGenerationState = PortraitGenerationState.CandidatePreview;
            }
        }
        else
        {
            GUI.enabled = previousEnabled &&
                configuration != null &&
                configuration.comfyui_configured &&
                !requestInProgress;
            if (CreationUiStyles.SecondaryButton("Generate portrait"))
            {
                portraitFieldId = field.id;
                errorMessage = "";
                portraitGenerationState = PortraitGenerationState.Composer;
                portraitGenerationScrollPosition = Vector2.zero;
            }
        }
        GUI.enabled = previousEnabled;
        GUILayout.EndVertical();
        GUILayout.EndHorizontal();
        if (entry != null && portraitDetailsExpanded)
        {
            GUILayout.Label(
                entry.Pack.name + " " + entry.Pack.version,
                CreationUiStyles.Caption);
            GUILayout.Label(
                "Source: " + WrapPortraitPath(entry.Portrait.source),
                CreationUiStyles.Caption);
            GUILayout.Label(
                "Attribution: " + entry.Portrait.attribution,
                CreationUiStyles.Caption);
            GUILayout.Label(
                "License: " + entry.Portrait.license + " | " +
                WrapPortraitPath(entry.Portrait.license_url),
                CreationUiStyles.Caption);
        }
        else if (selectedGenerated && portraitDetailsExpanded)
        {
            DrawGeneratedPortraitProvenance(applied.provenance);
        }
        if (candidate != null)
        {
            if (candidatePortraitTexture == null)
            {
                GUILayout.Label("Loading portrait preview...", CreationUiStyles.Caption);
            }
            DrawPortraitCandidate(candidate, field.id);
        }
        GUILayout.EndVertical();
    }

    private void DrawPortraitGenerationOverlay()
    {
        var screenRect = new Rect(0f, 0f, Screen.width, Screen.height);
        Color previousColor = GUI.color;
        GUI.color = new Color(0.035f, 0.03f, 0.04f, 0.97f);
        GUI.DrawTexture(screenRect, Texture2D.whiteTexture);
        GUI.color = previousColor;
        GUI.Box(screenRect, GUIContent.none, CreationUiStyles.Frame);

        float margin = Screen.width < UiLayout.SmMax ? 8f : 16f;
        float contentWidth = Mathf.Max(0f, Screen.width - 2f * margin);
        const float footerHeight = 72f;
        float contentHeight = Mathf.Max(
            0f,
            Screen.height - 2f * margin - footerHeight);
        GUILayout.BeginArea(new Rect(margin, margin, contentWidth, contentHeight));
        GUILayout.BeginVertical(GUI.skin.box);
        GUILayout.Label(
            portraitGenerationState == PortraitGenerationState.CandidatePreview
                ? "Generated portrait"
                : "Generate a portrait",
            CreationUiStyles.Title);
        if (!string.IsNullOrEmpty(errorMessage))
        {
            GUILayout.Label(errorMessage, ErrorStyle());
        }
        if (portraitGenerationState == PortraitGenerationState.Composer)
        {
            portraitGenerationScrollPosition = GUILayout.BeginScrollView(
                portraitGenerationScrollPosition,
                false,
                true,
                GUILayout.ExpandHeight(true));
            DrawPortraitGenerationComposer();
            GUILayout.EndScrollView();
        }
        else if (portraitGenerationState == PortraitGenerationState.Progress)
        {
            DrawPortraitGenerationProgress();
        }
        else if (portraitGenerationState == PortraitGenerationState.CandidatePreview)
        {
            var generation = draft != null ? draft.portrait_generation : null;
            var candidate = generation != null
                ? NormalizeCandidate(generation.candidate)
                : null;
            DrawPortraitCandidateOverlay(candidate);
        }
        GUILayout.EndVertical();
        GUILayout.EndArea();

        GUILayout.BeginArea(new Rect(
            margin,
            Screen.height - margin - footerHeight,
            contentWidth,
            footerHeight));
        GUILayout.BeginHorizontal();
        bool previousEnabled = GUI.enabled;
        var currentGeneration = draft != null ? draft.portrait_generation : null;
        var currentCandidate = currentGeneration != null
            ? NormalizeCandidate(currentGeneration.candidate)
            : null;
        if (portraitGenerationState == PortraitGenerationState.Composer)
        {
            GUI.enabled = previousEnabled && !requestInProgress;
            if (CreationUiStyles.TertiaryButton("Close"))
            {
                portraitGenerationState = PortraitGenerationState.Closed;
                errorMessage = "";
            }
            GUILayout.FlexibleSpace();
            var configuration = currentGeneration != null
                ? currentGeneration.configuration
                : null;
            GUI.enabled = previousEnabled &&
                !requestInProgress &&
                configuration != null &&
                configuration.comfyui_configured;
            if (CreationUiStyles.PrimaryButton("Generate portrait"))
            {
                portraitGenerationState = PortraitGenerationState.Progress;
                StartCoroutine(GeneratePortrait(portraitFieldId));
            }
        }
        else if (portraitGenerationState == PortraitGenerationState.CandidatePreview &&
            currentCandidate != null &&
            Screen.width >= UiLayout.MdMax)
        {
            GUILayout.FlexibleSpace();
            GUI.enabled = previousEnabled &&
                !requestInProgress &&
                candidatePortraitTexture != null;
            if (CreationUiStyles.SecondaryButton("Use"))
            {
                StartCoroutine(UsePortraitCandidate(
                    currentCandidate.candidate_id,
                    portraitFieldId));
            }
            if (CreationUiStyles.TertiaryButton("Discard"))
            {
                StartCoroutine(DiscardPortraitCandidate(currentCandidate.candidate_id));
            }
        }
        GUI.enabled = previousEnabled;
        GUILayout.EndHorizontal();
        GUILayout.EndArea();
    }

    private void DrawPortraitGenerationProgress()
    {
        GUILayout.FlexibleSpace();
        GUILayout.Label(
            savingAppearanceForPortrait
                ? "Saving appearance details before portrait generation..."
                : "Generating portrait with ComfyUI...",
            CreationUiStyles.Status);
        GUILayout.FlexibleSpace();
    }

    private void DrawPortraitCandidateOverlay(GeneratedPortraitDto candidate)
    {
        if (candidate == null)
        {
            GUILayout.Label(
                "The pending generated portrait is no longer available.",
                CreationUiStyles.Body);
            return;
        }
        bool mobileLayout = Screen.width < UiLayout.MdMax;
        if (mobileLayout)
        {
            GUILayout.Label(
                "< Swipe left: discard     Swipe right: use >",
                CreationUiStyles.Section);
        }
        Rect imageRect = GUILayoutUtility.GetRect(
            100f,
            100f,
            GUILayout.ExpandWidth(true),
            GUILayout.ExpandHeight(true));
        HandleCandidatePreviewTouch(imageRect, candidate);
        if (candidatePortraitTexture != null)
        {
            GUI.DrawTexture(
                imageRect,
                candidatePortraitTexture,
                ScaleMode.ScaleToFit,
                true);
        }
        else
        {
            GUI.Label(
                imageRect,
                "Loading portrait preview...",
                CreationUiStyles.Status);
        }
        GUILayout.Label(
            candidate.provenance != null
                ? candidate.provenance.description
                : "",
            CreationUiStyles.Caption);
    }

    private void HandleCandidatePreviewTouch(
        Rect imageRect,
        GeneratedPortraitDto candidate)
    {
        if (Screen.width >= UiLayout.MdMax ||
            portraitGenerationState != PortraitGenerationState.CandidatePreview ||
            candidate == null ||
            candidatePortraitTexture == null ||
            candidatePortraitId != candidate.candidate_id ||
            requestInProgress)
        {
            candidateSwipeFingerId = -1;
            return;
        }
        for (int index = 0; index < Input.touchCount; index++)
        {
            Touch touch = Input.GetTouch(index);
            Vector2 guiPosition = new Vector2(
                touch.position.x,
                Screen.height - touch.position.y);
            if (touch.phase == TouchPhase.Began)
            {
                if (imageRect.Contains(guiPosition))
                {
                    candidateSwipeFingerId = touch.fingerId;
                    candidateSwipeStartPosition = guiPosition;
                }
                continue;
            }
            if (touch.fingerId != candidateSwipeFingerId)
            {
                continue;
            }
            if (touch.phase == TouchPhase.Canceled)
            {
                candidateSwipeFingerId = -1;
                continue;
            }
            if (touch.phase != TouchPhase.Ended)
            {
                continue;
            }

            Vector2 displacement = guiPosition - candidateSwipeStartPosition;
            candidateSwipeFingerId = -1;
            float horizontalDistance = Mathf.Abs(displacement.x);
            float minimumDistance = Mathf.Max(72f, Screen.width * 0.18f);
            if (horizontalDistance < minimumDistance ||
                horizontalDistance <= Mathf.Abs(displacement.y) * 1.25f)
            {
                continue;
            }
            if (displacement.x > 0f)
            {
                StartCoroutine(UsePortraitCandidate(
                    candidate.candidate_id,
                    portraitFieldId));
            }
            else
            {
                StartCoroutine(DiscardPortraitCandidate(candidate.candidate_id));
            }
            return;
        }
    }

    private void DrawPortraitGenerationComposer()
    {
        var generation = draft != null ? draft.portrait_generation : null;
        var configuration = generation != null ? generation.configuration : null;
        GUILayout.Label("Optional image description", CreationUiStyles.FieldLabel);
        portraitGenerationDescription = GUILayout.TextArea(
            portraitGenerationDescription,
            CreationUiStyles.Input,
            GUILayout.ExpandWidth(true),
            GUILayout.Height(96f));
        GUILayout.Label(
            portraitGenerationDescription.Length + " / 1000 characters",
            CreationUiStyles.Caption);
        if (configuration != null && configuration.comfyui_configured)
        {
            GUILayout.Label(
                "ComfyUI: " + configuration.comfyui_destination +
                (string.IsNullOrEmpty(configuration.comfyui_workflow)
                    ? ""
                    : " · " + configuration.comfyui_workflow),
                CreationUiStyles.Caption);
        }
        else
        {
            GUILayout.Label(
                "ComfyUI is not configured. Restart the local service with " +
                "--comfyui-workflow to enable portrait generation.",
                CreationUiStyles.Caption);
        }
        GUILayout.Label(
            configuration != null && configuration.ollama_enabled
                ? "Ollama prompt refinement: enabled (" +
                    configuration.ollama_model + " at " +
                    configuration.ollama_destination + ")."
                : "Ollama prompt refinement: disabled.",
            CreationUiStyles.Caption);
        GUILayout.Label(
            "On request, your description and selected race/species, class/career/" +
            "homeworld/origin, gear, and appearance choices are sent to the configured " +
            "services. Ability scores and skill ranks are excluded.",
            CreationUiStyles.Caption);
    }

    private void DrawGeneratedPortraitProvenance(
        GeneratedPortraitProvenanceDto provenance)
    {
        if (provenance == null)
        {
            GUILayout.Label("Generation provenance is unavailable.", CreationUiStyles.Caption);
            return;
        }
        GUILayout.Label("Source: " + provenance.source, CreationUiStyles.Caption);
        GUILayout.Label("Workflow: " + provenance.workflow, CreationUiStyles.Caption);
        GUILayout.Label("Image model: " + provenance.image_model, CreationUiStyles.Caption);
        if (!string.IsNullOrEmpty(provenance.ollama_model))
        {
            GUILayout.Label("Prompt model: " + provenance.ollama_model, CreationUiStyles.Caption);
            GUILayout.Label(
                "Prompt model terms: " + provenance.ollama_terms,
                CreationUiStyles.Caption);
        }
        GUILayout.Label("Source/usage terms: " + provenance.source_terms, CreationUiStyles.Caption);
        if (!string.IsNullOrEmpty(provenance.description))
        {
            GUILayout.Label("Description: " + provenance.description, CreationUiStyles.Caption);
        }
    }

    private void DrawPortraitCandidate(GeneratedPortraitDto candidate, string fieldId)
    {
        GUILayout.BeginVertical(GUI.skin.box);
        GUILayout.Label("Portrait preview", CreationUiStyles.Section);
        GUILayout.BeginHorizontal();
        GUILayout.Label(
            candidatePortraitTexture != null
                ? candidatePortraitTexture
                : GetFallbackPortraitTexture(),
            GUILayout.Width(76f),
            GUILayout.Height(96f));
        GUILayout.BeginVertical();
        GUILayout.Label("Candidate portrait", CreationUiStyles.Body);
        DrawGeneratedPortraitProvenance(candidate.provenance);
        GUILayout.BeginHorizontal();
        bool previousEnabled = GUI.enabled;
        GUI.enabled = previousEnabled && !requestInProgress;
        if (CreationUiStyles.SecondaryButton("Use"))
        {
            StartCoroutine(UsePortraitCandidate(candidate.candidate_id, fieldId));
        }
        if (CreationUiStyles.TertiaryButton("Discard"))
        {
            StartCoroutine(DiscardPortraitCandidate(candidate.candidate_id));
        }
        GUI.enabled = previousEnabled;
        GUILayout.EndHorizontal();
        GUILayout.EndVertical();
        GUILayout.EndHorizontal();
        GUILayout.EndVertical();
    }

    private string CurrentPortraitReference(string fieldId)
    {
        if (textValues.TryGetValue(fieldId, out var localValue))
        {
            return localValue;
        }
        if (serverFieldValues.TryGetValue(fieldId, out var serverValue))
        {
            return serverValue.text_value ?? "";
        }
        return "";
    }

    private void DrawPortraitPickerOverlay()
    {
        var screenRect = new Rect(0f, 0f, Screen.width, Screen.height);
        Color previousColor = GUI.color;
        GUI.color = new Color(0.035f, 0.03f, 0.04f, 0.97f);
        GUI.DrawTexture(screenRect, Texture2D.whiteTexture);
        GUI.color = previousColor;
        GUI.Box(screenRect, GUIContent.none, CreationUiStyles.Frame);

        float margin = Screen.width < UiLayout.SmMax ? 8f : 16f;
        float contentWidth = Mathf.Max(0f, Screen.width - 2f * margin);
        float innerContentWidth = Mathf.Max(0f, contentWidth - 32f);
        const float footerHeight = 56f;
        float contentHeight = Mathf.Max(
            0f,
            Screen.height - 2f * margin - footerHeight);
        bool stackedHeader = Screen.width < UiLayout.MdMax;
        float galleryHeaderAllowance = stackedHeader ? 150f : 110f;
        float galleryHeight = Mathf.Max(
            80f,
            contentHeight - galleryHeaderAllowance);
        GUILayout.BeginArea(
            new Rect(margin, margin, contentWidth, contentHeight));
        GUILayout.BeginVertical(GUI.skin.box);
        if (stackedHeader)
        {
            GUILayout.Label(
                "Choose a portrait",
                CreationUiStyles.Title,
                GUILayout.ExpandWidth(true));
            GUILayout.BeginHorizontal();
            GUILayout.Label(
                "Search",
                CreationUiStyles.FieldLabel,
                GUILayout.Width(64f));
            portraitSearchText = GUILayout.TextField(
                portraitSearchText,
                CreationUiStyles.Input,
                GUILayout.ExpandWidth(true));
            GUILayout.EndHorizontal();
        }
        else
        {
            GUILayout.BeginHorizontal();
            GUILayout.Label(
                "Choose a portrait",
                CreationUiStyles.Title,
                GUILayout.Width(500f));
            GUILayout.Label(
                "Search",
                CreationUiStyles.FieldLabel,
                GUILayout.Width(80f));
            portraitSearchText = GUILayout.TextField(
                portraitSearchText,
                CreationUiStyles.Input,
                GUILayout.ExpandWidth(true));
            GUILayout.EndHorizontal();
        }

        List<PortraitGalleryEntry> entries = GetFilteredPortraitEntries();
        if (!string.IsNullOrEmpty(errorMessage))
        {
            GUILayout.Label(errorMessage, ErrorStyle());
        }
        DrawPortraitGallery(entries, galleryHeight, innerContentWidth);
        GUILayout.EndVertical();
        GUILayout.EndArea();

        GUILayout.BeginArea(new Rect(
            margin,
            Screen.height - margin - footerHeight,
            contentWidth,
            footerHeight));
        GUILayout.BeginHorizontal();
        bool previousEnabled = GUI.enabled;
        GUI.enabled = previousEnabled && !requestInProgress;
        GUILayout.FlexibleSpace();
        if (CreationUiStyles.TertiaryButton(
            "Close",
            GUILayout.Width(120f)))
        {
            ClosePortraitPicker();
        }
        GUI.enabled = previousEnabled;
        GUILayout.EndHorizontal();
        GUILayout.EndArea();
    }

    private List<PortraitGalleryEntry> GetFilteredPortraitEntries()
    {
        var entries = new List<PortraitGalleryEntry>();
        string query = portraitSearchText.Trim();
        foreach (var pack in draft?.portrait_packs ?? new PortraitPackDto[0])
        {
            foreach (var portrait in pack.portraits ?? new PortraitOptionDto[0])
            {
                if (!MatchesPortraitSearch(pack, portrait, query))
                {
                    continue;
                }
                entries.Add(new PortraitGalleryEntry
                {
                    Pack = pack,
                    Portrait = portrait
                });
            }
        }
        foreach (var portrait in draft?.generated_portraits
            ?? new GeneratedPortraitDto[0])
        {
            if (!MatchesGeneratedPortraitSearch(portrait, query))
            {
                continue;
            }
            entries.Add(new PortraitGalleryEntry
            {
                Generated = portrait
            });
        }
        return entries;
    }

    private static bool MatchesGeneratedPortraitSearch(
        GeneratedPortraitDto portrait,
        string query)
    {
        if (portrait == null)
        {
            return false;
        }
        if (string.IsNullOrEmpty(query) ||
            ContainsShopSearchText(portrait.reference, query) ||
            ContainsShopSearchText(portrait.provenance?.description, query) ||
            ContainsShopSearchText(portrait.provenance?.source, query) ||
            ContainsShopSearchText(portrait.provenance?.workflow, query) ||
            ContainsShopSearchText(portrait.provenance?.image_model, query))
        {
            return true;
        }
        return false;
    }

    private static bool MatchesPortraitSearch(
        PortraitPackDto pack,
        PortraitOptionDto portrait,
        string query)
    {
        if (string.IsNullOrEmpty(query) ||
            ContainsShopSearchText(portrait.name, query) ||
            ContainsShopSearchText(portrait.description, query) ||
            ContainsShopSearchText(pack.name, query) ||
            ContainsShopSearchText(pack.kind, query))
        {
            return true;
        }
        foreach (string tag in portrait.tags ?? new string[0])
        {
            if (ContainsShopSearchText(tag, query))
            {
                return true;
            }
        }
        return false;
    }

    private void DrawPortraitGallery(
        List<PortraitGalleryEntry> entries,
        float height,
        float width)
    {
        int columns = PortraitGalleryColumns(width);
        float tileSize = Mathf.Min(
            180f,
            Mathf.Max(1f, (width - 48f) / columns));
        GUILayout.BeginVertical(
            GUI.skin.box,
            GUILayout.Width(width),
            GUILayout.Height(height));
        float scrollHeight = Mathf.Max(60f, height - 42f);
        portraitGalleryScrollPosition = GUILayout.BeginScrollView(
            portraitGalleryScrollPosition,
            false,
            true,
            GUILayout.Height(scrollHeight));
        if (entries.Count == 0)
        {
            GUILayout.Label(
                "No portraits match this search.",
                CreationUiStyles.Body);
        }
        else
        {
            var bundledEntries = new List<PortraitGalleryEntry>();
            var generatedEntries = new List<PortraitGalleryEntry>();
            foreach (var entry in entries)
            {
                (entry.Generated != null ? generatedEntries : bundledEntries).Add(entry);
            }
            DrawPortraitGallerySection(
                "Portrait gallery",
                bundledEntries,
                columns,
                tileSize);
            DrawPortraitGallerySection(
                "Generated portraits",
                generatedEntries,
                columns,
                tileSize);
        }
        GUILayout.EndScrollView();
        GUILayout.EndVertical();
    }

    private void DrawPortraitGallerySection(
        string title,
        List<PortraitGalleryEntry> entries,
        int columns,
        float tileSize)
    {
        if (entries.Count == 0)
        {
            return;
        }
        GUILayout.Label(title, CreationUiStyles.Section);
        for (int index = 0; index < entries.Count; index += columns)
        {
            GUILayout.BeginHorizontal();
            for (int column = 0; column < columns; column++)
            {
                int entryIndex = index + column;
                if (entryIndex >= entries.Count)
                {
                    GUILayout.FlexibleSpace();
                    continue;
                }
                DrawPortraitTile(entries[entryIndex], tileSize);
            }
            GUILayout.EndHorizontal();
        }
    }

    private static int PortraitGalleryColumns(float width)
    {
        const float minimumTileWidth = 144f;
        float availableWidth = Mathf.Max(minimumTileWidth, width - 48f);
        return Mathf.Clamp(
            Mathf.FloorToInt(availableWidth / minimumTileWidth),
            1,
            10);
    }

    private void DrawPortraitTile(PortraitGalleryEntry entry, float tileSize)
    {
        string reference = entry.Generated != null
            ? entry.Generated.reference
            : entry.Portrait.asset_reference;
        bool isSelected = reference == portraitSelectionReference ||
            reference == CurrentPortraitReference(portraitFieldId);
        GUIContent content;
        if (entry.Generated != null)
        {
            content = new GUIContent(
                LoadGeneratedPortraitTexture(entry.Generated),
                GeneratedPortraitTooltip(entry.Generated));
        }
        else
        {
            content = new GUIContent(
                LoadPortraitTexture(entry.Portrait),
                entry.Portrait.name);
        }
        bool previousEnabled = GUI.enabled;
        GUI.enabled = previousEnabled && !requestInProgress;
        if (GUILayout.Button(
            content,
            isSelected ? CreationUiStyles.Primary : CreationUiStyles.Selection,
            GUILayout.Width(tileSize),
            GUILayout.Height(tileSize)))
        {
            portraitSelectionReference = reference;
            StartCoroutine(ApplySelectedPortrait());
        }
        GUI.enabled = previousEnabled;
    }

    private Texture2D LoadGeneratedPortraitTexture(GeneratedPortraitDto portrait)
    {
        if (portrait == null || string.IsNullOrEmpty(portrait.reference))
        {
            return GetFallbackPortraitTexture();
        }
        if (generatedPortraitTextures.TryGetValue(
            portrait.reference,
            out var texture) &&
            texture != null)
        {
            return texture;
        }
        if (appliedGeneratedPortraitReference == portrait.reference &&
            appliedGeneratedPortraitTexture != null)
        {
            return appliedGeneratedPortraitTexture;
        }
        if (!string.IsNullOrEmpty(portrait.image_url))
        {
            string url = apiBaseUrl + portrait.image_url;
            if (!failedGeneratedPortraitUrls.Contains(url))
            {
                StartCoroutine(LoadGeneratedPortraitImage(
                    portrait.image_url,
                    portrait.reference,
                    GeneratedPortraitImageTarget.Library));
            }
        }
        return GetFallbackPortraitTexture();
    }

    private static string GeneratedPortraitTooltip(GeneratedPortraitDto portrait)
    {
        var provenance = portrait != null ? portrait.provenance : null;
        if (provenance == null)
        {
            return "Generated portrait";
        }
        string description = string.IsNullOrEmpty(provenance.description)
            ? ""
            : provenance.description;
        string source = string.IsNullOrEmpty(provenance.source)
            ? ""
            : "\nSource: " + provenance.source;
        string terms = string.IsNullOrEmpty(provenance.source_terms)
            ? ""
            : "\nUsage terms: " + provenance.source_terms;
        return "Generated portrait" + source + terms +
            (string.IsNullOrEmpty(description) ? "" : "\n" + description);
    }

    private static string WrapPortraitPath(string value)
    {
        return (value ?? "").Replace("/", "/\n").Replace("-", "-\n");
    }

    private PortraitGalleryEntry FindPortraitEntry(string assetReference)
    {
        if (string.IsNullOrEmpty(assetReference))
        {
            return null;
        }
        foreach (var pack in draft?.portrait_packs ?? new PortraitPackDto[0])
        {
            foreach (var portrait in pack.portraits ?? new PortraitOptionDto[0])
            {
                if (portrait.asset_reference == assetReference)
                {
                    return new PortraitGalleryEntry
                    {
                        Pack = pack,
                        Portrait = portrait
                    };
                }
            }
        }
        return null;
    }

    private Texture2D LoadPortraitTexture(PortraitOptionDto portrait)
    {
        if (portrait != null && !string.IsNullOrEmpty(portrait.resource_path))
        {
            Texture2D texture = Resources.Load<Texture2D>(
                ResourcePath(portrait.resource_path));
            if (texture != null)
            {
                return texture;
            }
            ReportMissingPortraitReference(
                portrait.asset_reference,
                "bundled image resource '" + portrait.resource_path + "' is unavailable");
        }
        return GetFallbackPortraitTexture();
    }

    private void ReportMissingPortraitReference(string reference, string reason)
    {
        string key = string.IsNullOrEmpty(reference) ? "(empty)" : reference;
        if (reportedMissingPortraitReferences.Add(key))
        {
            Debug.LogWarning(
                "Portrait unavailable for '" + key + "': " + reason +
                "; using a fallback portrait.");
        }
    }

    private Texture2D GetFallbackPortraitTexture()
    {
        if (fallbackPortraitTexture == null)
        {
            const int width = 96;
            const int height = 120;
            fallbackPortraitTexture = new Texture2D(width, height);
            var pixels = new Color[width * height];
            Color background = new Color(0.17f, 0.17f, 0.22f, 1f);
            Color border = new Color(0.65f, 0.54f, 0.34f, 1f);
            Color face = new Color(0.72f, 0.62f, 0.54f, 1f);
            Color silhouette = new Color(0.29f, 0.29f, 0.34f, 1f);
            for (int y = 0; y < height; y++)
            {
                for (int x = 0; x < width; x++)
                {
                    int dx = x - width / 2;
                    int dy = y - 70;
                    bool head = dx * dx * 22 + dy * dy * 16 < 28 * 28 * 16;
                    bool shoulders = y < 44 && Mathf.Abs(dx) < 18 + (44 - y);
                    bool hair = head && y > 77;
                    bool isBorder = x < 3 || x >= width - 3 || y < 3 || y >= height - 3;
                    Color color = isBorder
                        ? border
                        : shoulders || hair
                            ? silhouette
                            : head
                                ? face
                                : background;
                    pixels[y * width + x] = color;
                }
            }
            fallbackPortraitTexture.SetPixels(pixels);
            fallbackPortraitTexture.Apply();
        }
        return fallbackPortraitTexture;
    }

    private void ClosePortraitPicker()
    {
        portraitPickerOpen = false;
        portraitSelectionReference = "";
        portraitSearchText = "";
    }

    private IEnumerator ApplySelectedPortrait()
    {
        if (FindPortraitEntry(portraitSelectionReference) == null)
        {
            errorMessage = "Select an available portrait before applying.";
            yield break;
        }
        errorMessage = "";
        var request = new StringFieldRequestDto
        {
            field_id = portraitFieldId,
            value = portraitSelectionReference
        };
        yield return UpdateField(JsonUtility.ToJson(request));
        if (string.IsNullOrEmpty(errorMessage))
        {
            textValues[portraitFieldId] = portraitSelectionReference;
            ClosePortraitPicker();
        }
    }

    private IEnumerator GeneratePortrait(string fieldId)
    {
        errorMessage = "";
        int stepIndex = FindStepIndex(draft.current_step);
        if (stepIndex < 0)
        {
            errorMessage = "The current appearance step is unavailable.";
            portraitGenerationState = PortraitGenerationState.Composer;
            yield break;
        }
        portraitFieldId = fieldId;
        if (portraitGenerationDescription.Length > 1000)
        {
            errorMessage = "Portrait description must contain at most 1000 characters.";
            portraitGenerationState = PortraitGenerationState.Composer;
            yield break;
        }

        savingAppearanceForPortrait = true;
        yield return SaveCurrentStepFields(stepIndex);
        savingAppearanceForPortrait = false;
        if (!string.IsNullOrEmpty(errorMessage))
        {
            portraitGenerationState = PortraitGenerationState.Composer;
            yield break;
        }

        var request = new GeneratePortraitRequestDto
        {
            description = portraitGenerationDescription
        };
        generatingPortrait = true;
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/portrait-candidates",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (status == 201 || IsSuccess(status))
                {
                    var updated = JsonUtility.FromJson<DraftResponseDto>(response);
                    ApplyDraft(updated, true);
                    generatingPortrait = false;
                    if (updated?.portrait_generation != null &&
                        NormalizeCandidate(updated.portrait_generation.candidate) != null)
                    {
                        portraitGenerationState = PortraitGenerationState.CandidatePreview;
                    }
                    else
                    {
                        errorMessage = "The service did not return a portrait candidate.";
                        portraitGenerationState = PortraitGenerationState.Composer;
                    }
                }
                else
                {
                    generatingPortrait = false;
                    SetError(response);
                    portraitGenerationState = PortraitGenerationState.Composer;
                }
            });
    }

    private IEnumerator UsePortraitCandidate(string candidateId, string fieldId)
    {
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) +
                "/portrait-candidates/" + Uri.EscapeDataString(candidateId) + "/apply",
            "{}",
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                var updated = JsonUtility.FromJson<DraftResponseDto>(response);
                ApplyDraft(updated, true);
                if (serverFieldValues.TryGetValue(fieldId, out var fieldValue))
                {
                    textValues[fieldId] = fieldValue.text_value ?? "";
                }
                portraitGenerationState = PortraitGenerationState.Closed;
                errorMessage = "";
            });
    }

    private IEnumerator DiscardPortraitCandidate(string candidateId)
    {
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) +
                "/portrait-candidates/" + Uri.EscapeDataString(candidateId) + "/discard",
            "{}",
            (status, response) =>
            {
                if (IsSuccess(status))
                {
                    ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
                    portraitGenerationState = PortraitGenerationState.Closed;
                    errorMessage = "";
                }
                else
                {
                    SetError(response);
                }
            });
    }

    private IEnumerator LoadGeneratedPortraitImage(
        string imagePath,
        string reference,
        GeneratedPortraitImageTarget target)
    {
        string url = apiBaseUrl + imagePath;
        if (!loadingGeneratedPortraitUrls.Add(url))
        {
            yield break;
        }
        using (UnityWebRequest request = UnityWebRequest.Get(url))
        {
            yield return request.SendWebRequest();
            if (request.result != UnityWebRequest.Result.Success)
            {
                failedGeneratedPortraitUrls.Add(url);
                SetError("Could not load generated portrait image: " + request.error);
            }
            else if (string.IsNullOrEmpty(request.GetResponseHeader("Content-Type")) ||
                !request.GetResponseHeader("Content-Type").StartsWith(
                "image/",
                StringComparison.OrdinalIgnoreCase))
            {
                failedGeneratedPortraitUrls.Add(url);
                SetError("The character service returned a non-image portrait response.");
            }
            else
            {
                var texture = new Texture2D(2, 2, TextureFormat.RGBA32, false);
                if (!ImageConversion.LoadImage(texture, request.downloadHandler.data, false))
                {
                    Destroy(texture);
                    failedGeneratedPortraitUrls.Add(url);
                    SetError("The generated portrait response could not be decoded.");
                }
                else if (target == GeneratedPortraitImageTarget.Applied &&
                    appliedGeneratedPortraitReference == reference)
                {
                    if (appliedGeneratedPortraitTexture != null)
                    {
                        Destroy(appliedGeneratedPortraitTexture);
                    }
                    appliedGeneratedPortraitTexture = texture;
                }
                else if (target == GeneratedPortraitImageTarget.Candidate &&
                    candidatePortraitId == reference)
                {
                    if (candidatePortraitTexture != null)
                    {
                        Destroy(candidatePortraitTexture);
                    }
                    candidatePortraitTexture = texture;
                }
                else if (target == GeneratedPortraitImageTarget.Library)
                {
                    if (generatedPortraitTextures.TryGetValue(
                        reference,
                        out var previousTexture) &&
                        previousTexture != null)
                    {
                        Destroy(previousTexture);
                    }
                    generatedPortraitTextures[reference] = texture;
                }
                else
                {
                    Destroy(texture);
                }
            }
        }
        loadingGeneratedPortraitUrls.Remove(url);
    }

    private void DrawSkillRanks(CreationFieldDto field)
    {
        var fieldValue = serverFieldValues.ContainsKey(field.id)
            ? serverFieldValues[field.id]
            : null;
        var allocation = fieldValue?.skill_allocation;
        if (allocation == null)
        {
            GUILayout.Label("Choose a class and set Intelligence to calculate skill points.");
            return;
        }

        if (allocation.options == null)
        {
            return;
        }

        float spentPoints = 0f;
        foreach (var option in allocation.options)
        {
            if (string.IsNullOrEmpty(option.skill_id))
            {
                continue;
            }
            float ranks = skillRankValues.TryGetValue(option.skill_id, out var value)
                ? value
                : option.ranks;
            spentPoints += ranks * option.cost_per_rank;
        }
        float remainingPoints = Mathf.Max(0f, allocation.available_points - spentPoints);
        GUILayout.Label(
            "Level 1 " + allocation.class_name + " skill points: " +
            spentPoints.ToString("0.##",
                System.Globalization.CultureInfo.InvariantCulture) + " spent / " +
            allocation.available_points + " available (" +
            remainingPoints.ToString("0.##",
                System.Globalization.CultureInfo.InvariantCulture) + " remaining)");

        foreach (var option in allocation.options)
        {
            if (string.IsNullOrEmpty(option.skill_id))
            {
                continue;
            }

            float current = skillRankValues.TryGetValue(option.skill_id, out var value)
                ? value
                : option.ranks;
            float rankStep = option.cost_per_rank == 1 ? 1f : 0.5f;
            float pointCost = rankStep * option.cost_per_rank;
            bool sideBySide = UiLayout.CurrentDensity.SideBySide;
            if (sideBySide)
            {
                GUILayout.BeginHorizontal(GUI.skin.box);
                GUILayout.Label(
                    option.label + " — " + option.detail +
                    (option.is_class_skill ? " · class skill" : " · cross-class"),
                    CreationUiStyles.Body,
                    GUILayout.MinWidth(320));
            }
            else
            {
                GUILayout.BeginVertical(GUI.skin.box);
                GUILayout.Label(option.label, CreationUiStyles.FieldLabel);
                GUILayout.Label(
                    (option.detail ?? "") +
                    (option.is_class_skill ? " · class skill" : " · cross-class"),
                    CreationUiStyles.Caption);
                GUILayout.BeginHorizontal();
            }
            bool previousEnabled = GUI.enabled;
            GUI.enabled = previousEnabled && current >= rankStep;
            if (CreationUiStyles.IconButton(new GUIContent("-"), GUILayout.Width(40)))
            {
                current = Mathf.Max(0f, current - rankStep);
                skillRankValues[option.skill_id] = current;
                spentPoints = Mathf.Max(0f, spentPoints - pointCost);
                remainingPoints = Mathf.Min(
                    allocation.available_points,
                    remainingPoints + pointCost);
            }
            GUI.enabled = previousEnabled;
            GUILayout.Label(current.ToString(
                "0.##",
                System.Globalization.CultureInfo.InvariantCulture) +
                " ranks");
            GUI.enabled = previousEnabled &&
                current + rankStep <= option.maximum_ranks &&
                pointCost <= remainingPoints;
            if (CreationUiStyles.IconButton(new GUIContent("+"), GUILayout.Width(40)))
            {
                current += rankStep;
                skillRankValues[option.skill_id] = current;
                spentPoints += pointCost;
                remainingPoints = Mathf.Max(0f, remainingPoints - pointCost);
            }
            GUI.enabled = previousEnabled;
            GUILayout.Label(
                option.maximum_ranks.ToString(
                    "0.##",
                    System.Globalization.CultureInfo.InvariantCulture) + " max");
            GUILayout.EndHorizontal();
            if (!sideBySide)
            {
                GUILayout.EndVertical();
            }
        }
    }

    private bool HasNestedOptions(CreationFieldDto field)
    {
        foreach (var option in field.options ?? new CreationOptionDto[0])
        {
            if (!string.IsNullOrEmpty(option.parent_id))
            {
                return true;
            }
        }
        return false;
    }

    private void DrawNestedChoices(CreationFieldDto field)
    {
        var options = field.options ?? new CreationOptionDto[0];
        var selected = GetSelectedValues(field.id);
        foreach (var parent in options)
        {
            if (!string.IsNullOrEmpty(parent.parent_id))
            {
                continue;
            }

            var children = new List<CreationOptionDto>();
            foreach (var option in options)
            {
                if (option.parent_id == parent.id)
                {
                    children.Add(option);
                }
            }
            if (children.Count == 0)
            {
                DrawChoiceOption(field, parent, parent.label);
                continue;
            }

            bool expanded = expandedChoiceFields.Contains(field.id + ":" + parent.id);
            bool isParentSelected = selected.Contains(parent.id);
            bool isChildSelected = false;
            string selectedChildLabel = "";
            foreach (var child in children)
            {
                if (selected.Contains(child.id))
                {
                    isChildSelected = true;
                    selectedChildLabel = child.label;
                    break;
                }
            }

            string displayLabel = parent.label;
            if (isChildSelected)
            {
                displayLabel += " (" + selectedChildLabel + ")  [Selected]";
            }
            else if (isParentSelected)
            {
                displayLabel += " (Standard)  [Selected]";
            }

            string key = field.id + ":" + parent.id;
            bool isCurrentSelected = isParentSelected || isChildSelected;

            GUILayout.BeginHorizontal();
            if (GUILayout.Toggle(
                isCurrentSelected,
                displayLabel,
                CreationUiStyles.Selection,
                GUILayout.ExpandWidth(true)))
            {
                if (!isCurrentSelected)
                {
                    if (!field.multiple)
                    {
                        selected.Clear();
                    }
                    selected.Add(parent.id);
                    expandedChoiceFields.Add(key);
                }
            }
            else if (isCurrentSelected && !field.required)
            {
                selected.Remove(parent.id);
                foreach (var child in children)
                {
                    selected.Remove(child.id);
                }
            }

            string arrow = expanded ? " ▲ " : " ▼ ";
            if (CreationUiStyles.IconButton(
                new GUIContent(arrow),
                GUILayout.Width(44)))
            {
                if (expanded)
                {
                    expandedChoiceFields.Remove(key);
                }
                else
                {
                    expandedChoiceFields.Add(key);
                }
            }
            GUILayout.EndHorizontal();

            if (!expanded)
            {
                continue;
            }

            DrawChoiceOption(field, parent, "    " + parent.label + " (Standard)");
            foreach (var child in children)
            {
                DrawChoiceOption(field, child, "    " + child.label);
            }
        }
    }

    private void DrawChoiceOption(
        CreationFieldDto field,
        CreationOptionDto option,
        string label)
    {
        var selected = GetSelectedValues(field.id);
        bool isSelected = selected.Contains(option.id);
        string displayLabel = label + (isSelected ? "  [Selected]" : "");
        bool next = GUILayout.Toggle(
            isSelected,
            displayLabel,
            CreationUiStyles.Selection);
        if (next)
        {
            if (!field.multiple)
            {
                selected.Clear();
            }
            selected.Add(option.id);
        }
        else if (field.multiple)
        {
            selected.Remove(option.id);
        }
        else if (isSelected && !field.required)
        {
            selected.Remove(option.id);
        }
    }

    private bool IsIndividuallyRollable(CreationFieldDto field)
    {
        if (field.roll == null)
        {
            return false;
        }
        foreach (var group in flow.creation_flow.score_groups
            ?? new CreationScoreGroupDto[0])
        {
            foreach (var member in group.field_ids ?? new string[0])
            {
                if (member == field.id)
                {
                    return true;
                }
            }
        }
        return false;
    }

    private HashSet<string> GetSelectedValues(string fieldId)
    {
        if (!selectedValues.TryGetValue(fieldId, out var values))
        {
            values = new HashSet<string>();
            selectedValues[fieldId] = values;
        }
        return values;
    }

    private IEnumerator SaveStepAndContinue(int stepIndex)
    {
        yield return SaveCurrentStepFields(stepIndex);
        if (!string.IsNullOrEmpty(errorMessage))
        {
            yield break;
        }

        if (stepIndex + 1 < flow.creation_flow.steps.Length)
        {
            yield return SendRequest(
                "POST",
                "/api/drafts/" + Uri.EscapeDataString(draftId) + "/advance",
                "{}",
                (status, response) =>
                {
                    if (IsSuccess(status))
                    {
                        ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
                    }
                    else
                    {
                        SetError(response);
                    }
                });
        }
        else
        {
            yield return LoadReview();
        }
    }

    private IEnumerator SaveStepAndNavigate(int currentStepIndex, int targetStepIndex)
    {
        yield return SaveCurrentStepFields(currentStepIndex);
        if (!string.IsNullOrEmpty(errorMessage))
        {
            yield break;
        }

        var request = new StepSelectionRequestDto
        {
            step_id = flow.creation_flow.steps[targetStepIndex].id
        };
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/step",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (IsSuccess(status))
                {
                    ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
                }
                else
                {
                    SetError(response);
                }
            });
    }

    private IEnumerator SaveCurrentStepFields(int stepIndex)
    {
        var step = flow.creation_flow.steps[stepIndex];
        foreach (var field in step.fields)
        {
            if (field.type == "choice")
            {
                if ((field.definition_type == "item" || field.category == "equipment") &&
                    draft != null && draft.equipment_shop != null)
                {
                    continue;
                }
                if (field.skill_selection == "ranks")
                {
                    var ranks = new List<SkillRankEntryDto>();
                    foreach (var option in field.options ?? new CreationOptionDto[0])
                    {
                        float value = skillRankValues.ContainsKey(option.id)
                            ? skillRankValues[option.id]
                            : 0f;
                        if (value > 0f)
                        {
                            ranks.Add(new SkillRankEntryDto
                            {
                                skill_id = option.id,
                                ranks = value
                            });
                        }
                    }
                    var request = new SkillRanksFieldRequestDto
                    {
                        field_id = field.id,
                        value = ranks.ToArray()
                    };
                    yield return UpdateField(JsonUtility.ToJson(request));
                    if (!string.IsNullOrEmpty(errorMessage))
                    {
                        yield break;
                    }
                    continue;
                }
                string[] choices = new List<string>(GetSelectedValues(field.id)).ToArray();
                if (field.required && choices.Length == 0)
                {
                    errorMessage = field.label + " is required.";
                    yield break;
                }
                if (field.multiple)
                {
                    var request = new MultipleChoiceFieldRequestDto
                    {
                        field_id = field.id,
                        value = choices
                    };
                    yield return UpdateField(JsonUtility.ToJson(request));
                }
                else
                {
                    var request = new StringFieldRequestDto
                    {
                        field_id = field.id,
                        value = choices.Length > 0 ? choices[0] : null
                    };
                    yield return UpdateField(JsonUtility.ToJson(request));
                }
            }
            else if (field.type == "presentation" && field.slot == "portrait")
            {
                continue;
            }
            else if (field.type == "number" ||
                (field.type == "presentation" && field.slot == "scale"))
            {
                string raw = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
                if (field.type == "presentation")
                {
                    if (float.TryParse(
                        raw,
                        System.Globalization.NumberStyles.Float,
                        System.Globalization.CultureInfo.InvariantCulture,
                        out float number))
                    {
                        yield return UpdateField(JsonUtility.ToJson(
                            new FloatFieldRequestDto { field_id = field.id, value = number }));
                    }
                    else
                    {
                        errorMessage = field.label + " must be a valid number.";
                        yield break;
                    }
                }
                else if (int.TryParse(raw, out int number))
                {
                    yield return UpdateField(JsonUtility.ToJson(
                        new IntegerFieldRequestDto { field_id = field.id, value = number }));
                }
                else
                {
                    errorMessage = field.label + " must be a whole number.";
                    yield break;
                }
            }
            else
            {
                string raw = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
                var request = new StringFieldRequestDto
                {
                    field_id = field.id,
                    value = raw
                };
                yield return UpdateField(JsonUtility.ToJson(request));
            }
            if (!string.IsNullOrEmpty(errorMessage))
            {
                yield break;
            }
        }
    }

    private IEnumerator SaveStepAndExit(int stepIndex)
    {
        yield return SaveCurrentStepFields(stepIndex);
        if (string.IsNullOrEmpty(errorMessage))
        {
            screen = ClientScreen.Rulesets;
        }
    }

    private IEnumerator UpdateField(string json)
    {
        yield return SendRequest(
            "PUT",
            "/api/drafts/" + Uri.EscapeDataString(draftId),
            json,
            (status, response) =>
            {
                if (IsSuccess(status))
                {
                    ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
                }
                else
                {
                    SetError(response);
                }
            });
    }

    private IEnumerator RollField(string fieldId)
    {
        var request = new RollFieldRequestDto { field_id = fieldId };
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/roll",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }

                var updated = JsonUtility.FromJson<DraftResponseDto>(response);
                ApplyDraft(updated, true);
                if (serverFieldValues.TryGetValue(fieldId, out var fieldValue))
                {
                    textValues[fieldId] = fieldValue.number_value.ToString(
                        System.Globalization.CultureInfo.InvariantCulture);
                }
            });
    }

    private IEnumerator RollGroup(string groupId)
    {
        var request = new RollGroupRequestDto { group_id = groupId };
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/roll-group",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }

                var updated = JsonUtility.FromJson<DraftResponseDto>(response);
                ApplyDraft(updated, true);
                foreach (var fieldValue in serverFieldValues.Values)
                {
                    if (fieldValue.is_number &&
                        fieldValue.roll_count > 0 &&
                        IsInScoreGroup(groupId, fieldValue.field_id))
                    {
                        textValues[fieldValue.field_id] =
                            fieldValue.number_value.ToString(
                                System.Globalization.CultureInfo.InvariantCulture);
                    }
                }
            });
    }

    private bool IsInScoreGroup(string groupId, string fieldId)
    {
        foreach (var group in flow.creation_flow.score_groups
            ?? new CreationScoreGroupDto[0])
        {
            if (group.id != groupId)
            {
                continue;
            }
            foreach (var member in group.field_ids ?? new string[0])
            {
                if (member == fieldId)
                {
                    return true;
                }
            }
        }
        return false;
    }

    private static string JoinValues(int[] values)
    {
        if (values == null || values.Length == 0)
        {
            return "none";
        }
        return string.Join(", ", Array.ConvertAll(values, value => value.ToString()));
    }

    private static string FormatDroppedDice(int[] values)
    {
        return values == null || values.Length == 0
            ? ""
            : " (dropped " + JoinValues(values) + ")";
    }

    private IEnumerator LoadReview()
    {
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/review",
            "{}",
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                draft.review = JsonUtility.FromJson<ReviewDto>(response);
                screen = ClientScreen.Review;
            });
    }

    private void DrawReview()
    {
        GUILayout.Label("Character review", CreationUiStyles.Title);
        GUILayout.Label(characterName + " - " + selectedRuleset.name, CreationUiStyles.Body);
        if (draft.review != null)
        {
            foreach (var issue in draft.review.issues ?? new ValidationIssueDto[0])
            {
                GUILayout.Label(
                    issue.severity.ToUpperInvariant() + ": " + issue.message,
                    issue.severity == "error" ? ErrorStyle() : CreationUiStyles.Body);
            }
            if (draft.review.can_finalize &&
                CreationUiStyles.PrimaryButton(
                    CreationIcons.ActionContent(CreationIcons.Save, "Save character")))
            {
                StartCoroutine(FinalizeCharacter());
            }
            else if (!draft.review.can_finalize)
            {
                GUILayout.Label("Resolve blocking issues before saving.", CreationUiStyles.Body);
            }
        }
        if (CreationUiStyles.TertiaryButton("Return to creation"))
        {
            screen = ClientScreen.Editing;
        }
    }

    private IEnumerator FinalizeCharacter()
    {
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/finalize",
            "{}",
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                characterId = JsonUtility.FromJson<FinalizedCharacterDto>(response)
                    .character.id;
            });
        if (string.IsNullOrEmpty(characterId))
        {
            yield break;
        }
        yield return StartBoardSession();
    }

    private IEnumerator StartBoardSession()
    {
        yield return SendRequest(
            "POST",
            "/api/characters/" + Uri.EscapeDataString(characterId) + "/start",
            "{}",
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                var envelope = JsonUtility.FromJson<SessionEnvelopeDto>(response);
                activeTheme = envelope.theme;
                tacticalProjection?.Render(envelope);
                immersiveProjection?.Render(envelope);
                screen = ClientScreen.Board;
            });
    }

    private IEnumerator ChooseStartingWealth(string method)
    {
        var request = new StartingWealthRequestDto { method = method };
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/equipment/wealth",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
            });
    }

    private IEnumerator PurchaseEquipmentItem(string itemId)
    {
        var request = new PurchaseEquipmentRequestDto { item_id = itemId };
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/equipment/purchase",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
            });
    }

    private IEnumerator EquipEquipmentItem(string instanceId, string slot)
    {
        var request = new EquipItemRequestDto { instance_id = instanceId, slot = slot };
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/equipment/equip",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
            });
    }

    private IEnumerator UnequipEquipmentItem(string instanceId)
    {
        var request = new UnequipItemRequestDto { instance_id = instanceId };
        yield return SendRequest(
            "POST",
            "/api/drafts/" + Uri.EscapeDataString(draftId) + "/equipment/unequip",
            JsonUtility.ToJson(request),
            (status, response) =>
            {
                if (!IsSuccess(status))
                {
                    SetError(response);
                    return;
                }
                ApplyDraft(JsonUtility.FromJson<DraftResponseDto>(response), true);
            });
    }

    private void DrawBoardStatus()
    {
        if (themeLogo != null)
        {
            GUILayout.Label(themeLogo, GUILayout.Width(64), GUILayout.Height(64));
        }
        GUILayout.Label("Local solo session");
        GUILayout.Label("Character: " + characterName);
        if (GUILayout.Button("Back to rulesets"))
        {
            screen = ClientScreen.Rulesets;
        }
    }

    private IEnumerator SendRequest(
        string method,
        string path,
        string body,
        Action<long, string> completed)
    {
        if (requestInProgress)
        {
            yield break;
        }
        requestInProgress = true;
        errorMessage = "";
        string url = apiBaseUrl + path;
        using (var request = new UnityWebRequest(url, method))
        {
            request.downloadHandler = new DownloadHandlerBuffer();
            if (body != null)
            {
                request.uploadHandler = new UploadHandlerRaw(Encoding.UTF8.GetBytes(body));
                request.SetRequestHeader("Content-Type", "application/json");
            }
            yield return request.SendWebRequest();
            long status = request.responseCode;
            string response = request.downloadHandler.text;
            requestInProgress = false;
            completed(status, response);
        }
    }

    private bool IsSuccess(long status)
    {
        return status >= 200 && status < 300;
    }

    private void SetError(string response)
    {
        errorMessage = response;
        Debug.LogWarning("Character service request failed: " + response);
    }

    private void ApplyThemeStyles()
    {
        if (defaultSkin == null)
        {
            defaultSkin = GUI.skin;
            themedSkin = Instantiate(defaultSkin);
        }
        if (themedSkin == null)
        {
            themedSkin = Instantiate(defaultSkin);
        }
        GUI.skin = themedSkin;
        Font interfaceFont = screen == ClientScreen.Board && themeFont != null
            ? themeFont
            : defaultSkin.font;
        GUI.skin.font = interfaceFont;
        GUI.skin.label.font = interfaceFont;
        GUI.skin.button.font = interfaceFont;
        GUI.skin.textField.font = interfaceFont;
        GUI.skin.textArea.font = interfaceFont;
        GUI.backgroundColor = Color.white;
        GUI.contentColor = Color.white;
        if (activeTheme == null || activeTheme.tokens == null)
        {
            return;
        }

        if (ColorUtility.TryParseHtmlString(activeTheme.tokens.primary, out var primary))
        {
            GUI.backgroundColor = primary;
        }
        if (ColorUtility.TryParseHtmlString(activeTheme.tokens.text, out var text))
        {
            GUI.contentColor = text;
            GUI.skin.label.normal.textColor = text;
            ApplyTextColor(GUI.skin.button, text);
            ApplyTextColor(GUI.skin.toggle, text);
            ApplyTextColor(GUI.skin.textField, text);
            ApplyTextColor(GUI.skin.textArea, text);
        }
        if (ColorUtility.TryParseHtmlString(activeTheme.tokens.accent, out var accent))
        {
            GUI.skin.button.active.textColor = accent;
            GUI.skin.button.onActive.textColor = accent;
            GUI.skin.toggle.active.textColor = accent;
            GUI.skin.toggle.onActive.textColor = accent;
        }
        if (themePanel != null)
        {
            ApplyStyleTexture(GUI.skin.box, themePanel, themePanel, themePanel);
            ApplyStyleTexture(GUI.skin.window, themePanel, themePanel, themePanel);
            GUI.skin.box.border = new RectOffset(12, 12, 12, 12);
            GUI.skin.window.border = new RectOffset(12, 12, 12, 12);
        }
        if (themeControl != null)
        {
            ApplyStyleTexture(
                GUI.skin.button,
                themeControl,
                themeControlHover,
                themeControlActive);
            ApplyStyleTexture(
                GUI.skin.toggle,
                themeControl,
                themeControlHover,
                themeControlActive);
            GUI.skin.button.border = new RectOffset(8, 8, 8, 8);
            GUI.skin.toggle.border = new RectOffset(8, 8, 8, 8);
            GUI.skin.textField.border = new RectOffset(8, 8, 8, 8);
            GUI.skin.textArea.border = new RectOffset(8, 8, 8, 8);
            ApplyStyleTexture(
                GUI.skin.textField,
                themeControl,
                themeControlHover,
                themeControlActive);
            ApplyStyleTexture(
                GUI.skin.textArea,
                themeControl,
                themeControlHover,
                themeControlActive);
        }
    }

    private void LoadThemeAssets()
    {
        if (defaultSkin == null)
        {
            defaultSkin = GUI.skin;
        }
        string key = activeTheme?.tokens?.background ?? "";
        key += "|" + activeTheme?.tokens?.surface;
        key += "|" + activeTheme?.tokens?.primary;
        key += "|" + activeTheme?.tokens?.secondary;
        key += "|" + activeTheme?.tokens?.accent;
        key += "|" + activeTheme?.tokens?.text;
        foreach (var asset in activeTheme?.assets ?? new ThemeAssetDto[0])
        {
            key += "|" + asset.slot + ":" + asset.asset;
        }
        if (key == loadedThemeKey)
        {
            return;
        }
        loadedThemeKey = key;
        themeLogo = null;
        themeFont = null;
        themeBackground = null;
        themePanel = null;
        themeControl = null;
        themeControlHover = null;
        themeControlActive = null;
        themeMetalTrim = null;
        themeBoardFrame = null;
        themedSkin = Instantiate(defaultSkin);
        boardFrameStyle = null;
        foreach (var diagnostic in activeTheme?.diagnostics ?? new ThemeDiagnosticDto[0])
        {
            Debug.LogWarning(
                "Theme asset unavailable for slot '" + diagnostic.slot +
                "' (" + diagnostic.asset + "); using the default UI style.");
        }
        foreach (var asset in activeTheme?.assets ?? new ThemeAssetDto[0])
        {
            if (string.IsNullOrEmpty(asset.asset))
            {
                continue;
            }
            if (asset.slot == "logo")
            {
                themeLogo = Resources.Load<Texture2D>(ResourcePath(asset.asset));
            }
            else if (asset.slot == "display_font")
            {
                themeFont = Resources.Load<Font>(ResourcePath(asset.asset));
            }
            else if (asset.slot == "ui_background")
            {
                themeBackground = LoadThemeTexture(asset);
            }
            else if (asset.slot == "ui_panel")
            {
                themePanel = LoadThemeTexture(asset);
            }
            else if (asset.slot == "ui_control")
            {
                themeControl = LoadThemeTexture(asset);
            }
            else if (asset.slot == "ui_control_hover")
            {
                themeControlHover = LoadThemeTexture(asset);
            }
            else if (asset.slot == "ui_control_active")
            {
                themeControlActive = LoadThemeTexture(asset);
            }
            else if (asset.slot == "metal_trim")
            {
                themeMetalTrim = LoadThemeTexture(asset);
            }
            else if (asset.slot == "board_frame")
            {
                themeBoardFrame = LoadThemeTexture(asset);
            }
        }
    }

    private static string ResourcePath(string assetReference)
    {
        int revisionSeparator = assetReference.LastIndexOf('@');
        return revisionSeparator > 0
            ? assetReference.Substring(0, revisionSeparator)
            : assetReference;
    }

    private static Texture2D LoadThemeTexture(ThemeAssetDto asset)
    {
        var texture = Resources.Load<Texture2D>(ResourcePath(asset.asset));
        if (texture == null)
        {
            Debug.LogWarning(
                "Theme texture unavailable for slot '" + asset.slot +
                "' (" + asset.asset + "); using the default UI style.");
        }
        return texture;
    }

    private void DrawCreationSurfaces()
    {
        var screenRect = new Rect(0, 0, Screen.width, Screen.height);
        CreationUiStyles.DrawBackdrop(screenRect, themeBackground);

        float horizontalMargin = Mathf.Min(20f, Screen.width * 0.05f);
        float verticalMargin = Mathf.Min(16f, Screen.height * 0.05f);
        float frameWidth = Mathf.Min(
            1180f,
            Mathf.Max(0f, Screen.width - 2f * horizontalMargin));
        var contentRect = new Rect(
            (Screen.width - frameWidth) * 0.5f,
            verticalMargin,
            frameWidth,
            Mathf.Max(0f, Screen.height - 2f * verticalMargin));
        GUI.Box(contentRect, GUIContent.none, CreationUiStyles.Frame);
        if (themePanel != null)
        {
            Color previousColor = GUI.color;
            GUI.color = new Color(1f, 1f, 1f, 0.08f);
            DrawTiledTexture(contentRect, themePanel);
            GUI.color = previousColor;
        }
        if (themeMetalTrim != null && Screen.width >= UiLayout.SmMax)
        {
            DrawMetalBorder(contentRect);
        }
        float inset = Screen.width < UiLayout.SmMax ? 10f : 16f;
        var innerRect = new Rect(
            contentRect.x + inset,
            contentRect.y + inset,
            Mathf.Max(0f, contentRect.width - 2f * inset),
            Mathf.Max(0f, contentRect.height - 2f * inset));
        editingAreaHeight = innerRect.height;
        GUILayout.BeginArea(innerRect);
    }

    private void DrawBoardFrame()
    {
        if (themeBoardFrame == null)
        {
            GUILayout.BeginArea(new Rect(12, 12, 340, 150));
            return;
        }
        if (boardFrameStyle == null)
        {
            boardFrameStyle = CreateFrameStyle(themeBoardFrame);
        }
        float margin = Mathf.Min(24f, Screen.width * 0.05f);
        float boardWidth = Mathf.Max(0f, Screen.width - 2f * margin);
        float boardHeight = Mathf.Max(0f, Screen.height - 2f * margin);
        GUI.Box(
            new Rect(margin, margin, boardWidth, boardHeight),
            GUIContent.none,
            boardFrameStyle);
        GUILayout.BeginArea(
            new Rect(
                margin + 12f,
                margin + 12f,
                Mathf.Min(340f, Mathf.Max(0f, boardWidth - 24f)),
                Mathf.Min(126f, Mathf.Max(0f, boardHeight - 24f))));
    }

    private static void DrawTiledTexture(Rect rect, Texture2D texture)
    {
        GUI.BeginGroup(rect);
        GUI.DrawTextureWithTexCoords(
            new Rect(0, 0, rect.width, rect.height),
            texture,
            new Rect(
                0,
                0,
                rect.width / texture.width,
                rect.height / texture.height),
            true);
        GUI.EndGroup();
    }

    private void DrawMetalBorder(Rect rect)
    {
        const float trim = 5f;
        GUI.DrawTexture(
            new Rect(rect.x, rect.y, rect.width, trim),
            themeMetalTrim,
            ScaleMode.StretchToFill,
            true);
        GUI.DrawTexture(
            new Rect(rect.x, rect.yMax - trim, rect.width, trim),
            themeMetalTrim,
            ScaleMode.StretchToFill,
            true);
        GUI.DrawTexture(
            new Rect(rect.x, rect.y, trim, rect.height),
            themeMetalTrim,
            ScaleMode.StretchToFill,
            true);
        GUI.DrawTexture(
            new Rect(rect.xMax - trim, rect.y, trim, rect.height),
            themeMetalTrim,
            ScaleMode.StretchToFill,
            true);
    }

    private static GUIStyle CreateFrameStyle(Texture2D texture)
    {
        return new GUIStyle(GUI.skin.box)
        {
            normal = { background = texture },
            border = new RectOffset(24, 24, 24, 24),
            padding = new RectOffset(0, 0, 0, 0)
        };
    }

    private static void ApplyStyleTexture(
        GUIStyle style,
        Texture2D normal,
        Texture2D hover,
        Texture2D active)
    {
        var normalTexture = normal ?? style.normal.background;
        style.normal.background = normalTexture;
        style.hover.background = hover ?? normalTexture;
        style.active.background = active ?? normalTexture;
        style.focused.background = hover ?? normalTexture;
        style.onNormal.background = normalTexture;
        style.onHover.background = hover ?? normalTexture;
        style.onActive.background = active ?? normalTexture;
        style.onFocused.background = hover ?? normalTexture;
    }

    private static void ApplyTextColor(GUIStyle style, Color color)
    {
        style.normal.textColor = color;
        style.hover.textColor = color;
        style.active.textColor = color;
        style.focused.textColor = color;
        style.onNormal.textColor = color;
        style.onHover.textColor = color;
        style.onActive.textColor = color;
        style.onFocused.textColor = color;
    }

    private bool TryGetThemeColor(string token, out Color color)
    {
        color = Color.white;
        if (activeTheme == null || activeTheme.tokens == null)
        {
            return false;
        }
        string value = token == "background"
            ? activeTheme.tokens.background
            : activeTheme.tokens.surface;
        return ColorUtility.TryParseHtmlString(value, out color);
    }

    private Color ThemeColor(string token, Color fallback)
    {
        return TryGetThemeToken(token, out var color) ? color : fallback;
    }

    private bool TryGetThemeToken(string token, out Color color)
    {
        color = Color.white;
        if (activeTheme == null || activeTheme.tokens == null)
        {
            return false;
        }
        string value;
        switch (token)
        {
            case "accent":
                value = activeTheme.tokens.accent;
                break;
            case "text":
                value = activeTheme.tokens.text;
                break;
            case "surface":
                value = activeTheme.tokens.surface;
                break;
            default:
                value = activeTheme.tokens.background;
                break;
        }
        return ColorUtility.TryParseHtmlString(value, out color);
    }

    private void RestoreThemeColors()
    {
        GUI.backgroundColor = Color.white;
        GUI.contentColor = Color.white;
        if (defaultSkin != null)
        {
            GUI.skin = defaultSkin;
        }
    }

    private static GUIStyle ErrorStyle()
    {
        return new GUIStyle(GUI.skin.label)
        {
            normal = { textColor = new Color(1f, 0.55f, 0.4f) },
            wordWrap = true
        };
    }
}

public sealed class RuntimeClientBootstrap : MonoBehaviour
{
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
    private static void CreateRuntimeClient()
    {
        if (FindAnyObjectByType<CharacterCreationClient>() != null)
        {
            return;
        }
        var root = new GameObject("Universal RPG Client");
        var tacticalObject = new GameObject("Tactical Projection");
        var immersiveObject = new GameObject("Immersive Projection");
        tacticalObject.transform.SetParent(root.transform);
        immersiveObject.transform.SetParent(root.transform);
        var tactical = tacticalObject.AddComponent<TacticalProjection>();
        var immersive = immersiveObject.AddComponent<ImmersiveProjection>();
        root.AddComponent<CharacterCreationClient>().Configure(tactical, immersive);
    }
}
