# Design

## Context

The current character creation flow presents equipment shop and wealth selection without an overview of the required steps. Users must infer the sequence, which leads to confusion. The proposal adds a header component that displays the ordered steps above the navigation bar. This design focuses on how to integrate that component into the existing Unity UI layout while maintaining the existing visual theme and ensuring responsiveness on various screen sizes.

## Goals / Non-Goals

**Goals:**
- Provide a clear, ordered summary of the character‑creation steps visible at the top of the screen.
- Ensure the header updates automatically if future steps are added or reordered.
- Preserve the existing UI aesthetic and interaction patterns.
- Maintain performance; the header must not introduce noticeable frame‑rate impact.

**Non-Goals:**
- Redesign of the entire character creation UI.
- Localization of step text (handled elsewhere).
- Supporting legacy Unity UI systems that are no longer used in the project.

## Decisions

1. **Implementation as a Unity UI Prefab** – The step summary will be a reusable prefab (`StepSummaryHeader.prefab`) containing a horizontal layout group with text elements for each step. This allows designers to edit ordering without code changes.
   - *Rationale:* Prefabs enable visual editing and reuse across scenes.
   - *Alternatives considered:* Dynamic generation via script only (rejected due to lack of designer-friendly editing).
2. **Data Source via ScriptableObject** – A `StepSummaryData` ScriptableObject will hold the ordered list of step titles. The `CharacterCreationClient` will reference this asset and populate the header at runtime.
   - *Rationale:* Decouples UI from hard‑coded strings, simplifying future modifications.
   - *Alternatives considered:* Hard‑coded array in code (rejected for flexibility).
3. **Responsive Layout using Unity's Layout System** – The header will use a `HorizontalLayoutGroup` with `Child Force Expand` disabled and `Spacing` set to 8. On screens narrower than 600 px, the layout will switch to a vertical stack via a `ContentSizeFitter` and a custom `ResponsiveStepHeader` script.
   - *Rationale:* Leverages built‑in Unity UI components for responsiveness.
   - *Alternatives considered:* Manual size calculations (rejected for maintainability).
4. **Styling via Existing UI Theme** – Text color, font, and background will reuse the `UIBase` style defined in `Stylesheet.asset`. No new color palette will be introduced.
   - *Rationale:* Consistency with existing UI.
5. **Dynamic Update Mechanism** – The `CharacterCreationClient` will invoke `StepSummaryHeader.UpdateSteps(List<string>)` whenever the step list changes (e.g., when optional steps are added in future updates).
   - *Rationale:* Guarantees the header reflects the current workflow without requiring scene reloads.

## Risks / Trade‑offs

- **Risk:** Incorrect ordering if the `StepSummaryData` asset diverges from the actual workflow.
  - *Mitigation:* Add a unit test that compares the asset list to the sequence defined in `CharacterCreationFlow.cs`.
- **Risk:** Additional UI element could cause layout overflow on very small screens.
  - *Mitigation:* Responsive vertical fallback and clipping settings are in place; test on targeted device resolutions.
- **Risk:** Prefab integration may affect existing scene hierarchy.
  - *Mitigation:* Insert the prefab as a child of the existing `Canvas` under the navigation bar placeholder.

## Migration Plan

1. Create `StepSummaryData.asset` with the initial three steps: "Choose Wealth", "Select Equipment", "Review & Save".
2. Add `StepSummaryHeader.prefab` to the UI folder.
3. Modify `CharacterCreationClient.cs` to reference the new ScriptableObject and call `UpdateSteps` during `Awake`.
4. Update the Unity scene(s) to include the prefab above the navigation bar.
5. Run UI tests to verify the header appears and updates correctly.
6. Deploy to staging for UI/UX verification before releasing to production.

## Open Questions

- **Localization:** Should the step titles be localized now or handled in a later change? (If needed now, we would store localized strings in the `StepSummaryData` asset.)
- **Future Step Insertion:** Will future changes introduce optional steps that may be conditionally displayed? If so, the `ResponsiveStepHeader` may need additional logic to hide/show steps dynamically.

---
*Design document generated for change `character-creation-steps-summary`.*