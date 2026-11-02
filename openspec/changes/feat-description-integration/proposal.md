# Proposal

## Why

The D&D 3.5 feat browser already exposes names and prerequisite data, but the interaction still lacks a usable human-readable summary when a user inspects a feat. Some package data includes a concise description while other entries rely on a longer source text or a partial metadata field, which makes the feature inconsistent and harder to browse.

## What Changes

- Add a concise feat summary to the package-defined creation data for the D&D 3.5 feat catalog.
- Generate a short fallback description when a feat lacks a concise summary by deriving it from the longer available description text.
- Keep the summary separate from the authoritative prerequisite evaluation so the UI can inspect a feat without changing the draft selection state.
- Validate the creation-service response includes a non-empty summary for each supported feat before the client renders the detail pane.

## Capabilities

### New Capabilities
- None.

### Modified Capabilities
- `character-creation`: The searchable D&D 3.5 feat selection flow will require concise summaries and reliable fallback generation when package metadata does not already provide a short description.

## Impact

- D&D 3.5 feat package metadata and creation-service response payloads.
- Character-creation feat list/detail UI and validation checks.
- Existing feat-browser tests and any package-driven content generation paths that rely on the summary field being present and non-empty.
