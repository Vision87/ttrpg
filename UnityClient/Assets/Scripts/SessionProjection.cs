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
        ApplyTheme(envelope.theme);

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
                ApplyEntityPresentation(rendered, entity, envelope.theme);
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

    private static void ApplyTheme(ThemeDto theme)
    {
        if (theme == null || theme.tokens == null || Camera.main == null)
        {
            return;
        }
        if (ColorUtility.TryParseHtmlString(theme.tokens.background, out var background))
        {
            Camera.main.backgroundColor = background;
        }
    }

    private static void ApplyEntityPresentation(
        GameObject rendered,
        EntityDto entity,
        ThemeDto theme)
    {
        if (entity.presentation != null && entity.presentation.scale > 0f)
        {
            rendered.transform.localScale *= entity.presentation.scale;
        }
        var renderer = rendered.GetComponent<Renderer>();
        var colorToken = entity.kind == "character"
            ? theme?.tokens?.accent
            : theme?.tokens?.primary;
        if (renderer != null &&
            !string.IsNullOrEmpty(colorToken) &&
            ColorUtility.TryParseHtmlString(colorToken, out var color))
        {
            renderer.material.color = color;
        }
    }

    protected virtual void RenderEvents(SessionEventDto[] events)
    {
    }
}
