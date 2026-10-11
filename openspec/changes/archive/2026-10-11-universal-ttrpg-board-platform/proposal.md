# Proposal

## Why

Modern virtual tabletops (VTTs) are tightly coupled to specific game rulesets or act as passive digital whiteboards lacking deep mechanical automation, quest parsing, and solo play capabilities. Creating a universal, extensible TTRPG board engine with pluggable rule injection, automated quest-to-board ingestion, rich multimedia feedback, and dual multi-user/single-player support enables players and GMs to experience diverse game systems (from D&D to Warhammer 40k Dark Heresy) with complete visual and mechanical fidelity.

## What Changes

- **Multi-Ruleset Injection Engine**: Introduce a modular rules architecture allowing diverse TTRPG systems (d20 roll-high, d100 roll-under with degrees of success, dice pools, custom stat blocks, and action resolution pipelines) to be injected dynamically into board components.
- **Ruleset Repository & Behavioral Packages**: Store, version, and validate game rulesets, actions, items, and behavioral scripts in composable packages.
- **Text Quest & Scene Ingestion**: Ingest narrative text quests and scenario scripts, parsing them into structured board layouts, environment tiles, lighting/fog zones, NPC entities, PG (player character) starting anchors, and interactive encounter triggers.
- **Unified Character Creator**: Provide a ruleset-aware character creation workflow allowing players to configure physical and visual look-and-feel (2D portraits, 3D meshes/tokens, color palettes), inventory items, and ruleset-validated capabilities (talents, traits, skills, spells, characteristics).
- **Dual-Mode Session Board Runtime**: Support authoritative session state with real-time multi-user collaboration (GM + players, fog-of-war, initiative, permissions) and an intelligent single-player solo mode (automated director, solo oracle, reactive NPC AI behaviors).
- **Multimedia & Audio-Visual FX Pipeline**: Deliver synchronized event-driven animations, directional audio/sound effects, ambient soundscapes, and visual particles/shaders for board actions, movement, spellcasting, and combat.
- **BREAKING**: Generalize session action payloads and entity state models beyond D&D 3.5 hardcoded assumptions to support arbitrary ruleset schemas.

## Capabilities

### New Capabilities

- `multi-ruleset-injection`: Pluggable rules and behavior injection engine supporting heterogeneous TTRPG mechanics (d20, d100 roll-under, degrees of success, fatigue/corruption, custom modifiers, and sandboxed formulas).
- `quest-and-scene-ingestion`: Narrative text quest ingestion and world synthesis pipeline that parses prose/markdown scenarios into board tiles, environments, interactive objects, NPCs, and PG placement anchors.
- `universal-character-builder`: Ruleset-driven character creation and configuration suite combining visual look-and-feel (models, portraits, cosmetics), equipment management, and mechanical validation.
- `board-session-runtime`: Authoritative multi-user and single-player virtual tabletop session runtime featuring permission-aware synchronization, fog-of-war, and an autonomous AI GM director for solo sessions.
- `multimedia-presentation-fx`: Event-driven audio-visual orchestration engine driving 2D/3D token animations, sound effects, environmental ambiances, and particle/shader visual FX.

### Modified Capabilities

None. (No baseline specs exist in `openspec/specs/`).

## Impact

- **Core Runtime & Architecture**: Expands `rules/`, `character/`, `session/`, and `clients/` from a D&D 3.5 prototype into a generalized multi-ruleset plugin and session execution engine.
- **Unity Client & Projections**: Extends `UnityClient` with multimedia animation controllers, audio sources, VFX particle triggers, dynamic tilemap instantiation, and multi-user/solo UI overlays.
- **Data & Content Schemas**: Introduces universal ruleset package schemas (`content/`), quest manifest schemas, and presentation asset descriptors (`assets/`).
- **Dependencies & Tools**: Adds text quest parser utilities and solo AI behavior trees/oracle drivers.
