using System.Collections.Generic;
using UnityEngine;

public enum AppearanceTintRegion
{
    None = 0,
    Skin = 1,
    Hair = 2,
    UpperClothing = 3,
    Pants = 4,
    Accent = 5,
    Iris = 6
}

public static class LowPolyCharacterBuilder
{
    public static Vector2 GetPaletteUv(int swatchIndex)
    {
        int x = swatchIndex % 16;
        int y = 15 - swatchIndex / 16;
        return new Vector2((x + 0.5f) / 16f, (y + 0.5f) / 16f);
    }

    public static Material CreatePaletteMaterial()
    {
        var shader = Resources.Load<Shader>("LowPolyPalette")
            ?? Shader.Find("UniversalRPG/LowPolyPalette")
            ?? Shader.Find("Diffuse");
        var mat = new Material(shader);
        var texture = Resources.Load<Texture2D>("palette_atlas");
        if (texture != null)
        {
            mat.mainTexture = texture;
        }
        return mat;
    }

    public static Mesh CreateFacetedBox(
        Vector3 center,
        Vector3 size,
        int swatchIndex,
        AppearanceTintRegion tintRegion = AppearanceTintRegion.None)
    {
        var mesh = new Mesh { name = "FacetedBox" };
        Vector2 uv = GetPaletteUv(swatchIndex);

        float hx = size.x * 0.5f, hy = size.y * 0.5f, hz = size.z * 0.5f;

        Vector3 p0 = center + new Vector3(-hx, -hy, -hz);
        Vector3 p1 = center + new Vector3(hx, -hy, -hz);
        Vector3 p2 = center + new Vector3(hx, hy, -hz);
        Vector3 p3 = center + new Vector3(-hx, hy, -hz);
        Vector3 p4 = center + new Vector3(-hx, -hy, hz);
        Vector3 p5 = center + new Vector3(hx, -hy, hz);
        Vector3 p6 = center + new Vector3(hx, hy, hz);
        Vector3 p7 = center + new Vector3(-hx, hy, hz);

        // 6 faces * 4 vertices = 24 vertices for hard-edge normals
        var vertices = new Vector3[]
        {
            // Front (Z-)
            p0, p3, p2, p1,
            // Back (Z+)
            p5, p6, p7, p4,
            // Top (Y+)
            p3, p7, p6, p2,
            // Bottom (Y-)
            p0, p1, p5, p4,
            // Left (X-)
            p4, p7, p3, p0,
            // Right (X+)
            p1, p2, p6, p5
        };

        var uvs = new Vector2[24];
        var tintUvs = new Vector2[24];
        for (int i = 0; i < 24; i++)
        {
            uvs[i] = uv;
            tintUvs[i] = new Vector2((float)tintRegion, 0f);
        }

        var triangles = new int[]
        {
            0, 1, 2, 0, 2, 3,
            4, 5, 6, 4, 6, 7,
            8, 9, 10, 8, 10, 11,
            12, 13, 14, 12, 14, 15,
            16, 17, 18, 16, 18, 19,
            20, 21, 22, 20, 22, 23
        };

        mesh.vertices = vertices;
        mesh.uv = uvs;
        mesh.uv2 = tintUvs;
        mesh.triangles = triangles;
        mesh.RecalculateNormals();
        mesh.RecalculateBounds();
        return mesh;
    }

    public static Mesh CombineMeshes(List<CombineInstance> combines)
    {
        var combined = new Mesh { name = "CombinedLowPoly" };
        combined.CombineMeshes(combines.ToArray(), true, true);
        combined.RecalculateNormals();
        combined.RecalculateBounds();
        return combined;
    }

    // Modular Slices
    public static Mesh CreateHeadSlice(int skinSwatch = 3)
    {
        var combines = new List<CombineInstance>();
        var neck = CreateFacetedBox(new Vector3(0, -0.19f, 0), new Vector3(0.12f, 0.18f, 0.12f), skinSwatch, AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = neck, transform = Matrix4x4.identity });

