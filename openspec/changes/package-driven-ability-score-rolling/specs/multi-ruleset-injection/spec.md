# Spec Delta

## MODIFIED Requirements

### Requirement: Ruleset package registration and schema validation
The system SHALL validate and register heterogeneous TTRPG ruleset packages declaring system mechanics, dice models, base characteristics, resolution rules, and, when character creation is supported, a creation flow conforming to the shared declarative metadata contract.

#### Scenario: Registering a d100 roll-under ruleset
- **WHEN** a valid Dark Heresy ruleset package defining d100 resolution and characteristic tests is submitted
- **THEN** the system registers the package as active and exposes its test mechanics to session components

#### Scenario: Rejecting an invalid ruleset package
- **WHEN** a ruleset package has missing required resolution formulas, cyclic dependencies, or invalid declared creation-flow metadata
- **THEN** the system rejects the package with detailed validation errors and maintains current active rulesets

#### Scenario: Registering valid package-defined creation metadata
- **WHEN** a package declares ordered creation steps, supported fields, and references to definitions present in the resolved package set
- **THEN** the system validates the metadata and exposes the flow with the package's resolved version provenance

#### Scenario: Package declares an unsupported formula or validation operation
- **WHEN** a package requests a formula or validation operation outside the supported safe vocabulary
- **THEN** the system reports the unsupported declaration and does not silently evaluate it using another ruleset's behavior

#### Scenario: Package declares a supported ability score roll
- **WHEN** a creation-flow number field declares bounded dice parameters and an explicit reroll policy
- **THEN** the system validates the declaration and exposes the rolling capability to the character creation service

#### Scenario: Package declares invalid ability score roll metadata
- **WHEN** a package declares unsupported dice parameters or an invalid reroll policy
- **THEN** the system rejects the package with a field-specific validation error

#### Scenario: Package declares supported individual score rolling
- **WHEN** a creation-flow number field declares bounded dice parameters and an explicit individual reroll policy
- **THEN** the system validates the declaration and exposes the roll capability to the character creation service

#### Scenario: Package declares a complete score group
- **WHEN** a package groups roll-enabled numeric fields into a score set and declares its full-set reroll policy
- **THEN** the system validates that every group member supports rolling and exposes the group capability to the character creation service

#### Scenario: Package declares invalid rolling metadata
- **WHEN** a package declares unsupported dice parameters, incompatible score bounds, duplicate or invalid group members, or an invalid reroll policy
- **THEN** the system rejects the package with a field- or group-specific validation error
