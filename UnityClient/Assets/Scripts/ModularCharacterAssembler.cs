using System.Collections.Generic;
using UnityEngine;

public class ModularCharacterAssembler : MonoBehaviour
{
    private Transform rootBone;
    private Transform hipsBone;
    private Transform spineBone;
    private Transform chestBone;
    private Transform headBone;
    private Transform shoulderL;
    private Transform shoulderR;
    private Transform upperLegL;
    private Transform upperLegR;
    private Transform lowerLegL;
    private Transform lowerLegR;
    private Transform footL;
    private Transform footR;

    private Transform socketMainHand;
    private Transform socketOffHand;
    private Transform socketHead;

    private readonly Dictionary<string, GameObject> activeSlices =
        new Dictionary<string, GameObject>();

    private readonly Dictionary<string, GameObject> activeProps =
        new Dictionary<string, GameObject>();

    private Material sharedMaterial;
    private string currentRace = "human";
    private bool isInitialized = false;

    // Animation state
    public bool enableIdleAnimation = true;
    private float animationTimer = 0f;

    private void Awake()
    {
        EnsureInitialized();
    }

    public void EnsureInitialized()
    {
        if (isInitialized) return;

        sharedMaterial = LowPolyCharacterBuilder.CreatePaletteMaterial();
        BuildArmature();
        isInitialized = true;
    }

    private void BuildArmature()
    {
        // Root
        var rootObj = new GameObject("Armature_Root");
        rootObj.transform.SetParent(transform, false);
        rootBone = rootObj.transform;

        // Hips (Pelvis)
        hipsBone = CreateBone("Hips", rootBone, new Vector3(0, 0.9f, 0));

        // Spine & Chest
        spineBone = CreateBone("Spine", hipsBone, new Vector3(0, 0.22f, 0));
        chestBone = CreateBone("Chest", spineBone, new Vector3(0, 0.24f, 0));
        headBone = CreateBone("Head", chestBone, new Vector3(0, 0.46f, 0));
        socketHead = CreateBone("Socket_Head", headBone, new Vector3(0, 0.12f, 0));

        // Left Arm
        shoulderL = CreateBone("Shoulder_L", chestBone, new Vector3(-0.19f, 0.12f, 0));
        Transform upperArmL = CreateBone("UpperArm_L", shoulderL, new Vector3(-0.06f, -0.06f, 0));
        Transform lowerArmL = CreateBone("LowerArm_L", upperArmL, new Vector3(0, -0.2f, 0));
        Transform handL = CreateBone("Hand_L", lowerArmL, new Vector3(0, -0.18f, 0));
        socketOffHand = CreateBone("Socket_OffHand", handL, new Vector3(0, 0.03f, 0.05f));

        // Right Arm
        shoulderR = CreateBone("Shoulder_R", chestBone, new Vector3(0.19f, 0.12f, 0));
        Transform upperArmR = CreateBone("UpperArm_R", shoulderR, new Vector3(0.06f, -0.06f, 0));
        Transform lowerArmR = CreateBone("LowerArm_R", upperArmR, new Vector3(0, -0.2f, 0));
        Transform handR = CreateBone("Hand_R", lowerArmR, new Vector3(0, -0.18f, 0));
        socketMainHand = CreateBone("Socket_MainHand", handR, new Vector3(0, 0.03f, 0.05f));

        // Left Leg
        upperLegL = CreateBone("UpperLeg_L", hipsBone, new Vector3(-0.11f, -0.05f, 0));
        lowerLegL = CreateBone("LowerLeg_L", upperLegL, new Vector3(0, -0.38f, 0));
        footL = CreateBone("Foot_L", lowerLegL, new Vector3(0, -0.36f, 0.04f));

        // Right Leg
        upperLegR = CreateBone("UpperLeg_R", hipsBone, new Vector3(0.11f, -0.05f, 0));
        lowerLegR = CreateBone("LowerLeg_R", upperLegR, new Vector3(0, -0.38f, 0));
        footR = CreateBone("Foot_R", lowerLegR, new Vector3(0, -0.36f, 0.04f));
    }

