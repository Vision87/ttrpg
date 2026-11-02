using UnityEngine;

/// <summary>
/// Shared classic-fantasy IMGUI surfaces and readable, responsive typography roles.
/// </summary>
public static class CreationUiStyles
{
    private static GUIStyle primary;
    private static GUIStyle secondary;
    private static GUIStyle tertiary;
    private static GUIStyle icon;
    private static GUIStyle selection;
    private static GUIStyle input;
    private static GUIStyle title;
    private static GUIStyle section;
    private static GUIStyle body;
    private static GUIStyle fieldLabel;
    private static GUIStyle caption;
    private static GUIStyle status;
    private static GUIStyle frame;
    private static UiLayout.Breakpoint cachedBreakpoint;
    private static int skinVersion = -1;
    private static int refreshVersion;
    private static Font displayFont;
    private static Font readableFont;
    private static Color accentColor = new Color(0.82f, 0.62f, 0.30f);
    private static Color readableAccentColor = new Color(0.82f, 0.62f, 0.30f);
    private static Color textColor = new Color(0.94f, 0.89f, 0.78f);
    private static Color backgroundColor = new Color(0.08f, 0.065f, 0.055f);
    private static Color surfaceColor = new Color(0.15f, 0.12f, 0.095f);
    private static Texture2D panelTexture;
    private static Texture2D buttonTexture;
    private static Texture2D buttonHoverTexture;
    private static Texture2D buttonActiveTexture;
    private static Texture2D selectedTexture;
    private static Texture2D backgroundTexture;
    private static Texture2D frameTexture;
    private static Texture2D dividerTexture;
    private static Texture2D themedControlTexture;
    private static Texture2D themedControlHoverTexture;
    private static Texture2D themedControlActiveTexture;
    private static string paletteKey = "";

    public static GUIStyle Primary { get { Ensure(); return primary; } }
    public static GUIStyle Secondary { get { Ensure(); return secondary; } }
    public static GUIStyle Tertiary { get { Ensure(); return tertiary; } }
    public static GUIStyle Icon { get { Ensure(); return icon; } }
    public static GUIStyle Selection { get { Ensure(); return selection; } }
    public static GUIStyle Input { get { Ensure(); return input; } }
    public static GUIStyle Title { get { Ensure(); return title; } }
    public static GUIStyle Section { get { Ensure(); return section; } }
    public static GUIStyle Body { get { Ensure(); return body; } }
    public static GUIStyle FieldLabel { get { Ensure(); return fieldLabel; } }
    public static GUIStyle Caption { get { Ensure(); return caption; } }
    public static GUIStyle Status { get { Ensure(); return status; } }
    public static GUIStyle Frame { get { Ensure(); return frame; } }
    public static Color AccentColor { get { return readableAccentColor; } }

    public static void Invalidate()
    {
        refreshVersion++;
    }

    public static void Configure(
        Font themedDisplayFont,
        Font applicationReadableFont,
        Color accent,
        Color text,
        Color background,
        Color surface,
        Texture2D themedControl = null,
        Texture2D themedControlHover = null,
        Texture2D themedControlActive = null)
    {
        Font nextReadable = applicationReadableFont != null
            ? applicationReadableFont
            : Resources.GetBuiltinResource<Font>("Arial.ttf");
        if (nextReadable == null)
        {
            nextReadable = themedDisplayFont;
        }
        Font nextDisplay = themedDisplayFont != null
            ? themedDisplayFont
            : nextReadable;
        if (nextReadable == null)
        {
            Debug.LogError("No readable font is available for the character creation UI.");
            return;
        }
        string nextPaletteKey =
            nextDisplay.GetHashCode() + "|" +
            nextReadable.GetHashCode() + "|" +
            ColorUtility.ToHtmlStringRGBA(accent) + "|" +
            ColorUtility.ToHtmlStringRGBA(text) + "|" +
            ColorUtility.ToHtmlStringRGBA(background) + "|" +
            ColorUtility.ToHtmlStringRGBA(surface) + "|" +
            (themedControl != null ? themedControl.GetHashCode() : 0) + "|" +
            (themedControlHover != null ? themedControlHover.GetHashCode() : 0) + "|" +
            (themedControlActive != null ? themedControlActive.GetHashCode() : 0);
        if (nextPaletteKey == paletteKey)
        {
            return;
        }

        displayFont = nextDisplay;
        readableFont = nextReadable;
        accentColor = accent;
        backgroundColor = background;
        surfaceColor = surface;
        textColor = EnsureContrast(text, Color.white, background, surface, 4.5f);
        readableAccentColor = EnsureContrast(
            accent,
            textColor,
            background,
            surface,
            4.5f);
        themedControlTexture = themedControl;
        themedControlHoverTexture = themedControlHover;
        themedControlActiveTexture = themedControlActive;
        paletteKey = nextPaletteKey;
        ReleaseTextures();
        Invalidate();
    }

