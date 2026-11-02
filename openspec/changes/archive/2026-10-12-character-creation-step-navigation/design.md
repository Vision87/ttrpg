# Design

## Context

Creation steps and their order come from each ruleset package. The Unity client currently renders only `draft.current_step` and advances through a service endpoint that increments the workflow's persisted step index. Individual field updates already persist draft values, and review/finalization perform authoritative validation. See the proposal and spec delta for the user-facing behavior.

## Goals / Non-Goals

**Goals:**
- Let the client navigate by package step ID while keeping the service authoritative for which steps exist and which step is current.
- Persist edits from the visible step before changing steps, without losing prior draft values.
- Retain sequential “Save and continue” and existing review/finalization behavior.

**Non-Goals:**
- Reordering, adding, or removing steps from a package.
- Blocking navigation based on field completeness or treating navigation as validation.
- Changing the draft record format; it already stores the current step index.

## Decisions

- **Use the package's declared sequence as the navigator model.** Render step labels and order from the loaded flow rather than hard-coding ruleset-specific steps. Alternatives considered: a fixed generic step list, which would not work for other packages, or deriving navigation from fields, which would omit valid empty steps.
- **Set the current step by validated step ID on the service.** Add a draft operation that accepts a step ID, resolves it against that draft's active flow, updates the existing current-step index, and saves the draft. Keep the current advance operation for compatibility and sequential progression. Reject unknown IDs without changing state. Alternatives considered: changing only the client-side index, which would be lost on reload and could drift from service state; accepting an index, which is less robust when package ordering changes.
- **Save current-step fields before requesting navigation.** Factor the existing field-save work from sequential advancement so both “Save and continue” and step selection use the same serialization and error handling. Do not switch the visible step unless field persistence and the service's step change both succeed. Keep final validation in review/finalization rather than coupling it to navigation.
- **Use the existing persisted index for resume.** No draft migration is needed; the selected step is already serialized and restored. Preserve all other field values and selection state when applying the service response after navigation.

## Risks / Trade-offs

- [Saving a field fails when moving between steps] → Keep the current step visible, surface the existing service error, and do not send the navigation request.
- [A malformed or stale step ID is submitted] → Validate against the active draft's package flow and return the existing structured invalid-request response without mutating the draft.
- [A direct jump lands on an incomplete step] → This is intentional; the UI still runs review and finalization validation before saving a character.

## Migration Plan

No data migration is required. Existing draft records retain their current step index, and the existing sequential advance endpoint remains supported. Rollback can remove the navigator and new step-selection operation without changing the persisted draft format.
