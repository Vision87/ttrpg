# Spec Summary

This file consolidates the current OpenSpec delta documents for the project.

## Source files
- openspec/changes/build-dnd35-character-platform/specs/character-creation/spec.md
- openspec/changes/build-dnd35-character-platform/specs/character-campaign-compatibility/spec.md
- openspec/changes/build-dnd35-character-platform/specs/global-asset-library/spec.md
- openspec/changes/build-dnd35-character-platform/specs/ruleset-extensibility/spec.md
- openspec/changes/build-dnd35-character-platform/specs/session-play-and-rendering/spec.md
- openspec/changes/universal-ttrpg-board-platform/specs/universal-character-builder/spec.md
- openspec/changes/universal-ttrpg-board-platform/specs/multi-ruleset-injection/spec.md
- openspec/changes/universal-ttrpg-board-platform/specs/multimedia-presentation-fx/spec.md
- openspec/changes/universal-ttrpg-board-platform/specs/board-session-runtime/spec.md
- openspec/changes/universal-ttrpg-board-platform/specs/quest-and-scene-ingestion/spec.md

## Build D&D 3.5 Character Platform

### 1) character-creation
Purpose: Provides a rules-aware character creation experience for D&D 3.5 that serves beginners through templates while preserving expert and homebrew control.

Requirements:
- Guided character creation across race, class levels, ability scores, skills, feats, spells, equipment, appearance, and presentation.
- Rules-aware choice validation showing available, unavailable, and overridden choices with reasons and prerequisite details.
- Character and template provenance to distinguish explicit user choices, template recommendations, calculated values, and homebrew overrides.
- Appearance and presentation configuration separate from mechanical rules.
- Final validation with saved metadata, package versions, derived values, overrides, and presentation references.

Key scenarios:
- Beginner selects a template and gets an editable draft validated against campaign policy.
- Expert creation exposes the full choice set with warnings and derived-statistic explanations.
- Missing feat prerequisites block completion unless homebrew override is allowed.
- User overrides are preserved and tracked with warnings.

### 2) character-campaign-compatibility
Purpose: Allows a reusable character to participate safely in multiple campaigns while isolating campaign-specific progression and highlighting custom-rule incompatibilities.

Requirements:
- Separate reusable character identity and campaign incarnations.
- Pre-play compatibility analysis comparing game family, package versions, mechanics, scripts, and campaign policy.
- Read-only incompatible-character preview showing missing packages, conflicts, and migration options.
- Explicit migration branching for incompatible content replacement.

Key scenarios:
- Character joins a second compatible campaign without mutating original campaign state.
- Missing package dependencies block gameplay and show clear incompatibility analysis.
- Incompatible characters remain previewable but not play-enabled.
- Migration creates a new branch or incarnation that preserves the original.

### 3) global-asset-library
Purpose: Provides a reusable, versioned presentation asset library for characters and renderers across campaigns.

Requirements:
- Global asset references by stable identity for portraits, tokens, models, effects, sounds, and visual styles.
- Semantic metadata for asset type, renderer support, dependencies, and revision information.
- Versioned asset revisions that preserve existing selections until explicitly updated.
- Presentation fallback so missing assets do not break gameplay compatibility.

Key scenarios:
- A character uses the same global asset references across multiple campaign incarnations.
- Event-driven renderer selection matches semantic tags and support metadata.
- Updated asset revisions do not silently replace a character’s current usage.
- Missing 3D models fall back to token or portrait representations.

### 4) ruleset-extensibility
Purpose: Provides a versioned D&D 3.5 rules foundation that can be extended with supplements, campaign content, and homebrew mechanics without changing the core application.

Requirements:
- Composable rules packages with dependencies, versioning, and compatibility metadata.
- Declarative rules behavior for prerequisites, modifiers, triggers, durations, resources, actions, conditions, stacking, and formulas.
- Sandboxed advanced mechanics with restricted scripts and validated runtime operations.
- Rules package provenance and version locking to avoid silent reinterpretation after package changes.

Key scenarios:
- Supplements and homebrew packages are activated only when dependencies resolve.
- Conditional feat modifiers are evaluated in live action context and logged as source-aware results.
- Scripted extension operations are validated or rejected with structured errors.
- Active campaigns require explicit migration or version-lock decisions before package updates apply.

### 5) session-play-and-rendering
Purpose: Provides a shared session model for deterministic rules play with both tactical 2D and immersive 3D rendering.

Requirements:
- Authoritative session state for entities, positions, visibility, permissions, effects, and campaign events.
- Deterministic event-driven rules resolution with ordered, inspectable gameplay events.
- 2D tactical rendering for map, movement, range, visibility, targeting, and tactical effects.
- 3D immersive rendering that consumes the same session state without resolving gameplay independently.
- Solo and multiplayer controller model covering human, GM, AI, and scripted control.