    public static void Ensure()
    {
        UiLayout.Breakpoint breakpoint = UiLayout.Current;
        int version = refreshVersion + (GUI.skin != null ? GUI.skin.GetHashCode() : 0);
        if (primary != null &&
            cachedBreakpoint == breakpoint &&
            skinVersion == version)
        {
            return;
        }

        cachedBreakpoint = breakpoint;
        skinVersion = version;
        UiLayout.Density density = UiLayout.DensityFor(breakpoint);
        GUIStyle baseButton = GUI.skin != null ? GUI.skin.button : new GUIStyle();
        GUIStyle baseLabel = GUI.skin != null ? GUI.skin.label : new GUIStyle();
        EnsureTextures();

        primary = CloneButton(baseButton, density.PrimaryFont, FontStyle.Bold, 10, 12);
        secondary = CloneButton(baseButton, density.SecondaryFont, FontStyle.Normal, 8, 10);
        tertiary = CloneButton(baseButton, density.TertiaryFont, FontStyle.Normal, 6, 8);
        icon = CloneButton(baseButton, density.TertiaryFont, FontStyle.Bold, 4, 4);
        Texture2D normalButton = themedControlTexture ?? buttonTexture;
        Texture2D hoverButton = themedControlHoverTexture ?? buttonHoverTexture;
        Texture2D activeButton = themedControlActiveTexture ?? buttonActiveTexture;
        SetBackgrounds(primary, normalButton, hoverButton, activeButton);
        SetBackgrounds(secondary, normalButton, hoverButton, activeButton);
        SetBackgrounds(tertiary, normalButton, hoverButton, activeButton);
        SetBackgrounds(icon, normalButton, hoverButton, activeButton);
        icon.alignment = TextAnchor.MiddleCenter;
        selection = CloneButton(baseButton, density.SecondaryFont, FontStyle.Normal, 8, 8);
        selection.alignment = TextAnchor.MiddleLeft;
        SetBackgrounds(selection, panelTexture, buttonHoverTexture, selectedTexture);
        selection.wordWrap = true;
        input = new GUIStyle(GUI.skin != null ? GUI.skin.textField : new GUIStyle())
        {
            fontSize = density.BodyFont,
            wordWrap = false,
            padding = new RectOffset(10, 10, 8, 8),
            font = readableFont
        };

        title = new GUIStyle(baseLabel)
        {
            fontSize = density.TitleFont,
            fontStyle = FontStyle.Bold,
            wordWrap = true,
            font = displayFont,
            normal = { textColor = readableAccentColor }
        };
        section = new GUIStyle(baseLabel)
        {
            fontSize = density.SectionFont,
            fontStyle = FontStyle.Bold,
            wordWrap = true,
            font = displayFont,
            normal = { textColor = textColor }
        };
        body = new GUIStyle(baseLabel)
        {
            fontSize = density.BodyFont,
            wordWrap = true,
            font = readableFont,
            normal = { textColor = textColor },
            padding = new RectOffset(2, 2, 3, 3)
        };
        fieldLabel = new GUIStyle(baseLabel)
        {
            fontSize = density.LabelFont,
            fontStyle = FontStyle.Bold,
            wordWrap = true,
            font = readableFont,
            normal = { textColor = readableAccentColor }
        };
        Color captionColor = EnsureContrast(
            Color.Lerp(textColor, surfaceColor, 0.22f),
            textColor,
            backgroundColor,
            surfaceColor,
            4.5f);
        caption = new GUIStyle(baseLabel)
        {
            fontSize = density.CaptionFont,
            fontStyle = FontStyle.Normal,
            wordWrap = true,
            font = readableFont,
            normal = { textColor = captionColor }
        };
        status = new GUIStyle(body)
        {
            fontStyle = FontStyle.Bold,
            normal = { textColor = textColor }
        };
        frame = new GUIStyle(GUI.skin != null ? GUI.skin.box : new GUIStyle())
        {
            normal = { background = frameTexture },
            border = new RectOffset(7, 7, 7, 7),
            padding = new RectOffset(14, 14, 14, 14),
            margin = new RectOffset(0, 0, 0, 0)
        };

        ApplyGlobalSkinRoles(density);
    }

