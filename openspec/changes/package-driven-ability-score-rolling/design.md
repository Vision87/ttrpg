# Design

## Context

Character creation is described by ruleset package metadata. Numeric fields currently support direct entry, and the local Python service owns draft updates and JSON persistence; the Unity WebGL client renders the package flow. See `proposal.md` and the delta specs for required behavior.

## Goals / Non-Goals

**Goals:**
- Keep rolling rules package-driven and safely constrained to numeric fields.
- Support both individual rolls and atomic full-group rolls, with explicit, independent reroll policies.
- Make roll details and provenance survive draft resume and character finalization.
- Keep dice generation authoritative in the local service.

**Non-Goals:**
- Add point-buy, standard-array, or additional dice methods beyond the declared dice-count/sides/drop-lowest contract.
- Add reroll thresholds, reroll limits, online shared dice, or client-selected random seeds.
- Change Dark Heresy generation; it remains manual unless its package separately opts into a supported method.

## Decisions

1. **Declare roll parameters on numeric fields and full-set membership in a package score group.**
   Each roll-enabled numeric field declares dice count, die sides, number of lowest dice to discard, and whether individual rerolls are allowed. A score group names its member fields and whether the complete group may be rerolled. Package validation rejects unsupported bounds, group references to non-rollable or duplicate fields, and dice outcomes that cannot fit the field's declared range. This separates dice mechanics from UI code and lets the package distinguish per-field rerolls from a full-set reroll.

2. **Expose separate service operations for field and group rolls.**
   The individual operation accepts only a draft ID and declared field ID. A group operation accepts only a draft ID and declared group ID. Neither accepts client-supplied die results or final scores. The service uses its secure system random source and returns the field-keyed result details needed by the client.

3. **Apply full-set rolls atomically.**
   Generate and validate every member's result before mutating the draft. If any result or package reference is invalid, preserve all existing scores. A successful group roll replaces all current group values together; a group reroll is available only when its package policy permits it.

4. **Persist roll history as creation provenance.**
   Retain raw dice, discarded dice, calculated score, field identity, and whether the action rolled one field or a complete group. Keep full-set results associated as one historical event while preserving per-field histories for display. Draft resume must not consume randomness; finalized character provenance retains the same history. Old records without roll history load as having no recorded rolls.

5. **Render controls from package metadata in the existing generic creator.**
   Show per-field controls only for fields with roll declarations and group controls only for declared score groups. Keep direct score entry available. After a successful field roll, update that field; after a successful group roll, update all group fields from the response while preserving unrelated unsaved local inputs.
   Omitted rolling metadata means the control does not exist in the UI; do not render disabled placeholders or generic roll actions for games that do not opt in.

## Risks / Trade-offs

- [A package can describe a group with an incomplete or ambiguous set] → Validate group membership and unique field references at package load; reject the package with actionable diagnostics.
- [A failed full-set roll could leave a mixed old/new score array] → Generate and validate all members before changing any draft state, then persist the complete result.
- [Repeated rerolls can produce unusually high scores] → Make unlimited rerolls an explicit package policy rather than a client default; D&D 3.5 opts in as requested, while other packages remain unchanged unless they declare it.
- [Older drafts and characters have no roll provenance] → Treat the new history fields as optional and default absent history to empty.

## Migration Plan

The new package metadata and record fields are additive. Existing drafts and finalized characters remain readable without migration; packages without rolling metadata continue to expose manual entry only. Add the D&D 3.5 individual and score-group declarations, then deploy the service and Unity build together so the client controls and API operations are available from the same local version.
