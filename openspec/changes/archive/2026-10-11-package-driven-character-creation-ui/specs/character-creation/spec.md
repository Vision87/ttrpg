# Spec Delta

## ADDED Requirements

### Requirement: Interactive package-driven character creation
The system SHALL provide a browser-based character creation flow backed by the active ruleset package and an authoritative Python service. The flow SHALL support template-based and from-scratch drafts, display package-provided choices and validation feedback, and preserve the existing distinction between mechanical choices and presentation settings.

#### Scenario: Starting creation with an installed ruleset
- **WHEN** a user selects an installed ruleset that provides valid creation-flow metadata
- **THEN** the client displays that package's ordered creation steps and the service creates a draft using the package's version and definitions

#### Scenario: Choosing a template or starting from scratch
- **WHEN** a user starts a draft
- **THEN** the user can select an available package template or begin without one, and both paths remain editable and are validated by the service

#### Scenario: Reviewing and saving a character
- **WHEN** a user requests final review
- **THEN** the service returns validation issues, derived values, selected package versions, provenance, overrides, and presentation references, and saving is rejected when blocking errors remain

### Requirement: Resumable character drafts
The system SHALL allow a user to save and resume a local character draft without losing its selected ruleset package versions, choices, provenance, validation-relevant values, or presentation settings.

#### Scenario: Resuming a saved draft
- **WHEN** a user reopens a saved draft
- **THEN** the system restores the draft state and continues the same package-defined creation flow

#### Scenario: Draft references an unavailable package version
- **WHEN** a user resumes a draft whose recorded package version is unavailable
- **THEN** the system reports the unavailable dependency and does not silently substitute another version or reinterpret the character
