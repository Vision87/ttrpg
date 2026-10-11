# Multi-Ruleset Injection Specification

## Purpose

Provides a generalized rules and behavior injection engine that supports distinct tabletop RPG systems (such as d20 roll-high, d100 roll-under, degrees of success, and custom dice mechanics) through declarative packages and sandboxed scripts.

## Requirements

### Requirement: Ruleset package registration and schema validation
The system SHALL validate and register heterogeneous TTRPG ruleset packages declaring system mechanics, dice models, base characteristics, and resolution rules.

#### Scenario: Registering a d100 roll-under ruleset
- **WHEN** a valid Warhammer 40k Dark Heresy ruleset package defining d100 resolution and characteristic tests is submitted
- **THEN** the system registers the package as active and exposes its test mechanics to session components

#### Scenario: Rejecting an invalid ruleset package
- **WHEN** a ruleset package with missing required resolution formulas or cyclic dependencies is registered
- **THEN** the system rejects the package with detailed validation errors and maintains current active rulesets

### Requirement: Pluggable action resolution pipelines
The system SHALL execute action resolution using the specific ruleset's injected dice model and test mechanics without hardcoding system-specific logic.

#### Scenario: Resolving d20 skill check
- **WHEN** a player executes a skill check in a d20-configured session
- **THEN** the system rolls a d20, adds appropriate ability and skill modifiers, compares against the target DC, and reports success or failure

#### Scenario: Resolving d100 characteristic test with degrees of success
- **WHEN** a character executes a Ballistic Skill test in a d100 Dark Heresy session
- **THEN** the system rolls 1d100, compares against the modified characteristic, and outputs success/failure along with calculated degrees of success or failure

### Requirement: Generalized entity stat-block evaluation
The system SHALL evaluate entity statistics, derived values, and limits according to the active ruleset's injected formulas and modifier trees.

#### Scenario: Calculating derived statistics for diverse systems
- **WHEN** an entity is initialized under a selected ruleset
- **THEN** the system calculates system-specific derived statistics (such as Armor Class and HP for d20, or Wounds, Fate Points, and Fatigue for Dark Heresy) using injected formulas

### Requirement: Behavioral trait and condition injection
The system SHALL allow rulesets to inject custom conditions, talents, and reaction scripts that modify action outcomes during session play.

#### Scenario: Triggering an injected condition effect
- **WHEN** a character with the "Bloodied" or "Pinned" condition attempts an action
- **THEN** the injected rule logic automatically applies designated penalties and triggers condition-specific event hooks
