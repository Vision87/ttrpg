# Spec Delta

## Purpose

Defines how the repository communicates reuse terms for original application code while preserving separate licensing and provenance for bundled game content and assets.

## ADDED Requirements

### Requirement: Explicit root license scope
The repository SHALL provide a root license that identifies the reuse terms for original application code and SHALL clearly distinguish that grant from third-party software, fonts, artwork, and ruleset content with separate or unresolved terms.

#### Scenario: Reader checks the root license
- **WHEN** a reader reviews the root license and linked licensing guidance
- **THEN** the reader SHALL be able to identify the license for original application code and SHALL be told that separately licensed or unresolved content is not automatically covered by that grant

### Requirement: Third-party and game-content notices
The repository SHALL maintain notices for known separately licensed content and SHALL identify unresolved provenance or redistribution terms without claiming that the root code license applies to that material.

#### Scenario: A bundled asset has its own license
- **WHEN** a bundled asset has an explicit license or attribution
- **THEN** the repository notice SHALL preserve or reference that license and attribution separately from the root code license

#### Scenario: Content redistribution terms are unresolved
- **WHEN** bundled game content has source references but no verified redistribution terms
- **THEN** the repository notice SHALL identify the unresolved status and SHALL NOT represent that content as covered by the root code license
