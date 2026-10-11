# Spec Delta

## Purpose

Provides a shared session model for solo and multiplayer play where deterministic rules events drive both a precise 2D tactical board and an immersive 3D presentation.

## ADDED Requirements

### Requirement: Authoritative session state
The system SHALL maintain authoritative session state for entities, positions, visibility, permissions, actions, effects, and campaign events, independent of any renderer.

#### Scenario: Entity moves in the tactical view
- **WHEN** a permitted controller moves an entity on the 2D board
- **THEN** the session SHALL validate the action, update authoritative state, and make the resulting position available to the 3D view.

### Requirement: Deterministic event-driven rules play
The system SHALL resolve gameplay actions through the active rules packages and SHALL emit ordered, inspectable events for rolls, actions, effects, resource changes, conditions, and rejected operations.

#### Scenario: Character resolves an attack
- **WHEN** a character performs an attack against a valid target
- **THEN** the system SHALL resolve the action, record the inputs and result, update session state, and emit events that both renderers can consume.

### Requirement: 2D tactical rendering
The system SHALL provide a precise 2D view for maps, tokens, movement, range, visibility, targeting, and tactical effects using the authoritative session state.

#### Scenario: User targets an out-of-range enemy
- **WHEN** a user attempts a range-limited action against an out-of-range target
- **THEN** the tactical view SHALL show the invalid state and the rules runtime SHALL reject the action without changing session state.

### Requirement: 3D immersive rendering
The system SHALL provide a 3D view that presents the same session state through models, camera behavior, animations, sounds, lighting, and effects without independently resolving gameplay.

#### Scenario: Rules event has a presentation mapping
- **WHEN** the session emits a semantic event such as fire damage or a stunned condition
- **THEN** the 3D view SHALL select the applicable presentation mapping and display it without changing the event result.

### Requirement: Solo and multiplayer controllers
The system SHALL model human, GM, AI, and scripted control through permissions and controller assignments so solo and multiplayer sessions use the same session model.

#### Scenario: Solo user controls a party
- **WHEN** a solo session assigns multiple player characters to one human controller and NPCs to another controller
- **THEN** the session SHALL enforce those assignments using the same action validation and event rules as a multiplayer session.
