# Spec Delta

## Purpose

Provides a versioned D&D 3.5 rules foundation that can be extended with supplements, campaign content, and homebrew mechanics without changing the core application.

## ADDED Requirements

### Requirement: Composable rules packages
The system SHALL represent core rules, supplements, campaign content, and homebrew as versioned packages with declared dependencies and compatibility information.

#### Scenario: Campaign enables an extension
- **WHEN** a campaign owner enables a supplement or homebrew package
- **THEN** the system SHALL resolve its dependencies, record the exact package version in campaign metadata, and expose its definitions to character creation and play.

#### Scenario: Extension dependency is unavailable
- **WHEN** a package requires another package that is missing or incompatible
- **THEN** the system SHALL prevent activation and identify the unresolved dependency.

### Requirement: Declarative rules behavior
The system SHALL support declarative definitions for prerequisites, choices, modifiers, triggers, durations, resources, actions, conditions, stacking, and derived formulas.

#### Scenario: A declarative feat modifies an attack
- **WHEN** a character uses a feat with an enabled conditional modifier
- **THEN** the rules runtime SHALL evaluate the modifier using the current action context and SHALL include its source and calculation in the result.

### Requirement: Sandboxed advanced mechanics
The system SHALL support exceptional mechanics through versioned sandboxed scripts that can read only permitted context and request changes through validated runtime operations.

#### Scenario: Script requests a gameplay change
- **WHEN** an enabled extension script requests a roll, effect, resource change, movement, or entity creation
- **THEN** the runtime SHALL validate the request against session rules and SHALL record the resulting event or a structured rejection.

#### Scenario: Script exceeds its permissions
- **WHEN** a script attempts an unavailable API, unrestricted external access, or an execution limit
- **THEN** the runtime SHALL terminate the script operation, preserve session state, and report the structured error to the extension and session log.

### Requirement: Rules package provenance and version locking
The system SHALL retain the source package and version for every rules definition used by a character or gameplay result and SHALL not silently reinterpret existing state after package changes.

#### Scenario: Package update affects an active campaign
- **WHEN** an enabled package has a newer version available
- **THEN** the system SHALL require an explicit campaign migration or version lock decision before applying the update to active gameplay.
