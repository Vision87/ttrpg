# Spec Delta

## MODIFIED Requirements

### Requirement: Ruleset-adaptive character creation workflow
The system SHALL generate an interactive character creation flow from validated ruleset package metadata, including its ordered steps, fields, available choices, prerequisites, and supported validation rules. Adding a package that conforms to the creation-flow contract SHALL NOT require a ruleset-specific client flow.

#### Scenario: Creating a D&D character
- **WHEN** the user initiates character creation under the D&D 3.5 package
- **THEN** the workflow guides the user through that package's ability, race, class, skill, feat, equipment, and appearance steps in package-defined order

#### Scenario: Creating a Dark Heresy Acolyte
- **WHEN** the user initiates character creation under a d100 grimdark ruleset such as Dark Heresy
- **THEN** the workflow guides the user through characteristic generation, homeworld selection, career path assignment, divination, and starting equipment according to the package-defined order

#### Scenario: Adding another compatible RPG package
- **WHEN** a valid package defines a creation flow using the supported metadata contract
- **THEN** the system exposes its steps and choices through the same creation client without adding a system-specific UI flow

#### Scenario: Package requests unsupported creation behavior
- **WHEN** a package contains an unknown field type, invalid step reference, or unsupported validation rule
- **THEN** the system rejects the creation-flow metadata with an actionable validation error instead of silently omitting the behavior or using another ruleset's defaults
