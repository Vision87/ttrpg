# Proposal

## Why

The project has reusable character models, Python creation workflows, and a Unity WebGL board, but no user-facing creation flow or connection from a saved character to a playable board session. Character creation steps and parts of stat evaluation are currently system-specific, so adding another RPG can require hard-coded changes instead of package configuration.

## What Changes

- Add a Unity WebGL character creation experience backed by a Python service that remains authoritative for draft updates, rules validation, saving, and session initialization.
- Drive creation steps, fields, choices, and applicable validation from versioned ruleset packages; use D&D 3.5 and Dark Heresy as the initial package examples and support adding further packages without adding system-specific UI flows.
- Support beginner/template-based and expert/from-scratch creation, clear validation feedback, presentation configuration, and review before saving.
- Apply a ruleset-provided visual theme consistently across character creation and the board, with safe defaults when a package has no theme; defer player-adjustable theme overrides to a later change.
- Let a saved character launch into a local solo board session rendered by the existing Unity client, replacing the current static-fixture-only entry path for this flow.
- Defer in-app ruleset authoring and shared online multiplayer; keep package and service boundaries suitable for future expansion.

## Capabilities

### New Capabilities
- `ruleset-themed-interface`: Apply package-provided visual themes across the creation UI and board, with fallback behavior.

### Modified Capabilities
- `character-creation`: Add the user-facing, package-driven creation and final review flow while retaining rules validation, provenance, and presentation requirements.
- `universal-character-builder`: Make workflow steps and fields configurable by ruleset packages and cover the initial D&D 3.5 and Dark Heresy flows.
- `multi-ruleset-injection`: Define package-provided creation metadata and ensure unsupported mechanics or formulas are reported rather than silently interpreted as another system.
- `session-play-and-rendering`: Specify launching a finalized character into a local solo board session rendered from authoritative session state.

## Impact

- **Unity:** Add browser-facing creation, review, and board-entry UI; consume service responses rather than treating a bundled fixture as the only session source.
- **Python:** Expose creation/package/session operations through a local service; adapt the creation workflow and validation to package metadata; persist drafts and finalized characters.
- **Rules packages:** Extend package manifests with a validated, declarative creation-flow contract, initially exercised by the existing D&D 3.5 and Dark Heresy content.
- **Visual presentation:** Add safe, declarative package theme profiles for application UI and board presentation, distinct from individual character appearance profiles.
- **Session runtime:** Initialize a solo session from a saved, validated character and provide its initial snapshot to the client.
- **Scope:** Local solo play is the first end-to-end target. Online multiplayer and an in-app ruleset editor are out of scope.
