# Spec Delta

## Purpose

Provides an authoritative real-time board session runtime supporting both synchronized multi-user collaborative play (GM/players, fog-of-war, initiative) and solo single-player mode with an autonomous director and reactive NPC behaviors.

## ADDED Requirements

### Requirement: Multi-user session synchronization and permissions
The system SHALL maintain an authoritative board state and enforce role-based access control between Game Masters and connected players.

#### Scenario: Enforcing player action authorization
- **WHEN** a connected player attempts to move an entity token they do not own or control
- **THEN** the session runtime rejects the action with an authorization error and preserves existing token position

#### Scenario: Game Master omniscient control
- **WHEN** a GM controller modifies environment tiles, moves any entity, or edits hidden notes
- **THEN** the session runtime accepts the modifications and broadcasts filtered updates to non-GM players

### Requirement: Dynamic fog-of-war and line-of-sight calculation
The system SHALL calculate tile visibility and entity presence individually for each player based on their controlled characters' vision ranges and obstacle occlusions.

#### Scenario: Hiding unrevealed monsters from player projection
- **WHEN** an enemy NPC is positioned behind a solid wall outside player character vision
- **THEN** the session runtime omits the enemy NPC entity and unrevealed tiles from that player's client snapshot

### Requirement: Initiative and phase tracking
The system SHALL manage structured combat rounds, turn sequencing, and reaction opportunities across active participants.

#### Scenario: Advancing turns in combat
- **WHEN** the current active actor finishes their turn and yields initiative
- **THEN** the session advances to the next entity in the initiative order and refreshes their per-turn action pools

### Requirement: Autonomous AI director for single-player mode
The system SHALL provide an automated director and oracle engine to run solo adventures, arbitrate narrative checks, and advance quests without a human GM.

#### Scenario: Resolving narrative ambiguity in solo play
- **WHEN** a solo player investigates an unscripted detail or asks a world question
- **THEN** the autonomous director evaluates probability based on current quest context, rolls against the oracle table, and returns a deterministic narrative outcome

### Requirement: Reactive NPC tactical behaviors in solo mode
The system SHALL execute automated tactical decisions for NPCs and monsters during single-player combat encounters.

#### Scenario: NPC executing automated combat turn
- **WHEN** an enemy NPC's turn begins in a single-player session
- **THEN** the NPC behavioral engine assesses positions, selects the highest-utility action per its ruleset profile, moves, and submits attack actions
