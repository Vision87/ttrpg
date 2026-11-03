# Proposal

## Why

Character creation currently exposes portrait as a text value, with no way to browse or preview portraits. A ruleset-aware portrait picker will let players choose a visual identity from artwork suited to their game while keeping that choice separate from mechanics.

## What Changes

- Replace the portrait text field with a full-screen, touch-friendly, searchable image grid that scrolls vertically and adapts its column count to the viewport.
- Apply a portrait immediately when its image is selected, while keeping source and license details inspectable on the selected portrait.
- Include an original portrait pack for each supported game/ruleset.
- Support optional, openly licensed portrait expansion packs that are automatically available when bundled with the client, with clear source and license metadata.
- Persist a stable, versioned portrait asset reference with the character and retain a usable fallback when artwork is unavailable.
- Keep portrait-pack discovery independent from gameplay rules dependencies.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: Add package-aware portrait selection and source/license disclosure to appearance configuration.
- `global-asset-library`: Define versioned portrait assets, provenance, and availability across base and expansion packs.

## Impact

- Unity character-creation appearance UI and local image loading.
- Portrait-pack metadata and artwork bundled with the client.
- Service discovery of portrait collections compatible with the selected ruleset.
- Character presentation asset references and their persistence.
- Focused UI, asset metadata, source/license, and draft-resume validation.
