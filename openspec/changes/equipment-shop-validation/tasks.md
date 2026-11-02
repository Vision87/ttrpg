# Tasks

## 1. Package Equipment Rules

- [x] 1.1 Extend equipment package validation for the encumbrance rule, weight units, item weights and optional proficiency requirements; verify missing, malformed, and unsupported values produce field-specific errors.
- [x] 1.2 Add D&D 3.5 carrying-capacity and proficiency metadata and provisional Dark Heresy capacity, item weights, and career proficiencies; verify both packages load and retain their correct data-status warnings.

## 2. Authoritative Workflow

- [x] 2.1 Enforce weight capacity, proficiency, characteristics, slots, and hand constraints in equipment mutations and review; verify rejected operations are atomic and review blocks invalid persisted equipment.
- [x] 2.2 Recalculate the selected wealth method when the resolved class or career changes, preserve inventory and update remaining wealth; verify reselecting the same definition does not reroll and over-budget state blocks finalization.

## 3. Regression Verification

- [x] 3.1 Add focused schema, service, and draft-resume tests for the new package rules and wealth synchronization; run all equipment, rules-schema, creation-service, and client-contract test modules.
