# Tasks

## 1. Package Rolling Contract

- [x] 1.1 Extend creation-flow schema validation with bounded dice declarations, individual reroll policy, and explicit score-group metadata; verify valid and malformed field/group definitions with focused schema tests.
- [x] 1.2 Configure D&D 3.5 ability fields for 4d6 dropping the lowest die and declare their complete ability-score group with individual and full-set rerolls; verify package resolution and confirm Dark Heresy exposes no undeclared roll capability.

## 2. Authoritative Rolling and Persistence

- [x] 2.1 Implement service-side individual rolls and rerolls using declared field metadata; verify dice, discarded dice, score bounds, policy rejection, and provenance with deterministic service tests.
- [x] 2.2 Implement atomic full-group rolls and rerolls that replace all declared scores together; verify the full group changes on success and remains unchanged on invalid or failed generation.
- [x] 2.3 Persist individual and complete-set roll histories in drafts and finalized character provenance; verify save, resume, and finalization round trips without additional random rolls.
- [x] 2.4 Expose individual and group roll service operations using only declared field/group identifiers; verify undeclared operations and client-supplied score/dice values are rejected.

## 3. Unity Creator and Verification

- [x] 3.1 Add configuration-gated per-score and full-group roll/reroll controls to the Unity creator; require individual fields to be included in a declared score group, omit undeclared controls entirely, show dice and dropped results beside named scores, and preserve unrelated unsaved input; verify Unity contract coverage and a successful WebGL build.
- [x] 3.2 Verify the end-to-end D&D flow for roll-all, individual reroll, reroll-all, save, resume, and finalization, and verify games without rolling configuration show no roll controls and reject roll requests while retaining manual entry; run the project test suite and document the supported D&D method.
