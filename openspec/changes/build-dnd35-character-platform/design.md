# Design

## Context

This is a greenfield, personal-use platform with no existing implementation or capability specs. The proposal and capability deltas define a D&D 3.5-focused character-first experience that must remain extensible for supplements and homebrew, support reusable characters across campaigns, and present one authoritative session through both 2D and 3D clients.

The main architectural constraint is keeping mechanical truth independent from character presentation and rendering. Campaign compatibility must be deterministic and explainable even when custom rules are involved.

## Goals / Non-Goals

**Goals:**

- Establish a versioned domain model for rules packages, characters, campaigns, incarnations, assets, and sessions.
- Make character creation and rules explanations first-class user experiences.
- Support declarative rules for common D&D 3.5 behavior and sandboxed scripts for exceptional mechanics.
- Preserve deterministic, replayable gameplay through an authoritative event stream.
- Let 2D tactical and 3D immersive clients consume the same state without duplicating rules logic.
- Support solo and multiplayer control through the same permission and controller model.

**Non-Goals:**

- Implement every D&D 3.5 sourcebook or asset pack in the first delivery.
- Make the 3D view an independent rules or physics simulation.
- Allow incompatible characters to enter gameplay through silent conversion.
- Make public distribution, commercialization, or a marketplace part of the initial architecture.
- Require AI-generated content for character creation or play.

## Decisions

### 1. Use a layered domain model

Separate the platform into:

```text
Rules packages
  -> definitions, formulas, scripts, provenance

Character profile
  -> identity, build choices, presentation profile

Campaign incarnation
  -> progression, inventory, conditions, history, local state

Session runtime
  -> authoritative entities, actions, permissions, events

Renderers
  -> 2D tactical and 3D immersive projections
```

This is preferred over a single character object because the same character must be reusable across campaigns without sharing campaign-local state. It also prevents renderers from becoming accidental rules engines.

### 2. Treat rules content as versioned packages

The core D&D 3.5 rules, supplements, campaign content, and homebrew are package inputs with IDs, versions, dependencies, source metadata, and precedence. Campaigns explicitly enable package versions and lock or migrate them.

Use additive definitions, patches, replacements, disable operations, and aliases for composition. Retain provenance on resolved values so the character builder and action results can explain where a modifier or definition originated.

This is preferred over hard-coding every class, feat, spell, and item because supplements and personal extensions must be added without changing the runtime.

### 3. Make the rules runtime declarative-first with a sandbox boundary

Represent common mechanics as data-driven prerequisites, choices, modifiers, triggers, durations, formulas, resources, actions, conditions, and stacking rules. Use a versioned sandboxed script API only when the declarative vocabulary cannot express a mechanic.

Scripts receive an explicit read context and produce validated operation requests. Dice and randomness come from the runtime rather than the script environment. Scripts have bounded execution and no unrestricted filesystem or network access.

This is preferred over unrestricted plugins because deterministic multiplayer state, replay, compatibility analysis, and safe failure require the runtime to remain authoritative.

### 4. Store explicit choices and derive statistics

Characters retain user choices, template provenance, homebrew overrides, package references, and presentation references. Derived values such as attack bonus, armor class, saving throws, hit points, and skill modifiers are calculated from those inputs and expose their contributing sources.

This is preferred over persisting only final numbers because changing a feat, item, level, effect, or campaign rule must recalculate the character and explain the result.

### 5. Make templates inputs, not character dependencies

Ruleset packages provide curated templates. Users may save templates from new drafts or existing characters. Applying a template creates ordinary character choices with provenance; later template changes do not mutate existing characters.

This supports beginner onboarding and expert reuse without maintaining separate character formats.

### 6. Separate reusable character profiles from campaign incarnations

A reusable character stores identity, build intent, presentation, and package dependencies. Each campaign creates an incarnation containing local level/progression, inventory, conditions, quest state, relationships, and event history.

