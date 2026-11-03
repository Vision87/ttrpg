# Character Creation Specification

## Purpose

Provides a rules-aware character creation experience for D&D 3.5 that serves beginners through templates while preserving complete control for expert and homebrew-oriented users.

## Requirements

### Requirement: Guided character creation
The system SHALL guide a user through race, class levels, ability scores, skills, feats, spells, equipment, appearance, and presentation choices while recalculating dependent options and derived statistics after each change.

#### Scenario: Beginner creates a character from a ruleset template
- **WHEN** a user selects a package-provided character template
- **THEN** the system SHALL create an editable draft with the template's choices and recommendations, identify template-derived values, and validate the resulting character against the active campaign policy.

#### Scenario: Expert starts from scratch
- **WHEN** a user chooses expert creation
- **THEN** the system SHALL expose the full available choice set without requiring a template, while still showing prerequisites, warnings, and derived-statistic explanations.

### Requirement: Rules-aware choice validation
The system SHALL show available, unavailable, and homebrew-overridden choices with the prerequisite or compatibility reason for each choice.

#### Scenario: A feat prerequisite is not met
- **WHEN** a user views a feat whose prerequisites the current character does not satisfy
- **THEN** the system SHALL show the unmet prerequisites and SHALL prevent finalization unless the campaign policy explicitly allows the user to record a homebrew override.

#### Scenario: Homebrew override is enabled
- **WHEN** a user selects a choice that violates a standard prerequisite under a homebrew-friendly policy
- **THEN** the system SHALL preserve the choice, mark the violation as a warning, and include the override in the character's dependency and validation records.

### Requirement: Ruleset-specific skill allocation
The system SHALL represent and validate skill choices according to the active ruleset's skill model rather than applying one game's ranks or costs to another game.

#### Scenario: Allocating level-one D&D 3.5 skill ranks
- **WHEN** a user allocates skills for a level-one D&D 3.5 character
- **THEN** the system calculates the skill-point budget from class, Intelligence, and the human bonus, charges one point per class-skill rank and two per cross-class rank, allows half-ranks only where permitted, enforces the applicable rank caps, and requires the full budget to be allocated before finalization

#### Scenario: Selecting Dark Heresy trained skills
- **WHEN** a user selects skills for a Dark Heresy 1st-edition character
- **THEN** the system records trained skills as selections without assigning D&D-style numeric ranks and identifies skills that require training

### Requirement: Searchable rules-aware feat selection
The system SHALL provide named feats from the D&D 3.5 core SRD catalog and explain prerequisite failures while allowing the user to switch between viewing the full catalog and only currently eligible choices.

#### Scenario: Viewing the complete feat catalog
- **WHEN** a user opens the D&D 3.5 feat step
- **THEN** the system presents the named feats in the supported core SRD catalog and allows the user to search the list by feat name

#### Scenario: Showing unavailable feats and their requirements
- **WHEN** the user views all feats and the character does not meet one or more prerequisites
- **THEN** the system keeps the feat visible, identifies it as unavailable, and explains each unmet or unsupported prerequisite

#### Scenario: Filtering to eligible feats
- **WHEN** a user switches the feat list to eligible-only mode
- **THEN** the system hides feats whose prerequisites are unmet or unsupported while retaining any already selected feat so it can be reviewed or removed

### Requirement: Character and template provenance
The system SHALL distinguish explicit user choices, template recommendations, calculated values, and homebrew overrides in the character draft and final review.

#### Scenario: User changes a template recommendation
- **WHEN** a user edits a value supplied by a template
- **THEN** the system SHALL mark the value as user-selected and SHALL allow the user to restore the template recommendation without resetting unrelated choices.

### Requirement: Appearance and presentation configuration
The system SHALL allow a character creator to configure identity, portrait, 2D token, 3D appearance, equipment visuals, animation style, sounds, and effects independently from the character's mechanical rules. Portrait selection SHALL use a full-screen, vertically scrollable image grid of portraits compatible with the active game. The number of grid columns SHALL adapt to the available screen width. Selecting an image SHALL immediately apply its stable asset reference and close the picker. Source and license details SHALL remain inspectable for the selected portrait.

#### Scenario: User previews a configured character
- **WHEN** a user changes an appearance or presentation choice
- **THEN** the system SHALL update the character preview and SHALL leave mechanical choices unchanged unless the user explicitly edits equipment or another rules field.

