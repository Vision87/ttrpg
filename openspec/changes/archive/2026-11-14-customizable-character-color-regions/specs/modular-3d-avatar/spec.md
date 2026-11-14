# Spec Delta

## ADDED Requirements

### Requirement: Isolated semantic appearance tinting
The avatar renderer SHALL apply appearance colors to semantic mesh regions independently from the palette colors used to texture those regions. A selected color SHALL affect only its assigned skin, hair, upper-clothing, trouser, accent, or iris region, including when unrelated parts share the same palette color. The assembled avatar SHALL continue to use its shared palette material.

#### Scenario: Shared palette color does not couple region tints
- **WHEN** a clothing accent and an unrelated prop use the same palette color
- **THEN** changing the accent color affects the clothing accent only and leaves the prop's color unchanged.

#### Scenario: Clothing regions are tinted independently
- **WHEN** the avatar recipe supplies different upper-clothing, trouser, and accent colors
- **THEN** each assigned mesh region displays its respective color without changing the other clothing regions.

### Requirement: Independently tintable eye irises
The avatar SHALL render a distinct iris region within each eye. The eye-color setting SHALL tint only the irises while preserving the eye whites and pupils in their fixed colors.

#### Scenario: Iris tint preserves eye whites and pupils
- **WHEN** an eye-color setting is applied to the avatar
- **THEN** both irises display the selected color while the eye whites remain white and the pupils remain black.

### Requirement: Race-choice appearance palette in model recipe
The model recipe SHALL preserve the full selected race choice separately from `race_profile`, which MAY continue to identify shared geometry and proportion profiles. It SHALL include the active choice's allowed skin, hair, and iris colors. The avatar preview SHALL apply saved colors for these regions only when they are present in the active choice's allowed options.

#### Scenario: Subrace palette is distinct from its shared geometry profile
- **WHEN** a draft selects a subrace that shares geometry with its base race
- **THEN** the recipe retains the base `race_profile` for geometry and identifies the full subrace choice and its allowed skin, hair, and iris colors for customization.
