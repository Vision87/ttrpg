# Tasks

## 1. SRD Catalog Inventory and Data

- [x] 1.1 Establish a checked-in expected inventory of purchasable D&D 3.5 SRD equipment and magic-item entries, with stable IDs and documented inclusion rules; verify the inventory can detect a missing or unexpected catalog entry.
- [x] 1.2 Populate the D&D 3.5 package with every expected entry, its cost, relevant structured rules details, concise original description, and item-level source reference; verify required item fields and provenance through package validation.
- [x] 1.3 Represent D&D 3.5 prices and wealth as integer copper-piece units and format displayed values as gp/sp/cp; verify conversion boundaries and existing-character purchasing power.
- [x] 1.4 Allow catalog entries with no equipment slots to remain purchasable in the backpack and reject equipping them; verify schema, service, and client behavior for a carried-only item.

## 2. Item Artwork

- [x] 2.1 Add an item-specific local icon reference for catalog entries and verify valid references resolve through the existing shop renderer while unavailable artwork uses the visible fallback.
- [x] 2.2 Create and register original local icons in prioritized catalog batches without blocking entries that still use the fallback; verify representative weapon, armor, gear, and magic-item cards show their individual icons.

## 3. Catalog and Shop Verification

- [x] 3.1 Add focused tests that compare the package catalog with the complete expected SRD inventory and verify representative costs, descriptions, rules details, and source references.
- [x] 3.2 Run focused package-schema, equipment-shop, and client contract tests and verify the expanded catalog remains browseable, purchasable, and loadable with mixed icon and fallback coverage.
