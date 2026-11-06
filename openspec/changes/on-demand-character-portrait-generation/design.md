# Design

## Context

The Unity client renders package-defined creation steps and sends JSON requests to the local Python service. `CharacterCreationApplication` owns draft state, while `CharacterStore` writes drafts beneath the configured data directory. Portrait selection currently stores a bundled asset reference in the draft; portrait images themselves are loaded from Unity resources. The WebGL service routes `/api/` requests through a JSON-only handler with a 1 MiB request-body limit. There is no image-generation integration.

See `proposal.md` for motivation and `specs/character-creation/spec.md` for the required behavior.

## Goals / Non-Goals

**Goals:**
- Keep generation, prompt assembly, provider configuration, and credentials on the Python service side.
- Reuse the authoritative saved draft to build a tightly allowlisted visual prompt.
- Keep preview state separate from the selected portrait until the user applies it.
- Persist applied images and their provenance in local application data without changing bundled portrait collections.

**Non-Goals:**
- Mandate a specific ComfyUI checkpoint/workflow or Ollama model.
- Add generated images to version-controlled content or bundled portrait packs.
- Generate tokens, full character sheets, or other image types.
- Automatically regenerate portraits when character choices change.

## Decisions

### Use ComfyUI for image output and optionally Ollama for prompt refinement

Add a ComfyUI workflow adapter consumed by `CharacterCreationApplication`. The local service submits the configured workflow and prompt to ComfyUI, waits for completion, and retrieves the generated image. Service endpoints, workflow, and model selection are local runtime configuration, not Unity client data. Tests use a deterministic fake ComfyUI adapter. If ComfyUI is unavailable or misconfigured, the service returns a clear error rather than a success-shaped placeholder.

When configured, Ollama may refine the generated prompt using the user's description and allowlisted visual details. If Ollama is unavailable or not configured, use a deterministic prompt assembled by the Python service and continue. The client sends only the draft identifier and description, not a serialized character record, provider prompt, or service configuration. The service loads the saved draft and resolves display labels from the active package.

### Build prompts from an explicit visual allowlist

Before generation, the client saves its current appearance-step edits so the service sees the latest draft. The service combines the user's description with visual fields such as race or species, class, selected gear, and presentation choices. It excludes mechanics such as ability scores, skill ranks, and other unrelated draft data rather than serializing the full draft.

The UI identifies ComfyUI and whether Ollama refinement is enabled, and explains that the description and selected visual details will be sent to the configured local service or services before the user submits a generation request. Generation remains opt-in per request.

### Separate candidates from applied portraits

Generation creates a draft-scoped candidate in local application data. The response returns a candidate reference and metadata; the Unity client retrieves image bytes through a dedicated, draft-scoped image route rather than embedding base64 image data in JSON. This avoids large JSON payloads and respects the service's request-size limit.

The preview does not update the character's portrait field. **Use** promotes the candidate to a stable generated-portrait reference and updates the existing presentation field; **Discard** removes the candidate and leaves the existing portrait unchanged. Applied image files and metadata remain under the configured data directory and are restored by reference when the draft is resumed.

### Keep generated assets distinct and traceable

Store generated images outside the bundled portrait-pack directories. Persist the ComfyUI workflow and image model identifiers, any Ollama model used, creation time, user description, and any source or usage terms available from the configured models alongside the image. Do not assign bundled collection, attribution, or license metadata to generated output. If terms are unavailable, record that they were not supplied rather than inferring a license.

### Preserve existing draft compatibility

Treat generated portrait metadata as additive optional draft data. Existing draft records continue to load without migration, and selecting a bundled portrait continues to use the current stable reference path. A generation failure must not change the selected portrait or character mechanics.

## Risks / Trade-offs

- **Configured services may run on another host and receive user text and visual character details** -> disclose the configured service destinations and data sent before generation; send only the visual allowlist and only after explicit user action.
- **ComfyUI may be slow, busy, or unavailable** -> make requests explicit, show progress, prevent duplicate in-flight requests, and surface errors without replacing the current portrait.
- **Model and workflow usage terms vary or omit license details** -> preserve available model/workflow/source/usage metadata and never claim the bundled portrait-pack license applies.
- **Generated files can consume local storage** -> delete discarded candidates immediately and keep applied outputs scoped to the owning draft.
- **Image responses can be large or malformed** -> validate response type and size in the service and retrieve image bytes through a constrained local route, not JSON/base64.

## Migration Plan

No existing draft migration is required. New draft fields and generated-image files are additive under the configured local data directory. If the feature is rolled back, retain those files and draft data; older clients may use their existing fallback for generated references, while bundled portrait references continue to work unchanged.
