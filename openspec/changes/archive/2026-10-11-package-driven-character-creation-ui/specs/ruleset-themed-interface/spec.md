# Spec Delta

## Purpose

Applies a role-playing game's visual identity across character creation and board presentation using safe, package-provided theme settings. It keeps application themes distinct from each character's individual appearance and presentation.

## ADDED Requirements

### Requirement: Applying a ruleset-provided interface theme
The system SHALL apply the selected ruleset package's validated default theme consistently to the character-creation interface and the board. Theme settings SHALL use supported declarative visual tokens and installed asset references, and SHALL NOT execute package-provided code or unrestricted external styles.

#### Scenario: Selecting a ruleset with a theme
- **WHEN** a user selects a ruleset package with a valid theme profile
- **THEN** the character-creation interface applies that theme and retains it for the board session launched with that ruleset

#### Scenario: Entering the board with the selected theme
- **WHEN** a finalized character starts a board session using its recorded ruleset package versions
- **THEN** the board applies the same resolved ruleset theme used by character creation, independently of the character's individual appearance profile

#### Scenario: Package has no theme or references an unavailable theme asset
- **WHEN** the selected package provides no theme profile or a referenced theme asset is unavailable
- **THEN** the system uses the neutral application default for the missing theme or asset without blocking character creation or board play

#### Scenario: Theme profile contains unsupported or unsafe data
- **WHEN** a package theme contains an unsupported token, invalid token value, or executable or unrestricted external style reference
- **THEN** the system rejects or omits the invalid theme data with an actionable diagnostic and does not execute or fetch it

### Requirement: Keep ruleset theme separate from character presentation
The system SHALL keep the ruleset's application theme separate from a character's portrait, token, model, tint, scale, and other presentation choices. Applying a ruleset theme SHALL NOT silently overwrite character-specific presentation settings.

#### Scenario: Theme is applied to a character with saved presentation
- **WHEN** a character with a saved presentation profile enters creation review or a board session under a themed ruleset
- **THEN** the application theme is applied to the interface while the saved character presentation remains unchanged and is rendered independently
