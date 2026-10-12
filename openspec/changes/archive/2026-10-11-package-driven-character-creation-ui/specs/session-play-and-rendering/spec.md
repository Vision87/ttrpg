# Spec Delta

## ADDED Requirements

### Requirement: Launching a finalized character into the starter board session
The system SHALL allow a locally saved, valid character to start a local solo session from the configured starter session. The session SHALL use the character's recorded ruleset package versions, assign the character to the human controller, preserve the starter session's non-player entities and board state, and provide an authoritative snapshot to the Unity client.

#### Scenario: Starting a solo session with a finalized character
- **WHEN** a user starts play with a finalized character whose package versions are available
- **THEN** the system creates a solo session using the starter session's player spawn, places the character there, and supplies the resulting authoritative snapshot for rendering

#### Scenario: Starting play with an unavailable package version
- **WHEN** a user starts play with a character whose required package version is unavailable
- **THEN** the system blocks session creation and reports the missing package without changing the saved character or starter session

#### Scenario: Rendering the initialized session
- **WHEN** the Unity client receives the initialized session snapshot
- **THEN** it renders the created character with its saved presentation and the starter session's existing entities without relying on the character-creation client to resolve gameplay rules
