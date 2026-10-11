# Tasks

## 1. Foundation and technology spikes

- [x] 1.1 Define the repository/module structure for domain, rules, persistence, session, assets, and clients, and verify the planned boundaries are documented and independently testable
- [x] 1.2 Compare viable 2D/3D client runtimes against the renderer contract, asset requirements, and local/multiplayer constraints, record the architecture-neutral renderer proof-of-concept, and select Unity 2022.3 LTS with WebGL as the client runtime
- [x] 1.5 Scaffold the Unity WebGL client and verify it imports the shared snapshot/event DTO contract
- [x] 1.6 Implement Unity 2D tactical and 3D immersive scene adapters driven by the shared session projection, and verify both views render the same entity positions and events
- [x] 1.7 Add a browser-targeted Unity build configuration and verify the client can be built or validated through the available Unity tooling
- [x] 1.3 Define the hybrid persistence model for durable local data and an authoritative multiplayer session service, and verify a local client can create, load, and synchronize a sample session
- [x] 1.4 Establish shared identifiers, versioning, serialization, validation-error, and provenance conventions, and verify round-trip tests preserve package, character, campaign, and asset references

## 2. Rules package and evaluation runtime

- [x] 2.1 Implement package manifests, dependency resolution, version locking, source precedence, add/patch/replace/disable/alias operations, and verify incompatible package graphs are rejected with actionable diagnostics
- [x] 2.2 Define declarative schemas for D&D 3.5 entities, prerequisites, choices, modifiers, formulas, actions, conditions, resources, durations, triggers, and stacking, and verify representative definitions validate
- [x] 2.3 Implement deterministic dice and formula evaluation with explainable source contributions, and verify repeated inputs produce identical results and auditable calculation breakdowns
- [x] 2.4 Implement the versioned sandboxed extension API with capability checks, deterministic runtime randomness, execution limits, structured errors, and verify invalid script requests leave state unchanged
- [x] 2.5 Seed the private D&D 3.5 core-plus-selected-supplements package with the initial races, classes, levels, abilities, skills, feats, spells, equipment, conditions, monsters, and templates, and verify package validation and representative rules conformance tests pass

## 3. Character model and creation

- [x] 3.1 Implement reusable character profile, build-choice, derived-statistic, provenance, override, and presentation-profile models, and verify calculated values update when source choices change
- [x] 3.2 Implement ruleset template definitions and personal template save/apply flows, and verify applying or editing a template does not create a live dependency that mutates existing characters
- [x] 3.3 Implement the guided beginner creation flow for race, class levels, ability scores, skills, feats, spells, and equipment, and verify a package template produces an editable validated draft
- [x] 3.4 Implement the expert from-scratch flow with prerequisite explanations, unavailable-choice reasons, and homebrew override warnings, and verify finalization respects campaign validation policy
- [x] 3.5 Implement equipment budget, proficiency, encumbrance, loadout, and derived-statistic calculations, and verify representative legal and illegal equipment selections are explained correctly
- [x] 3.6 Implement appearance and presentation selection with live preview hooks for portrait, token, model, equipment visuals, animations, audio, and effects, and verify presentation edits do not change mechanical state
- [x] 3.7 Implement final validation, draft resume, revision history, and character persistence, and verify package versions, choices, overrides, derived values, and presentation references survive reload

## 4. Campaign reuse and compatibility

- [x] 4.1 Implement campaign package configuration, validation policy, and version locks, and verify a campaign records its exact enabled package set
- [x] 4.2 Implement campaign-specific character incarnations for progression, inventory, conditions, relationships, quest state, and history, and verify state changes remain isolated between campaigns
- [x] 4.3 Implement pre-play compatibility analysis for game family, package versions, definitions, mechanics, scripts, and policy, and verify missing gameplay-critical dependencies block play with a detailed report
- [x] 4.4 Implement read-only incompatible-character preview and presentation of conflict categories, affected choices, and migration options, and verify preview creates no gameplay or destructive state changes
- [x] 4.5 Implement explicit migration branching with replacement/removal choices, change summaries, revalidation, and source preservation, and verify the original character remains unchanged after migration

## 5. Session runtime and controllers

- [x] 5.1 Implement authoritative session state for entities, positions, visibility, permissions, actions, effects, and ordered event history, and verify valid state transitions are persisted and replayable
- [x] 5.2 Implement human, GM, AI, and scripted controller assignments with permission enforcement, and verify solo party control and multiplayer ownership scenarios use the same authorization path
- [x] 5.3 Implement action submission, rules validation, atomic state updates, rejected-operation events, and explainable combat results, and verify an attack, damage, condition, and resource sequence is deterministic
- [x] 5.4 Implement hybrid local/session-service synchronization with reconnect and conflict handling, and verify a client can resume from the authoritative event position without duplicating actions

## 6. Tactical and immersive clients

- [x] 6.1 Implement the 2D tactical board projection for maps, tokens, movement, range, targeting, visibility, and tactical effects, and verify out-of-range actions are visibly rejected without state changes
- [x] 6.2 Implement semantic event consumption for logs, rolls, actions, effects, conditions, and resource changes, and verify the event log matches authoritative session history
- [x] 6.3 Implement the 3D immersive projection for camera, models, animation, sound, lighting, and effects without independent rules resolution, and verify it renders the same positions and outcomes as the 2D view
- [x] 6.4 Implement solo and multiplayer session UI for controller ownership, permissions, character selection, and campaign entry, and verify incompatible characters cannot enter gameplay while compatible incarnations can

## 7. Global asset library

- [x] 7.1 Implement global asset manifests, stable identities, semantic tags, renderer support metadata, dependencies, source metadata, and revision storage, and verify invalid asset metadata is rejected
- [x] 7.2 Implement presentation profile references, asset revision pinning, explicit update flow, and renderer fallbacks, and verify a character retains its selected revision until the user approves an update
- [x] 7.3 Implement semantic event-to-presentation mapping for movement, attacks, damage types, conditions, and resource changes, and verify both renderers select compatible assets without altering gameplay results
- [x] 7.4 Implement asset diagnostics and fallback reporting, and verify unavailable presentation assets produce warnings while mechanical compatibility remains valid

## 8. Integration and conformance

- [x] 8.1 Create an end-to-end scenario that builds a beginner character from a template, customizes appearance, enters a campaign, performs an action, and verifies 2D/3D event consistency
- [x] 8.2 Create an end-to-end expert scenario with a homebrew feat or item, verify provenance and sandboxed evaluation, and confirm compatibility behavior in a campaign missing the extension
- [x] 8.3 Create cross-campaign scenarios covering isolated progression, compatible reuse, incompatible preview, migration branching, and global asset reuse, and verify all acceptance outcomes
- [x] 8.4 Run package, rules, persistence, synchronization, renderer, and end-to-end test suites, and verify the implementation satisfies every scenario in the five capability specifications
