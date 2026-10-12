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

    private ClientScreen screen = ClientScreen.Loading;
    private string apiBaseUrl;
    private string errorMessage = "";
    private string characterName = "";
    private string featSearchText = "";
    private string inspectedFeatId = "";
    private string draftId = "";
    private string characterId = "";
    private bool requestInProgress;
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
    private Vector2 featListScrollPosition;
    private Vector2 featDetailScrollPosition;

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
        StartCoroutine(LoadRulesets());
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
        if (screen != ClientScreen.Board)
        {
            DrawCreationSurfaces();
        }
        else
        {
            DrawBoardFrame();
            GUILayout.BeginArea(new Rect(12, 12, 340, 150));
        }
        scrollPosition = GUILayout.BeginScrollView(scrollPosition);
        if (themeLogo != null)
        {
            GUILayout.Label(themeLogo, GUILayout.Width(80), GUILayout.Height(80));
        }
        GUILayout.Label("Universal RPG Board", TitleStyle());
        if (!string.IsNullOrEmpty(errorMessage))
        {
            GUILayout.Label(errorMessage, ErrorStyle());
        }

        if (requestInProgress)
        {
            GUILayout.Label("Connecting to local game service...");
        }
        else
        {
            switch (screen)
            {
                case ClientScreen.Loading:
                    GUILayout.Label("Loading installed rulesets...");
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
                case ClientScreen.Editing:
                    DrawCreationStep();
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
        GUILayout.EndArea();
        RestoreThemeColors();
    }

    private void DrawRulesets()
    {
        GUILayout.Label("Choose a role-playing game");
        foreach (var ruleset in rulesets)
        {
            if (GUILayout.Button(ruleset.name + " (" + ruleset.id + ")"))
            {
                selectedRuleset = ruleset;
                activeTheme = ruleset.theme;
                errorMessage = "";
                StartCoroutine(LoadFlow(ruleset.id));
            }
        }
        GUILayout.Space(16);
        if (GUILayout.Button("Resume a saved draft"))
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
        GUILayout.Label("Create a " + selectedRuleset.name + " character");
        characterName = GUILayout.TextField(characterName);
        GUILayout.Space(8);
        GUILayout.Label("Choose a starting point");
        if (GUILayout.Button("Start from scratch"))
        {
            StartCoroutine(CreateDraft(""));
        }

        foreach (var template in flow.templates ?? new CharacterTemplateOptionDto[0])
        {
            if (GUILayout.Button("Use template: " + template.name))
            {
                StartCoroutine(CreateDraft(template.id));
            }
        }
        if (GUILayout.Button("Back to rulesets"))
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
        GUILayout.Label("Saved drafts");
        if (savedDrafts.Length == 0)
        {
            GUILayout.Label("No saved drafts yet.");
        }
        foreach (var saved in savedDrafts)
        {
            if (GUILayout.Button(saved.name + " - " + saved.ruleset_id))
            {
                StartCoroutine(ResumeDraft(saved.id, saved.ruleset_id));
            }
        }
        if (GUILayout.Button("Back"))
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
        }
        foreach (var fieldValue in response.field_values ?? new DraftFieldValueDto[0])
        {
            serverFieldValues[fieldValue.field_id] = fieldValue;
            if (preserveLocalValues)
            {
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
    }

    private void DrawCreationStep()
    {
        int stepIndex = FindStepIndex(draft.current_step);
        if (stepIndex < 0 || stepIndex >= flow.creation_flow.steps.Length)
        {
            GUILayout.Label("The saved draft references an unavailable creation step.");
            if (GUILayout.Button("Back to rulesets"))
            {
                screen = ClientScreen.Rulesets;
            }
            return;
        }

        var step = flow.creation_flow.steps[stepIndex];
        GUILayout.Label(step.label, TitleStyle());
        GUILayout.Label(
            "Step " + (stepIndex + 1) + " of " + flow.creation_flow.steps.Length);
        foreach (var field in step.fields)
        {
            DrawField(field);
        }
        DrawScoreGroups(step);
        if (GUILayout.Button(
            stepIndex + 1 < flow.creation_flow.steps.Length
                ? "Save and continue"
                : "Review character"))
        {
            StartCoroutine(SaveStepAndContinue(stepIndex));
        }
        if (GUILayout.Button("Save draft and exit"))
        {
            StartCoroutine(SaveStepAndExit(stepIndex));
        }
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
            GUILayout.Space(8);
            if (hasRolled && !group.allow_reroll)
            {
                continue;
            }
            string label = hasRolled
                ? "Reroll All Ability Scores"
                : "Roll All Ability Scores";
            if (GUILayout.Button(label))
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

    private void DrawField(CreationFieldDto field)
    {
        GUILayout.Space(6);
        GUILayout.Label(field.label + (field.required ? " *" : ""));
        if (field.type == "number" ||
            (field.type == "presentation" && field.slot == "scale"))
        {
            string value = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
            textValues[field.id] = GUILayout.TextField(value);
            GUILayout.Label("Allowed range: " + field.minimum + " - " + field.maximum);
            if (field.type == "number" && IsIndividuallyRollable(field))
            {
                GUILayout.Label(
                    "Roll " + field.roll.dice_count + "d" + field.roll.die_sides +
                    (field.roll.drop_lowest > 0
                        ? ", drop lowest " + field.roll.drop_lowest
                        : ""));
                var rollValue = serverFieldValues.ContainsKey(field.id)
                    ? serverFieldValues[field.id]
                    : null;
                bool hasRolled = rollValue != null && rollValue.roll_count > 0;
                string buttonLabel = rollValue != null && rollValue.roll_count > 0
                    ? "Reroll " + field.label
                    : "Roll " + field.label;
                if (!hasRolled || field.roll.allow_reroll)
                {
                    if (GUILayout.Button(buttonLabel))
                    {
                        StartCoroutine(RollField(field.id));
                    }
                }
                if (hasRolled)
                {
                    GUILayout.Label(
                        "Last roll: " + JoinValues(rollValue.roll_dice) +
                        FormatDroppedDice(rollValue.roll_dropped) +
                        " = " + rollValue.roll_score);
                }
            }
        }
        else if (field.type == "text" || field.type == "presentation")
        {
            string value = textValues.ContainsKey(field.id) ? textValues[field.id] : "";
            textValues[field.id] = GUILayout.TextField(value);
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
            if (HasNestedOptions(field))
            {
                DrawNestedChoices(field);
                return;
            }
            var selected = GetSelectedValues(field.id);
            foreach (var option in field.options ?? new CreationOptionDto[0])
            {
                bool isSelected = selected.Contains(option.id);
                bool next = field.multiple
                    ? GUILayout.Toggle(isSelected, option.label)
                    : GUILayout.Toggle(isSelected, option.label, "Button");
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
                else if (isSelected)
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
            new[] { "All feats", "Only eligible feats" }) == 1;
        GUILayout.Label(
            showOnlyEligibleFeats
                ? "Feats with unmet or unsupported prerequisites are hidden."
                : "Unavailable feats remain visible with their requirements.");
        GUILayout.Label("Search feats");
        featSearchText = GUILayout.TextField(featSearchText);

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

        bool sideBySide = Screen.width >= 980f;
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
        float listHeight = sideBySide ? 440f : Mathf.Min(300f, Screen.height * 0.4f);
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
            if (GUILayout.Toggle(isInspected, rowLabel, "Button") && !isInspected)
            {
                inspectedFeatId = option.id;
                featDetailScrollPosition = Vector2.zero;
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
            DrawInspectedFeat(visibleOptions, selected, true);
            GUILayout.EndVertical();
            GUILayout.EndHorizontal();
        }
        else
        {
            GUILayout.Space(8);
            GUILayout.BeginVertical(GUI.skin.box);
            DrawInspectedFeat(visibleOptions, selected, false);
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
        HashSet<string> selected,
        bool sideBySide)
    {
        var option = FindVisibleFeat(visibleOptions, inspectedFeatId);
        if (option == null)
        {
            GUILayout.Label("Select a feat to inspect its details.");
            return;
        }

        GUILayout.Label(option.label, TitleStyle());
        float detailHeight = sideBySide
            ? 340f
            : Mathf.Min(300f, Screen.height * 0.4f);
        featDetailScrollPosition = GUILayout.BeginScrollView(
            featDetailScrollPosition,
            GUILayout.Height(Mathf.Max(150f, detailHeight)));
        GUILayout.Label(string.IsNullOrWhiteSpace(option.description)
            ? "No concise description is available for this feat."
            : option.description,
            WrappedDetailStyle());

        GUILayout.Space(8);
        GUILayout.Label("Requirements");
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
        GUILayout.EndScrollView();

        bool isSelected = selected.Contains(option.id);
        bool hasFailures = HasFeatPrerequisiteFailures(option);
        bool previousEnabled = GUI.enabled;
        GUI.enabled = previousEnabled && (isSelected || !hasFailures);
        string actionLabel = isSelected ? "Remove feat" : "Add feat";
        if (GUILayout.Button(actionLabel))
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
        return new GUIStyle(GUI.skin.label)
        {
            wordWrap = true,
            stretchWidth = true
        };
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
            GUILayout.BeginHorizontal();
            GUILayout.Label(
                option.label + " — " + option.detail +
                (option.is_class_skill ? " · class skill" : " · cross-class"),
                GUILayout.MinWidth(320));
            bool previousEnabled = GUI.enabled;
            GUI.enabled = previousEnabled && current >= rankStep;
            if (GUILayout.Button("-", GUILayout.Width(32)))
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
            if (GUILayout.Button("+", GUILayout.Width(32)))
            {
                current += rankStep;
                skillRankValues[option.skill_id] = current;
                spentPoints += pointCost;
                remainingPoints = Mathf.Max(0f, remainingPoints - pointCost);
            }
            GUI.enabled = previousEnabled;
            GUILayout.Label("ranks (max " + option.maximum_ranks + ")");
            GUILayout.EndHorizontal();
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
            string selectionLabel = "";
            if (selected.Contains(parent.id))
            {
                selectionLabel = " (Standard)";
            }
            else
            {
                foreach (var child in children)
                {
                    if (selected.Contains(child.id))
                    {
                        selectionLabel = " (" + child.label + ")";
                        break;
                    }
                }
            }
            string key = field.id + ":" + parent.id;
            if (GUILayout.Button(
                parent.label + selectionLabel + (expanded ? " ▲" : " ▼")))
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
            if (!expanded)
            {
                continue;
            }

            DrawChoiceOption(field, parent, "  " + parent.label + " (Standard)");
            foreach (var child in children)
            {
                DrawChoiceOption(field, child, "  " + child.label);
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
        bool next = GUILayout.Toggle(isSelected, label, "Button");
        if (next)
        {
            if (!field.multiple)
            {
                selected.Clear();
            }
            selected.Add(option.id);
        }
        else if (isSelected)
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
        var step = flow.creation_flow.steps[stepIndex];
        foreach (var field in step.fields)
        {
            if (field.type == "choice")
            {
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
                    if (choices.Length == 0)
                    {
                        continue;
                    }
                    var request = new StringFieldRequestDto
                    {
                        field_id = field.id,
                        value = choices.Length > 0 ? choices[0] : null
                    };
                    yield return UpdateField(JsonUtility.ToJson(request));
                }
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
                }
                else if (int.TryParse(raw, out int number))
                {
                    yield return UpdateField(JsonUtility.ToJson(
                        new IntegerFieldRequestDto { field_id = field.id, value = number }));
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
                        draft = JsonUtility.FromJson<DraftResponseDto>(response);
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

    private IEnumerator SaveStepAndExit(int stepIndex)
    {
        yield return SaveStepAndContinue(stepIndex);
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
        GUILayout.Label("Character review", TitleStyle());
        GUILayout.Label(characterName + " - " + selectedRuleset.name);
        if (draft.review != null)
        {
            foreach (var issue in draft.review.issues ?? new ValidationIssueDto[0])
            {
                GUILayout.Label(
                    issue.severity.ToUpperInvariant() + ": " + issue.message,
                    issue.severity == "error" ? ErrorStyle() : GUI.skin.label);
            }
            if (draft.review.can_finalize && GUILayout.Button("Save character"))
            {
                StartCoroutine(FinalizeCharacter());
            }
            else if (!draft.review.can_finalize)
            {
                GUILayout.Label("Resolve blocking issues before saving.");
            }
        }
        if (GUILayout.Button("Return to creation"))
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

    private void DrawBoardStatus()
    {
        if (themeLogo != null)
        {
            GUILayout.Label(themeLogo, GUILayout.Width(64), GUILayout.Height(64));
        }
        GUILayout.Label("Local solo session", TitleStyle());
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
        GUI.skin.font = themeFont != null ? themeFont : defaultSkin.font;
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
        if (themeBackground != null)
        {
            DrawTiledTexture(screenRect, themeBackground);
        }
        else if (TryGetThemeColor("background", out var background))
        {
            GUI.color = background;
            GUI.DrawTexture(screenRect, Texture2D.whiteTexture);
            GUI.color = Color.white;
        }

        float horizontalMargin = Mathf.Min(20f, Screen.width * 0.05f);
        float verticalMargin = Mathf.Min(16f, Screen.height * 0.05f);
        var contentRect = new Rect(
            horizontalMargin,
            verticalMargin,
            Mathf.Max(0f, Screen.width - 2f * horizontalMargin),
            Mathf.Max(0f, Screen.height - 2f * verticalMargin));
        if (themePanel != null)
        {
            DrawTiledTexture(contentRect, themePanel);
        }
        if (themeMetalTrim != null)
        {
            DrawMetalBorder(contentRect);
        }
        GUILayout.BeginArea(contentRect);
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

    private void RestoreThemeColors()
    {
        GUI.backgroundColor = Color.white;
        GUI.contentColor = Color.white;
        if (defaultSkin != null)
        {
            GUI.skin = defaultSkin;
        }
    }

    private static GUIStyle TitleStyle()
    {
        return new GUIStyle(GUI.skin.label)
        {
            fontSize = 24,
            fontStyle = FontStyle.Bold
        };
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
