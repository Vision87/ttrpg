# Tasks

## 1. Full-screen composer and candidate flow

- [x] 1.1 Add a full-screen portrait composer opened by the existing Generate portrait action; move the description and service/data disclosure into it, and verify opening does not submit a request and closing before submission returns to appearance configuration.
- [x] 1.2 Keep the overlay visible through save, generation progress, and errors; transition to a full-screen aspect-fit preview after success and allow a pending candidate to be reviewed after draft resume, verifying the selected portrait remains unchanged until applied.

## 2. Shared generated-portrait storage

- [x] 2.1 Store every resolved candidate in the shared local library on both Use and Discard; verify Use updates the current draft reference while Discard preserves it and both retain image and provenance.
- [x] 2.2 Expose the shared asset list in draft data and serve images from a stable global route; verify assets can be read and selected across drafts and invalid references are rejected.
- [x] 2.3 Import previously applied per-draft generated portraits into the library idempotently; verify stable references and provenance survive restart without duplicating assets, while deleted historical discarded images remain unavailable.

## 3. Portrait picker integration

- [x] 3.1 Add a distinct Generated section to the existing portrait picker with generated thumbnails and provenance; verify generated assets remain distinguishable from bundled packs and adapt to the existing grid layout.
- [x] 3.2 Allow any draft to select a generated library asset by stable reference and load its image; verify the selected image and provenance restore when the draft is reopened.

## 4. Responsive resolution and verification

- [x] 4.1 Add guarded right-to-apply and left-to-discard touch gestures with visible directional guidance and no mobile Use/Discard buttons; retain desktop Use/Discard controls and verify gestures only resolve a loaded candidate preview.
- [x] 4.2 Update Unity client contract and portrait-service tests for the modal flow, shared library, migration, and responsive selection; verify the focused test suites pass.
- [x] 4.3 Build the Unity WebGL client and verify the composer, progress, portrait grid, and candidate resolution on a narrow touch viewport and a wider desktop viewport.
