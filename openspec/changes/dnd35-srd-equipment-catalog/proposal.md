# Proposal

## Why

The D&D 3.5 equipment shop currently exposes only a longsword, so players cannot meaningfully shop from the supported ruleset despite the shop already handling prices, item details, and artwork fallbacks. An exhaustive D&D 3.5 SRD catalog, including SRD magic items, will make the shop useful while keeping non-SRD manual content out of scope.

## What Changes

- Populate the D&D 3.5 package with the equipment and magic-item entries in the SRD, including their costs and relevant structured rules details.
- Provide concise original item descriptions and source provenance instead of copying manual passages.
- Store D&D 3.5 prices and budgets as integer copper pieces and display prices in gp/sp/cp denominations.
- Support purchasable backpack-only items that do not have an equipment slot, including carried magic-item types.
- Give each catalog item a path to its own local icon; add artwork incrementally and retain the existing visible fallback until an icon is available.
- Keep the catalog package-driven so the existing shop, purchase, loadout, and affordability behavior remains reusable.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `universal-character-builder`: Require the D&D 3.5 equipment shop to cover the SRD equipment and magic-item catalog, expose item details and provenance, and support item-specific local icons with a fallback while artwork is incomplete.

## Impact

- D&D 3.5 package item definitions, source metadata, and local item artwork.
- Equipment catalog validation and service/client item metadata as needed to support completeness, provenance, exact coin arithmetic, and per-item icons.
- Inventory/equip validation for items that can be carried but not equipped.
- Focused rules-package, equipment-shop, and client tests.
