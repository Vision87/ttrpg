using System;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Renders ordered creation-step progress using a compact mobile-first stepper.
/// </summary>
public sealed class StepSummaryHeader : MonoBehaviour
{
    [Serializable]
    public struct StepSummaryItem
    {
        public int Index;
        public string StepId;
        public string Title;
        public string Summary;
        public bool IsCurrent;
        public bool IsPast;
        public bool HasSelection;
    }

    private readonly List<StepSummaryItem> progressItems = new List<StepSummaryItem>();
    private Color themeAccent = new Color(0.84f, 0.68f, 0.40f);
    private Color themeText = Color.white;
    private Vector2 richScrollPosition;
    private GUIStyle richStepButtonStyle;
    private GUIStyle richStepButtonSource;

    public void UpdateProgress(List<StepSummaryItem> items, Color accentColor, Color textColor)
    {
        progressItems.Clear();
        if (items != null)
        {
            progressItems.AddRange(items);
        }
        if (accentColor != default)
        {
            themeAccent = accentColor;
        }
        if (textColor != default)
        {
            themeText = textColor;
        }
    }

    public void UpdateSteps(List<string> steps)
    {
        if (steps == null)
        {
            return;
        }
        progressItems.Clear();
        for (int i = 0; i < steps.Count; i++)
        {
            progressItems.Add(new StepSummaryItem
            {
                Index = i,
                StepId = "",
                Title = steps[i],
                Summary = "",
                IsCurrent = i == 0,
                IsPast = false,
                HasSelection = false
            });
        }
    }

    /// <summary>
    /// Draws progress. Returns clicked step index, or -1.
    /// </summary>
    public int DrawHeader(GUIStyle style = null)
    {
        if (progressItems.Count == 0)
        {
            return -1;
        }

        CreationIcons.EnsureLoaded();
        CreationUiStyles.Ensure();
        UiLayout.Density density = UiLayout.CurrentDensity;
        int clickedStep = -1;
        int currentIndex = progressItems.FindIndex(item => item.IsCurrent);
        int displayCurrent = currentIndex >= 0 ? currentIndex + 1 : 1;

        GUILayout.BeginVertical(GUI.skin.box);
        GUILayout.BeginHorizontal();
        GUILayout.Label("PROGRESS", CreationUiStyles.Caption);
        GUILayout.FlexibleSpace();
        GUILayout.Label(
            "Step " + displayCurrent + " of " + progressItems.Count,
            CreationUiStyles.Caption);
        GUILayout.EndHorizontal();

        GUILayout.Space(4);

        if (density.CompactProgress)
        {
            clickedStep = DrawCompactStepper(density);
        }
        else
        {
            clickedStep = DrawRichStepper(density);
        }

        GUILayout.EndVertical();
        GUILayout.Space(density.Spacing);
        return clickedStep;
    }

    private int DrawCompactStepper(UiLayout.Density density)
    {
        int clicked = -1;
        float buttonSize = Mathf.Max(48f, density.StepIconSize + 18f);
        const float spacing = 6f;
        float availableWidth = Mathf.Max(buttonSize, Screen.width - 64f);
        int columns = Mathf.Max(
            1,
            Mathf.FloorToInt((availableWidth + spacing) / (buttonSize + spacing)));
        GUILayout.BeginVertical();
        for (int i = 0; i < progressItems.Count; i++)
        {
            if (i % columns == 0)
            {
                GUILayout.BeginHorizontal();
            }
            var item = progressItems[i];
            Texture2D icon = CreationIcons.Get(
                CreationIcons.KeyForStep(item.StepId, item.Title));
            var content = new GUIContent(icon, item.Title);
            var prevBg = GUI.backgroundColor;
            if (item.IsCurrent)
            {
                GUI.backgroundColor = themeAccent;
            }
            else if (item.IsPast)
            {
                GUI.backgroundColor = new Color(0.25f, 0.35f, 0.28f);
            }
            else
            {
                GUI.backgroundColor = new Color(0.3f, 0.3f, 0.3f, 0.55f);
            }

            if (GUILayout.Button(
                content,
                CreationUiStyles.Icon,
                GUILayout.Width(buttonSize),
                GUILayout.Height(buttonSize)))
            {
                clicked = item.Index;
            }
            GUI.backgroundColor = prevBg;

            bool rowIsFull = (i + 1) % columns == 0;
            bool isLast = i == progressItems.Count - 1;
            if (!rowIsFull && !isLast)
            {
                GUILayout.Space(spacing);
            }
            if (rowIsFull || isLast)
            {
                GUILayout.FlexibleSpace();
                GUILayout.EndHorizontal();
            }
        }
        GUILayout.EndVertical();
        return clicked;
    }

