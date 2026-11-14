# Modular 3D Avatar Specification

## Purpose

Provides authoritative generation and client composition of modular low-poly 3D character avatars with procedural race bone-scaling, sliced mesh replacement, and socketed equipment attachment.

## Requirements

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

### Requirement: Sliced modular mesh composition
The client SHALL assemble 3D character avatars using sliced sub-meshes (head, torso, legs, hands, feet) bound to a shared humanoid armature. When armor or clothing is equipped, the system SHALL replace the corresponding base body slice with the armor mesh slice rather than layering geometry on top.

#### Scenario: Equipping body armor
- **WHEN** a model recipe specifies a torso armor slice
- **THEN** the client deactivates the base torso slice and activates the armor slice bound to the shared armature bones without geometry clipping.

#### Scenario: Unequipping armor restores base body slice
- **WHEN** armor is removed from the model recipe
- **THEN** the client deactivates the armor slice and reactivates the base torso slice.

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

### Requirement: Single-draw-call palette shading
The client SHALL render all sliced body meshes, armor pieces, and socketed weapon props using a shared color palette atlas texture and a flat-shaded shader, rendering the complete assembled character in a single draw call.

#### Scenario: Rendering assembled character
- **WHEN** the modular character is rendered in the client
- **THEN** all active mesh slices and socketed props share the palette material and do not require distinct per-item materials or texture sets.

### Requirement: Isolated semantic appearance tinting
The avatar renderer SHALL apply appearance colors to semantic mesh regions independently from the palette colors used to texture those regions. A selected color SHALL affect only its assigned skin, hair, upper-clothing, trouser, accent, or iris region, including when unrelated parts share the same palette color. The assembled avatar SHALL continue to use its shared palette material.

#### Scenario: Shared palette color does not couple region tints
- **WHEN** a clothing accent and an unrelated prop use the same palette color
- **THEN** changing the accent color affects the clothing accent only and leaves the prop's color unchanged.

#### Scenario: Clothing regions are tinted independently
- **WHEN** the avatar recipe supplies different upper-clothing, trouser, and accent colors
- **THEN** each assigned mesh region displays its respective color without changing the other clothing regions.

### Requirement: Independently tintable eye irises
The avatar SHALL render a distinct iris region within each eye. The eye-color setting SHALL tint only the irises while preserving the eye whites and pupils in their fixed colors.

#### Scenario: Iris tint preserves eye whites and pupils
- **WHEN** an eye-color setting is applied to the avatar
- **THEN** both irises display the selected color while the eye whites remain white and the pupils remain black.

### Requirement: Race-choice appearance palette in model recipe
The model recipe SHALL preserve the full selected race choice separately from `race_profile`, which MAY continue to identify shared geometry and proportion profiles. It SHALL include the active choice's allowed skin, hair, and iris colors. The avatar preview SHALL apply saved colors for these regions only when they are present in the active choice's allowed options.

#### Scenario: Subrace palette is distinct from its shared geometry profile
- **WHEN** a draft selects a subrace that shares geometry with its base race
- **THEN** the recipe retains the base `race_profile` for geometry and identifies the full subrace choice and its allowed skin, hair, and iris colors for customization.
