# Design

## Context

The current TTRPG planning work is split across several overlapping change streams. The same concepts recur in character creation, ruleset injection, board runtime, asset management, and presentation requirements, while a few cross-cutting lifecycle concerns remain implied rather than explicitly specified. This proposal consolidates the planning direction into a single platform foundation so the next implementation phase can work from a clear architecture.

## Goals / Non-Goals

**Goals:**
- Define a common domain model across rules, characters, campaigns, sessions, assets, and content.
- Clarify subsystem ownership to reduce duplicate requirement language.
- Surface missing gaps before implementation, especially around campaign lifecycle, authored content validation, persistence, and migrations.

**Non-Goals:**
- Replacing the project’s existing subsystem ideas with a single monolith.
- Defining every implementation class or framework choice at this planning stage.
- Finalizing the full content and ruleset matrix for all systems before the platform structure is established.

## Decisions

### 1) Use a layered platform model instead of parallel duplicated concepts
The design treats the TTRPG project as a layered platform: rules, character lifecycle, campaign/session runtime, content authoring, presentation, and asset management. Each layer owns its data and behavior, while cross-layer contracts remain explicit. This prevents repetition in specs and keeps the architecture legible.

Alternative considered: Keep each change as a standalone island. Rejected because it preserves duplication and delays the identification of missing features.

### 2) Make completeness a planning requirement
The design introduces a platform completeness gate: every critical layer must be explicitly traceable in planning before implementation can proceed. This protects the project from missing content pipelines, persistence, or campaign migration steps that are easy to skip when requirements are fragmented.

Alternative considered: Proceed with the most visible subsystems first. Rejected because it increases the risk of building a partially complete platform with unhandled lifecycle concerns.

### 3) Handle compatibility as a first-class platform concern
Ruleset, asset, and character compatibility are treated as governance concerns rather than edge cases. The platform must validate compatibility before gameplay and during migration so the same character or rules package behaves predictably across campaigns.

Alternative considered: Allow compatibility checks to be implemented only inside a campaign or rules package. Rejected because campaign movement and migrations are cross-cutting concerns that need a shared contract.

## Risks / Trade-offs

- [Duplicated definitions will be harder to spot once implementation starts] → Mitigation: keep the platform model and the completeness gate as explicit planning checkpoints.
- [Over-standardizing too early could constrain innovative rulesets] → Mitigation: distinguish platform contracts from ruleset-specific behavior; the foundation stays generic, while ruleset logic remains pluggable.
- [Unspecified content authoring work may be deferred] → Mitigation: make content validation and migration tooling explicit follow-up requirements rather than implicit assumptions.

## Migration Plan

1. Use the consolidated platform model as the planning reference for all later work.
2. Map existing change streams to the common layers so duplicate requirements are merged or clearly assigned.
3. Before implementation, confirm that campaign lifecycle, content ingestion, compatibility checks, and persistence are either covered or explicitly listed as future work.
4. Roll out implementation in layer-oriented increments rather than by ad hoc feature bursts.

## Open Questions

- Is the first production target a single unified ruleset family (for example, d20-focused) or a fully multi-ruleset platform from day one?
- Should authored content validation be treated as a core prerequisite for v1, or can it be deferred behind a content pipeline MVP?
