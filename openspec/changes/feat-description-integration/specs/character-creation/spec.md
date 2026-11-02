# Spec Delta

## MODIFIED Requirements

### Requirement: Searchable rules-aware feat selection
The system SHALL provide named feats from the D&D 3.5 core SRD catalog and explain prerequisite failures while allowing the user to switch between viewing the full catalog and only currently eligible choices. The feat browser SHALL let a user inspect a feat's concise, original description and each prerequisite's current status separately from adding or removing that feat from the character. When a package-defined feat does not provide a concise description, the system SHALL generate a short fallback summary from the available longer text so every supported feat still shows readable, human-facing information.

#### Scenario: Viewing the complete feat catalog
- **WHEN** a user opens the D&D 3.5 feat step
- **THEN** the system presents the named feats in the supported core SRD catalog and allows the user to search the list by feat name

#### Scenario: Inspecting a feat without selecting it
- **WHEN** a user focuses a feat in the browser
- **THEN** the detail pane shows that feat's concise description and requirements without changing the character's selected feats

#### Scenario: A feat lacks a concise summary
- **WHEN** a feat definition includes only a longer description or other supporting text and no short summary field
- **THEN** the system derives a concise fallback summary and presents it in the detail pane without leaving the summary blank or fabricated beyond the source material

#### Scenario: Showing each prerequisite's current status
- **WHEN** a user inspects a feat with prerequisites
- **THEN** the detail pane lists each prerequisite separately, marks met and unmet status in text, highlights unmet requirements in red, and identifies requirements the application cannot verify

#### Scenario: Adding or removing a feat
- **WHEN** a user explicitly activates the add or remove action for an inspected feat
- **THEN** the system changes the character's selected feat only when the feat is eligible to add, and always allows an already selected feat to be removed

#### Scenario: Showing unavailable feats and their requirements
- **WHEN** the user views all feats and the character does not meet one or more prerequisites
- **THEN** the system keeps the feat visible, identifies it as unavailable, and explains each unmet or unsupported prerequisite in the detail pane

#### Scenario: Filtering to eligible feats
- **WHEN** a user switches the feat list to eligible-only mode
- **THEN** the system hides feats whose prerequisites are unmet or unsupported while retaining any already selected feat so it can be reviewed or removed

#### Scenario: Adapting the feat browser to a narrow viewport
- **WHEN** the feat step is shown in a viewport too narrow for a list and detail pane side by side
- **THEN** the system presents both the feat list and its detail pane without clipping either area or conflating inspection with selection
