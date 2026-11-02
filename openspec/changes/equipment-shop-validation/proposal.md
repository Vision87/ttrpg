# Proposal

## Why

The equipment shop persists purchases and checks slots, hands, and some characteristics, but its authoritative workflow does not enforce proficiency or encumbrance. Starting wealth can also remain bound to an earlier class or career after the player changes that selection, leaving the budget inconsistent with the character.

## What Changes

- Define and validate package-owned equipment weight, carrying-capacity, and proficiency rules, with Dark Heresy constraints explicitly provisional.
- Enforce package constraints when equipping items and during final review.
- Recalculate starting wealth when a selected class or career changes, preserving the selected wealth method and preventing stale balances.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `universal-character-builder`: require equipment constraints to be declared in package data, enforce them in the authoritative workflow and review, and keep class/career wealth synchronized.

## Impact

- Ruleset package schemas and D&D 3.5 / Dark Heresy item and class/career metadata.
- Creation workflow wealth selection, equipment operations, and review validation.
- Focused rules-schema, creation-service, and persistence tests.
