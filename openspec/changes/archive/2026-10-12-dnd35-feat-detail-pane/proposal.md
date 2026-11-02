# Proposal

## Why

The D&D 3.5 feat picker shows feat names and prerequisite failures, but users cannot inspect a feat's description and complete requirements in a dedicated view before choosing it. Separating inspection from selection makes it easier to compare feats and understand unmet prerequisites without accidentally adding one to the character.

## What Changes

- Add a detail pane for the currently inspected feat with a concise, original description and its full prerequisite list.
- Show each prerequisite's current status, highlighting unmet requirements in red and clearly identifying requirements the application cannot verify.
- Separate browsing a feat from explicitly adding or removing it, while preserving search and eligible-only filtering behavior.

## Capabilities

### New Capabilities

### Modified Capabilities
- `character-creation`: Add an inspect-before-select feat detail experience with descriptions and per-prerequisite status.

## Impact

- D&D 3.5 package feat metadata and creation-flow response data.
- Unity character creation feat-picker layout and selection state.
- Character-creation specification and UI contract tests.
