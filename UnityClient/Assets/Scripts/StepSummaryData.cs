using UnityEngine;

[CreateAssetMenu(
    fileName = "StepSummaryData",
    menuName = "Universal RPG/Step Summary Data")]
public sealed class StepSummaryData : ScriptableObject
{
    [Tooltip("Ordered list of step titles displayed in the summary header.")]
    public string[] stepTitles = new string[0];
}
