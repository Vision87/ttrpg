# Tasks

## 1. Package Economy and Catalog

- [x] 1.1 Extend package schema validation for currency, class/career wealth methods, item costs, detail fields, compatible slots, and optional local artwork; verify valid metadata loads and invalid or incomplete shop data produces actionable validation errors.
- [x] 1.2 Add rules-sourced D&D 3.5 starting-wealth/item metadata and clearly marked, package-configurable provisional Dark Heresy values; verify each package declares its currency, wealth methods, prices, equipment slots, and artwork references or relies on the fallback.

## 2. Authoritative Equipment State

- [x] 2.1 Implement service-side wealth-method selection and starting-budget calculation from the selected class or career; verify roll and average results use package rules and persist without client-side calculation.
- [x] 2.2 Persist owned item instances, equipped slots, selected wealth method, and remaining balance in drafts and finalized characters; verify save/resume restores state and legacy equipment choices migrate exactly once.
- [x] 2.3 Implement atomic purchase, equip, and unequip operations with affordability, ownership, and slot validation; verify rejected operations leave inventory and balance unchanged and successful equipment changes do not charge again.
- [x] 2.4 Expose the package catalog and authoritative economy/inventory state through the creation service and client DTOs; verify contract tests cover both rulesets and preserve existing creation-flow behavior.

## 3. Equipment Shop Interface

- [x] 3.1 Render the budget and wealth-method selector, package-driven item grid, costs, and hover/selected item details with a fallback for unavailable artwork; verify the same UI displays both catalogs and visibly warns when package values are provisional.
- [x] 3.2 Render compatible character equipment slots and the backpack beside the shop, with responsive stacking on narrow layouts; verify item movement updates the displayed inventory and budget without duplicate charges.

## 4. Integration Verification

- [x] 4.1 Run focused package, equipment, service, and client contract tests and build the WebGL client; verify both shopping flows, including insufficient funds, draft resume, missing-art fallback, and the provisional-data warning.
