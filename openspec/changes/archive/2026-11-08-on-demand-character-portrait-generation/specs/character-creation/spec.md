# Spec Delta

## ADDED Requirements

### Requirement: User-requested portrait generation
The system SHALL let a user enter an optional portrait description and explicitly request portrait generation from the appearance configuration. The generation request SHALL combine the description with visual-only details from the active character draft, including race or species, class, selected gear, and appearance choices, and SHALL NOT include unrelated mechanical values such as ability scores or skill ranks. The local Python service SHALL send the resulting prompt to a configured ComfyUI image-generation service and MAY use a configured local Ollama model to refine the prompt. Before submission, the system SHALL identify the configured local services and disclose the character details that will be sent to each. Generation SHALL NOT occur automatically when a draft is opened, changed, or saved. Service configuration SHALL remain outside the Unity WebGL client.

#### Scenario: Generating a portrait from a character draft
- **WHEN** a user enters a description and requests portrait generation
- **THEN** the system optionally refines a prompt from the description and visual-only draft details with Ollama, sends the resulting prompt to ComfyUI, and returns a candidate image

#### Scenario: Generating without an additional description
- **WHEN** a user requests portrait generation without entering a description
- **THEN** the system generates a candidate from the visual-only details of the current draft

#### Scenario: Ollama prompt refinement is unavailable
- **WHEN** Ollama prompt refinement is not configured or fails
- **THEN** the system uses a deterministic prompt from the description and visual-only draft details and continues the ComfyUI generation request

#### Scenario: Reviewing generation data disclosure
- **WHEN** a user is about to submit a portrait generation request
- **THEN** the system identifies ComfyUI and whether Ollama prompt refinement is enabled, and describes the character details that will be sent to each service

#### Scenario: Previewing a generated portrait
- **WHEN** portrait generation succeeds
- **THEN** the system displays the candidate for preview and retains the previously selected portrait until the user explicitly chooses to use the candidate

#### Scenario: Discarding a generated portrait
- **WHEN** a user discards a generated candidate
- **THEN** the candidate is not applied to the character and the previously selected portrait remains unchanged

#### Scenario: ComfyUI is unavailable or generation fails
- **WHEN** ComfyUI is not configured or a generation request fails
- **THEN** the system displays an actionable error and preserves the previously selected portrait

### Requirement: Persisting generated portraits with provenance
The system SHALL store an applied generated portrait in local application data with a stable reference associated with its character draft. The system SHALL keep generated portraits separate from bundled portrait collections and SHALL retain available generation provenance, including the ComfyUI workflow and image model identifiers, any Ollama model used, and applicable source or usage terms. Resuming a draft SHALL restore the same generated portrait reference and image without changing mechanical character choices.

#### Scenario: Applying and resuming a generated portrait
- **WHEN** a user applies a generated portrait and later resumes the draft
- **THEN** the system restores the applied image from its stable reference and leaves the character's mechanical choices unchanged

#### Scenario: Inspecting generated portrait provenance
- **WHEN** a user views provenance for an applied generated portrait
- **THEN** the system exposes the available generation source and usage-term information without presenting the image as a bundled portrait-pack asset
