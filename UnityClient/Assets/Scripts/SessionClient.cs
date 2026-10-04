using UnityEngine;

public sealed class SessionClient : MonoBehaviour
{
    [SerializeField] private TextAsset initialSession;
    [SerializeField] private TacticalProjection tacticalProjection;
    [SerializeField] private ImmersiveProjection immersiveProjection;

    private void Start()
    {
        if (initialSession == null)
        {
            Debug.LogWarning("No initial session fixture configured.");
            return;
        }

        var envelope = UnityEngine.JsonUtility.FromJson<SessionEnvelopeDto>(initialSession.text);
        tacticalProjection?.Render(envelope);
        immersiveProjection?.Render(envelope);
    }
}
