# Spec Delta

## ADDED Requirements

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
