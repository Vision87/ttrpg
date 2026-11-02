# Spec Delta

## MODIFIED Requirements

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
