using UnityEngine;

/// <summary>
/// Configurable responsive threshold for the step summary header.
/// Attach alongside <see cref="StepSummaryHeader"/> to override the
/// default 600 px breakpoint at which the layout switches from
/// horizontal to vertical.
/// </summary>
public sealed class ResponsiveStepHeader : MonoBehaviour
{
    [Tooltip("Screen width in pixels below which the header switches to vertical layout.")]
    [SerializeField]
    private float verticalBreakpoint = 600f;

    /// <summary>
    /// Returns true when the current screen width is below the
    /// configured vertical breakpoint.
    /// </summary>
    public bool ShouldUseVerticalLayout
    {
        get { return Screen.width < verticalBreakpoint; }
    }

    /// <summary>
    /// The breakpoint width in pixels.
    /// </summary>
    public float VerticalBreakpoint
    {
        get { return verticalBreakpoint; }
        set { verticalBreakpoint = value; }
    }
}
