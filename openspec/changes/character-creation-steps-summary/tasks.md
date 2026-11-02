# Tasks

## 1. Data Asset Setup

- [x] 1.1 Create `StepSummaryData` ScriptableObject class (`UnityClient/Assets/Scripts/StepSummaryData.cs`) with a `public string[] stepTitles` field. Verify it compiles and appears in the Unity Create Asset menu.
- [x] 1.2 Create `StepSummaryData.asset` in `UnityClient/Assets/Data/` with the initial three entries: "Choose Wealth", "Select Equipment", "Review & Save". Verify the asset loads in the Inspector with the correct values.

## 2. Step Summary Header Component

- [x] 2.1 Create `StepSummaryHeader` MonoBehaviour (`UnityClient/Assets/Scripts/StepSummaryHeader.cs`) with an `UpdateSteps(List<string> steps)` method that populates child text elements. Verify it compiles without errors.
- [x] 2.2 Create `ResponsiveStepHeader` MonoBehaviour (`UnityClient/Assets/Scripts/ResponsiveStepHeader.cs`) that switches between horizontal and vertical layout based on a 600 px width threshold. Verify it compiles and the layout toggles correctly when the Game view is resized.
- [x] 2.3 Create `StepSummaryHeader.prefab` in `UnityClient/Assets/Prefabs/UI/` containing a `HorizontalLayoutGroup` (Child Force Expand off, Spacing 8), text elements, and the `ResponsiveStepHeader` script. Verify the prefab instantiates in an empty scene without missing references.

## 3. Integration into Character Creation Flow

- [x] 3.1 Modify `CharacterCreationClient.cs` to add a `[SerializeField] StepSummaryData stepSummaryData` field and call `StepSummaryHeader.UpdateSteps()` in `DrawCreationStep()` before the existing `SelectionGrid` navigation. Verify the header renders above the step navigation bar with the correct step labels when the character creation scene is loaded.
- [x] 3.2 Apply the `UIBase` style from `Stylesheet.asset` to the header text elements (font, color, background). Verify the header matches the existing UI theme visually.

## 4. Testing

- [x] 4.1 Add a unit test (`tests/step_summary_header_test.py` or C# test) that verifies `StepSummaryData.asset` contains exactly the expected three step titles in the correct order. Verify the test passes.
- [x] 4.2 Add a scenario test that loads the character creation scene, confirms the step summary header is present, and validates it displays the ordered steps matching the spec scenarios ("Header appears with correct steps"). Verify the test passes.
- [x] 4.3 Add a scenario test that modifies the `StepSummaryData` list at runtime and confirms the header updates without a restart ("Header updates when steps change"). Verify the test passes.

## 5. Documentation

- [x] 5.1 Update `README.md` to describe the new step summary header component, its purpose, and how to configure step titles via `StepSummaryData.asset`. Verify the README renders correctly and the new section is present.
