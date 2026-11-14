# Spec Delta

## MODIFIED Requirements

### Requirement: Authoritative model recipe generation
The system SHALL evaluate a character's race, visual gender presentation, class, and equipped gear to deterministically generate a `model_recipe` payload. The recipe SHALL specify procedural bone scales that combine the race silhouette with the selected male or female visual-presentation proportions, modular mesh slice identifiers for body and armor slots (head, torso, legs, hands, feet), socket attachment identifiers for weapon and gear props, and color palette tint indices. An unset presentation SHALL retain the existing default proportions.

#### Scenario: Recipe reflects race silhouette
- **WHEN** a character has a race choice such as Dwarf or Halfling
- **THEN** the system generates a `model_recipe` containing bone-scale modifiers that alter limb and torso proportions while preserving standard humanoid rig joint hierarchy.

#### Scenario: Recipe reflects visual gender presentation
- **WHEN** a character has selected male or female visual presentation
- **THEN** the recipe carries that selection and its proportion modifiers while preserving the race profile and overall character height.

#### Scenario: Recipe reflects equipped gear
- **WHEN** a character equips an item such as chainmail armor or a longsword
- **THEN** the system updates the `model_recipe` replacing the torso body slice with the armor slice and assigning the weapon prop to the appropriate hand socket.

#### Scenario: Empty equipment slots fallback to base slices
- **WHEN** an equipment slot is empty or unequipped
- **THEN** the system populates the `model_recipe` with the corresponding base naked humanoid slice.

### Requirement: Procedural race silhouette scaling
The client SHALL apply server-provided bone-scale transformations for race silhouette and visual gender-presentation proportions to character armature transforms without breaking Mecanim Humanoid animation retargeting. The gender proportions SHALL compose with the selected race proportions and SHALL NOT change overall character height.

#### Scenario: Applying Dwarf bone proportions
- **WHEN** the client receives a Dwarf bone-scale profile
- **THEN** it scales leg bones down and torso/shoulder bones out to produce a stocky silhouette while humanoid animation clips continue playing correctly.

#### Scenario: Applying Halfling bone proportions
- **WHEN** the client receives a Halfling bone-scale profile
- **THEN** it scales the overall armature down and head bone up while humanoid animation clips continue playing correctly.

#### Scenario: Applying male visual-presentation proportions
- **WHEN** the client receives a male visual-presentation selection
- **THEN** it renders modestly broader shoulders and upper torso while retaining the selected race proportions and overall height.

#### Scenario: Applying female visual-presentation proportions
- **WHEN** the client receives a female visual-presentation selection
- **THEN** it renders modestly narrower shoulders and somewhat wider hips while retaining the selected race proportions and overall height.
