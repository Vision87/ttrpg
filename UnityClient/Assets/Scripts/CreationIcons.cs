using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Loads local creation UI icon textures and maps package step ids to icon keys.
/// </summary>
public static class CreationIcons
{
    public const string Ability = "ability";
    public const string Race = "race";
    public const string Class = "class";
    public const string Skills = "skills";
    public const string Feats = "feats";
    public const string Equipment = "equipment";
    public const string Appearance = "appearance";
    public const string Continue = "continue";
    public const string Save = "save";
    public const string Dice = "dice";
    public const string Buy = "buy";
    public const string Equip = "equip";
    public const string Missing = "missing";

    private static readonly Dictionary<string, Texture2D> cache =
        new Dictionary<string, Texture2D>();
    private static Texture2D neutralFallback;
    private static bool loaded;

    public static void EnsureLoaded()
    {
        if (loaded)
        {
            return;
        }
        loaded = true;
        Load("ability");
        Load("race");
        Load("class");
        Load("skills");
        Load("feats");
        Load("equipment");
        Load("appearance");
        Load("continue");
        Load("save");
        Load(Dice);
        Load("buy");
        Load("equip");
        Load("missing");
    }

    public static Texture2D Get(string key)
    {
        EnsureLoaded();
        if (string.IsNullOrEmpty(key))
        {
            return Fallback();
        }
        if (cache.TryGetValue(key, out var texture) && texture != null)
        {
            return texture;
        }
        return Fallback();
    }

    public static bool Has(string key)
    {
        EnsureLoaded();
        return !string.IsNullOrEmpty(key) &&
            cache.TryGetValue(key, out var texture) &&
            texture != null;
    }

    public static string KeyForStep(string stepId, string stepLabel)
    {
        string id = (stepId ?? "").Trim().ToLowerInvariant();
        string label = (stepLabel ?? "").Trim().ToLowerInvariant();

        if (id == "ability-scores" || id == "characteristics" ||
            label.Contains("ability") || label.Contains("characteristic"))
        {
            return Ability;
        }
        if (id == "race" || id == "homeworld" ||
            label.Contains("race") || label.Contains("homeworld"))
        {
            return Race;
        }
        if (id == "class" || id == "career" ||
            label.Contains("class") || label.Contains("career"))
        {
            return Class;
        }
        if (id == "skills" || label.Contains("skill"))
        {
            return Skills;
        }
        if (id == "feats" || id == "talents" ||
            label.Contains("feat") || label.Contains("talent"))
        {
            return Feats;
        }
        if (id == "equipment" || label.Contains("equipment"))
        {
            return Equipment;
        }
        if (id == "appearance" || label.Contains("appearance"))
        {
            return Appearance;
        }
        return Missing;
    }

    public static GUIContent ActionContent(string key, string label)
    {
        Texture2D icon = Get(key);
        if (icon == Fallback() && key != Missing)
        {
            return new GUIContent(label);
        }
        return new GUIContent(" " + label, icon);
    }

    public static GUIContent IconContent(string key, string tooltip)
    {
        return new GUIContent(string.Empty, Get(key), tooltip);
    }

    private static void Load(string key)
    {
        var texture = Resources.Load<Texture2D>("ui.icon." + key);
        cache[key] = texture;
    }

    private static Texture2D Fallback()
    {
        if (neutralFallback != null)
        {
            return neutralFallback;
        }
        if (cache.TryGetValue(Missing, out var missing) && missing != null)
        {
            return missing;
        }
        neutralFallback = new Texture2D(32, 32, TextureFormat.RGBA32, false);
        var pixels = new Color32[32 * 32];
        for (int i = 0; i < pixels.Length; i++)
        {
            pixels[i] = new Color32(180, 180, 180, 220);
        }
        neutralFallback.SetPixels32(pixels);
        neutralFallback.Apply();
        neutralFallback.filterMode = FilterMode.Bilinear;
        return neutralFallback;
    }
}
