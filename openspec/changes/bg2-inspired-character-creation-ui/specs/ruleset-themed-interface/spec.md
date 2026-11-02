# Spec Delta

## ADDED Requirements

### Requirement: Ruleset themes complement the shared creation visual system
The character-creation interface SHALL apply a shared visual framework while retaining the selected ruleset's validated theme colors and available assets as visible accents. Theme typography and colors SHALL NOT reduce text legibility or obscure interactive states on any supported viewport size.

#### Scenario: D&D 3.5 theme appears in the shared interface
- **WHEN** a user creates a D&D 3.5 character
- **THEN** the shared fantasy-RPG interface retains the D&D 3.5 theme's available colors and assets as accents while preserving readable text and controls

#### Scenario: Dark Heresy theme appears in the shared interface
- **WHEN** a user creates a Dark Heresy character
- **THEN** the shared fantasy-RPG interface retains the Dark Heresy theme's available colors and assets as accents while preserving readable text and controls

#### Scenario: Theme font is decorative or unavailable
- **WHEN** a ruleset display font is decorative or its asset is unavailable
- **THEN** the interface confines the decorative font to display roles or uses a readable fallback without blocking character creation
