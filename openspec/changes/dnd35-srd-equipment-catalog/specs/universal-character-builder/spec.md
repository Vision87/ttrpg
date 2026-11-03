# Spec Delta

## MODIFIED Requirements

### Requirement: Ruleset-validated equipment and item management
The system SHALL validate inventory slots, encumbrance, weapon hands, and equipment requirements against active ruleset constraints. The equipment step SHALL source its item catalog, prices, currency, equipment slots, and class- or career-based starting-wealth rules from the active ruleset package. It SHALL let the player choose among the package-declared starting-wealth methods, including a roll or an average when both are supported, and display the resulting budget and remaining currency. The shopping view SHALL present available items with an image, name, and cost, and show further item details on hover. The character loadout SHALL show compatible equipment slots beside a backpack of purchased but unequipped items. A purchase SHALL deduct its price in the active ruleset's currency and SHALL NOT succeed if the character cannot afford it. Equipping or unequipping an owned item SHALL move it between the backpack and a compatible slot without charging again. Items that are purchasable but not equippable SHALL remain in the backpack and SHALL NOT be assignable to an equipment slot. Missing item artwork SHALL use a visible fallback. Purchased items, equipped slots, and remaining currency SHALL persist with the draft and finalized character. When package data is explicitly marked provisional, the client SHALL clearly identify that status before the player uses its values. The D&D 3.5 equipment catalog SHALL include every individually purchasable, fixed-price equipment and magic-item entry in the D&D 3.5 SRD, and SHALL NOT represent non-SRD-only manual entries as part of that catalog. Random treasure-generation tables and standalone magic-item special-ability options without a defined standalone price are not catalog entries. Item descriptions SHALL be concise original summaries rather than copied manual passages. Each catalog entry SHALL identify its applicable source. Each item SHALL support an item-specific local icon; while its icon is unavailable, the shop SHALL use the visible fallback, and icon coverage may be completed incrementally. D&D 3.5 prices and budgets SHALL use integer copper-piece units for exact arithmetic, and the shop SHALL display coin amounts in gp, sp, and cp without rounding away value.

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

#### Scenario: Browsing the complete D&D 3.5 SRD catalog
- **WHEN** a user browses equipment under the D&D 3.5 package
- **THEN** the catalog includes all equipment and magic-item entries in the SRD, including their costs, concise original descriptions, relevant rules details, and source references

#### Scenario: Excluding non-SRD manual entries
- **WHEN** an item appears only in a non-SRD D&D 3.5 manual
- **THEN** the item is not presented as part of the D&D 3.5 SRD catalog

#### Scenario: Resolving item-specific artwork
- **WHEN** an item's local icon is available
- **THEN** the shop displays that item's icon, and until one is available it displays the existing fallback without making the item unavailable

#### Scenario: Displaying exact D&D 3.5 coin prices
- **WHEN** a D&D 3.5 catalog item or budget has a value expressed in copper-piece units
- **THEN** the shop formats the amount as gp, sp, and cp denominations without losing or rounding any value

#### Scenario: Purchasing a backpack-only item
- **WHEN** a user purchases an item that has no compatible equipment slots
- **THEN** the item remains in the backpack and the system rejects any attempt to assign it to an equipment slot
