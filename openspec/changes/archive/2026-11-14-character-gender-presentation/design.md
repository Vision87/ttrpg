# Design

## Context

Creation flows are loaded from version-pinned ruleset packages. Drafts persist a numeric step index, and the service restores drafts against their exact package versions. Presentation settings are stored separately from mechanical choices. Portrait prompts are assembled from visual draft data; the model recipe currently combines race scales with fixed low-poly body slices.

## Goals / Non-Goals

**Goals:**
- Add the same visual-presentation step to every supported resolved flow without changing package versions or package step order.
- Preserve the selected value and the resume position of both new and legacy drafts.
- Apply proportion presets without coupling race, hair, beard, clothing, or equipment to the selection.

**Non-Goals:**
- Add a rules-facing gender or sex field.
- Create separate full-body mesh and equipment asset sets.

## Decisions

### Prepend one application-owned step

After validating a ruleset package, the service will build one resolved flow by prepending the system-owned step to the package's unchanged steps. Draft creation, flow responses, navigation validation, and draft resumption must use that same resolved flow. This keeps the feature consistent for package-defined and fallback flows while preserving package provenance and version pins. Editing every package would require version changes and complicate resuming drafts pinned to older packages; a separate screen before draft creation would not participate in normal step navigation.

### Keep the value in presentation state

Persist `gender_presentation` as `male`, `female`, or unset in presentation data, never in mechanical choices. New drafts require a valid selection before leaving the first step; existing drafts may remain unset. The UI presents two equal, large square symbol buttons with visible text and accessible labels. Selection changes update the preview but not mechanical choices or derived statistics.

### Preserve the resume position

New draft records will persist a stable current-step ID alongside the numeric index. Resume by ID when present. For legacy records without an ID, resolve the old index against the unchanged package flow and map it to that package step in the new resolved flow; map the prior end-of-flow position to the new end. Leave the presentation unset and allow the user to visit the first step later.

### Feed both presentation pipelines

When selected, the portrait prompt builder adds a visual descriptor and the existing pre-submit disclosure identifies that detail. It omits the descriptor for unset legacy drafts and continues excluding mechanical statistics.

The authoritative recipe carries the selection and combines its shoulder, upper-torso, and hip proportions with race scales. The existing baseline proportions remain unchanged when unset. Unity applies the supplied transforms; it does not infer hair, facial hair, face, clothing, equipment, or height from the selection. Proportion presets are preferred over separate meshes because they reuse the current modular asset pipeline and avoid multiplying body and armor variants.

## Risks / Trade-offs

- **Race or armor geometry may clip under proportions** -> keep adjustments conservative and verify combinations across supported races and representative equipment.
- **The binary visual options may not describe every character's appearance** -> treat them only as the requested visual presets; keep other presentation choices independent.
- **Older clients do not understand the new presentation value** -> keep the serialized field additive and document that rollback to older software may not preserve it if an old client rewrites the draft.

## Migration Plan

Do not modify bundled ruleset packages or their versions. On resume, use a stored step ID for new drafts; map legacy numeric positions to the same package-defined step after the prepended step, leaving the new value unset. Rollback requires no package migration; retain draft backups before reopening and saving them with older software.
