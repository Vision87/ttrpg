# Spec Delta

## ADDED Requirements

### Requirement: Compact ability score rolling controls
The character-creation interface SHALL present package-declared individual score-roll controls as dice-icon-only buttons beside their associated numeric inputs. Each icon-only control SHALL have an accessible label or tooltip that identifies the score and whether the action rolls or rerolls it. Package-declared full-score-group roll or reroll controls SHALL appear directly below the save-draft-and-exit action and above the scrollable score fields. The interface SHALL retain existing package permissions and authoritative roll behavior, and SHALL omit controls that are not enabled by package metadata.

#### Scenario: Rolling an individual score
- **WHEN** a user views an individually rollable score field
- **THEN** the input and a dice-icon-only roll or reroll button appear together on the same row, and the button's accessible label identifies its action and score

#### Scenario: Rolling a complete score group
- **WHEN** a user views a step with a package-declared full-score-group roll or reroll action
- **THEN** the group action appears immediately below “Save draft and exit” and before the scrollable score fields

#### Scenario: Package does not permit a roll
- **WHEN** the package does not declare an individual or group roll action, or its reroll policy does not permit that action
- **THEN** the corresponding control is omitted while all other permitted roll controls remain available

#### Scenario: Completing a score roll
- **WHEN** a user activates an individual or group roll control
- **THEN** the authoritative service continues to generate the score values and roll history according to the active package, and the client presents the resulting values and dice details as before
