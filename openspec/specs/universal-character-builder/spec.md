# Universal Character Builder Specification

## Purpose

Allows players and game masters to create, configure, and customize characters across different TTRPG rulesets, encompassing visual look-and-feel (portraits, tokens, 3D models), inventory items, and ruleset-validated capabilities.

## Requirements

### Requirement: Ruleset-adaptive character creation workflow
The system SHALL generate an interactive character creation flow from validated ruleset package metadata, including its ordered steps, fields, available choices, prerequisites, supported validation rules, and declared score rolling capabilities. Adding a package that conforms to the creation-flow contract SHALL NOT require a ruleset-specific client flow.

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

#### Scenario: Rolling scores for a compatible ruleset
- **WHEN** a selected package declares supported individual score rolling and rerolls
- **THEN** the package-driven client provides per-score controls and displays the authoritative dice results

#### Scenario: Rolling or rerolling a complete score set
- **WHEN** a selected package declares a score group and permits a full-set roll or reroll
- **THEN** the client provides corresponding group controls, presents each result against its named field, and updates the set without adding a ruleset-specific client flow

#### Scenario: Hiding undeclared individual roll controls
- **WHEN** a numeric field declares a roll method but is not a member of a declared score group
- **THEN** the client omits its individual roll and reroll controls

### Requirement: Character look-and-feel configuration
The system SHALL allow users to define aesthetic and presentation properties including 2D portraits, top-down tokens, 3D character mesh selection, tint palettes, and scale.

#### Scenario: Customizing 3D token presentation
- **WHEN** a user selects an armored crusader 3D mesh model, assigns custom cloak colors, and pairs it with a 2D portrait
- **THEN** the system generates a persistent presentation profile bound to the character identity for both 2D tactical and 3D immersive views

### Requirement: Ruleset-validated equipment and item management
The system SHALL validate inventory slots, encumbrance, weapon hands, and equipment requirements against active ruleset constraints.

#### Scenario: Equipping items with unmet prerequisites
- **WHEN** a user attempts to equip a heavy weapon requiring a minimum strength or proficiency their character lacks
- **THEN** the system prevents equipping or flags an encumbrance/proficiency warning in accordance with ruleset specifications

### Requirement: Capability and talent selection validation
The system SHALL ensure selected traits, skills, talents, and spells satisfy all prerequisite rules and point-budget limitations.

#### Scenario: Validating talent prerequisites
- **WHEN** a user selects a talent requiring a minimum characteristic threshold or prior prerequisite talent
- **THEN** the builder validates prerequisite presence and blocks selection if requirements are not met