        // Head cube
        var head = CreateFacetedBox(new Vector3(0, 0, 0), new Vector3(0.26f, 0.28f, 0.26f), skinSwatch, AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = head, transform = Matrix4x4.identity });

        // Eyes, pupils, brows, nose, ears, and mouth
        var eyeL = CreateFacetedBox(new Vector3(-0.06f, 0.02f, 0.14f), new Vector3(0.045f, 0.035f, 0.02f), 112);
        combines.Add(new CombineInstance { mesh = eyeL, transform = Matrix4x4.identity });
        var eyeR = CreateFacetedBox(new Vector3(0.06f, 0.02f, 0.14f), new Vector3(0.045f, 0.035f, 0.02f), 112);
        combines.Add(new CombineInstance { mesh = eyeR, transform = Matrix4x4.identity });
        var irisL = CreateFacetedBox(
            new Vector3(-0.06f, 0.02f, 0.155f),
            new Vector3(0.026f, 0.028f, 0.012f),
            31,
            AppearanceTintRegion.Iris);
        combines.Add(new CombineInstance { mesh = irisL, transform = Matrix4x4.identity });
        var irisR = CreateFacetedBox(
            new Vector3(0.06f, 0.02f, 0.155f),
            new Vector3(0.026f, 0.028f, 0.012f),
            31,
            AppearanceTintRegion.Iris);
        combines.Add(new CombineInstance { mesh = irisR, transform = Matrix4x4.identity });
        var pupilL = CreateFacetedBox(new Vector3(-0.06f, 0.02f, 0.162f), new Vector3(0.012f, 0.02f, 0.008f), 120);
        combines.Add(new CombineInstance { mesh = pupilL, transform = Matrix4x4.identity });
        var pupilR = CreateFacetedBox(new Vector3(0.06f, 0.02f, 0.162f), new Vector3(0.012f, 0.02f, 0.008f), 120);
        combines.Add(new CombineInstance { mesh = pupilR, transform = Matrix4x4.identity });
        var browL = CreateFacetedBox(new Vector3(-0.06f, 0.06f, 0.14f), new Vector3(0.055f, 0.018f, 0.025f), 22, AppearanceTintRegion.Hair);
        combines.Add(new CombineInstance { mesh = browL, transform = Matrix4x4.identity });
        var browR = CreateFacetedBox(new Vector3(0.06f, 0.06f, 0.14f), new Vector3(0.055f, 0.018f, 0.025f), 22, AppearanceTintRegion.Hair);
        combines.Add(new CombineInstance { mesh = browR, transform = Matrix4x4.identity });
        var nose = CreateFacetedBox(new Vector3(0, -0.02f, 0.145f), new Vector3(0.04f, 0.06f, 0.04f), skinSwatch, AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = nose, transform = Matrix4x4.identity });
        var earL = CreateFacetedBox(new Vector3(-0.145f, 0, 0), new Vector3(0.05f, 0.09f, 0.09f), skinSwatch, AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = earL, transform = Matrix4x4.identity });
        var earR = CreateFacetedBox(new Vector3(0.145f, 0, 0), new Vector3(0.05f, 0.09f, 0.09f), skinSwatch, AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = earR, transform = Matrix4x4.identity });
        var mouth = CreateFacetedBox(new Vector3(0, -0.085f, 0.14f), new Vector3(0.07f, 0.018f, 0.02f), 120);
        combines.Add(new CombineInstance { mesh = mouth, transform = Matrix4x4.identity });

        return CombineMeshes(combines);
    }

    public static Mesh CreateHairSlice(string style, int hairSwatch = 22)
    {
        var combines = new List<CombineInstance>();

        if (style == "beard_braided")
        {
            // Thick braided beard hanging down from chin
            var beardTop = CreateFacetedBox(new Vector3(0, -0.1f, 0.11f), new Vector3(0.24f, 0.12f, 0.14f), hairSwatch, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = beardTop, transform = Matrix4x4.identity });
            var beardMid = CreateFacetedBox(new Vector3(0, -0.22f, 0.09f), new Vector3(0.2f, 0.16f, 0.12f), hairSwatch, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = beardMid, transform = Matrix4x4.identity });
            var beardBraid = CreateFacetedBox(new Vector3(0, -0.34f, 0.07f), new Vector3(0.12f, 0.14f, 0.1f), hairSwatch, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = beardBraid, transform = Matrix4x4.identity });
            // Braid golden ring (54)
            var ring = CreateFacetedBox(new Vector3(0, -0.28f, 0.08f), new Vector3(0.14f, 0.04f, 0.11f), 54);
            combines.Add(new CombineInstance { mesh = ring, transform = Matrix4x4.identity });
        }
        else if (style == "hair_long_elven")
        {
            // Sleek elven hair cap
            var top = CreateFacetedBox(new Vector3(0, 0.12f, -0.02f), new Vector3(0.28f, 0.08f, 0.28f), 17, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = top, transform = Matrix4x4.identity });
            var back = CreateFacetedBox(new Vector3(0, -0.08f, -0.14f), new Vector3(0.26f, 0.32f, 0.06f), 17, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = back, transform = Matrix4x4.identity });
            // Left & Right strands
            var strandL = CreateFacetedBox(new Vector3(-0.14f, -0.08f, 0.02f), new Vector3(0.05f, 0.3f, 0.14f), 17, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = strandL, transform = Matrix4x4.identity });
            var strandR = CreateFacetedBox(new Vector3(0.14f, -0.08f, 0.02f), new Vector3(0.05f, 0.3f, 0.14f), 17, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = strandR, transform = Matrix4x4.identity });
        }
        else
        {
            // Short hair cap
            var top = CreateFacetedBox(new Vector3(0, 0.11f, -0.02f), new Vector3(0.28f, 0.09f, 0.28f), hairSwatch, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = top, transform = Matrix4x4.identity });
            var back = CreateFacetedBox(new Vector3(0, 0.02f, -0.13f), new Vector3(0.27f, 0.16f, 0.05f), hairSwatch, AppearanceTintRegion.Hair);
            combines.Add(new CombineInstance { mesh = back, transform = Matrix4x4.identity });
        }

        return CombineMeshes(combines);
    }

    public static Mesh CreateTorsoSlice(string style)
    {
        var combines = new List<CombineInstance>();

        if (style == "armor_chainmail_torso")
        {
            // Mail shirt (Iron: 50)
            var chest = CreateFacetedBox(Vector3.zero, new Vector3(0.38f, 0.44f, 0.24f), 50);
            combines.Add(new CombineInstance { mesh = chest, transform = Matrix4x4.identity });
            // Iron Pauldrons (Bright steel: 49)
            var pauldronL = CreateFacetedBox(new Vector3(-0.23f, 0.18f, 0), new Vector3(0.14f, 0.1f, 0.2f), 49);
            combines.Add(new CombineInstance { mesh = pauldronL, transform = Matrix4x4.identity });
            var pauldronR = CreateFacetedBox(new Vector3(0.23f, 0.18f, 0), new Vector3(0.14f, 0.1f, 0.2f), 49);
            combines.Add(new CombineInstance { mesh = pauldronR, transform = Matrix4x4.identity });
            // Leather Belt (35) with Brass Buckle (56)
            var belt = CreateFacetedBox(new Vector3(0, -0.16f, 0), new Vector3(0.4f, 0.08f, 0.25f), 35, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = belt, transform = Matrix4x4.identity });
            var buckle = CreateFacetedBox(new Vector3(0, -0.16f, 0.13f), new Vector3(0.1f, 0.08f, 0.02f), 56, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = buckle, transform = Matrix4x4.identity });
        }
        else if (style == "armor_leather_torso")
        {
            // Leather Jerkin (Worn leather: 34)
            var jerkin = CreateFacetedBox(Vector3.zero, new Vector3(0.37f, 0.42f, 0.23f), 34, AppearanceTintRegion.UpperClothing);
            combines.Add(new CombineInstance { mesh = jerkin, transform = Matrix4x4.identity });
            // Dark straps across chest (36)
            var strap = CreateFacetedBox(new Vector3(0, 0.05f, 0.12f), new Vector3(0.32f, 0.06f, 0.02f), 36, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = strap, transform = Matrix4x4.identity });
            // Leather belt
            var belt = CreateFacetedBox(new Vector3(0, -0.16f, 0), new Vector3(0.39f, 0.07f, 0.24f), 36, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = belt, transform = Matrix4x4.identity });
        }
        else if (style == "armor_robes_torso")
        {
            // Archmage purple tunic (71)
            var robe = CreateFacetedBox(Vector3.zero, new Vector3(0.38f, 0.46f, 0.24f), 71, AppearanceTintRegion.UpperClothing);
            combines.Add(new CombineInstance { mesh = robe, transform = Matrix4x4.identity });
            // Gold trim collar (54)
            var trim = CreateFacetedBox(new Vector3(0, 0.18f, 0.08f), new Vector3(0.24f, 0.08f, 0.12f), 54, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = trim, transform = Matrix4x4.identity });
        }
        else
        {
            // Default cloth tunic (Grey/Cream linen: 121)
            var tunic = CreateFacetedBox(Vector3.zero, new Vector3(0.36f, 0.42f, 0.22f), 121, AppearanceTintRegion.UpperClothing);
            combines.Add(new CombineInstance { mesh = tunic, transform = Matrix4x4.identity });
            // Simple string belt (35)
            var belt = CreateFacetedBox(new Vector3(0, -0.16f, 0), new Vector3(0.37f, 0.05f, 0.23f), 35, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = belt, transform = Matrix4x4.identity });
        }

        return CombineMeshes(combines);
    }

    public static Mesh CreateLegsSlice(string style)
    {
        var combines = new List<CombineInstance>();

        if (style == "armor_chainmail_legs")
        {
            // Steel chausses from thigh to ankle
            var thighL = CreateFacetedBox(new Vector3(-0.11f, -0.18f, 0), new Vector3(0.15f, 0.44f, 0.16f), 50);
            combines.Add(new CombineInstance { mesh = thighL, transform = Matrix4x4.identity });
            var thighR = CreateFacetedBox(new Vector3(0.11f, -0.18f, 0), new Vector3(0.15f, 0.44f, 0.16f), 50);
            combines.Add(new CombineInstance { mesh = thighR, transform = Matrix4x4.identity });
            var shinL = CreateFacetedBox(new Vector3(-0.11f, -0.57f, 0), new Vector3(0.13f, 0.4f, 0.14f), 50);
            combines.Add(new CombineInstance { mesh = shinL, transform = Matrix4x4.identity });
            var shinR = CreateFacetedBox(new Vector3(0.11f, -0.57f, 0), new Vector3(0.13f, 0.4f, 0.14f), 50);
            combines.Add(new CombineInstance { mesh = shinR, transform = Matrix4x4.identity });
            // Knee guards (Bright steel: 49)
            var kneeL = CreateFacetedBox(new Vector3(-0.11f, -0.38f, 0.09f), new Vector3(0.12f, 0.1f, 0.04f), 49);
            combines.Add(new CombineInstance { mesh = kneeL, transform = Matrix4x4.identity });
            var kneeR = CreateFacetedBox(new Vector3(0.11f, -0.38f, 0.09f), new Vector3(0.12f, 0.1f, 0.04f), 49);
            combines.Add(new CombineInstance { mesh = kneeR, transform = Matrix4x4.identity });
        }
        else
        {
            // Peasant trousers from hips to ankles
            var thighL = CreateFacetedBox(new Vector3(-0.11f, -0.18f, 0), new Vector3(0.14f, 0.46f, 0.15f), 116, AppearanceTintRegion.Pants);
            combines.Add(new CombineInstance { mesh = thighL, transform = Matrix4x4.identity });
            var thighR = CreateFacetedBox(new Vector3(0.11f, -0.18f, 0), new Vector3(0.14f, 0.46f, 0.15f), 116, AppearanceTintRegion.Pants);
            combines.Add(new CombineInstance { mesh = thighR, transform = Matrix4x4.identity });
            var shinL = CreateFacetedBox(new Vector3(-0.11f, -0.57f, 0), new Vector3(0.13f, 0.4f, 0.14f), 116, AppearanceTintRegion.Pants);
            combines.Add(new CombineInstance { mesh = shinL, transform = Matrix4x4.identity });
            var shinR = CreateFacetedBox(new Vector3(0.11f, -0.57f, 0), new Vector3(0.13f, 0.4f, 0.14f), 116, AppearanceTintRegion.Pants);
            combines.Add(new CombineInstance { mesh = shinR, transform = Matrix4x4.identity });
            var cuffL = CreateFacetedBox(new Vector3(-0.11f, -0.72f, 0.01f), new Vector3(0.14f, 0.045f, 0.15f), 35, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = cuffL, transform = Matrix4x4.identity });
            var cuffR = CreateFacetedBox(new Vector3(0.11f, -0.72f, 0.01f), new Vector3(0.14f, 0.045f, 0.15f), 35, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = cuffR, transform = Matrix4x4.identity });
        }

        return CombineMeshes(combines);
    }

    public static Mesh CreateFeetSlice()
    {
        var combines = new List<CombineInstance>();
        for (int side = -1; side <= 1; side += 2)
        {
            float x = side * 0.11f;
            var sole = CreateFacetedBox(new Vector3(x, 0.018f, 0.07f), new Vector3(0.17f, 0.036f, 0.27f), 36, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = sole, transform = Matrix4x4.identity });
            var boot = CreateFacetedBox(new Vector3(x, 0.12f, -0.025f), new Vector3(0.13f, 0.17f, 0.15f), 38, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = boot, transform = Matrix4x4.identity });
            var toe = CreateFacetedBox(new Vector3(x, 0.075f, 0.085f), new Vector3(0.15f, 0.09f, 0.22f), 38, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = toe, transform = Matrix4x4.identity });
            var toeCap = CreateFacetedBox(new Vector3(x, 0.085f, 0.18f), new Vector3(0.12f, 0.055f, 0.06f), 35, AppearanceTintRegion.Accent);
            combines.Add(new CombineInstance { mesh = toeCap, transform = Matrix4x4.identity });
        }
        return CombineMeshes(combines);
    }

    public static Mesh CreateArmsAndHandsSlice(int skinSwatch = 3)
    {
        var combines = new List<CombineInstance>();
        // Left arm
        var upperArmL = CreateFacetedBox(new Vector3(-0.25f, 0.1f, 0), new Vector3(0.12f, 0.22f, 0.12f), 121, AppearanceTintRegion.UpperClothing);
        combines.Add(new CombineInstance { mesh = upperArmL, transform = Matrix4x4.identity });
        var lowerArmL = CreateFacetedBox(new Vector3(-0.25f, -0.1f, 0), new Vector3(0.1f, 0.2f, 0.1f), skinSwatch, AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = lowerArmL, transform = Matrix4x4.identity });
        AddHandDetails(combines, -0.25f, -1f, skinSwatch);

        // Right arm
        var upperArmR = CreateFacetedBox(new Vector3(0.25f, 0.1f, 0), new Vector3(0.12f, 0.22f, 0.12f), 121, AppearanceTintRegion.UpperClothing);
        combines.Add(new CombineInstance { mesh = upperArmR, transform = Matrix4x4.identity });
        var lowerArmR = CreateFacetedBox(new Vector3(0.25f, -0.1f, 0), new Vector3(0.1f, 0.2f, 0.1f), skinSwatch, AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = lowerArmR, transform = Matrix4x4.identity });
        AddHandDetails(combines, 0.25f, 1f, skinSwatch);

        return CombineMeshes(combines);
    }

    private static void AddHandDetails(
        List<CombineInstance> combines,
        float centerX,
        float thumbDirection,
        int skinSwatch)
    {
        var palm = CreateFacetedBox(
            new Vector3(centerX, -0.27f, 0.015f),
            new Vector3(0.1f, 0.11f, 0.1f),
            skinSwatch,
            AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = palm, transform = Matrix4x4.identity });

        for (int finger = 0; finger < 4; finger++)
        {
            float x = centerX + (finger - 1.5f) * 0.021f;
            var fingerMesh = CreateFacetedBox(
                new Vector3(x, -0.32f, 0.07f),
                new Vector3(0.022f, 0.026f, 0.06f),
                skinSwatch,
                AppearanceTintRegion.Skin);
            combines.Add(new CombineInstance { mesh = fingerMesh, transform = Matrix4x4.identity });
        }

        var thumb = CreateFacetedBox(
            new Vector3(centerX + thumbDirection * 0.052f, -0.31f, 0.065f),
            new Vector3(0.045f, 0.03f, 0.045f),
            skinSwatch,
            AppearanceTintRegion.Skin);
        combines.Add(new CombineInstance { mesh = thumb, transform = Matrix4x4.identity });
    }

    // Weapons & Props
    public static GameObject CreateSwordProp(Material material)
    {
        var root = new GameObject("wpn_sword");
        var combines = new List<CombineInstance>();

        // Blade (Iron: 49)
        var blade = CreateFacetedBox(new Vector3(0, 0.5f, 0), new Vector3(0.06f, 0.7f, 0.02f), 49);
        combines.Add(new CombineInstance { mesh = blade, transform = Matrix4x4.identity });

        // Guard (Old Gold / Brass: 55)
        var guard = CreateFacetedBox(new Vector3(0, 0.13f, 0), new Vector3(0.24f, 0.04f, 0.05f), 55);
        combines.Add(new CombineInstance { mesh = guard, transform = Matrix4x4.identity });

        // Grip (Leather: 35)
        var grip = CreateFacetedBox(Vector3.zero, new Vector3(0.04f, 0.2f, 0.04f), 35);
        combines.Add(new CombineInstance { mesh = grip, transform = Matrix4x4.identity });

        // Pommel (Gold: 54)
        var pommel = CreateFacetedBox(new Vector3(0, -0.11f, 0), new Vector3(0.06f, 0.05f, 0.05f), 54);
        combines.Add(new CombineInstance { mesh = pommel, transform = Matrix4x4.identity });

        var mf = root.AddComponent<MeshFilter>();
        mf.sharedMesh = CombineMeshes(combines);
        var mr = root.AddComponent<MeshRenderer>();
        mr.sharedMaterial = material;
        return root;
    }

    public static GameObject CreateGreataxeProp(Material material)
    {
        var root = new GameObject("wpn_greataxe");
        var combines = new List<CombineInstance>();

        // Shaft (Oak: 130)
        var shaft = CreateFacetedBox(new Vector3(0, 0.3f, 0), new Vector3(0.05f, 1.1f, 0.05f), 130);
        combines.Add(new CombineInstance { mesh = shaft, transform = Matrix4x4.identity });
        var grip = CreateFacetedBox(new Vector3(0, -0.05f, 0), new Vector3(0.07f, 0.2f, 0.07f), 35);
        combines.Add(new CombineInstance { mesh = grip, transform = Matrix4x4.identity });

        // Left Axe Blade (Dark Iron: 52)
        var bladeL = CreateFacetedBox(new Vector3(-0.18f, 0.72f, 0), new Vector3(0.26f, 0.35f, 0.03f), 52);
        combines.Add(new CombineInstance { mesh = bladeL, transform = Matrix4x4.identity });

        // Right Axe Blade (Dark Iron: 52)
        var bladeR = CreateFacetedBox(new Vector3(0.18f, 0.72f, 0), new Vector3(0.26f, 0.35f, 0.03f), 52);
        combines.Add(new CombineInstance { mesh = bladeR, transform = Matrix4x4.identity });

        // Center Axe Collar (Steel: 50)
        var collar = CreateFacetedBox(new Vector3(0, 0.72f, 0), new Vector3(0.09f, 0.12f, 0.09f), 50);
        combines.Add(new CombineInstance { mesh = collar, transform = Matrix4x4.identity });

        var mf = root.AddComponent<MeshFilter>();
        mf.sharedMesh = CombineMeshes(combines);
        var mr = root.AddComponent<MeshRenderer>();
        mr.sharedMaterial = material;
        return root;
    }

    public static GameObject CreateShieldProp(Material material)
    {
        var root = new GameObject("shield_round");
        var combines = new List<CombineInstance>();

        // Wooden body (Shield wood: 135)
        var body = CreateFacetedBox(Vector3.zero, new Vector3(0.48f, 0.48f, 0.04f), 135);
        combines.Add(new CombineInstance { mesh = body, transform = Matrix4x4.identity });

        // Iron rim (Steel: 50)
        var rimT = CreateFacetedBox(new Vector3(0, 0.23f, 0.01f), new Vector3(0.5f, 0.05f, 0.05f), 50);
        combines.Add(new CombineInstance { mesh = rimT, transform = Matrix4x4.identity });
        var rimB = CreateFacetedBox(new Vector3(0, -0.23f, 0.01f), new Vector3(0.5f, 0.05f, 0.05f), 50);
        combines.Add(new CombineInstance { mesh = rimB, transform = Matrix4x4.identity });
        var rimL = CreateFacetedBox(new Vector3(-0.23f, 0, 0.01f), new Vector3(0.05f, 0.45f, 0.05f), 50);
        combines.Add(new CombineInstance { mesh = rimL, transform = Matrix4x4.identity });
        var rimR = CreateFacetedBox(new Vector3(0.23f, 0, 0.01f), new Vector3(0.05f, 0.45f, 0.05f), 50);
        combines.Add(new CombineInstance { mesh = rimR, transform = Matrix4x4.identity });

        // Center boss (Bright steel: 49)
        var boss = CreateFacetedBox(new Vector3(0, 0, 0.03f), new Vector3(0.14f, 0.14f, 0.06f), 49);
        combines.Add(new CombineInstance { mesh = boss, transform = Matrix4x4.identity });

        var mf = root.AddComponent<MeshFilter>();
        mf.sharedMesh = CombineMeshes(combines);
        var mr = root.AddComponent<MeshRenderer>();
        mr.sharedMaterial = material;
        return root;
    }

    public static GameObject CreateStaffProp(Material material)
    {
        var root = new GameObject("wpn_staff");
        var combines = new List<CombineInstance>();

        // Shaft (Ash staff: 131)
        var shaft = CreateFacetedBox(new Vector3(0, 0.5f, 0), new Vector3(0.04f, 1.4f, 0.04f), 131);
        combines.Add(new CombineInstance { mesh = shaft, transform = Matrix4x4.identity });
        var grip = CreateFacetedBox(new Vector3(0, -0.05f, 0), new Vector3(0.06f, 0.2f, 0.06f), 35);
        combines.Add(new CombineInstance { mesh = grip, transform = Matrix4x4.identity });

        // Crystal head (Ice blue: 77)
        var crystal = CreateFacetedBox(new Vector3(0, 1.25f, 0), new Vector3(0.12f, 0.18f, 0.12f), 77);
        combines.Add(new CombineInstance { mesh = crystal, transform = Matrix4x4.identity });

        var mf = root.AddComponent<MeshFilter>();
        mf.sharedMesh = CombineMeshes(combines);
        var mr = root.AddComponent<MeshRenderer>();
        mr.sharedMaterial = material;
        return root;
    }

    public static GameObject CreateHelmProp(Material material)
    {
        var root = new GameObject("helm_iron");
        var combines = new List<CombineInstance>();

        // Helm cap (Dark iron: 52)
        var cap = CreateFacetedBox(new Vector3(0, 0.06f, 0), new Vector3(0.28f, 0.18f, 0.28f), 52);
        combines.Add(new CombineInstance { mesh = cap, transform = Matrix4x4.identity });

        // Nose guard (Bright steel: 49)
        var guard = CreateFacetedBox(new Vector3(0, -0.04f, 0.14f), new Vector3(0.04f, 0.12f, 0.02f), 49);
        combines.Add(new CombineInstance { mesh = guard, transform = Matrix4x4.identity });

        var mf = root.AddComponent<MeshFilter>();
        mf.sharedMesh = CombineMeshes(combines);
        var mr = root.AddComponent<MeshRenderer>();
        mr.sharedMaterial = material;
        return root;
    }
}