Key scenarios:
- A valid action updates authoritative state and is reflected in both renderers.
- Invalid attacks are rejected without state mutation.
- 3D presentation maps semantic events such as damage or stunned conditions to display states.
- Solo sessions assign controller permissions consistently with multiplayer logic.

## Universal TTRPG Board Platform

### 6) universal-character-builder
Purpose: Allows players and game masters to create and configure characters across different TTRPG rulesets, including visuals, inventory, and ruleset-validated capabilities.

Requirements:
- Ruleset-adaptive character creation workflow customized to active ruleset prerequisites and attribute order.
- Character look-and-feel configuration across portraits, tokens, 3D mesh, tint palettes, and scale.
- Ruleset-validated equipment and item management covering slots, encumbrance, weapon hands, and requirements.
- Capability and talent selection validation for prerequisites and point budgets.

Key scenarios:
- d20 and d100 systems use different creation flows and prompts.
- 3D presentation profiles persist across tactical and immersive views.
- Equipment or talents with unmet prerequisites are blocked or warned correctly.

### 7) multi-ruleset-injection
Purpose: Provides a generalized rules and behavior injection engine supporting multiple tabletop RPG systems through declarative packages and sandboxed scripts.

Requirements:
- Ruleset package registration and schema validation for heterogeneous RPG systems.
- Pluggable action resolution pipelines driven by the active ruleset’s dice model and test mechanics.
- Generalized stat-block evaluation using injected formulas and modifier trees.
- Behavioral trait and condition injection to modify runtime outcomes.

Key scenarios:
- d20, d100, and custom dice mechanics are validated and registered without hardcoded logic.
- Skill checks and characteristic tests resolve via the selected ruleset’s formula pipeline.
- Derived stats such as AC, HP, Wounds, Fate Points, and Fatigue are calculated per ruleset.
- Injected conditions such as Bloodied or Pinned modify outcomes and trigger specific hooks.

### 8) multimedia-presentation-fx
Purpose: Coordinates audiovisual presentation across 2D tactical and 3D immersive views using mapped session events.

Requirements:
- Event-driven audiovisual orchestration for animations, sounds, and particles.
- Character token animation state machines synchronized with board events.
- Spatial sound effects and environmental audio matching scene and encounter state.
- Visual particle and shader effects for projectiles, payloads, and hazards.
- Graceful fallback when custom media assets are not available.

Key scenarios:
- Hit events trigger coordinated weapon animation, sfx, and impact particles.
- Movement events transition tokens through walk states smoothly.
- Fireball detonation plays a localized explosion with attenuation and visual effect.
- Missing custom media falls back to a generic token or procedural asset without crashing.

### 9) board-session-runtime
Purpose: Provides an authoritative real-time board session runtime supporting collaborative and solo play.

Requirements:
- Multi-user session synchronization and permissions with GM/player roles and access control.
- Dynamic fog-of-war and line-of-sight calculation per player.
- Initiative and phase tracking across turns and reaction windows.
- Autonomous AI director for solo sessions and narrative control.
- Reactive NPC tactical behaviors in single-player sessions.

Key scenarios:
- Unauthorized player actions are rejected while GM actions are accepted.
- Hidden enemies are omitted from player snapshots behind walls or fog.
- Initiative advances correctly to the next actor in turn order.
- Solo sessions generate deterministic narrative outcomes and AI-driven NPC choices.

### 10) quest-and-scene-ingestion
Purpose: Enables ingestion and parsing of narrative quest text and adventure modules into structured board layouts and encounters.

Requirements:
- Narrative quest parsing and scene synthesis from descriptive text into rooms, ambiance, and encounters.
- Dynamic tilemap and environment generation from scene manifests.
- NPC extraction and ruleset instantiation from imported scenario descriptions.
- Player character deployment and party entry anchors for active sessions.
- Interactive encounter triggers and hazard synthesis from narrative secrets, traps, and ambushes.

Key scenarios:
- Text quest files are converted into structured scene manifests and encounter definitions.
- Missing coordinates are inferred from descriptive room connectivity and standard sizes.
- NPCs and monsters are instantiated with stat profiles and placements.
- Party entry points are assigned safely while preserving health, statuses, and inventories.
- Ingested traps fire trigger events when a character steps onto them.

## Overall theme
The combined spec set describes a modular tabletop RPG platform with:
- rules-aware character creation and ruleset adaptation,
- campaign-safe character identity and compatibility handling,
- versioned assets and extensions,
- authoritative board-state runtime with 2D/3D rendering,
- multimedia presentation effects,
- and structured scenario ingestion for real game content.