    private static Transform CreateBone(string name, Transform parent, Vector3 localPosition)
    {
        var obj = new GameObject(name);
        obj.transform.SetParent(parent, false);
        obj.transform.localPosition = localPosition;
        return obj.transform;
    }

    public void ApplyRecipe(ModelRecipeDto recipe)
    {
        EnsureInitialized();
        if (recipe == null) return;

        currentRace = recipe.race_profile ?? "human";

        // 1. Apply Bone Scales for Race Silhouette
        ApplyBoneScales(recipe);
        ApplyPaletteTints(recipe);

        // 2. Apply Sliced Modular Meshes
        ApplySlice("head", recipe.GetSlice("head", "head_base"), headBone);
        ApplySlice("hair", recipe.GetSlice("hair", "hair_short"), headBone);
        ApplySlice("torso", recipe.GetSlice("torso", "torso_base"), chestBone);
        ApplySlice("legs", recipe.GetSlice("legs", "legs_base"), hipsBone);
        ApplySlice("feet", recipe.GetSlice("feet", "feet_base"), rootBone);
        ApplySlice("arms", recipe.GetSlice("hands", "hands_base"), chestBone);

        // 3. Attach Socketed Props
        string mainWeapon = recipe.GetSocket("main_hand", recipe.GetSocket("two_handed"));
        ApplyProp("main_hand", mainWeapon, socketMainHand);

        string offHandProp = recipe.GetSocket("off_hand");
        ApplyProp("off_hand", offHandProp, socketOffHand);

        string headProp = recipe.GetSocket("head");
        ApplyProp("head", headProp, socketHead);
    }

    private void ApplyPaletteTints(ModelRecipeDto recipe)
    {
        ApplyPaletteTint(recipe, "skin", "_SkinTint", "_SkinTintEnabled");
        ApplyPaletteTint(recipe, "hair", "_HairTint", "_HairTintEnabled");
        ApplyPaletteTint(recipe, "cloths", "_ClothTint", "_ClothTintEnabled");
        ApplyPaletteTint(recipe, "pants", "_PantsTint", "_PantsTintEnabled");
        ApplyPaletteTint(
            recipe,
            "secondary",
            "_ClothAccentTint",
            "_ClothAccentTintEnabled");
        ApplyPaletteTint(recipe, "iris", "_IrisTint", "_IrisTintEnabled");
    }

    private void ApplyPaletteTint(
        ModelRecipeDto recipe,
        string tintName,
        string colorProperty,
        string enabledProperty)
    {
        string value = recipe.GetPaletteTint(tintName);
        if (ColorUtility.TryParseHtmlString(value, out var color))
        {
            sharedMaterial.SetColor(colorProperty, color);
            sharedMaterial.SetFloat(enabledProperty, 1f);
        }
        else
        {
            sharedMaterial.SetFloat(enabledProperty, 0f);
        }
    }

    private void ApplyBoneScales(ModelRecipeDto recipe)
    {
        Vector3 defaultScale = Vector3.one;

        Vector3 rootScale = recipe.GetBoneScale("root", defaultScale);
        rootBone.localScale = rootScale;

        Vector3 hipsScale = recipe.GetBoneScale("hips", defaultScale);
        hipsBone.localScale = hipsScale;

        Vector3 spineScale = recipe.GetBoneScale("spine", defaultScale);
        spineBone.localScale = spineScale;

        Vector3 legScale = recipe.GetBoneScale("legs", defaultScale);
        upperLegL.localScale = legScale;
        upperLegR.localScale = legScale;

        Vector3 shoulderScale = recipe.GetBoneScale("shoulders", defaultScale);
        shoulderL.localScale = shoulderScale;
        shoulderR.localScale = shoulderScale;

        Vector3 headScale = recipe.GetBoneScale("head", defaultScale);
        headBone.localScale = headScale;
    }

