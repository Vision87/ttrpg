# Design

## Context

Both supported packages already expose an equipment creation step and item definitions, but the D&D catalog currently has one item and the Dark Heresy catalog has three. These definitions do not declare purchase prices, item descriptions, artwork, or equip slots, and package fields do not yet declare an economy. The service currently presents item choices as ordinary definition-backed options, while `EquipmentState` is a separate rules model and is not integrated with creation drafts. See proposal.md and the spec delta for the requested experience.

## Goals / Non-Goals

**Goals:**
- Keep economy, currency, item facts, and compatible slots in validated ruleset package data.
- Keep purchase and equipment mutations authoritative in the service and persist them in drafts and character records.
- Use the same equipment-step UI for both supported games while reflecting their distinct currencies, wealth rules, and item metadata.
- Reuse registered local artwork when present and keep the shop usable with a visible fallback when it is absent.

**Non-Goals:**
- Converting between currencies, selling or trading gear, or implementing multiplayer marketplaces.
- Fetching item artwork from arbitrary remote URLs.
- Replacing character appearance presentation with the equipment silhouette/loadout panel.

## Decisions

- **Declare each ruleset's economy and wealth methods in package metadata.** Declare its currency display and class/career-based starting-wealth options, including supported roll and average methods. The service resolves the selected class/career and performs any roll; the client does not hard-code game formulas. Let a player choose once before shopping and persist that choice and result. Record data provenance/status with package data. D&D 3.5 values must be based on accessible rules references; Dark Heresy 1st-edition starting-wealth and item-price values may initially be package-configurable provisional examples, visibly labeled as unverified in the client. Alternatives considered: one global gold formula, which is incorrect for Dark Heresy, or client-side dice, which would not be authoritative or reproducible.
- **Enrich package item definitions and validate them as data.** Provide each shop item a display name, positive cost in package currency, description/rules details, compatible slot metadata, and an optional local asset reference. Validate slot/economy references and use the existing asset registry rules; show a built-in neutral icon when artwork is absent or unresolved. This keeps catalogs extensible without embedding D&D- or Dark Heresy-specific item logic in Unity.
- **Persist owned item instances separately from definition choices.** Store each purchased item instance with its definition ID and either backpack state or an equipped slot, alongside starting wealth, selected method, and remaining balance. Process purchase/equip/unequip as service-side operations that validate package definitions, affordability, ownership, and slot compatibility before saving. Alternatives considered: treating the equipment category as a set of choice IDs, which cannot represent repeated purchases, quantities, or where individual copies are equipped.
- **Migrate existing template equipment idempotently.** Convert existing `choices.equipment` entries into owned equipment instances when a draft first enters the new equipment flow, counting their package prices once against the selected starting budget. Preserve template items rather than silently dropping them or granting free duplicate purchases. Keep the original choices as provenance if other consumers rely on them.
- **Arrange the Unity view around shopping and loadout.** Put the currency/method summary above a responsive two-column view: item-card grid on the left, and a character equipment-slot presentation above the backpack grid on the right. Card hover shows item details; selecting a card also exposes those details for non-hover input. On narrow viewports, stack these panels within the existing scrollable creator.

## Risks / Trade-offs

- [Package data has a missing or invalid cost, currency, slot, or wealth rule] → Reject invalid package metadata during package validation and provide an actionable package/field error instead of offering unpriced purchases.
- [Dark Heresy placeholder values are mistaken for canonical rules] → Keep the provisional status in package data and show a persistent, visible warning wherever the shop displays or uses those values.
- [A purchase, equipment change, and balance update diverge] → Apply each action atomically in the service and test failed operations leave the entire draft unchanged.
- [Existing template gear is charged twice after reopening a draft] → Record migration completion and inventory instances in the draft; verify repeated load/save cycles are idempotent.
- [Local artwork is unavailable or cannot be resolved] → Use the built-in item placeholder and keep the item purchasable.
- [The item catalog expands substantially] → Keep the card grid and backpack scrollable and adapt the two-column view to a stacked layout on narrow screens.

## Migration Plan

Add package economy and item metadata before enabling shopping. On first equipment access, migrate legacy equipment choices into owned instances once; preserve current draft records and template selections. No external database migration is required. Rollback can disable shop operations and render the existing equipment choices while retaining the additive inventory fields for forward recovery.
