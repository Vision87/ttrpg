# Spec Delta

## MODIFIED Requirements

### Requirement: Appearance and presentation configuration
The system SHALL allow a character creator to configure identity, portrait, 2D token, 3D appearance, equipment visuals, animation style, sounds, and effects independently from the character's mechanical rules. Portrait selection SHALL use a full-screen, vertically scrollable image grid of portraits compatible with the active game. The number of grid columns SHALL adapt to the available screen width. Selecting an image SHALL immediately apply its stable asset reference and close the picker. Source and license details SHALL remain inspectable for the selected portrait.

#### Scenario: User previews a configured character
- **WHEN** a user changes an appearance or presentation choice
- **THEN** the system SHALL update the character preview and SHALL leave mechanical choices unchanged unless the user explicitly edits equipment or another rules field.

#### Scenario: Browsing portraits for the active game
- **WHEN** a user opens the portrait picker during character creation
- **THEN** the system SHALL fill the available screen with an image-only grid of portraits from the base collection and compatible bundled expansion collections, provide vertical scrolling when needed, adapt the column count to the screen width, and support pointer or touch selection.

#### Scenario: Selecting a portrait
- **WHEN** a user selects a portrait image
- **THEN** the system SHALL immediately save its stable asset reference to the character presentation and close the picker.

#### Scenario: Closing without selecting a portrait
- **WHEN** a user closes the picker without selecting an image
- **THEN** the system SHALL retain the previously saved portrait.

#### Scenario: Inspecting the selected portrait
- **WHEN** a user views the selected portrait's details in appearance configuration
- **THEN** the system SHALL expose its collection, source, attribution, and license information.

#### Scenario: Resuming a portrait selection
- **WHEN** a user resumes a draft with a selected portrait
- **THEN** the system SHALL restore the same versioned portrait reference and SHALL NOT alter mechanical choices.
