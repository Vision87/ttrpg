# Proposal

## Why

The ability-score step spends substantial vertical space on individual roll buttons, making score entry and comparison less compact. A dice-only control beside each score input and a clearly grouped action for rolling the whole score set will make rolling faster to scan while keeping the package-driven behavior intact.

## What Changes

- Place each declared individual roll control beside its numeric score input and represent it with a dice SVG icon rather than a text button.
- Place each available package-declared full-score-group roll or reroll action directly below “Save draft and exit” on the ability-score step.
- Keep roll permissions, reroll policies, generated values, dice results, and history governed by the active package and authoritative service.
- Keep readable accessible labels or tooltips for icon-only controls and retain the existing visual style and theme accents.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: Specify compact placement and accessible presentation of individual and full-set score rolling controls.

## Impact

- **Client:** `UnityClient/Assets/Scripts/CharacterCreationClient.cs`, `CreationIcons.cs`, and a new locally loaded dice icon asset compatible with the current Unity resource pipeline.
- **Tests:** Unity client contract tests for icon-based individual roll controls, full-set action placement, and preserved package-driven visibility.
- **Unaffected:** Score generation, package metadata, service endpoints, reroll rules, draft persistence, and roll history.