    private static GUIStyle CloneButton(
        GUIStyle source,
        int fontSize,
        FontStyle fontStyle,
        int padX,
        int padY)
    {
        var style = new GUIStyle(source)
        {
            fontSize = fontSize,
            fontStyle = fontStyle,
            alignment = TextAnchor.MiddleCenter,
            wordWrap = true,
            clipping = TextClipping.Clip,
            padding = new RectOffset(padX, padX, padY, padY),
            font = readableFont,
            normal = { textColor = textColor }
        };
        style.hover.textColor = textColor;
        style.active.textColor = textColor;
        style.focused.textColor = textColor;
        style.onNormal.textColor = textColor;
        style.onHover.textColor = textColor;
        style.onActive.textColor = textColor;
        style.onFocused.textColor = textColor;
        return style;
    }

    private static void ApplyGlobalSkinRoles(UiLayout.Density density)
    {
        if (GUI.skin == null)
        {
            return;
        }

        GUI.skin.font = readableFont;
        GUI.skin.label.font = readableFont;
        GUI.skin.label.fontSize = density.BodyFont;
        GUI.skin.label.wordWrap = true;
        GUI.skin.label.normal.textColor = textColor;
        GUI.skin.box.font = readableFont;
        GUI.skin.box.fontSize = density.BodyFont;
        GUI.skin.box.wordWrap = true;
        GUI.skin.box.normal.textColor = textColor;
        GUI.skin.button.font = readableFont;
        GUI.skin.button.fontSize = density.SecondaryFont;
        GUI.skin.button.wordWrap = true;
        GUI.skin.button.padding = new RectOffset(10, 10, 8, 8);
        GUI.skin.button.normal.textColor = textColor;
        GUI.skin.button.hover.textColor = textColor;
        GUI.skin.button.active.textColor = textColor;
        GUI.skin.button.focused.textColor = textColor;
        GUI.skin.toggle.font = readableFont;
        GUI.skin.toggle.fontSize = density.SecondaryFont;
        GUI.skin.toggle.wordWrap = true;
        GUI.skin.toggle.normal.textColor = textColor;
        GUI.skin.toggle.hover.textColor = textColor;
        GUI.skin.toggle.active.textColor = textColor;
        GUI.skin.textField.font = readableFont;
        GUI.skin.textField.fontSize = density.BodyFont;
        GUI.skin.textArea.font = readableFont;
        GUI.skin.textArea.fontSize = density.BodyFont;
        SetBackgrounds(GUI.skin.box, panelTexture, panelTexture, panelTexture);
        GUI.skin.box.border = new RectOffset(8, 8, 8, 8);
        GUI.skin.box.padding = new RectOffset(12, 12, 10, 10);
        SetBackgrounds(
            GUI.skin.button,
            themedControlTexture ?? buttonTexture,
            themedControlHoverTexture ?? buttonHoverTexture,
            themedControlActiveTexture ?? buttonActiveTexture);
        SetBackgrounds(
            GUI.skin.toggle,
            themedControlTexture ?? panelTexture,
            themedControlHoverTexture ?? buttonHoverTexture,
            themedControlActiveTexture ?? selectedTexture);
        SetBackgrounds(GUI.skin.textField, panelTexture, buttonHoverTexture, buttonActiveTexture);
        SetBackgrounds(GUI.skin.textArea, panelTexture, buttonHoverTexture, buttonActiveTexture);
    }

    private static void EnsureTextures()
    {
        if (panelTexture != null)
        {
            return;
        }

        backgroundTexture = CreateTexture(4, 4, (x, y) =>
        {
            float shade = 0.92f + (y / 3f) * 0.08f;
            return Scale(backgroundColor, shade);
        });
        panelTexture = CreateFramedTexture(surfaceColor, accentColor, 0.0f);
        frameTexture = CreateFramedTexture(
            Color.Lerp(surfaceColor, backgroundColor, 0.42f),
            accentColor,
            0.28f);
        buttonTexture = CreateFramedTexture(
            Color.Lerp(surfaceColor, backgroundColor, 0.16f),
            Color.Lerp(accentColor, surfaceColor, 0.32f),
            0.0f);
        buttonHoverTexture = CreateFramedTexture(
            Color.Lerp(surfaceColor, accentColor, 0.2f),
            accentColor,
            0.1f);
        buttonActiveTexture = CreateFramedTexture(
            Color.Lerp(surfaceColor, accentColor, 0.34f),
            accentColor,
            0.18f);
        selectedTexture = CreateFramedTexture(
            Color.Lerp(surfaceColor, accentColor, 0.28f),
            accentColor,
            0.2f);
        dividerTexture = CreateTexture(64, 5, (x, y) =>
        {
            if (y == 2 || Mathf.Abs(x - 32) + Mathf.Abs(y - 2) == 2)
            {
                return new Color(accentColor.r, accentColor.g, accentColor.b, 0.78f);
            }
            return Color.clear;
        });
    }

