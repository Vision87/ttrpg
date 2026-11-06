# Proposal

## Why

Generated portraits currently share the scrolling appearance form with their description, disclosure, progress, and small candidate preview. A focused full-screen flow will make generation and image review clearer, especially on mobile, while keeping use of a candidate explicit.

## What Changes

- Open a full-screen portrait-generation composer from the existing Generate portrait action; require a second Generate action in the composer to submit.
- Keep the composer visible through generation progress, then show the candidate in a full-screen preview.
- On mobile, use right and left swipes to apply or discard the candidate without visible Use/Discard buttons; require one of those actions before leaving the candidate preview. Keep the buttons on wider layouts.
- Retain both applied and discarded generated images in a shared local generated-portrait library available across drafts, and expose them in a separate section of the portrait picker.
- Preserve the currently selected portrait unless the user applies the candidate; discarding leaves it unchanged but keeps the image available in the library.
- Include previously applied generated portraits in the library. Images from discarded candidates deleted before this feature are not recoverable.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: Define the full-screen generation composer and preview, including responsive resolution actions, and add a reusable local generated-portrait library available in the portrait picker.

## Impact

- Unity character-creation UI in `CharacterCreationClient.cs`.
- Unity portrait picker, client DTOs, and contract tests.
- Python generated-image storage and creation-service list/image routes.
- Existing applied generated portraits need an idempotent import into the shared library; previously discarded images already deleted by the service cannot be recovered.
