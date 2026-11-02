# Design

## Context

See `proposal.md` for motivation and `specs/character-creation/spec.md` for user-visible behavior. The D&D feat picker currently renders a single list of toggles. Its creation-flow options include names and prerequisite metadata, and the client computes unmet or unsupported prerequisites locally, but the package contains no feat descriptions.

## Goals / Non-Goals

**Goals:**
- Keep inspection state independent from the draft's selected-feat values.
- Present a readable feat summary and per-requirement eligibility details.
- Reuse current prerequisite evaluation and preserve search and eligible-only behavior.
- Fit both the list and detail view at wide and narrow viewport sizes.

**Non-Goals:**
- Expand the supported feat catalog or add new prerequisite rule evaluators.
- Change authoritative character validation or permit unmet prerequisites to be added.
- Apply this D&D-specific detail interaction to unrelated rulesets.
- Copy source text verbatim; summaries are concise, original package content.

## Decisions

### Keep inspected feat state separate from chosen feats

Track the feat currently being inspected independently of the selected-values set. Clicking or focusing a feat row updates the detail pane only. A separate Add action changes the selected-values set only when the existing prerequisite evaluation reports no blockers; an already selected feat instead offers Remove. This avoids accidental selection and reuses the existing eligibility rules.

Combining detail inspection with the current toggle action was rejected because it makes browsing indistinguishable from committing a choice.

### Store concise summaries with package feat definitions

Add an original, concise description field to each supported D&D feat definition and include it in the option data sent to the client. Keeping copy beside the package definition preserves package-driven behavior and allows the client to stay generic. Unsupported or missing summaries use an explicit neutral fallback rather than fabricated text.

Verbatim external descriptions were rejected; summaries will be authored as original, brief explanations.

### Explain prerequisites individually and visibly

Use the current prerequisite failure calculation to determine status for each item in the detail pane. Display explicit “Met”, “Unmet”, or “Cannot verify” labels, with unmet requirements highlighted red; retain text labels so status is not conveyed by color alone. The existing list-level unavailable explanation can remain concise and point to the selected detail.

Recomputing prerequisite rules in a second subsystem was rejected because it risks disagreeing with the current eligibility filter and selection restrictions.

### Adapt layout to available viewport

Show the feat list and details in adjacent panes when sufficient width is available; stack the detail area with the list on narrower screens. Keep search and eligible-only controls associated with the list and selection actions in the detail pane.

## Risks / Trade-offs

- [Feat summaries become incomplete or inconsistent] -> Require concise description metadata for catalog entries and test representative API responses.
- [Visual red is difficult to perceive] -> Include explicit status text and verify contrast against the themed UI.
- [Viewport threshold feels wrong on some displays] -> Check narrow and wide WebGL viewport layouts and keep the stacked presentation usable.
- [Eligibility changes while another feat is inspected] -> Recompute statuses during rendering from current draft inputs rather than caching blocker text.

## Migration Plan

1. Add concise descriptions to the D&D feat metadata and return them as part of feat options.
2. Add independent inspection state and the responsive detail pane to the feat picker.
3. Preserve current search, eligible-only filtering, selected-feat retention, and authoritative validation.
4. Verify package response, prerequisite states, and WebGL rendering. If detail assets or content are missing, retain feat browsing with a clear fallback description.
