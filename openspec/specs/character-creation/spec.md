# Character Creation Specification

## Purpose

Provides a rules-aware character creation experience for D&D 3.5 that serves beginners through templates while preserving complete control for expert and homebrew-oriented users.

## Requirements

### Requirement: Guided character creation
The system SHALL guide a user through race, class levels, ability scores, skills, feats, spells, equipment, appearance, and presentation choices while recalculating dependent options and derived statistics after each change.

#### Scenario: Beginner creates a character from a ruleset template
- **WHEN** a user selects a package-provided character template
- **THEN** the system SHALL create an editable draft with the template's choices and recommendations, identify template-derived values, and validate the resulting character against the active campaign policy.

#### Scenario: Expert starts from scratch
- **WHEN** a user chooses expert creation
- **THEN** the system SHALL expose the full available choice set without requiring a template, while still showing prerequisites, warnings, and derived-statistic explanations.

### Requirement: Rules-aware choice validation
The system SHALL show available, unavailable, and homebrew-overridden choices with the prerequisite or compatibility reason for each choice.

#### Scenario: A feat prerequisite is not met
- **WHEN** a user views a feat whose prerequisites the current character does not satisfy
- **THEN** the system SHALL show the unmet prerequisites and SHALL prevent finalization unless the campaign policy explicitly allows the user to record a homebrew override.

#### Scenario: Homebrew override is enabled
- **WHEN** a user selects a choice that violates a standard prerequisite under a homebrew-friendly policy
- **THEN** the system SHALL preserve the choice, mark the violation as a warning, and include the override in the character's dependency and validation records.

### Requirement: Character and template provenance
The system SHALL distinguish explicit user choices, template recommendations, calculated values, and homebrew overrides in the character draft and final review.

#### Scenario: User changes a template recommendation
- **WHEN** a user edits a value supplied by a template
- **THEN** the system SHALL mark the value as user-selected and SHALL allow the user to restore the template recommendation without resetting unrelated choices.

### Requirement: Appearance and presentation configuration
The system SHALL allow a character creator to configure identity, portrait, 2D token, 3D appearance, equipment visuals, animation style, sounds, and effects independently from the character's mechanical rules.

#### Scenario: User previews a configured character
- **WHEN** a user changes an appearance or presentation choice
- **THEN** the system SHALL update the character preview and SHALL leave mechanical choices unchanged unless the user explicitly edits equipment or another rules field.

### Requirement: Character finalization
The system SHALL provide a final validation report before saving a character and SHALL retain the package versions, explicit choices, derived values, overrides, and presentation references used to create it.

#### Scenario: Final validation reports a warning
- **WHEN** a character contains an allowed homebrew override
- **THEN** the system SHALL permit saving only after displaying the warning and SHALL retain that warning in the character record.
