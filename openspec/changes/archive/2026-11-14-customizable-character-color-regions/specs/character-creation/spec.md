# Spec Delta

## ADDED Requirements

### Requirement: Independent appearance color regions
The character creator SHALL let users choose colors independently for upper clothing, trousers, clothing accents, and eye irises in addition to the existing skin and hair colors. Changing one region's color SHALL update only that region in the preview. Eye whites and pupils SHALL remain fixed. The service SHALL validate and persist selected colors with the draft and restore them when the draft is resumed.

#### Scenario: Upper clothing and trousers use separate colors
- **WHEN** a user selects different colors for upper clothing and trousers
- **THEN** the preview shows each selected color on its corresponding clothing region without changing the other region, skin, hair, or accents.

#### Scenario: Clothing accents are independently colored
- **WHEN** a user selects a color for clothing accents
- **THEN** the preview applies it to clothing accents without recoloring upper clothing, trousers, or unrelated props.

#### Scenario: Eye iris color is customized
- **WHEN** a user selects an eye color
- **THEN** the preview applies it to the irises while eye whites and pupils retain their fixed colors.

#### Scenario: Color selections persist across draft resumption
- **WHEN** a user saves or resumes a draft with customized color regions
- **THEN** the service preserves and restores each region's selected color independently.

#### Scenario: Draft predates independent clothing and eye colors
- **WHEN** a user resumes a draft that has no saved trouser or iris color
- **THEN** the preview uses the existing saved skin, hair, clothing, and accent colors and uses palette defaults for the unconfigured trouser and iris regions.

#### Scenario: Existing client omits the new color fields
- **WHEN** a client submits the established skin, hair, clothing, and accent color fields without trouser or iris fields
- **THEN** the service accepts the request and does not erase any already-saved trouser or iris colors.

### Requirement: Race-specific skin, hair, and iris palettes
The character creator SHALL provide a dedicated set of skin, hair, and iris color options for every selectable base race and subrace. The creator SHALL show only the options for the full selected race choice, and the service SHALL reject any submitted skin, hair, or iris color that is not in that choice's palette. The service SHALL persist these colors independently by full race choice and restore them when that choice is selected again.

#### Scenario: Race choice filters appearance color options
- **WHEN** a user selects a base race or subrace
- **THEN** the creator shows only that exact choice's skin, hair, and iris options.

#### Scenario: Appearance colors are restored for a race choice
- **WHEN** a user customizes skin, hair, or iris colors for one race choice, selects another choice, and later returns
- **THEN** the first choice's saved colors are restored without affecting the second choice's colors.

#### Scenario: API rejects a color outside the active race palette
- **WHEN** a client submits a skin, hair, or iris color that is not available for the active race choice
- **THEN** the service rejects the update and does not persist the unavailable color.

#### Scenario: Legacy colors migrate to the active race choice
- **WHEN** a draft has shared or base-profile appearance colors but no values for the active full race choice
- **THEN** the service migrates only colors allowed by that choice's palette, and does not apply legacy colors that are unavailable for it.