#### Scenario: Browsing portraits for the active game
- **WHEN** a user opens the portrait picker during character creation
- **THEN** the system SHALL fill the available screen with an image-only grid of portraits from the base collection and compatible bundled expansion collections, provide vertical scrolling when needed, adapt the column count to the screen width, and support pointer or touch selection.

#### Scenario: Selecting a portrait
- **WHEN** a user selects a portrait image
- **THEN** the system SHALL immediately save its stable asset reference to the character presentation and close the picker.

#### Scenario: Closing without selecting a portrait
- **WHEN** a user closes the picker without selecting an image
- **THEN** the system SHALL retain the previously saved portrait.

#### Scenario: Inspecting the selected portrait
- **WHEN** a user views the selected portrait's details in appearance configuration
- **THEN** the system SHALL expose its collection, source, attribution, and license information.

#### Scenario: Resuming a portrait selection
- **WHEN** a user resumes a draft with a selected portrait
- **THEN** the system SHALL restore the same versioned portrait reference and SHALL NOT alter mechanical choices.

### Requirement: Character finalization
The system SHALL provide a final validation report before saving a character and SHALL retain the package versions, explicit choices, derived values, overrides, and presentation references used to create it.

#### Scenario: Final validation reports a warning
- **WHEN** a character contains an allowed homebrew override
- **THEN** the system SHALL permit saving only after displaying the warning and SHALL retain that warning in the character record.

### Requirement: Interactive package-driven character creation
The system SHALL provide a browser-based character creation flow backed by the active ruleset package and an authoritative Python service. The flow SHALL support template-based and from-scratch drafts, display package-provided choices and validation feedback, and preserve the existing distinction between mechanical choices and presentation settings. The client SHALL provide navigation across the ordered creation steps declared by the active package, allow direct selection of any step, and save edits on the current step before changing steps. The service SHALL accept only a step declared in the active draft's creation flow and SHALL preserve the draft's choices when its current step changes. Navigation SHALL NOT bypass review or finalization validation.

#### Scenario: Starting creation with an installed ruleset
- **WHEN** a user selects an installed ruleset that provides valid creation-flow metadata
- **THEN** the client displays that package's ordered creation steps and the service creates a draft using the package's version and definitions

#### Scenario: Choosing a template or starting from scratch
- **WHEN** a user starts a draft
- **THEN** the user can select an available package template or begin without one, and both paths remain editable and are validated by the service

#### Scenario: Reviewing and saving a character
- **WHEN** a user requests final review
- **THEN** the service returns validation issues, derived values, selected package versions, provenance, overrides, and presentation references, and saving is rejected when blocking errors remain

#### Scenario: Navigating directly to a package-defined step
- **WHEN** a user selects any step in the active package's ordered creation flow, including a step not yet visited
- **THEN** the client saves the current step's edits, displays the selected step, and the draft retains previously saved values and choices across all steps

#### Scenario: Rejecting a step outside the active flow
- **WHEN** a request attempts to set the current step to an identifier not declared by the active draft's creation flow
- **THEN** the service rejects the request and leaves the draft's current step and choices unchanged

### Requirement: Resumable character drafts
The system SHALL allow a user to save and resume a local character draft without losing its selected ruleset package versions, choices, provenance, validation-relevant values, or presentation settings.

#### Scenario: Resuming a saved draft
- **WHEN** a user reopens a saved draft
- **THEN** the system restores the draft state and continues the same package-defined creation flow

#### Scenario: Draft references an unavailable package version
- **WHEN** a user resumes a draft whose recorded package version is unavailable
- **THEN** the system reports the unavailable dependency and does not silently substitute another version or reinterpret the character

### Requirement: Package-declared ability score rolling
The system SHALL offer individual and full-set ability score rolling only when the active game's creation configuration explicitly declares supported dice methods, score groups, and applicable reroll policies. An individual field roll control SHALL be available only when the field both declares a supported roll method and belongs to a declared score group. The client SHALL omit each undeclared roll or reroll control rather than displaying an unavailable or disabled control. The authoritative service SHALL generate the scores and retain the dice, discarded results, final scores, roll scope, and complete roll history in the draft and finalized character provenance.

#### Scenario: Rolling D&D 3.5 ability scores
- **WHEN** a user rolls an ability score in the D&D 3.5 creation flow
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
- **WHEN** a user resumes a draft containing rolled ability scores
- **THEN** the current scores, latest dice results, and individual and group roll history are restored without rolling again

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