    private int DrawRichStepper(UiLayout.Density density)
    {
        int clicked = -1;
        const float spacing = 6f;
        const float minimumCardWidth = 112f;
        const float maximumCardWidth = 180f;
        const float cardHeight = 136f;
        float availableWidth = Mathf.Max(0f, Screen.width - 144f);
        float fittedCardWidth = (availableWidth - (progressItems.Count - 1) * spacing) /
            progressItems.Count;
        float cardWidth = Mathf.Clamp(
            fittedCardWidth,
            minimumCardWidth,
            maximumCardWidth);
        richScrollPosition = GUILayout.BeginScrollView(
            richScrollPosition,
            false,
            false,
            GUI.skin.horizontalScrollbar,
            GUIStyle.none,
            GUILayout.Height(cardHeight + 20f));
        GUILayout.BeginHorizontal();
        for (int i = 0; i < progressItems.Count; i++)
        {
            int local = DrawRichCard(progressItems[i], density, cardWidth, cardHeight);
            if (local >= 0)
            {
                clicked = local;
            }
            if (i < progressItems.Count - 1)
            {
                GUILayout.Space(spacing);
            }
        }
        GUILayout.EndHorizontal();
        GUILayout.EndScrollView();
        return clicked;
    }

    private int DrawRichCard(
        StepSummaryItem item,
        UiLayout.Density density,
        float cardWidth,
        float cardHeight)
    {
        var prevBg = GUI.backgroundColor;
        var prevContent = GUI.contentColor;
        float contentWidth = Mathf.Max(24f, cardWidth - 16f);
        float iconSize = Mathf.Min(density.StepIconSize, contentWidth * 0.45f);
        GUIStyle stepButtonStyle = GetRichStepButtonStyle(density);

        GUI.backgroundColor = item.IsCurrent
            ? themeAccent
            : item.IsPast
                ? new Color(0.25f, 0.35f, 0.28f)
                : new Color(0.3f, 0.3f, 0.3f, 0.5f);
        GUILayout.BeginVertical(
            GUI.skin.box,
            GUILayout.Width(cardWidth),
            GUILayout.Height(cardHeight));
        DrawCardIconRow(item, contentWidth, iconSize);
        if (GUILayout.Button(
            new GUIContent((item.Index + 1) + ". " + item.Title, item.Summary),
            stepButtonStyle,
            GUILayout.Width(contentWidth),
            GUILayout.Height(42f)))
        {
            GUI.backgroundColor = prevBg;
            GUI.contentColor = prevContent;
            GUILayout.EndVertical();
            return item.Index;
        }

        GUI.contentColor = item.IsCurrent
            ? Color.white
            : item.IsPast
                ? CreationUiStyles.AccentColor
                : new Color(0.65f, 0.65f, 0.65f);
        GUILayout.Label(
            item.IsCurrent ? "NOW" : item.IsPast ? "DONE" : "Pending",
            CreationUiStyles.Caption,
            GUILayout.Width(contentWidth),
            GUILayout.Height(24f));
        GUILayout.EndVertical();

        GUI.backgroundColor = prevBg;
        GUI.contentColor = prevContent;
        return -1;
    }

    private GUIStyle GetRichStepButtonStyle(UiLayout.Density density)
    {
        GUIStyle source = CreationUiStyles.Secondary;
        if (richStepButtonStyle == null || richStepButtonSource != source)
        {
            richStepButtonSource = source;
            richStepButtonStyle = new GUIStyle(source)
            {
                fontSize = density.CaptionFont,
                alignment = TextAnchor.MiddleCenter,
                padding = new RectOffset(2, 2, 2, 2),
                wordWrap = true,
                clipping = TextClipping.Clip
            };
        }
        richStepButtonStyle.fontSize = density.CaptionFont;
        return richStepButtonStyle;
    }

    private static void DrawCardIconRow(StepSummaryItem item, float contentWidth, float iconSize)
    {
        Texture2D icon = CreationIcons.Get(
            CreationIcons.KeyForStep(item.StepId, item.Title));
        GUILayout.BeginHorizontal(GUILayout.Width(contentWidth));
        GUILayout.FlexibleSpace();
        GUILayout.Label(
            icon,
            GUILayout.Width(iconSize),
            GUILayout.Height(iconSize));
        GUILayout.FlexibleSpace();
        GUILayout.EndHorizontal();
    }
}
