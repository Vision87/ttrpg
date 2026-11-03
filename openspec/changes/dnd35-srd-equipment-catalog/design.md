# Design

## Context

The equipment shop already reads item definitions from the active package and renders name, cost, description, compatible slots, and an image fallback. Item definitions can carry an `image_asset` reference. The D&D 3.5 package currently has one item, and source references are package-level rather than specific to each catalog entry. See proposal.md and the spec delta for the intended catalog boundary.

## Goals / Non-Goals

**Goals:**
- Keep the catalog package-owned and data-driven, including structured rules details needed by the existing shop and loadout.
- Make completeness auditable against the D&D 3.5 SRD and preserve source attribution for each entry.
- Deliver item-specific artwork incrementally without blocking catalog availability or replacing the existing fallback.

**Non-Goals:**
- Importing entries that appear only in non-SRD Player's Handbook, Dungeon Master's Guide, or other manual content.
- Copying manual prose; descriptions will be concise original summaries.
- Fetching item artwork from remote URLs or changing the existing purchase, wealth, or loadout behavior.

## Decisions

- **Use the SRD as the catalog's completeness boundary.** Build an expected-entry inventory from the SRD's equipment and magic-item sections, then reconcile the package catalog against it. This is more verifiable than an undefined claim of including everything from "core manuals." Non-SRD-only entries remain out of scope rather than being inferred from names or partial rules data.
- **Include fixed-price purchasable entries, not random-generation machinery.** Treat specific and generic purchasable entries with a defined price as catalog items. Exclude random treasure-generation tables and standalone special-ability rows that require a base item and do not have a standalone price.
- **Keep rules facts in package definitions and distinguish them from display copy.** Retain the existing item definition model for cost, slots, weight, and structured rules fields. Add concise original descriptions and any additional data required for useful item details. Do not copy source prose into descriptions.
- **Track item-level provenance.** Add a source reference or stable source identifier to each entry so the item, cost, and displayed rules details can be checked against the SRD. Keep package-level references for shared rules such as currency and encumbrance.
- **Use integer copper-piece values for D&D 3.5 money.** SRD prices include gp, sp, and cp while the existing client assumes integer gp. Convert package costs and starting-wealth results to integer cp for arithmetic, then format user-visible amounts in gp/sp/cp. This avoids float rounding and preserves the SRD's exact prices; do not reinterpret Dark Heresy currency.
- **Allow catalog items without equip slots.** An empty compatible-slot list represents an item that can be purchased and carried but not equipped. Keep it in the existing backpack inventory and reject slot assignment; do not invent a catch-all accessory slot.
- **Reuse local item artwork references and fallback behavior.** Use the existing `image_asset` reference/resolution path for individual item icons. Add assets in catalog batches; a missing or unresolved icon continues to use the current visible fallback.
- **Validate completeness independently from catalog loading.** Tests should compare the package item IDs against a checked-in SRD-derived expected inventory and verify required cost, description, relevant details, provenance, and icon-reference behavior. This catches omissions that basic schema validation cannot detect.

## Risks / Trade-offs

- [The SRD tables contain variant, duplicate, or cross-referenced entries] → Define stable IDs and catalog inclusion rules in the expected inventory, and document excluded non-purchasable or duplicate references.
- [A cost or rule detail is entered incorrectly] → Keep item-level provenance and add focused checks for representative entries and the complete expected item set.
- [Backpack-only items accidentally become equippable] → Treat an empty slot list as an explicit non-equippable declaration and reject equip operations for those entries.
- [Currency conversion loses value or changes existing D&D wealth semantics] → Convert at the package/service boundary using integer copper, test cp/sp/gp boundaries, and retain exact persisted values.
- [Artwork production lags behind catalog coverage] → Keep items purchasable and use the existing fallback until individual local icons are added.
- [The enlarged catalog makes package data difficult to maintain] → Keep item data consistently structured and consider separating catalog data into a package-owned resource if the existing loader supports it cleanly.

## Migration Plan

Expand the D&D 3.5 package additively. Existing item IDs and saved equipment instances remain valid. Convert existing integer-gp item costs and wealth to integer copper at the package/service boundary so existing characters retain their exact purchasing power. Populate and validate the catalog before adding icon assets in batches; missing artwork continues to resolve to the existing fallback. No destructive persisted character migration is expected.
