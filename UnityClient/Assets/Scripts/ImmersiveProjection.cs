using UnityEngine;

public sealed class ImmersiveProjection : SessionProjection
{
    public override string ProjectionMode => "3d-immersive";

    protected override Vector3 ToWorldPosition(PositionDto position)
    {
        if (position == null)
        {
            return Vector3.zero;
        }

        return new Vector3(position.x, position.z, position.y);
    }

    protected override void RenderEvents(SessionEventDto[] events)
    {
        foreach (var sessionEvent in events)
        {
            if (sessionEvent != null && sessionEvent.type == "DamageApplied")
            {
                Debug.Log("Immersive damage presentation: " + sessionEvent.damage_type);
            }
        }
    }
}