Campaign-local progression is the default to avoid cross-campaign balance and state leakage. Explicit branching or migration creates a new incarnation or character branch and never mutates the source.

### 7. Run compatibility analysis before gameplay

Compare a character's game family, package versions, required definitions, scripts, custom mechanics, and campaign policy before session entry. Classify results as compatible, compatible with warnings, needs migration, or incompatible.

Gameplay-critical conflicts block play. Presentation assets are global and do not affect mechanical compatibility; renderer failures generate presentation diagnostics and use fallbacks.

Incompatible characters can be opened in a read-only report. Any conversion produces a proposed branch, a change summary, and a new validation result before the user confirms it.

### 8. Use semantic events as the renderer contract

Rules resolution emits ordered events such as action declared, roll made, hit confirmed, damage applied, condition changed, resource changed, and operation rejected. Events include enough context for logs, replay, compatibility diagnostics, and presentation mapping.

The 2D renderer uses events and authoritative state for precise tactical interaction. The 3D renderer maps semantic events to models, animation, audio, camera, lighting, and effects but never resolves or mutates gameplay.

This is preferred over renderer-specific commands because the same event must support two views, accessibility modes, replay, and future clients.

### 9. Use stable, versioned global asset references

Assets live in a global library and are referenced by stable identity plus revision. Presentation profiles select portraits, tokens, models, animations, sounds, effects, and fallback assets with semantic metadata and renderer support.

Existing characters remain pinned to their selected revision until the user explicitly migrates them. This preserves visual continuity while allowing global asset improvements.

## Risks / Trade-offs

- **[Rules breadth]** Full D&D 3.5 has many interacting edge cases. -> Build the complete schemas and evaluation contracts first, then expand content and conformance tests incrementally.
- **[Declarative limits]** Rare mechanics may exceed the standard effect vocabulary. -> Keep the sandboxed script API versioned, capability-limited, deterministic, and observable.
- **[Package conflicts]** Supplements and homebrew may redefine the same content. -> Require explicit precedence and preserve source provenance in resolved definitions and calculations.
- **[Migration complexity]** A custom character may depend on mechanics unavailable in another campaign. -> Block gameplay, provide read-only diagnostics, and create only explicit migrated branches.
- **[2D/3D divergence]** Visual clients could drift from authoritative state. -> Make session state and events authoritative and treat both renderers as projections with no independent rules resolution.
- **[Asset storage]** Models, animation, audio, and effects can be large. -> Use deduplicated global references, revisions, metadata validation, and renderer fallbacks.
- **[Script failures]** An extension script may fail during an action. -> Bound execution, reject invalid requests atomically, preserve prior state, and record structured errors.
- **[Solo/multiplayer expansion]** Networking and permissions can complicate a single-user prototype. -> Model controllers, permissions, and ordered events from the beginning, even if the first deployment is local.

## Migration Plan

There is no existing application state to migrate. Implement the domain contracts and package manifests first, then create a seeded private D&D 3.5 core package and sample templates. Add character drafts and validation before campaign incarnations, then add authoritative session events and the 2D renderer. Integrate the 3D projection and global asset revisions after the event contract is stable.

For future package or asset updates, preserve locked versions and require explicit migration. Rollback consists of restoring the previous package or asset revision and replaying the immutable session event history against the locked dependency set.

## Client/runtime decision

The first client uses Unity with WebGL as the initial deployment target. Unity
provides one 2D/3D scene model and asset pipeline while WebGL keeps the first
interactive client browser-accessible. The Unity client consumes the existing
session snapshot and semantic event contracts; it does not resolve rules or
become authoritative.

The client integration is isolated behind serialized snapshot/event DTOs so a
desktop Unity build or another renderer can be added later without changing
the rules and session contracts.

## Open Questions

- Which exact D&D 3.5 core content corpus and private source format will seed the initial package? The initial scope is core rules plus selected supplements, with the exact selection captured during content seeding.
