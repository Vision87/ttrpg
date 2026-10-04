# Tasks

## 1. Multi-Ruleset Injection Engine

- [x] 1.1 Implement generalized ruleset package schema supporting arbitrary dice models (`d20_roll_high`, `d100_roll_under`, dice pools) and verify with a schema validation unit test.
- [x] 1.2 Implement the pluggable action resolution pipeline with test evaluation, degrees of success/failure calculations, and modifier trees, verified via unit tests for both d20 and d100 systems.
- [x] 1.3 Create a reference Warhammer 40k Dark Heresy core package (`content/dark-heresy-core/package.json`) defining characteristics, skills, ballistic/weapon tests, armor/wounds, and verify package load integrity.
- [x] 1.4 Generalize entity stat-block evaluators to dynamically calculate system-specific attributes (e.g. AC/HP vs Wounds/Fate/Fatigue) and verify through evaluator tests.

## 2. Text Quest & Scene Ingestion Pipeline

- [x] 2.1 Implement the text quest parser capable of extracting rooms, terrain descriptors, encounters, and interactive objects into an Intermediate Scene Manifest (ISM), verified with sample quest text fixtures.
- [x] 2.2 Implement the board grid synthesizer that transforms ISM data into concrete tile layouts, walls, line-of-sight occluders, and lighting zones, verified by grid topology inspection tests.
- [x] 2.3 Implement the NPC and encounter entity generator that matches text quest descriptions against registered ruleset packages, verified by spawning validated enemy and neutral entity tokens.
- [x] 2.4 Implement party entry anchor resolution and player character deployment on the generated board, verified by party positioning tests.
- [x] 2.5 Implement interactive hazard and trigger synthesis (traps, secret doors, perception checkpoints), verified by trigger execution tests.

## 3. Universal Character Builder Suite

- [x] 3.1 Implement the ruleset-driven character creation workflow engine that adapts creation steps based on active ruleset schemas, verified by stepping through both D&D and Dark Heresy creation sequences.
- [x] 3.2 Implement look-and-feel presentation profile management (portraits, 2D token frames, 3D mesh references, material tints, and scale), verified by serialization and profile validation tests.
- [x] 3.3 Implement ruleset-validated inventory and equipment handling (encumbrance, slot restrictions, weapon hands, and prerequisites), verified by equipment validation tests.
- [x] 3.4 Implement capability and talent selection validators ensuring prerequisite chains and point budgets are strictly satisfied, verified by talent prerequisite test cases.

## 4. Authoritative Session Board (Multi-User & Solo AI Director)

- [ ] 4.1 Refactor session runtime to support role-based controllers (`GMController`, `PlayerController`, `AutonomousDirectorController`) and permission gating, verified with controller authorization tests.
- [ ] 4.2 Implement dynamic fog-of-war and tile visibility filtering per player based on character line-of-sight, verified by client snapshot visibility tests.
- [ ] 4.3 Implement universal round, turn order, and initiative tracking across varied ruleset systems, verified with combat sequencing tests.
- [ ] 4.4 Implement the single-player autonomous AI director with an oracle engine to resolve narrative questions and scene progression, verified by solo oracle outcome tests.
- [ ] 4.5 Implement reactive tactical NPC AI behaviors for solo mode encounters (threat assessment, movement, action selection), verified with automated NPC combat turn tests.

## 5. Multimedia Presentation & Audiovisual FX Pipeline

- [ ] 5.1 Implement the presentation event mapping registry that translates authoritative session events into animation, audio, and visual particle cues, verified with event projection tests.
- [ ] 5.2 Implement token animation state machine adapters (idle, walk, attack, hurt, down) for tactical and 3D projections, verified by animation state transition assertions.
- [ ] 5.3 Implement spatial 3D audio and ambient soundscape manager contracts, verified by sound playback trigger tests in the projection layer.
- [ ] 5.4 Implement visual FX particle and shader trigger contracts (projectile trajectories, area-of-effect bounds, spell impacts, status auras), verified by FX event dispatch tests.
- [ ] 5.5 Update `UnityClient` scripts and session DTOs to ingest multimedia cues and render dynamic tilemaps and FX, verified with Unity client contract tests.

## 6. End-to-End Integration & Verification

- [ ] 6.1 Create an end-to-end integration test running a solo session: ingest a text quest, generate board tiles, deploy a character, and execute combat with AI-controlled NPCs.
- [ ] 6.2 Create an end-to-end integration test running a multi-user session with GM and player controller synchronization and fog-of-war validation.
- [ ] 6.3 Run the full test suite (`PYTHONPATH=. python3 tests/run_all.py`) and verify that all existing and new checks pass with zero regressions.
