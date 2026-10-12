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

### Requirement: Generalized entity stat-block evaluation
The system SHALL evaluate entity statistics, derived values, and limits according to the active ruleset's injected formulas and modifier trees. It SHALL report unsupported or invalid formulas rather than silently applying a different ruleset's formula.

#### Scenario: Calculating derived statistics for diverse systems
- **WHEN** an entity is initialized under a selected ruleset
- **THEN** the system calculates system-specific derived statistics (such as Armor Class and HP for d20, or Wounds, Fate Points, and Fatigue for Dark Heresy) using injected formulas

#### Scenario: Rejecting an unsupported derived-statistic formula
- **WHEN** a package requests a derived-statistic formula the runtime cannot safely evaluate
- **THEN** the system reports the unsupported formula and does not substitute a d20 or other default calculation
