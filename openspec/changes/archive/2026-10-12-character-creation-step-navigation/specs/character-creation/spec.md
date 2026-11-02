# Spec Delta

## MODIFIED Requirements

### Requirement: Interactive package-driven character creation
The system SHALL provide a browser-based character creation flow backed by the active ruleset package and an authoritative Python service. The flow SHALL support template-based and from-scratch drafts, display package-provided choices and validation feedback, and preserve the existing distinction between mechanical choices and presentation settings. The client SHALL provide navigation across the ordered creation steps declared by the active package, allow direct selection of any step, and save edits on the current step before changing steps. The service SHALL accept only a step declared in the active draft's creation flow and SHALL preserve the draft's choices when its current step changes. Navigation SHALL NOT bypass review or finalization validation.

#### Scenario: Starting creation with an installed ruleset
- **WHEN** a user selects an installed ruleset that provides valid creation-flow metadata
- **THEN** the client displays that package's ordered creation steps and the service creates a draft using the package's version and definitions

#### Scenario: Choosing a template or starting from scratch
- **WHEN** a user starts a draft
- **THEN** the user can select an available package template or begin without one, and both paths remain editable and are validated by the service

#### Scenario: Navigating directly to a package-defined step
- **WHEN** a user selects any step in the active package's ordered creation flow, including a step not yet visited
- **THEN** the client saves the current step's edits, displays the selected step, and the draft retains previously saved values and choices across all steps

#### Scenario: Rejecting a step outside the active flow
- **WHEN** a request attempts to set the current step to an identifier not declared by the active draft's creation flow
- **THEN** the service rejects the request and leaves the draft's current step and choices unchanged

#### Scenario: Reviewing and saving a character
- **WHEN** a user requests final review
- **THEN** the service returns validation issues, derived values, selected package versions, provenance, overrides, and presentation references, and saving is rejected when blocking errors remain
