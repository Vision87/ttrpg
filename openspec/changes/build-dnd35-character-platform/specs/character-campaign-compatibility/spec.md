# Spec Delta

## Purpose

Allows a reusable character to participate safely in multiple campaigns of the same game while isolating campaign-specific progression and identifying custom-rule incompatibilities before play.

## ADDED Requirements

### Requirement: Reusable character identities and campaign incarnations
The system SHALL separate reusable character identity, build and presentation data from campaign-specific progression, inventory, conditions, relationships, quest state, and history.

#### Scenario: Character joins a second compatible campaign
- **WHEN** a user adds a character to another compatible campaign
- **THEN** the system SHALL create or select a separate campaign incarnation without changing the original campaign's state.

#### Scenario: Campaign state changes
- **WHEN** a character takes damage or gains an item in one campaign
- **THEN** the system SHALL update only that campaign incarnation unless the user explicitly synchronizes a shared profile field.

### Requirement: Pre-play compatibility analysis
The system SHALL compare a character's required game family, package versions, definitions, mechanics, scripts, and campaign policy before allowing gameplay.

#### Scenario: Character requires a missing custom package
- **WHEN** a user selects a character whose build depends on a package not enabled by the campaign
- **THEN** the system SHALL classify the character as incompatible, explain the missing dependency, and block gameplay with that character.

#### Scenario: Character is mechanically compatible
- **WHEN** all gameplay-critical dependencies can be resolved by the campaign
- **THEN** the system SHALL classify the character as compatible even if presentation assets are globally shared or require renderer fallback.

### Requirement: Read-only incompatible-character preview
The system SHALL provide a read-only preview for incompatible characters that displays missing packages, custom definitions, conflicting mechanics, affected choices, and migration options without changing character or campaign state.

#### Scenario: User inspects an incompatible character
- **WHEN** a user opens an incompatible character for preview
- **THEN** the system SHALL show the character sheet and compatibility report while preventing gameplay events and destructive edits.

### Requirement: Explicit migration branching
The system SHALL create a separate character branch or campaign incarnation for any migration that removes, replaces, or changes incompatible mechanics.

#### Scenario: User replaces unavailable content
- **WHEN** a user chooses a supported replacement during migration
- **THEN** the system SHALL show a complete change summary, validate the proposed branch against the target campaign, and preserve the original character unchanged.
