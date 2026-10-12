# Multi-Ruleset Injection Specification

## Purpose

Provides a generalized rules and behavior injection engine that supports distinct tabletop RPG systems (such as d20 roll-high, d100 roll-under, degrees of success, and custom dice mechanics) through declarative packages and sandboxed scripts.

## Requirements

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

### Requirement: Pluggable action resolution pipelines
The system SHALL execute action resolution using the specific ruleset's injected dice model and test mechanics without hardcoding system-specific logic.

#### Scenario: Resolving d20 skill check
- **WHEN** a player executes a skill check in a d20-configured session
- **THEN** the system rolls a d20, adds appropriate ability and skill modifiers, compares against the target DC, and reports success or failure

#### Scenario: Resolving d100 characteristic test with degrees of success
- **WHEN** a character executes a Ballistic Skill test in a d100 Dark Heresy session
- **THEN** the system rolls 1d100, compares against the modified characteristic, and outputs success/failure along with calculated degrees of success or failure

### Requirement: Generalized entity stat-block evaluation
The system SHALL evaluate entity statistics, derived values, and limits according to the active ruleset's injected formulas and modifier trees. It SHALL report unsupported or invalid formulas rather than silently applying a different ruleset's formula.

#### Scenario: Calculating derived statistics for diverse systems
- **WHEN** an entity is initialized under a selected ruleset
- **THEN** the system calculates system-specific derived statistics (such as Armor Class and HP for d20, or Wounds, Fate Points, and Fatigue for Dark Heresy) using injected formulas

#### Scenario: Rejecting an unsupported derived-statistic formula
- **WHEN** a package requests a derived-statistic formula the runtime cannot safely evaluate
- **THEN** the system reports the unsupported formula and does not substitute a d20 or other default calculation

### Requirement: Behavioral trait and condition injection
The system SHALL allow rulesets to inject custom conditions, talents, and reaction scripts that modify action outcomes during session play.

#### Scenario: Triggering an injected condition effect
- **WHEN** a character with the "Bloodied" or "Pinned" condition attempts an action
- **THEN** the injected rule logic automatically applies designated penalties and triggers condition-specific event hooks
