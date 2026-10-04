# Spec Delta

## Purpose

Allows players and game masters to create, configure, and customize characters across different TTRPG rulesets, encompassing visual look-and-feel (portraits, tokens, 3D models), inventory items, and ruleset-validated capabilities.

## ADDED Requirements

### Requirement: Ruleset-adaptive character creation workflow
The system SHALL generate an interactive creation flow dynamically customized to the active ruleset's prerequisite order, attributes, and background choices.

#### Scenario: Creating a D&D character
- **WHEN** the user initiates character creation under a d20 fantasy ruleset
- **THEN** the workflow guides the user through ability score generation, race selection, class selection, skill distribution, and feat picking according to d20 rules

#### Scenario: Creating a Dark Heresy Acolyte
- **WHEN** the user initiates character creation under a d100 grimdark ruleset
- **THEN** the workflow guides the user through characteristic generation, homeworld selection, career path assignment, divination, and starting equipment

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
