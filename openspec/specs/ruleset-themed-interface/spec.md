# Ruleset-Themed Interface Specification

## Purpose

Applies a role-playing game's visual identity across character creation and board presentation using safe, package-provided theme settings. It keeps application themes distinct from each character's individual appearance and presentation.

## Requirements

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

### Requirement: Theme-compatible creation UI icons
The system SHALL provide local, theme-compatible icon assets for character-creation step identity and common creation actions. Icons SHALL be installed application or package-referenced assets that follow the same safety rules as other theme assets: no package-provided code execution and no unrestricted external style or network fetch for icon loading during creation. When a specific icon asset is unavailable, the client SHALL fall back to a visible text or neutral glyph treatment without blocking the creation flow.

#### Scenario: Step progress shows icons when assets are present
- **WHEN** the character-creation progress control is shown and step icon assets are available
- **THEN** each package-declared step is identifiable with its icon in addition to or instead of long labels according to the active layout density

#### Scenario: Action icons appear on common controls
- **WHEN** the creation UI shows common actions that have icon assets (for example continue, save draft, buy, equip)
- **THEN** those controls may include the corresponding icon while remaining understandable if the label is shortened on compact layouts

#### Scenario: Missing icon does not block creation
- **WHEN** a referenced creation UI icon asset is unavailable
- **THEN** the client uses a visible text or neutral fallback for that control or step and continues to allow character creation

### Requirement: Density-scaled themed controls
When a ruleset theme supplies control surface assets or text tokens for character creation, the client SHALL apply those theme colors and surfaces to density-scaled control roles rather than stretching a single control chrome across the full content width with unscaled type. Theme application on compact layouts SHALL preserve readability of labels and SHALL NOT require a different ruleset theme profile solely to support mobile density.

#### Scenario: Themed primary control on a compact layout
- **WHEN** a themed ruleset is active and the user views a primary creation action at a narrow breakpoint
- **THEN** the control uses the ruleset theme surfaces and text tokens at the compact density size without rendering as an oversized thin full-width bar with disproportionately small type

#### Scenario: Theme still applies after density change
- **WHEN** the viewport crosses a density breakpoint under an active ruleset theme
- **THEN** themed colors and control surfaces remain applied at the new density without resetting to an unthemed default unless theme assets are missing
