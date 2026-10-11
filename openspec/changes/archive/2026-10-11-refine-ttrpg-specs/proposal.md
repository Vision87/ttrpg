# Proposal

## Why

The current TTRPG planning work is fragmented across multiple overlapping change streams, and the project now risks repeating the same concepts in several places without establishing a single platform model. The missing architectural clarity makes it harder to see which parts are already covered, which are duplicated, and which critical capabilities are still absent before implementation begins.

## What Changes

- Consolidate the platform vision around one coherent TTRPG domain model spanning rules, characters, campaigns, sessions, assets, and authored content.
- Remove duplicate or overlapping requirement language by defining clear capability boundaries between rules evaluation, session runtime, character creation, presentation, and content ingestion.
- Explicitly identify missing but necessary platform capabilities, including campaign lifecycle management, content authoring validation, persistence, and migration tooling.
- Establish a completeness gate so the platform is considered ready only when all major layers are covered and traceable.

## Capabilities

### New Capabilities
- `ttrpg-platform-foundation`: Defines the common domain model, layer boundaries, and required completeness checks for the TTRPG platform so duplicate concepts are reduced and missing work is surfaced early.

### Modified Capabilities
- None

## Impact

- Planning artifacts and future implementation tasks for the TTRPG platform.
- Shared understanding across ruleset, character, session, asset, and content authoring workstreams.
- Better scoping for follow-on implementation by making duplicated requirements and missing capabilities explicit before coding begins.
