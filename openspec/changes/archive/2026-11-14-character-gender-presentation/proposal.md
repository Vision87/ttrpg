# Proposal

## Why

Characters currently have no saved male/female visual-presentation choice, so generated portraits and the 3D preview cannot consistently reflect it. A shared first step will capture that choice once and carry it through both presentation pipelines without making it a game-rule value.

## What Changes

- Add a system-owned first step to every supported character-creation flow, before the existing package-defined steps, with two large square, accessible male and female symbol buttons. New drafts must choose one; existing package step order remains unchanged.
- Persist the choice as visual presentation data, separate from mechanical character choices. Include it in portrait-generation prompts and their data disclosure when selected.
- Include the selection in the authoritative model recipe and apply the agreed subtle, race-compatible proportions: male uses modestly broader shoulders and upper torso; female uses modestly narrower shoulders and somewhat wider hips. Keep face, hair, beard, clothing, equipment, and overall height independent.
- Resume older drafts at their existing stage with no inferred selection; use the default silhouette and omit the gender descriptor until the user chooses.

## Capabilities

### New Capabilities

- None.

### Modified Capabilities

- `character-creation`: Add the shared first step, visual-only persistence, portrait prompt input and disclosure, and compatibility for older drafts.
- `modular-3d-avatar`: Carry the visual-presentation selection in the model recipe and apply its proportion preset alongside race proportions.

## Impact

The Python creation service and workflow will own the shared step, draft value, prompt construction, and recipe data. The Unity creation UI and avatar assembler will render the selection and proportion preset. Tests will cover all supported flows, prompt disclosure, recipe composition, and legacy draft resumption. Ruleset package contents and their version metadata remain unchanged.
