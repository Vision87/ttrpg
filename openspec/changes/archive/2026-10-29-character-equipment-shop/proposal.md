# Proposal

## Why

The current equipment step is a plain list of choices: item definitions lack the economy and presentation data needed to shop, and the creator does not provide a usable budget, equipped loadout, or backpack view. A package-driven equipment shop will let players plan purchases and organize their character's gear while preserving each game's own item rules and currency.

## What Changes

- Add ruleset-specific item catalog data for cost, currency, description, equipment slot, and local artwork reference, with a clear fallback when artwork is unavailable.
- Show class- or career-based starting wealth and let the player choose the package-supported rolled amount or class/career average.
- Present available items as a visual grid with image, name, and cost; show additional item details on hover.
- Show an equipment/loadout panel with compatible character slots and a backpack grid for purchased but unequipped items.
- Deduct purchases from the correct ruleset budget, prevent purchases the character cannot afford, and preserve purchased/equipped inventory in the draft and finalized character.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `universal-character-builder`: Expand ruleset-validated equipment management to cover class/career-based starting wealth, package-specific shopping catalogs, purchases, item detail previews, equipment slots, and backpack inventory.

## Impact

- D&D 3.5 and Dark Heresy package item, currency, starting-wealth, and equipment-slot metadata.
- Python ruleset validation, creation service, draft persistence, and final character records.
- Unity equipment-step UI, item artwork/resource handling, and service DTOs.
- Equipment and package schema, creation service, client contract, persistence, and WebGL build tests.
