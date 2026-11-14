using UnityEngine;

public class CharacterTurntablePreview : MonoBehaviour
{
    private Camera previewCamera;
    private RenderTexture previewTexture;
    private GameObject previewRoot;
    private Transform turntablePivot;
    private ModularCharacterAssembler assembler;
    private Light previewLight;

    public int textureWidth = 512;
    public int textureHeight = 512;
    public float rotationSpeed = 0.5f;
    public float zoomSpeed = 0.5f;

    private float currentYaw = 180f; // Face camera initially
    private float cameraDistance = 3.5f;
    private const float MinDistance = 1.2f;
    private const float MaxDistance = 5.0f;
    private Vector3 cameraTarget = new Vector3(0f, 0.95f, 0f);

    private bool isInitialized = false;

    public RenderTexture PreviewTexture => previewTexture;

    private void Awake()
    {
        Initialize();
    }

    public void Initialize()
    {
        if (isInitialized) return;

        // Position isolated preview far from main game world (e.g. at Y = 2000)
        previewRoot = new GameObject("Turntable_PreviewRoot");
        previewRoot.transform.position = new Vector3(2000f, 2000f, 2000f);

        // Rotating turntable pivot
        var pivotObj = new GameObject("Turntable_Pivot");
        pivotObj.transform.SetParent(previewRoot.transform, false);
        turntablePivot = pivotObj.transform;
        turntablePivot.localRotation = Quaternion.Euler(0, currentYaw, 0);

        // Turntable pedestal floor disc (Stone grey: 117)
        var floorDisc = LowPolyCharacterBuilder.CreateFacetedBox(new Vector3(0, -0.05f, 0), new Vector3(1.4f, 0.1f, 1.4f), 117);
        var floorObj = new GameObject("Pedestal");
        floorObj.transform.SetParent(turntablePivot, false);
        var mf = floorObj.AddComponent<MeshFilter>();
        mf.sharedMesh = floorDisc;
        var mr = floorObj.AddComponent<MeshRenderer>();
        mr.sharedMaterial = LowPolyCharacterBuilder.CreatePaletteMaterial();

        // Character Assembler
        var charObj = new GameObject("ModularCharacter");
        charObj.transform.SetParent(turntablePivot, false);
        charObj.transform.localPosition = Vector3.zero;
        assembler = charObj.AddComponent<ModularCharacterAssembler>();
        assembler.EnsureInitialized();

        // Off-screen Camera
        var camObj = new GameObject("Turntable_Camera");
        camObj.transform.SetParent(previewRoot.transform, false);
        previewCamera = camObj.AddComponent<Camera>();
        previewCamera.clearFlags = CameraClearFlags.SolidColor;
        previewCamera.backgroundColor = new Color(0.12f, 0.14f, 0.18f, 1.0f);
        previewCamera.fieldOfView = 36f;
        previewCamera.nearClipPlane = 0.1f;
        previewCamera.farClipPlane = 20f;
        UpdateCameraTransform();

        // Dedicated Light
        var lightObj = new GameObject("Turntable_Light");
        lightObj.transform.SetParent(previewRoot.transform, false);
        previewLight = lightObj.AddComponent<Light>();
        previewLight.type = LightType.Directional;
        previewLight.color = new Color(1.0f, 0.98f, 0.95f);
        previewLight.intensity = 1.1f;
        lightObj.transform.localRotation = Quaternion.Euler(35f, 30f, 0);

        // RenderTexture
        if (SystemInfo.supportsRenderTextures)
        {
            previewTexture = new RenderTexture(textureWidth, textureHeight, 16, RenderTextureFormat.ARGB32)
            {
                name = "CharacterTurntable_RT",
                filterMode = FilterMode.Bilinear
            };
            previewTexture.Create();
            previewCamera.targetTexture = previewTexture;
        }

        isInitialized = true;
    }

    private void UpdateCameraTransform()
    {
        if (previewCamera == null) return;
        previewCamera.transform.localPosition =
            cameraTarget + Vector3.back * cameraDistance;
        previewCamera.transform.LookAt(
            previewRoot.transform.TransformPoint(cameraTarget));
    }

    private void FitCameraToCharacter()
    {
        if (assembler == null || previewCamera == null || previewRoot == null)
        {
            return;
        }

        Renderer[] renderers = assembler.GetComponentsInChildren<Renderer>(true);
        if (renderers.Length == 0)
        {
            return;
        }

        Bounds bounds = renderers[0].bounds;
        for (int i = 1; i < renderers.Length; i++)
        {
            bounds.Encapsulate(renderers[i].bounds);
        }

        cameraTarget = previewRoot.transform.InverseTransformPoint(bounds.center);
        float verticalHalfFov = previewCamera.fieldOfView * Mathf.Deg2Rad * 0.5f;
        float horizontalHalfFov = Mathf.Atan(
            Mathf.Tan(verticalHalfFov) * previewCamera.aspect);
        float effectiveHalfFov = Mathf.Min(verticalHalfFov, horizontalHalfFov);
        float fitDistance =
            bounds.extents.magnitude / Mathf.Sin(effectiveHalfFov) * 1.15f;
        cameraDistance = Mathf.Clamp(fitDistance, MinDistance, MaxDistance);
        UpdateCameraTransform();
    }

    public void OnDrag(Vector2 delta)
    {
        currentYaw += delta.x * rotationSpeed;
        if (turntablePivot != null)
        {
            turntablePivot.localRotation = Quaternion.Euler(0, currentYaw, 0);
        }
    }

    public void OnZoom(float scrollDelta)
    {
        cameraDistance = Mathf.Clamp(cameraDistance - scrollDelta * zoomSpeed, MinDistance, MaxDistance);
        UpdateCameraTransform();
    }

    public void UpdateRecipe(ModelRecipeDto recipe)
    {
        if (!isInitialized) Initialize();
        if (assembler != null && recipe != null)
        {
            assembler.ApplyRecipe(recipe);
            FitCameraToCharacter();
        }
    }

    private void OnDestroy()
    {
        if (previewTexture != null)
        {
            if (previewCamera != null) previewCamera.targetTexture = null;
            previewTexture.Release();
            Destroy(previewTexture);
            previewTexture = null;
        }

        if (previewRoot != null)
        {
            Destroy(previewRoot);
            previewRoot = null;
        }
    }
}
