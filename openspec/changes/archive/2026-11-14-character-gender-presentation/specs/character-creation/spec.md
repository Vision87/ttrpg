# Spec Delta

## ADDED Requirements

### Requirement: Male/female visual presentation step
The system SHALL provide a system-owned visual gender-presentation step as the first step for every supported character-creation flow, before the active ruleset package's declared steps. New drafts SHALL require one of two values, `male` or `female`, as visual presentation data separate from mechanical character choices. The client SHALL show two large, square buttons with the corresponding symbols and accessible text labels. The service SHALL persist and validate the selection with the draft.

#### Scenario: New draft requires a visual presentation choice
- **WHEN** a user starts a new character draft
- **THEN** the first step shows the male and female symbol buttons before the package-defined steps, and the user cannot continue until selecting one.

#### Scenario: Selection affects presentation but not mechanics
- **WHEN** a user selects or changes the visual gender presentation
- **THEN** the draft stores the selection as presentation data and updates the avatar preview without changing mechanical choices or derived statistics.

#### Scenario: Rejecting an unsupported presentation value
- **WHEN** a client submits a visual gender-presentation value other than `male` or `female`
- **THEN** the service rejects the update and does not persist the unsupported value.

## MODIFIED Requirements

### Requirement: User-requested portrait generation
The system SHALL let a user enter an optional portrait description and explicitly request portrait generation from the appearance configuration. The generation request SHALL combine the description with visual-only details from the active character draft, including race or species, class, selected gear, appearance choices, and the selected male or female visual gender presentation when present, and SHALL NOT include unrelated mechanical values such as ability scores or skill ranks. The local Python service SHALL send the resulting prompt to a configured ComfyUI image-generation service and MAY use a configured local Ollama model to refine the prompt. Before submission, the system SHALL identify the configured local services and disclose the character details that will be sent to each, including the selected visual gender presentation. Generation SHALL NOT occur automatically when a draft is opened, changed, or saved. Service configuration SHALL remain outside the Unity WebGL client.

#### Scenario: Generating a portrait from a character draft
- **WHEN** a user enters a description and requests portrait generation
- **THEN** the system optionally refines a prompt from the description and visual-only draft details, including the selected gender presentation when present, with Ollama, sends the resulting prompt to ComfyUI, and returns a candidate image

#### Scenario: Generating without an additional description
- **WHEN** a user requests portrait generation without entering a description
- **THEN** the system generates a candidate from the visual-only details of the current draft

#### Scenario: Ollama prompt refinement is unavailable
- **WHEN** Ollama prompt refinement is not configured or fails
- **THEN** the system uses a deterministic prompt from the description and visual-only draft details and continues the ComfyUI generation request

#### Scenario: Reviewing generation data disclosure
- **WHEN** a user is about to submit a portrait generation request
- **THEN** the system identifies ComfyUI and whether Ollama prompt refinement is enabled, and describes the character details that will be sent to each service, including the selected visual gender presentation when present

#### Scenario: Omitting an unset presentation from the prompt
- **WHEN** a user requests portrait generation for a draft without a selected visual gender presentation
- **THEN** the system omits a gender descriptor and continues using the other available visual details

#### Scenario: Previewing a generated portrait
- **WHEN** portrait generation succeeds
- **THEN** the system displays the candidate for preview and retains the previously selected portrait until the user explicitly chooses to use the candidate

#### Scenario: Discarding a generated portrait
- **WHEN** a user discards a generated candidate
- **THEN** the candidate is not applied to the character and the previously selected portrait remains unchanged

#### Scenario: ComfyUI is unavailable or generation fails
- **WHEN** ComfyUI is not configured or a generation request fails
- **THEN** the system displays an actionable error and preserves the previously selected portrait

### Requirement: Interactive package-driven character creation
The system SHALL provide a browser-based character creation flow backed by the active ruleset package and an authoritative Python service. The resolved flow SHALL begin with a system-owned visual gender-presentation step, followed by the active package's ordered creation steps without changing their order. The system-owned step SHALL be available for every supported ruleset and SHALL preserve the existing distinction between mechanical choices and presentation settings. The flow SHALL support template-based and from-scratch drafts, display package-provided choices and validation feedback, and preserve the package's versions and definitions. The client SHALL provide navigation across the resolved flow, allow direct selection of any step, and save edits on the current step before changing steps. The service SHALL accept only a step declared in the resolved flow for the active draft and SHALL preserve the draft's choices when its current step changes. Navigation SHALL NOT bypass review or finalization validation.

#### Scenario: Starting creation with an installed ruleset
- **WHEN** a user selects an installed ruleset that provides valid creation-flow metadata
- **THEN** the client displays the system-owned visual gender-presentation step before that package's ordered creation steps, and the service creates a draft using the package's version and definitions

#### Scenario: Choosing a template or starting from scratch
- **WHEN** a user starts a draft
- **THEN** the user can select an available package template or begin without one, and both paths remain editable and are validated by the service

#### Scenario: Reviewing and saving a character
- **WHEN** a user requests final review
- **THEN** the service returns validation issues, derived values, selected package versions, provenance, overrides, and presentation references, and saving is rejected when blocking errors remain

#### Scenario: Navigating directly to a package-defined step
- **WHEN** a user selects any package-defined step in the active package's ordered creation flow, including a step not yet visited
- **THEN** the client saves the current step's edits, displays the selected step, and the draft retains previously saved values and choices across all steps

#### Scenario: Rejecting a step outside the active flow
- **WHEN** a request attempts to set the current step to an identifier not declared by the active draft's resolved creation flow
- **THEN** the service rejects the request and leaves the draft's current step and choices unchanged

### Requirement: Resumable character drafts
The system SHALL allow a user to save and resume a local character draft without losing its selected ruleset package versions, choices, provenance, validation-relevant values, presentation settings, or current position in the resolved creation flow.

#### Scenario: Resuming a saved draft
- **WHEN** a user reopens a saved draft
- **THEN** the system restores the draft state and continues at the same step in the resolved creation flow

#### Scenario: Resuming a draft created before the visual presentation step
- **WHEN** a user resumes a draft created before the system-owned visual gender-presentation step was added
- **THEN** the system preserves the draft's existing package-defined step, leaves its presentation unset without inferring a value, and lets the user choose a presentation later

#### Scenario: Draft references an unavailable package version
- **WHEN** a user resumes a draft whose recorded package version is unavailable
- **THEN** the system reports the unavailable dependency and does not silently substitute another version or reinterpret the character
