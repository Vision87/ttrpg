# Spec Delta

## MODIFIED Requirements

### Requirement: Applying a ruleset-provided interface theme
The system SHALL apply the selected ruleset package's validated default theme consistently to character creation and board presentation. Theme settings SHALL support declarative colors and locally installed visual assets for interface surfaces and board framing, and SHALL NOT execute package-provided code or fetch unrestricted external styles. Theme decoration SHALL preserve readable controls and gameplay, and SHALL NOT change a play surface's rules or character-specific appearance.

#### Scenario: Selecting a ruleset with a theme
- **WHEN** a user selects a ruleset package with a valid theme profile
- **THEN** the character-creation interface applies that theme and retains it for the board session launched with that ruleset

#### Scenario: Applying the D&D 3.5 wood-and-metal interface
- **WHEN** a user creates a character with the D&D 3.5 package
- **THEN** creation screens use the package's wood surfaces, restrained metal detailing, existing colors, and Cinzel typography while keeping text, choices, and controls legible

#### Scenario: Framing the board without decorating its play surface
- **WHEN** a board session uses the D&D 3.5 theme
- **THEN** wood-and-metal decoration frames the board interface while the tactical play surface and game pieces remain visually clear and distinguishable

#### Scenario: Leaving other rulesets unchanged
- **WHEN** a user selects a ruleset that does not declare the D&D 3.5 wood-and-metal assets
- **THEN** the D&D-specific decoration is not applied and that ruleset's own theme or the neutral default remains in use

#### Scenario: Entering the board with the selected theme
- **WHEN** a finalized character starts a board session using its recorded ruleset package versions
- **THEN** the board applies the same resolved ruleset theme used by character creation, independently of the character's individual appearance profile

#### Scenario: Package has no theme or references an unavailable theme asset
- **WHEN** the selected package provides no theme profile or a referenced theme asset is unavailable
- **THEN** the system uses the neutral application default for the missing theme or asset without blocking character creation or board play

#### Scenario: Theme profile contains unsupported or unsafe data
- **WHEN** a package theme contains an unsupported token, invalid token value, or executable or unrestricted external style reference
- **THEN** the system rejects or omits the invalid theme data with an actionable diagnostic and does not execute or fetch it
