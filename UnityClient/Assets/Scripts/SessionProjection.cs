using System.Collections.Generic;
using UnityEngine;

public abstract class SessionProjection : MonoBehaviour
{
    protected readonly Dictionary<string, GameObject> RenderedEntities =
        new Dictionary<string, GameObject>();

    public abstract string ProjectionMode { get; }

    public void Render(SessionEnvelopeDto envelope)
    {
        if (envelope == null || envelope.snapshot == null)
        {
            return;
        }

        foreach (var entity in envelope.snapshot.entities)
        {
            if (entity == null || string.IsNullOrEmpty(entity.id))
            {
                continue;
            }

            if (!RenderedEntities.TryGetValue(entity.id, out var rendered))
            {
                rendered = CreateEntity(entity);
                RenderedEntities.Add(entity.id, rendered);
            }

            rendered.transform.position = ToWorldPosition(entity.position);
        }

        RenderEvents(envelope.events ?? new SessionEventDto[0]);
    }

    protected virtual GameObject CreateEntity(EntityDto entity)
    {
        var rendered = GameObject.CreatePrimitive(PrimitiveType.Cube);
        rendered.name = ProjectionMode + ":" + entity.id;
        return rendered;
    }

    protected abstract Vector3 ToWorldPosition(PositionDto position);

    protected virtual void RenderEvents(SessionEventDto[] events)
    {
    }
}
