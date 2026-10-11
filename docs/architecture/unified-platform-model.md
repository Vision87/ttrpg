# Unified TTRPG Platform Architecture & Domain Model

## 1. Unified Domain Model

The platform consolidates tabletop RPG operations across rules, character lifecycles, campaigns, sessions, presentation assets, and authored content into a coherent layered domain model.

```
+-------------------------------------------------------------------------+
|                         Authored Content Layer                          |
|         Quests, Adventure Modules, Encounter Scenarios, Maps            |
+-------------------------------------------------------------------------+
                                    |
                                    v
+-------------------------------------------------------------------------+
|                          Campaign & Governance                          |
|     Campaign Incarnations, Package Locks, Compatibility & Migrations    |
+-------------------------------------------------------------------------+
        |                                                 |
        v                                                 v
+-----------------------+                      +--------------------------+
|  Ruleset Evaluation   |                      |  Authoritative Session   |
| Multi-system Packages |                      | Controllers (GM/Player/  |
| Dice Models, Stats    |                      | Autonomous Director)     |
| Conditions & Scripts  |                      | Fog-of-War, Initiative   |
+-----------------------+                      +--------------------------+
        |                                                 |
        +-----------------------+-------------------------+
                                |
                                v
+-------------------------------------------------------------------------+
|                  Presentation & Global Asset Library                    |
|    2D Tactical Projection, 3D Immersive Projection, Audio/FX Cues       |
+-------------------------------------------------------------------------+
```

### Core Subsystems and Entities
1. **Rules Layer (`rules/`)**:
   - `RulesPackage`: Package manifests declaring mechanics, dice models (`d20_roll_high`, `d100_roll_under`, dice pools), characteristics, formulas, and sandboxed script extensions.
   - `ActionResolver`: Pluggable resolution pipeline computing success/failure, degrees of success, and modifier contribution trees.
   - `StatEvaluator`: Dynamic entity attribute calculator (AC/HP, Wounds/Fate/Fatigue).
2. **Character Layer (`character/`)**:
   - `CharacterProfile`: Base reusable character identity across campaigns.
   - `CharacterDraft` / `BuilderWorkflow`: Guided/expert creation, templates, and prerequisite validators.
   - `PresentationProfile`: Visual/auditory look-and-feel (portraits, 2D token frames, 3D models, tints, scale).
3. **Campaign Layer (`campaign/`)**:
   - `Campaign`: Package locking, validation policies, and active rulesets.
   - `CampaignIncarnation`: Campaign-specific progression, inventories, conditions, and relationship logs isolating campaign mutations from the base character profile.
   - `CompatibilityEngine`: Pre-play dependency checks and migration branching.
4. **Session Layer (`session/`)**:
   - `Session`: Authoritative board state, entities, tiles, GM notes, and ordered event log.
   - `Controllers`: Role-based gating (`GMController` omniscient control, `PlayerController` token ownership, `AutonomousDirectorController` single-player arbitration).
   - `Visibility`: Dynamic line-of-sight and fog-of-war snapshot filtering.
   - `InitiativeTracker`: Universal turn sequencing, rounds, and per-turn action pools.
   - `SoloDirector` & `TacticalAI`: Oracle engine for narrative questions and automated reactive NPC behaviors.
5. **Content Ingestion Layer (`quest/`)**:
   - `IntermediateSceneManifest (ISM)`: Structured representation of rooms, tiles, encounters, triggers, and entry points parsed from text quests.
   - `BoardSynthesizer`: Transforms ISM data into grid topologies, entity placements, and interactive hazards.
6. **Presentation Layer (`clients/`, `assets/`)**:
   - `GlobalAssetLibrary`: Stable, versioned asset references (models, tokens, audio, VFX).
   - `PresentationEventRegistry`: Translates authoritative session events into declarative animations, spatial 3D audio, and visual FX cues.
   - `Projections`: 2D tactical and 3D immersive views driven strictly by authoritative session snapshots and event streams.

---

## 2. Role Boundaries & Separation of Concerns

| Subsystem | Primary Responsibility | Explicit Boundaries & Non-Goals |
| :--- | :--- | :--- |
| **Rules Evaluation** | Resolves action rolls, evaluates stat formulas, runs sandboxed extension scripts. | **MUST NOT** manage presentation, direct UI, or mutate persistence directly. |
| **Board / Session Runtime** | Authoritative state, permission enforcement, turn sequencing, event streaming, LOS. | **MUST NOT** hardcode game-specific formulas or render graphics. |
| **Character Lifecycle** | Creation workflow, templates, equipment rules validation, presentation profiles. | **MUST NOT** mutate cross-campaign state or execute game loop turns. |
| **Campaign & Governance** | Package version locking, compatibility reports, incarnation isolation, migrations. | **MUST NOT** perform real-time tick/turn evaluation. |
| **Content Ingestion** | Parses text adventures into Intermediate Scene Manifests (ISM) and grid tiles. | **MUST NOT** bypass ruleset validation when spawning NPCs/hazards. |
| **Presentation & Assets** | Renders 2D tactical & 3D immersive scenes, plays spatial audio, emits particle cues. | **MUST NOT** resolve rules outcomes or invent independent state. |

---

## 3. Canonical Ownership Table (Duplication Reduction)

| Concept | Canonical Owner | Former Overlaps Reconciled |
| :--- | :--- | :--- |
| **Character Appearance & Assets** | `character/presentation.py` & `assets/` | Decoupled appearance selection from rules mechanics; mechanical and visual stats never mix. |
| **Turn Sequencing & Initiative** | `session/initiative.py` | Unified d20 and d100 initiative models into a single universal descending turn tracker with action pools. |
| **Token Visibility & Fog-of-War** | `session/visibility.py` | Consolidated camera-specific visibility into server-side authoritative snapshot filtering. |
| **NPC Stat Profiles** | `rules/stat_evaluator.py` & `quest/synthesizer.py` | Ingested quest NPCs derive stats directly from registered rules packages instead of ad-hoc descriptors. |
| **Event Mapping for Audiovisual Cues** | `clients/presentation.py` | Dispatches presentation bundles from authoritative events rather than separate event pipelines per renderer. |

---

## 4. Platform Lifecycle Gaps & Follow-Up Requirements

1. **Campaign Lifecycle Management**:
   - Explicit archival and branching for finished campaigns.
   - Long-term campaign progression logs and snapshotting.
2. **Authored Content Validation Pipeline**:
   - Automated linting of community text quests against active rules packages before board synthesis.
   - Validation of custom map terrain keywords against installed tile asset packs.
3. **Schema Migration & Package Version Upgrades**:
   - Safe migration paths for characters when an active rules package is upgraded from `v1.x` to `v2.x`.
   - Automatic fallback or branching prompts during package dependency reconciliation.

---

## 5. Platform Completeness Gate

The TTRPG Platform is considered ready for production review and implementation only when:
1. **Layer Ownership**: Every capability belongs to a single canonical subsystem with documented interface boundaries.
2. **Deterministic Rules & Session Play**: All action resolutions, initiative turns, and fog-of-war snapshots are authoritative, deterministic, and replayable from event logs.
3. **Multi-Ruleset Compatibility**: The system supports arbitrary dice models (`d20`, `d100`, dice pools) without hardcoding system rules in the session or presentation layers.
4. **Independent Presentation**: 2D tactical, 3D immersive, and headless testing run from identical session projections with zero presentation leakage into rules resolution.
5. **Full Test Conformance**: Standard-library test suite runs with 100% pass rate and zero regressions.