    private static Texture2D CreateFramedTexture(
        Color fill,
        Color accent,
        float innerMix)
    {
        const int size = 48;
        return CreateTexture(size, size, (x, y) =>
        {
            int edge = Mathf.Min(Mathf.Min(x, y), Mathf.Min(size - 1 - x, size - 1 - y));
            float grain = ((x * 17 + y * 31 + x * y * 7) % 13) / 180f;
            Color baseColor = Scale(fill, 0.88f + (y / (float)(size - 1)) * 0.16f + grain);
            if (edge == 0)
            {
                return Color.Lerp(Color.black, accent, 0.58f);
            }
            if (edge == 1 || edge == size - 2)
            {
                return accent;
            }
            if (edge == 2)
            {
                return Color.Lerp(baseColor, accent, 0.35f);
            }
            if (edge >= 4 && edge <= 5 && innerMix > 0f)
            {
                return Color.Lerp(baseColor, accent, innerMix);
            }
            if (x == y || x + y == size - 1)
            {
                int cornerDistance = Mathf.Min(x, y, size - 1 - x, size - 1 - y);
                if (cornerDistance == 7 || cornerDistance == 8)
                {
                    return Color.Lerp(baseColor, accent, 0.72f);
                }
            }
            return baseColor;
        });
    }

    private static Texture2D CreateTexture(
        int width,
        int height,
        System.Func<int, int, Color> colorAt)
    {
        var texture = new Texture2D(width, height, TextureFormat.RGBA32, false)
        {
            name = "Generated classic fantasy UI surface",
            filterMode = FilterMode.Bilinear,
            wrapMode = TextureWrapMode.Clamp,
            hideFlags = HideFlags.HideAndDontSave
        };
        var pixels = new Color32[width * height];
        for (int y = 0; y < height; y++)
        {
            for (int x = 0; x < width; x++)
            {
                pixels[y * width + x] = colorAt(x, y);
            }
        }
        texture.SetPixels32(pixels);
        texture.Apply(false, true);
        return texture;
    }

    private static Color Scale(Color color, float scale)
    {
        return new Color(
            Mathf.Clamp01(color.r * scale),
            Mathf.Clamp01(color.g * scale),
            Mathf.Clamp01(color.b * scale),
            color.a);
    }

    private static Color EnsureContrast(
        Color candidate,
        Color fallback,
        Color background,
        Color surface,
        float minimumRatio)
    {
        if (MeetsContrast(candidate, background, surface, minimumRatio))
        {
            return candidate;
        }

        for (int step = 1; step <= 20; step++)
        {
            Color adjusted = Color.Lerp(candidate, fallback, step / 20f);
            if (MeetsContrast(adjusted, background, surface, minimumRatio))
            {
                return adjusted;
            }
        }
        return fallback;
    }

    private static bool MeetsContrast(
        Color foreground,
        Color background,
        Color surface,
        float minimumRatio)
    {
        return ContrastRatio(foreground, background) >= minimumRatio &&
            ContrastRatio(foreground, surface) >= minimumRatio;
    }

    private static float ContrastRatio(Color first, Color second)
    {
        float firstLuminance = RelativeLuminance(first);
        float secondLuminance = RelativeLuminance(second);
        float lighter = Mathf.Max(firstLuminance, secondLuminance);
        float darker = Mathf.Min(firstLuminance, secondLuminance);
        return (lighter + 0.05f) / (darker + 0.05f);
    }

    private static float RelativeLuminance(Color color)
    {
        return
            0.2126f * LinearChannel(color.r) +
            0.7152f * LinearChannel(color.g) +
            0.0722f * LinearChannel(color.b);
    }

    private static float LinearChannel(float channel)
    {
        return channel <= 0.04045f
            ? channel / 12.92f
            : Mathf.Pow((channel + 0.055f) / 1.055f, 2.4f);
    }

