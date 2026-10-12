# Spec Delta

## MODIFIED Requirements

### Requirement: Package-declared ability score rolling
The system SHALL offer individual and full-set ability score rolling only when the active game's creation configuration explicitly declares supported dice methods, score groups, and applicable reroll policies. An individual field roll control SHALL be available only when the field both declares a supported roll method and belongs to a declared score group. The client SHALL omit each undeclared roll or reroll control rather than displaying an unavailable or disabled control. The authoritative service SHALL generate the scores and retain the dice, discarded results, final scores, roll scope, and complete roll history in the draft and finalized character provenance.

#### Scenario: Rolling D&D 3.5 ability scores
- **WHEN** a user rolls one ability score in the D&D 3.5 creation flow
- **THEN** the service rolls four six-sided dice, drops the lowest die, assigns the sum to that ability, and reports the dice and resulting score

#### Scenario: Rerolling one ability score
- **WHEN** a user rerolls an ability score for which the package permits individual rerolls
- **THEN** only that ability is replaced, its new dice result is displayed, and the previous and replacement rolls remain in the saved history

#### Scenario: Rolling the complete ability score set
- **WHEN** a user rolls a package-declared ability score group
- **THEN** the service independently generates a score for every member, associates each result with its named ability, applies the complete set together, and reports every dice result

#### Scenario: Rerolling the complete ability score set
- **WHEN** a user rerolls a complete score group whose package policy permits full-set rerolls
- **THEN** the service replaces all scores in that group as one operation, displays all new results, and retains both complete sets in roll history

#### Scenario: A ruleset does not declare ability score rolling
- **WHEN** a user creates a character under a game configuration without rolling metadata for a score or score group
- **THEN** the client omits the corresponding roll controls entirely and the service rejects requests to roll undeclared fields or groups

#### Scenario: Numeric field declares dice but is not in an enabled score group
- **WHEN** a game configuration declares a numeric field's dice method but does not include that field in a score group
- **THEN** the client omits the field's individual roll and reroll controls and the field cannot participate in group rolling

#### Scenario: Resuming a rolled draft
- **WHEN** a user resumes a draft containing individually or collectively rolled scores
- **THEN** the current scores, latest dice results, and individual and group roll history are restored without rolling again
