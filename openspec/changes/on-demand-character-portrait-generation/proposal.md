# Proposal

## Why

Character creators can select bundled portraits but cannot request an image tailored to their character and personal description. On-demand portrait generation would let users create a candidate that reflects the character's visual identity while preserving their existing portrait until they choose to use it.

## What Changes

- Add a description field and an explicit **Generate portrait** action beside **Choose portrait** in appearance configuration.
- Combine the user's description with visual-only details from the active character draft, such as race or species, class, and selected gear. Do not send unrelated mechanics such as ability scores or skill ranks.
- Generate through the local Python service using ComfyUI for image output and optionally Ollama for prompt refinement. Keep service configuration outside the Unity WebGL client and do not generate until the user requests it.
- Before submission, identify ComfyUI and whether Ollama prompt refinement is enabled, and disclose which character details will be sent to each configured service.
- Show the generated image as a preview with **Use** and **Discard** actions. Preserve the current portrait until the user applies the candidate.
- Store applied generated images in local application data with a stable draft reference and available generation provenance. Keep generated images separate from bundled portrait packs and their source/license declarations.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: Add user-requested portrait generation from a description and visual character-draft context, with preview, explicit application, and resumable generated-portrait references.

## Impact

- Unity character-creation UI and DTOs, especially `CharacterCreationClient.cs` and `SessionDtos.cs`.
- The local Python creation service and draft storage in `clients/creation_service.py` and `character/store.py`.
- Local WebGL service routing for generated-image previews and retrieval in `tools/serve_webgl.py`.
- Creation-service and Unity client contract tests.
- A ComfyUI workflow adapter and optional Ollama prompt-refinement integration are required. The selected ComfyUI workflow/checkpoint and Ollama model remain local runtime configuration.