    private static void SetBackgrounds(
        GUIStyle style,
        Texture2D normal,
        Texture2D hover,
        Texture2D active)
    {
        style.normal.background = normal;
        style.hover.background = hover ?? normal;
        style.active.background = active ?? normal;
        style.focused.background = hover ?? normal;
        style.onNormal.background = selectedTexture ?? normal;
        style.onHover.background = hover ?? normal;
        style.onActive.background = active ?? normal;
        style.onFocused.background = hover ?? normal;
    }

    private static void ReleaseTextures()
    {
        Texture2D[] textures =
        {
            panelTexture,
            buttonTexture,
            buttonHoverTexture,
            buttonActiveTexture,
            selectedTexture,
            backgroundTexture,
            frameTexture,
            dividerTexture
        };
        foreach (var texture in textures)
        {
            if (texture != null)
            {
                Object.Destroy(texture);
            }
        }
        panelTexture = null;
        buttonTexture = null;
        buttonHoverTexture = null;
        buttonActiveTexture = null;
        selectedTexture = null;
        backgroundTexture = null;
        frameTexture = null;
        dividerTexture = null;
    }

    public static bool PrimaryButton(GUIContent content, params GUILayoutOption[] options)
    {
        UiLayout.Density density = UiLayout.CurrentDensity;
        return GUILayout.Button(
            content,
            Primary,
            Prefixed(options, GUILayout.Height(density.PrimaryHeight), GUILayout.ExpandWidth(true)));
    }

    public static bool PrimaryButton(string label, params GUILayoutOption[] options)
    {
        return PrimaryButton(new GUIContent(label), options);
    }

    public static bool SecondaryButton(string label, params GUILayoutOption[] options)
    {
        return SecondaryButton(new GUIContent(label), options);
    }

    public static bool SecondaryButton(GUIContent content, params GUILayoutOption[] options)
    {
        UiLayout.Density density = UiLayout.CurrentDensity;
        return GUILayout.Button(
            content,
            Secondary,
            Prefixed(options, GUILayout.Height(density.SecondaryHeight), GUILayout.ExpandWidth(true)));
    }

    public static bool TertiaryButton(GUIContent content, params GUILayoutOption[] options)
    {
        UiLayout.Density density = UiLayout.CurrentDensity;
        return GUILayout.Button(
            content,
            Tertiary,
            Prefixed(options, GUILayout.Height(density.TertiaryHeight)));
    }

    public static bool TertiaryButton(string label, params GUILayoutOption[] options)
    {
        return TertiaryButton(new GUIContent(label), options);
    }

    public static bool IconButton(GUIContent content, params GUILayoutOption[] options)
    {
        UiLayout.Density density = UiLayout.CurrentDensity;
        float size = density.IconButtonSize;
        return GUILayout.Button(
            content,
            Icon,
            Prefixed(options, GUILayout.Width(size), GUILayout.Height(size)));
    }

    public static void DrawBackdrop(Rect rect, Texture2D themeBackground)
    {
        EnsureTextures();
        GUI.color = Color.white;
        GUI.DrawTexture(rect, backgroundTexture, ScaleMode.StretchToFill);
        if (themeBackground != null)
        {
            GUI.color = new Color(1f, 1f, 1f, 0.14f);
            GUI.DrawTextureWithTexCoords(
                rect,
                themeBackground,
                new Rect(0f, 0f, rect.width / themeBackground.width, rect.height / themeBackground.height),
                true);
            GUI.color = Color.white;
        }
    }

    public static void DrawDivider(float spacing = 6f)
    {
        EnsureTextures();
        GUILayout.Space(spacing);
        Rect rect = GUILayoutUtility.GetRect(0f, 5f, GUILayout.ExpandWidth(true));
        Color previousColor = GUI.color;
        GUI.color = Color.white;
        GUI.DrawTexture(rect, dividerTexture, ScaleMode.StretchToFill, true);
        GUI.color = previousColor;
        GUILayout.Space(spacing);
    }

    private static GUILayoutOption[] Prefixed(
        GUILayoutOption[] options,
        params GUILayoutOption[] prefix)
    {
        if (options == null || options.Length == 0)
        {
            return prefix;
        }
        var merged = new GUILayoutOption[prefix.Length + options.Length];
        prefix.CopyTo(merged, 0);
        options.CopyTo(merged, prefix.Length);
        return merged;
    }
}