    private void ApplySlice(string slotKey, string sliceId, Transform parentBone)
    {
        if (activeSlices.TryGetValue(slotKey, out var existingObj))
        {
            if (existingObj != null && existingObj.name == sliceId)
            {
                return; // Already equipped this slice
            }
            if (existingObj != null)
            {
                Destroy(existingObj);
            }
            activeSlices.Remove(slotKey);
        }

        Mesh mesh = null;
        if (slotKey == "head")
        {
            mesh = LowPolyCharacterBuilder.CreateHeadSlice(3);
        }
        else if (slotKey == "hair")
        {
            mesh = LowPolyCharacterBuilder.CreateHairSlice(sliceId);
        }
        else if (slotKey == "torso")
        {
            mesh = LowPolyCharacterBuilder.CreateTorsoSlice(sliceId);
        }
        else if (slotKey == "legs")
        {
            mesh = LowPolyCharacterBuilder.CreateLegsSlice(sliceId);
        }
        else if (slotKey == "feet")
        {
            mesh = LowPolyCharacterBuilder.CreateFeetSlice();
        }
        else if (slotKey == "arms")
        {
            mesh = LowPolyCharacterBuilder.CreateArmsAndHandsSlice(3);
        }

        if (mesh != null)
        {
            var sliceObj = new GameObject(sliceId);
            sliceObj.transform.SetParent(parentBone, false);
            sliceObj.transform.localPosition = Vector3.zero;
            sliceObj.transform.localRotation = Quaternion.identity;

            var mf = sliceObj.AddComponent<MeshFilter>();
            mf.sharedMesh = mesh;
            var mr = sliceObj.AddComponent<MeshRenderer>();
            mr.sharedMaterial = sharedMaterial;

            activeSlices[slotKey] = sliceObj;
        }
    }

    private void ApplyProp(string socketKey, string propId, Transform socketBone)
    {
        if (activeProps.TryGetValue(socketKey, out var existingProp))
        {
            if (existingProp != null && existingProp.name == propId)
            {
                return; // Prop already attached
            }
            if (existingProp != null)
            {
                Destroy(existingProp);
            }
            activeProps.Remove(socketKey);
        }

        if (string.IsNullOrEmpty(propId) || socketBone == null)
        {
            return;
        }

        GameObject propObj = null;
        if (propId.Contains("sword"))
        {
            propObj = LowPolyCharacterBuilder.CreateSwordProp(sharedMaterial);
        }
        else if (propId.Contains("greataxe") || propId.Contains("axe"))
        {
            propObj = LowPolyCharacterBuilder.CreateGreataxeProp(sharedMaterial);
        }
        else if (propId.Contains("shield"))
        {
            propObj = LowPolyCharacterBuilder.CreateShieldProp(sharedMaterial);
        }
        else if (propId.Contains("staff"))
        {
            propObj = LowPolyCharacterBuilder.CreateStaffProp(sharedMaterial);
        }
        else if (propId.Contains("helm"))
        {
            propObj = LowPolyCharacterBuilder.CreateHelmProp(sharedMaterial);
        }

        if (propObj != null)
        {
            propObj.name = propId;
            propObj.transform.SetParent(socketBone, false);
            propObj.transform.localPosition = Vector3.zero;
            if (propId.Contains("sword"))
            {
                Quaternion faceForward = Quaternion.AngleAxis(90f, Vector3.right);
                Quaternion edgeDown = Quaternion.AngleAxis(90f, Vector3.forward);
                propObj.transform.localRotation = edgeDown * faceForward;
            }
            else
            {
                propObj.transform.localRotation = Quaternion.identity;
            }
            activeProps[socketKey] = propObj;
        }
    }

    private void Update()
    {
        if (!enableIdleAnimation || spineBone == null) return;

        animationTimer += Time.deltaTime;
        // Breathing cycle: ~2.5 rad/sec
        float breath = Mathf.Sin(animationTimer * 2.5f);
        float subtleBreath = breath * 0.015f;

        // Subtle chest lift & shoulder shift
        spineBone.localRotation = Quaternion.Euler(breath * 1.5f, 0, 0);
        chestBone.localRotation = Quaternion.Euler(breath * 2.0f, 0, 0);

    }
}
