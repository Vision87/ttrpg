# Universal Character Builder Specification

## Purpose

Allows players and game masters to create, configure, and customize characters across different TTRPG rulesets, encompassing visual look-and-feel (portraits, tokens, 3D models), inventory items, and ruleset-validated capabilities.

## Requirements

### Requirement: Ruleset-adaptive character creation workflow
The system SHALL generate an interactive character creation flow from validated ruleset package metadata, including its ordered steps, fields, available choices, prerequisites, supported validation rules, and declared score rolling capabilities. Adding a package that conforms to the creation-flow contract SHALL NOT require a ruleset-specific client flow.

#### Scenario: Creating a D&D character
- **WHEN** the user initiates character creation under the D&D 3.5 package
- **THEN** the workflow guides the user through that package's ability, race, class, skill, feat, equipment, and appearance steps in package-defined order

#### Scenario: Creating a Dark Heresy Acolyte
- **WHEN** the user initiates character creation under a d100 grimdark ruleset such as Dark Heresy
- **THEN** the workflow guides the user through characteristic generation, homeworld selection, career path assignment, divination, and starting equipment according to the package-defined order

#### Scenario: Adding another compatible RPG package
- **WHEN** a valid package defines a creation flow using the supported metadata contract
- **THEN** the system exposes its steps and choices through the same creation client without adding a system-specific UI flow

#### Scenario: Package requests unsupported creation behavior
- **WHEN** a package contains an unknown field type, invalid step reference, or unsupported validation rule
- **THEN** the system rejects the creation-flow metadata with an actionable validation error instead of silently omitting the behavior or using another ruleset's defaults

#### Scenario: Rolling scores for a compatible ruleset
- **WHEN** a selected package declares supported individual score rolling and rerolls
- **THEN** the package-driven client provides per-score controls and displays the authoritative dice results

#### Scenario: Rolling or rerolling a complete score set
- **WHEN** a selected package declares a score group and permits a full-set roll or reroll
- **THEN** the client provides corresponding group controls, presents each result against its named field, and updates the set without adding a ruleset-specific client flow

#### Scenario: Hiding undeclared individual roll controls
- **WHEN** a numeric field declares a roll method but is not a member of a declared score group
- **THEN** the client omits its individual roll and reroll controls

### Requirement: Character look-and-feel configuration
The system SHALL allow users to define aesthetic and presentation properties including 2D portraits, top-down tokens, 3D character mesh selection, tint palettes, and scale.

#### Scenario: Customizing 3D token presentation
- **WHEN** a user selects an armored crusader 3D mesh model, assigns custom cloak colors, and pairs it with a 2D portrait
- **THEN** the system generates a persistent presentation profile bound to the character identity for both 2D tactical and 3D immersive views

### Requirement: Ruleset-validated equipment and item management
The system SHALL validate inventory slots, encumbrance, weapon hands, and equipment requirements against active ruleset constraints. The equipment step SHALL source its item catalog, prices, currency, equipment slots, and class- or career-based starting-wealth rules from the active ruleset package. It SHALL let the player choose among the package-declared starting-wealth methods, including a roll or an average when both are supported, and display the resulting budget and remaining currency. The shopping view SHALL present available items with an image, name, and cost, and show further item details on hover. The character loadout SHALL show compatible equipment slots beside a backpack of purchased but unequipped items. A purchase SHALL deduct its price in the active ruleset's currency and SHALL NOT succeed if the character cannot afford it. Equipping or unequipping an owned item SHALL move it between the backpack and a compatible slot without charging again. Missing item artwork SHALL use a visible fallback. Purchased items, equipped slots, and remaining currency SHALL persist with the draft and finalized character. When package data is explicitly marked provisional, the client SHALL clearly identify that status before the player uses its values.

#### Scenario: Equipping items with unmet prerequisites
- **WHEN** a user attempts to equip a heavy weapon requiring a minimum strength or proficiency their character lacks
- **THEN** the system prevents equipping or flags an encumbrance/proficiency warning in accordance with ruleset specifications

#### Scenario: Choosing class- or career-based starting wealth
- **WHEN** a user reaches equipment shopping and the active package declares starting-wealth methods for the selected class or career
- **THEN** the user can choose from the supported methods, such as rolling or taking the class/career average, and sees the resulting starting and remaining budget in that ruleset's currency

#### Scenario: Browsing package equipment
- **WHEN** a user views the equipment shop
- **THEN** the system displays the active package's available items as a grid with each item's image, name, and cost, and hovering an item reveals its description and available rules details

#### Scenario: Purchasing an affordable item
- **WHEN** a user purchases an item whose cost does not exceed their remaining starting wealth
- **THEN** the item is added to the backpack and its cost is deducted once in the active ruleset's currency

#### Scenario: Rejecting an unaffordable purchase
- **WHEN** a user attempts to purchase an item whose cost exceeds their remaining starting wealth
- **THEN** the system rejects the purchase and leaves both inventory and remaining wealth unchanged

#### Scenario: Equipping and unequipping purchased items
- **WHEN** a user equips a backpack item into a compatible available character slot or unequips an item
- **THEN** the item moves between the backpack and the corresponding equipment slot without another purchase charge, and incompatible slot or hand assignments are prevented or clearly reported

#### Scenario: Using fallback artwork
- **WHEN** an available item has no usable local artwork
- **THEN** the item remains available and the shop displays a fallback image

#### Scenario: Resuming an equipment draft
- **WHEN** a user saves and resumes a character draft after shopping or changing equipped items
- **THEN** the selected wealth method, starting and remaining currency, item quantities, backpack contents, and equipped slots are restored without charging for the items again

#### Scenario: Using provisional package values
- **WHEN** a ruleset package marks its wealth or item-price data as provisional
- **THEN** the equipment step clearly warns the player that those values are unverified while still allowing package-configured shopping

### Requirement: Capability and talent selection validation
The system SHALL ensure selected traits, skills, talents, and spells satisfy all prerequisite rules and point-budget limitations.

#### Scenario: Validating talent prerequisites
- **WHEN** a user selects a talent requiring a minimum characteristic threshold or prior prerequisite talent
- **THEN** the builder validates prerequisite presence and blocks selection if requirements are not met
