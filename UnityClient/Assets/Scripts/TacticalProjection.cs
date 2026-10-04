using UnityEngine;

public sealed class TacticalProjection : SessionProjection
{
    public override string ProjectionMode => "2d-tactical";

    protected override Vector3 ToWorldPosition(PositionDto position)
    {
        if (position == null)
        {
            return Vector3.zero;
        }

        return new Vector3(position.x, 0f, position.y);
    }

    protected override GameObject CreateEntity(EntityDto entity)
    {
        var rendered = GameObject.CreatePrimitive(PrimitiveType.Quad);
        rendered.name = ProjectionMode + ":" + entity.id;
        rendered.transform.rotation = Quaternion.Euler(90f, 0f, 0f);
        return rendered;
    }
}
