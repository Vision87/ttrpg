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

### Requirement: Presentation fallback
The system SHALL distinguish presentation failures from gameplay incompatibility and SHALL provide a fallback representation when a selected asset cannot be rendered.

#### Scenario: 3D renderer cannot load a model
- **WHEN** a selected 3D asset is unavailable or unsupported
- **THEN** the system SHALL preserve gameplay compatibility, report a presentation diagnostic, and use an available fallback such as a token or portrait.
