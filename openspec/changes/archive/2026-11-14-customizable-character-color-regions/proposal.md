# Proposal

## Why

The character preview currently applies one clothing tint to both upper clothing and trousers, while palette-index-based tinting can affect unrelated parts that share a swatch. The face has fixed white eyes and black pupils but no iris mesh or saved eye-color setting, preventing meaningful eye customization.

## What Changes

- Add independent upper-clothing, trouser, accent, and iris color controls to the character preview.
- Provide race- and subrace-specific skin, hair, and iris swatches, and preserve those color selections independently for each selected race choice.
- Keep eye whites and pupils fixed while allowing the iris color to change.
- Identify mesh regions independently from palette-atlas UVs so each selected color affects only its intended region without adding materials.
- Persist and restore the new colors with the draft and include them in the authoritative model recipe.
- Reject skin, hair, or iris colors that are not available for the active race choice.
- Preserve existing saved `cloths` and `secondary` colors as upper-clothing and accent colors.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: provide independently configurable upper-clothing, trouser, accent, and iris colors that update and persist with the character draft.
- `modular-3d-avatar`: identify colorable mesh regions independently from palette sampling and provide a separately tintable iris region.

## Impact

The change affects the Unity character-color UI, mesh construction, shared palette shader, model-recipe DTO and assembler, Python race-specific palette definitions, appearance-color validation and persistence, and their tests. The existing shared-material rendering approach remains in place.
