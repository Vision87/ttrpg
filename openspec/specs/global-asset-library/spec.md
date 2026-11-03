# Global Asset Library Specification

## Purpose

Provides a reusable, versioned presentation asset library so characters can retain their appearance and effects across compatible campaigns and both tactical and immersive renderers.

## Requirements

### Requirement: Global asset references
The system SHALL allow presentation profiles to reference reusable portraits, tokens, models, animations, sounds, effects, and visual styles by stable asset identity.

#### Scenario: Character is used in multiple campaigns
- **WHEN** a reusable character joins multiple campaigns
- **THEN** each campaign incarnation SHALL be able to render the character using the same presentation profile and global asset references.

### Requirement: Asset semantic metadata
The system SHALL associate assets with type, renderer support, semantic tags, dependencies, source metadata, and version information.

#### Scenario: Renderer selects an effect
- **WHEN** a semantic gameplay event is emitted
- **THEN** the presentation system SHALL select a compatible asset using event tags and renderer support metadata.

### Requirement: Versioned asset revisions
The system SHALL support versioned revisions of an asset and SHALL preserve an existing character's selected revision until the user explicitly updates it.

#### Scenario: Asset receives a new revision
- **WHEN** a global model or animation receives an updated revision
- **THEN** characters using the previous revision SHALL continue to reference it and SHALL receive an explicit update option.

### Requirement: Ruleset-aware portrait collections
The system SHALL provide portrait collections associated with supported games or rulesets. The base collection SHALL be available for its game, and compatible expansion collections SHALL become available automatically when bundled with the client. Portrait collection availability SHALL NOT add or change gameplay rules dependencies. Each portrait SHALL have a stable identity and revision, its collection identity and version, ruleset compatibility metadata, and source and license metadata. The user SHALL be able to inspect attribution and license information for a portrait.

#### Scenario: Showing the base portraits for a game
- **WHEN** a user opens the portrait picker for an active ruleset
- **THEN** the system SHALL show portraits from that ruleset's base collection and SHALL exclude base collections for incompatible games.

#### Scenario: Automatically including a bundled expansion
- **WHEN** a compatible portrait expansion collection is bundled with the client
- **THEN** its portraits SHALL be available in the picker without changing the character's gameplay package dependencies or rules.

#### Scenario: Inspecting portrait provenance
- **WHEN** a user views a portrait's source information
- **THEN** the system SHALL identify its collection and version and expose its source and license attribution.

#### Scenario: Resolving an unavailable portrait image
- **WHEN** a selected portrait revision cannot be rendered
- **THEN** the system SHALL preserve the stable portrait reference, report a presentation diagnostic, and show a fallback representation.

### Requirement: Presentation fallback
The system SHALL distinguish presentation failures from gameplay incompatibility and SHALL provide a fallback representation when a selected asset cannot be rendered.

#### Scenario: 3D renderer cannot load a model
- **WHEN** a selected 3D asset is unavailable or unsupported
- **THEN** the system SHALL preserve gameplay compatibility, report a presentation diagnostic, and use an available fallback such as a token or portrait.
