from pathlib import Path
import re


ROOT = Path(__file__).resolve().parent.parent / "UnityClient"
ASSET_PATH = ROOT / "Assets/Data/StepSummaryData.asset"
HEADER_SCRIPT = ROOT / "Assets/Scripts/StepSummaryHeader.cs"
RESPONSIVE_SCRIPT = ROOT / "Assets/Scripts/ResponsiveStepHeader.cs"
DATA_SCRIPT = ROOT / "Assets/Scripts/StepSummaryData.cs"
CLIENT_SCRIPT = ROOT / "Assets/Scripts/CharacterCreationClient.cs"


def test_step_summary_data_asset_contains_expected_steps() -> None:
    """Task 4.1: verifies StepSummaryData.asset contains the expected three step titles in order."""
    assert ASSET_PATH.is_file(), f"Asset not found at {ASSET_PATH}"
    content = ASSET_PATH.read_text()
    
    # Extract list items under stepTitles
    lines = content.splitlines()
    titles = []
    in_step_titles = False
    for line in lines:
        stripped = line.strip()
        if stripped.startswith("stepTitles:"):
            in_step_titles = True
            continue
        if in_step_titles:
            if stripped.startswith("- "):
                titles.append(stripped[2:].strip())
            elif stripped and not stripped.startswith("#"):
                break

    expected = ["Choose Wealth", "Select Equipment", "Review & Save"]
    assert titles == expected, f"Expected {expected}, got {titles}"


def test_character_creation_step_summary_header_presence() -> None:
    """Task 4.2 / Scenario 'Header appears with correct steps':
    verifies that CharacterCreationClient integrates StepSummaryHeader and renders it above the step navigation grid."""
    assert HEADER_SCRIPT.is_file()
    assert RESPONSIVE_SCRIPT.is_file()
    assert DATA_SCRIPT.is_file()
    assert CLIENT_SCRIPT.is_file()

    client_code = CLIENT_SCRIPT.read_text()
    assert "StepSummaryData" in client_code
    assert "StepSummaryHeader" in client_code
    assert "stepSummaryHeader.DrawHeader" in client_code
    assert "stepSummaryHeader.UpdateProgress" in client_code

    # Verify header draw call handles step switching and replaces old SelectionGrid
    draw_step_match = re.search(r"DrawCreationStep\(\)[\s\S]*?stepSummaryHeader\.DrawHeader\(\)", client_code)
    assert draw_step_match is not None, "stepSummaryHeader.DrawHeader not found in DrawCreationStep"
    assert "GUILayout.SelectionGrid" not in client_code, "Old SelectionGrid component should be removed in favor of StepSummaryHeader"


def test_step_summary_header_updates_when_steps_change() -> None:
    """Task 4.3 / Scenario 'Header updates when steps change':
    verifies that StepSummaryHeader provides dynamic update capability without restart."""
    header_code = HEADER_SCRIPT.read_text()
    
    # Must have UpdateProgress and UpdateSteps
    assert "public void UpdateSteps(List<string> steps)" in header_code or "UpdateSteps(" in header_code
    assert "public void UpdateProgress(" in header_code
    assert "DrawHeader" in header_code


def test_step_summary_header_highlights_current_step_and_summarizes_selections() -> None:
    """Verifies that StepSummaryHeader renders previous step selections and highlights the current step."""
    header_code = HEADER_SCRIPT.read_text()
    client_code = CLIENT_SCRIPT.read_text()

    # StepSummaryHeader has StepSummaryItem with IsCurrent and Summary
    assert "StepSummaryItem" in header_code
    assert "IsCurrent" in header_code
    assert "Summary" in header_code
    assert '"NOW"' in header_code
    assert "GUI.backgroundColor = themeAccent" in header_code

    # CharacterCreationClient extracts summaries and builds progress
    assert "BuildStepProgress" in client_code
    assert "GetStepSummaryText" in client_code
    assert "UpdateProgress" in client_code


def test_compact_progress_wraps_touch_targets_on_narrow_viewports() -> None:
    header_code = HEADER_SCRIPT.read_text()

    compact = header_code[
        header_code.index("private int DrawCompactStepper"):
        header_code.index("private int DrawRichStepper")
    ]
    assert "Mathf.Max(48f, density.StepIconSize + 18f)" in compact
    assert "int columns = Mathf.Max(" in compact
    assert "i % columns == 0" in compact
    assert "GUILayout.Height(buttonSize)" in compact


def test_rich_progress_scrolls_horizontally_with_equal_height_cards() -> None:
    header_code = HEADER_SCRIPT.read_text()
    rich = header_code[
        header_code.index("private int DrawRichStepper"):
        header_code.index("private int DrawRichCard")
    ]

    assert "GUILayout.BeginScrollView" in rich
    assert "richScrollPosition" in rich
    assert "Screen.width - 144f" in rich
    assert "minimumCardWidth = 112f" in rich
    assert "GUILayout.Height(cardHeight + 20f)" in rich
    assert "GUI.skin.horizontalScrollbar" in rich
    assert "GUIStyle.none" in rich
    assert "GUILayout.EndScrollView()" in rich
    assert "DrawRichCard(progressItems[i], density, cardWidth, cardHeight)" in rich
    assert "GUILayout.Width(cardWidth)" in header_code
    assert "GUILayout.Height(cardHeight)" in header_code
    assert "GUILayout.Height(42f)" in header_code
    assert "GUILayout.Height(24f)" in header_code


if __name__ == "__main__":
    test_step_summary_data_asset_contains_expected_steps()
    test_character_creation_step_summary_header_presence()
    test_step_summary_header_updates_when_steps_change()
    test_step_summary_header_highlights_current_step_and_summarizes_selections()
    test_compact_progress_wraps_touch_targets_on_narrow_viewports()
    test_rich_progress_scrolls_horizontally_with_equal_height_cards()
    print("All step summary header tests passed!")
