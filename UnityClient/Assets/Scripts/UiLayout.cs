using UnityEngine;

/// <summary>
/// Shared viewport breakpoints and density tokens for the character-creation IMGUI client.
/// </summary>
public static class UiLayout
{
    public enum Breakpoint
    {
        Xs = 0,
        Sm = 1,
        Md = 2,
        Lg = 3,
        Xl = 4
    }

    public const float XsMax = 480f;
    public const float SmMax = 680f;
    public const float MdMax = 980f;
    public const float LgMax = 1280f;

    public struct Density
    {
        public int TitleFont;
        public int SectionFont;
        public int BodyFont;
        public int LabelFont;
        public int CaptionFont;
        public int PrimaryFont;
        public int SecondaryFont;
        public int TertiaryFont;
        public float PrimaryHeight;
        public float SecondaryHeight;
        public float TertiaryHeight;
        public float IconButtonSize;
        public float StepIconSize;
        public float Spacing;
        public float LogoSize;
        public bool ShowLogo;
        public bool CompactProgress;
        public bool RichProgress;
        public bool SideBySide;
    }

    public static Breakpoint FromWidth(float width)
    {
        if (width < XsMax)
        {
            return Breakpoint.Xs;
        }
        if (width < SmMax)
        {
            return Breakpoint.Sm;
        }
        if (width < MdMax)
        {
            return Breakpoint.Md;
        }
        if (width < LgMax)
        {
            return Breakpoint.Lg;
        }
        return Breakpoint.Xl;
    }

    public static Breakpoint Current
    {
        get { return FromWidth(Screen.width); }
    }

    public static Density CurrentDensity
    {
        get { return DensityFor(Current); }
    }

    public static Density DensityFor(Breakpoint breakpoint)
    {
        switch (breakpoint)
        {
            case Breakpoint.Xs:
                return new Density
                {
                    TitleFont = 30,
                    SectionFont = 24,
                    BodyFont = 18,
                    LabelFont = 17,
                    CaptionFont = 15,
                    PrimaryFont = 20,
                    SecondaryFont = 18,
                    TertiaryFont = 17,
                    PrimaryHeight = 60f,
                    SecondaryHeight = 58f,
                    TertiaryHeight = 50f,
                    IconButtonSize = 48f,
                    StepIconSize = 30f,
                    Spacing = 8f,
                    LogoSize = 0f,
                    ShowLogo = false,
                    CompactProgress = true,
                    RichProgress = false,
                    SideBySide = false
                };
            case Breakpoint.Sm:
                return new Density
                {
                    TitleFont = 31,
                    SectionFont = 25,
                    BodyFont = 18,
                    LabelFont = 17,
                    CaptionFont = 15,
                    PrimaryFont = 20,
                    SecondaryFont = 18,
                    TertiaryFont = 16,
                    PrimaryHeight = 58f,
                    SecondaryHeight = 56f,
                    TertiaryHeight = 48f,
                    IconButtonSize = 46f,
                    StepIconSize = 28f,
                    Spacing = 8f,
                    LogoSize = 40f,
                    ShowLogo = false,
                    CompactProgress = true,
                    RichProgress = false,
                    SideBySide = false
                };
            case Breakpoint.Md:
                return new Density
                {
                    TitleFont = 32,
                    SectionFont = 26,
                    BodyFont = 19,
                    LabelFont = 18,
                    CaptionFont = 15,
                    PrimaryFont = 20,
                    SecondaryFont = 18,
                    TertiaryFont = 16,
                    PrimaryHeight = 54f,
                    SecondaryHeight = 48f,
                    TertiaryHeight = 44f,
                    IconButtonSize = 44f,
                    StepIconSize = 26f,
                    Spacing = 10f,
                    LogoSize = 56f,
                    ShowLogo = true,
                    CompactProgress = false,
                    RichProgress = true,
                    SideBySide = false
                };
            case Breakpoint.Lg:
                return new Density
                {
                    TitleFont = 34,
                    SectionFont = 27,
                    BodyFont = 19,
                    LabelFont = 18,
                    CaptionFont = 15,
                    PrimaryFont = 19,
                    SecondaryFont = 17,
                    TertiaryFont = 16,
                    PrimaryHeight = 52f,
                    SecondaryHeight = 46f,
                    TertiaryHeight = 42f,
                    IconButtonSize = 42f,
                    StepIconSize = 24f,
                    Spacing = 10f,
                    LogoSize = 64f,
                    ShowLogo = true,
                    CompactProgress = false,
                    RichProgress = true,
                    SideBySide = true
                };
            default:
                return new Density
                {
                    TitleFont = 36,
                    SectionFont = 28,
                    BodyFont = 19,
                    LabelFont = 18,
                    CaptionFont = 15,
                    PrimaryFont = 19,
                    SecondaryFont = 17,
                    TertiaryFont = 16,
                    PrimaryHeight = 52f,
                    SecondaryHeight = 46f,
                    TertiaryHeight = 42f,
                    IconButtonSize = 42f,
                    StepIconSize = 24f,
                    Spacing = 12f,
                    LogoSize = 72f,
                    ShowLogo = true,
                    CompactProgress = false,
                    RichProgress = true,
                    SideBySide = true
                };
        }
    }

    /// <summary>
    /// Approximate leftover height for nested editor lists after chrome.
    /// </summary>
    public static float BodyListHeight(float fraction, float minHeight, float maxHeight)
    {
        Density density = CurrentDensity;
        float chrome =
            (density.ShowLogo ? density.LogoSize + 24f : 12f) +
            (density.CompactProgress ? 72f : 110f) +
            density.PrimaryHeight +
            density.SecondaryHeight +
            96f;
        float available = Mathf.Max(minHeight, Screen.height - chrome);
        return Mathf.Clamp(available * fraction, minHeight, maxHeight);
    }
}
