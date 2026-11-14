# Spec Delta

## Purpose

Provides authoritative generation and client composition of modular low-poly 3D character avatars with procedural race bone-scaling, sliced mesh replacement, and socketed equipment attachment.

## ADDED Requirements

### Requirement: Authoritative model recipe generation
The system SHALL evaluate a character's race, class, and equipped gear to deterministically generate a `model_recipe` payload. The recipe SHALL specify procedural bone scales for the race silhouette, modular mesh slice identifiers for body and armor slots (head, torso, legs, hands, feet), socket attachment identifiers for weapon and gear props, and color palette tint indices.

#### Scenario: Recipe reflects race silhouette
- **WHEN** a character has a race choice such as Dwarf or Halfling
- **THEN** the system generates a `model_recipe` containing bone-scale modifiers that alter limb and torso proportions while preserving standard humanoid rig joint hierarchy.

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
The client SHALL apply the server-provided bone-scale transformations to character armature transforms at runtime without breaking Mecanim Humanoid animation retargeting.

#### Scenario: Applying Dwarf bone proportions
- **WHEN** the client receives a Dwarf bone-scale profile
- **THEN** it scales leg bones down and torso/shoulder bones out to produce a stocky silhouette while humanoid animation clips continue playing correctly.

#### Scenario: Applying Halfling bone proportions
- **WHEN** the client receives a Halfling bone-scale profile
- **THEN** it scales the overall armature down and head bone up while humanoid animation clips continue playing correctly.

### Requirement: Single-draw-call palette shading
The client SHALL render all sliced body meshes, armor pieces, and socketed weapon props using a shared color palette atlas texture and a flat-shaded shader, rendering the complete assembled character in a single draw call.

#### Scenario: Rendering assembled character
- **WHEN** the modular character is rendered in the client
- **THEN** all active mesh slices and socketed props share the palette material and do not require distinct per-item materials or texture sets.
