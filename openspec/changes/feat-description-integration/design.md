# Design

## Context

See `proposal.md` for motivation. The D&D 3.5 feat picker already computes eligibility and surfaces requirement failures, but the package data and creation response do not guarantee a usable brief summary for every supported feat. Some entries may already include a concise summary while others only expose a longer description or a broader metadata payload.

## Goals / Non-Goals

**Goals:**
- Ensure every supported feat has a human-readable summary in the creation payload.
- Derive a concise fallback from the existing longer text when no short summary is present.
- Keep summary generation independent from selection and prerequisite validation.

**Non-Goals:**
- Rewriting the feat catalog or changing prerequisite logic.
- Turning the client into a rules-engine for generating lore text.
- Changing how the user adds or removes feats; only the summary data contract changes.

## Decisions

### Keep summary generation in package-data flow
Generate the summary as part of the package-to-creation-service data flow, not in the browser UI. This keeps the logic centrally defined with the ruleset metadata and ensures every client receives a consistent field. The UI remains generic and simply renders the summary, which is a better fit for the project’s package-driven architecture.

Alternative considered: generating summaries only in the client from arbitrary strings. Rejected because it would let browser-side logic diverge from the authoritative service and introduces inconsistent behavior across clients and resuming drafts.

### Use a fallback rule only when summary data is absent
If a feat already includes a concise summary, preserve it exactly. If the feat includes only a longer source text, generate a short fallback by trimming to the first meaningful sentence or phrase cluster and removing redundant boilerplate. Never invent content beyond the source text; the fallback is a shortened explanation, not a rewrite.

Alternative considered: generating a completely synthetic summary from metadata. Rejected because it risks producing false or invented copy and makes the feature harder to validate.

### Validate readiness before rendering
A creation-service response should reject or repair missing or empty summary fields before the client renders the feat detail pane. The check should be cheap and deterministic: every feat in the catalog must have a non-empty summary string at the payload boundary.

Alternative considered: letting the UI silently render empty text. Rejected because the UI contract is already explicit that the detail pane should show a readable, original summary.

## Risks / Trade-offs

- [Missing or inconsistent source text] → Require a fallback from the longer description and fail validation if no source text exists at all.
- [Generated summaries become too long or too generic] → Keep the fallback deliberately short and source-derived, and verify with representative catalog entries.
- [Client drift from service payload] → Keep the summary field in the package response contract and treat it as required data, not optional UI-only enrichment.

## Migration Plan

1. Identify supported D&D 3.5 feats with either a short summary or a longer description source.
2. Add summary-generation logic in the package or creation-service path, with strict fallback handling.
3. Verify the response payload contains a non-empty summary for each feat and that the detail pane uses it without breaking prerequisite evaluation.
4. Run the existing feat-picker verification and WebGL build checks to confirm the richer summary text does not regress selection behavior.

## Open Questions

- None at the planning level; the fallback rule and data contract are explicit enough to proceed to implementation.
