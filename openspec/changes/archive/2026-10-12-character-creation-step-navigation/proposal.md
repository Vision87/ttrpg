# Proposal

## Why

Character creation currently exposes only a sequential “Save and continue” action, so users must move through every intervening step to revisit an earlier choice. A package-driven step navigator will make it quick to review or change any part of a draft without losing edits or weakening final validation.

## What Changes

- Show navigation controls for the ordered steps declared by the active ruleset package, including the current step.
- Allow direct navigation to any declared step, including unvisited steps, while saving the current step’s edits before changing the draft’s current step.
- Preserve draft values and the selected step when saving, exiting, and resuming; keep review/finalization validation authoritative and unchanged.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: Require direct navigation among package-defined creation steps while preserving edits and validation behavior.

## Impact

- Unity character-creation navigation and draft-save interactions.
- Python creation workflow/service support for selecting a validated package-defined step and persisting it.
- Character-creation service, workflow, and Unity client contract tests.
