# Design

## Context

The equipment workflow currently stores inventory and wealth in draft state. Equip operations validate slot compatibility, hand conflicts, and minimum characteristics, while the separate `EquipmentState` validator is not used by the creation workflow. Shop packages do not consistently declare item weights, capacity limits, or class/career equipment proficiencies. See proposal.md and the spec delta.

## Goals / Non-Goals

**Goals:**
- Keep item weights, proficiency requirements, character proficiency groups, and carrying-capacity rules package-owned and validated.
- Apply the same rules both when mutating equipment and when reviewing a draft, so old or later-invalidated state cannot bypass validation.
- Keep the selected wealth method and owned inventory when class/career selection changes, recomputing the budget from the new definition.

**Non-Goals:**
- Add an encumbrance UI or new character statistics beyond the package's declared capacity rule.
- Change shop prices, currency, wealth formulas, or provisional-data provenance except where package additions are needed for validation.
- Make Dark Heresy placeholder equipment facts canonical; keep the package's existing provisional status and warning.

## Decisions

- **Use an explicit package capacity rule and a common item weight field.** Require shop item weights and a package capacity rule with a declared weight unit. Resolve the character's capacity from its current abilities using the package rule. This is preferred over silently using `EquipmentState`'s default capacity, which is not ruleset-specific.
- **Resolve proficiency from the selected class or career definition.** Items that declare a proficiency group require that group to appear in the selected definition's package-provided proficiency groups. Items without a proficiency requirement remain usable without adding a fake default group.
- **Validate at both mutation and review boundaries.** Equip rejects a constraint violation before changing state. Review revalidates all owned/equipped items and reports errors, covering drafts whose abilities or class/career changed after equipping.
- **Recompute wealth only when the resolved wealth definition changes.** Keep the selected method and inventory; generate a new result for the new class/career and recalculate remaining wealth from item costs. Re-selecting the same class does not reroll. A negative balance is retained as a visible validation error rather than deleting purchases or preventing navigation.
- **Keep Dark Heresy additions provisional.** Add clearly labeled sample weights, capacity and proficiency metadata under the existing provisional package status; do not imply those values are rules-verified.

## Risks / Trade-offs

- [Package rules can be internally inconsistent] → Reject malformed capacity, weight, or proficiency metadata during package validation, and report actionable package paths.
- [Changing class/career can reduce the budget below existing spending] → Preserve inventory and expose the negative balance as a blocking review error so the user can resolve purchases without silent data loss.
- [Provisional Dark Heresy values may be mistaken for canonical rules] → Keep the existing persistent provisional warning and extend its scope to the added constraint data.

## Migration Plan

Enrich both checked-in equipment packages and validate their metadata before connecting the workflow. Existing saved drafts retain their equipment and wealth. Review revalidates them under current package data; drafts with invalid or over-budget equipment receive explicit issues and remain editable. No database migration or destructive inventory rewrite is required.
