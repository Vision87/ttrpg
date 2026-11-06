# Design

## Context

The Unity WebGL client draws character creation with IMGUI. `CharacterCreationClient.OnGUI` already routes the portrait picker through a full-screen overlay before drawing the normal screen. Portrait description, service/data disclosure, and the candidate's small preview currently live inline in `DrawPortraitField`; Generate saves appearance fields and calls the existing candidate API. While a request is active, the normal editing shell is replaced by a global progress view.

The Unity client currently receives bundled portrait packs in each draft response. Generated candidates and applied portraits are stored separately beneath the owning draft, and discarding a candidate deletes its image. See `proposal.md` for motivation and `specs/character-creation/spec.md` for the behavior contract.

## Goals / Non-Goals

**Goals:**
- Keep the composer, progress, and candidate preview in one full-screen overlay.
- Reuse existing draft-save, generation, apply, and discard behavior.
- Provide gesture-only candidate resolution in the mobile layout and explicit actions in wider layouts.
- Make resolved generated images reusable across drafts in the same local data directory.

**Non-Goals:**
- Change prompt construction, provider configuration, or the generation request shape.
- Recover discarded candidate images that were deleted before the shared library exists.
- Add library deletion or synchronization between data directories.

## Decisions

### Use a modal state flow over the existing full-screen overlay pattern

Represent the generation experience as closed, composer, progress, and candidate-preview states. The existing Generate portrait action opens the composer; it does not start a request. The composer owns the existing description and disclosure UI and has its own Generate action. Submitting reuses the current coroutine so appearance fields are saved before the service request. Route the overlay before the global request-in-progress rendering so it remains visible during saving and generation. On failure, return to the composer with the actionable error and allow retry or close.

An inline expansion would keep the existing small preview and busy-screen behavior, so it would not provide a stable full-screen experience. A separate service workflow is unnecessary because the current endpoints already return and resolve candidates.

### Keep candidate resolution tied to the existing lifecycle

After generation succeeds and the image is loaded, transition to a preview that fits the image within the available full-screen area without cropping. Keep the candidate pending and the selected portrait unchanged until resolution. On wider layouts, retain Use and Discard controls. In the mobile layout, show directional guidance and recognize horizontal touch swipes only while the candidate preview is active: right applies, left discards. Both outcomes close the overlay. There is no dismiss-only exit from this mobile preview, as requested.

Use the existing `UiLayout.MdMax` breakpoint (980 px) to select the mobile presentation rather than adding a new breakpoint. Require a deliberate horizontal displacement, greater than vertical movement, before resolving a candidate; ignore gestures during image loading and while a request is active. This reduces accidental decisions and avoids interpreting vertical movement as a candidate action.

### Store resolved generated images in a shared local library

Add a library area beneath the existing generated-portrait data root, separate from per-draft pending candidates and legacy applied files. Resolving a candidate copies its validated image and provenance into this library before clearing the pending candidate. Use also assigns the library's stable reference to the current draft; Discard leaves the draft's selection unchanged but retains the library asset. The draft response exposes the shared asset list, and each asset uses a global image route so a different draft can select and render it without copying it into that draft.

The portrait picker renders generated assets in a distinct Generated section, separate from bundled packs, and selecting one writes its stable generated reference through the existing portrait field update. Keep provenance attached to the asset and do not assign bundled-pack source or license metadata.

Import existing per-draft applied images into the library idempotently, preserving their references and provenance. Keep the original files intact during import. Discarded images deleted by older versions cannot be recovered and are not represented. A separate global library is preferred over scanning draft folders on each image request because it provides stable, draft-independent asset lookup and a single list for the picker.

### Preserve selection and recovery behavior

Only the existing apply action changes the current draft's portrait. Both apply and discard retain the resolved image in the library; discard leaves the prior selection intact. A generation or image-loading failure stays in the overlay, reports an actionable error, and does not change the selected portrait. Closing the composer before submission returns to appearance configuration without making a request.

## Risks / Trade-offs

- **A busy-state branch could hide the overlay** -> draw the active generation overlay before the normal request-in-progress screen path.
- **A short or diagonal touch could resolve the candidate unintentionally** -> use a horizontal-distance threshold and require horizontal movement to dominate; accept gestures only in candidate-preview state.
- **Gesture-only mobile controls are less discoverable and less accessible than buttons** -> display prominent right/left labels and arrows. Mobile Use/Discard buttons remain omitted to honor the requested interaction.
- **The composer can be constrained by a small viewport or on-screen keyboard** -> size content from the available viewport and keep the composer content scrollable without moving the fixed primary action out of reach.
- **The shared library grows as users keep generated images** -> keep image files local and separate from bundled assets; library deletion and retention policies are outside this change.
- **Legacy applied portraits are duplicated during migration** -> import by stable reference and make indexing idempotent while leaving original draft files intact.

## Migration Plan

On first library enumeration, idempotently copy existing applied generated portraits from draft-scoped storage into the shared library while preserving stable references and provenance. Do not remove legacy files. Future Use and Discard actions store resolved candidates in the library. Existing bundled portrait references and pending candidates remain compatible; old discarded images that no longer exist cannot be imported.
