# Design

## Context

See proposal.md for motivation and scope. The Python code already has `CreationWorkflow`, `CharacterBuilder`, package resolution, character persistence, and a session runtime. However, creation step order is selected by hard-coded ruleset identifiers, stat evaluation contains system defaults, `CharacterStore` handles one record per configured path, and there is no HTTP application service. Unity WebGL currently loads a bundled `TextAsset` fixture through `SessionClient`; its projections consume snapshots rather than resolving gameplay.

The existing `serve_webgl.py` uses Python's standard-library HTTP server and already handles compressed WebGL assets. The Unity client and the Python service can therefore be delivered from the same local origin without adding a web framework or browser CORS configuration.

## Goals / Non-Goals

**Goals:**
- Make the creation UI render supported creation-flow metadata from resolved, versioned rules packages.
- Keep the Python service authoritative for package selection, draft state, validation, persistence, finalization, and solo session creation.
- Deliver a complete local path from package selection through character creation to the configured starter session in Unity WebGL.
- Preserve saved package provenance and reject unsupported rules behavior explicitly.
- Apply the selected ruleset's default visual theme consistently to the creation UI and board while keeping character-specific appearance separate.

**Non-Goals:**
- In-app authoring or editing of RPG systems and rules packages.
- Shared online multiplayer, remote hosting, accounts, or cloud character synchronization.
- A new board editor, quest importer, or board-selection experience.
- Player-adjustable application-theme settings; theme defaults are package-provided in this change.
- Executing arbitrary package-provided code or formulas.

## Decisions

### Use a same-origin local Python application service

Extend the local serving process to serve the WebGL build and a small JSON API from one loopback-bound origin. The service owns ruleset discovery, creation-flow metadata, draft lifecycle, validation/finalization, character persistence, and session startup. Use the standard library initially rather than adding a framework: the repository has no existing application server or web-framework dependency, and a local single-user service has a small route surface.

The service SHALL not accept arbitrary filesystem paths from the client. It derives storage paths from validated/generated identifiers and writes character records under a dedicated local data directory. Bind only to loopback for this scope; do not imply that the service is safe for remote access.

### Treat package metadata as the source of creation flow

Extend the package contract with optional, schema-validated creation metadata: an ordered set of steps, typed fields, definition-backed options, and references to supported validation rules. Packages without this metadata remain usable for non-creation purposes but are not offered as character-creation packages.

Represent only behaviors the shared runtime can validate and evaluate. Reuse the same generic client controls for D&D 3.5, Dark Heresy, and later compatible packages. Do not execute package code or accept arbitrary formulas. Unsupported formulas, field types, references, and validation operations produce explicit package or draft errors; they never fall back to D&D 3.5 behavior. Package versions are resolved and recorded with the draft and final character.

### Separate ruleset theme from character appearance

Allow a package to provide an optional declarative theme profile made from supported visual tokens and installed asset references. Apply the resolved ruleset theme to both the creation interface and the board, while keeping the character's portrait, token, model, colors, and other presentation choices as a separate profile. Do not load executable styles, arbitrary code, or unrestricted package-supplied URLs. Packages without a theme use the application's neutral default. A future player preference layer can override selected theme tokens without changing the package theme contract; this change does not expose those controls.

### Make the Python service authoritative; keep Unity presentation-only

The Unity creation UI requests package flows and draft/review results from the service. It may hold temporary form state for interaction, but each accepted change is validated and reflected by the service. Unity does not duplicate rules, prerequisites, derived-stat calculations, or package resolution.

The Unity board receives a serialized session envelope created by the Python session runtime, rather than loading the hard-coded fixture as the only runtime input. The board continues to render that envelope through the existing projection components.

### Persist drafts and characters as local records

Adapt the existing JSON character store to manage separate records keyed by generated character/draft IDs, with safe writes that do not expose paths to the browser. Draft records include package versions and creation state needed to resume; finalization retains the existing character record fields and validation/provenance information. Missing package versions block resume or play rather than silently migrating stored data.

### Start from the configured starter session

For the first end-to-end slice, use the existing starter session as the board-state template. Replace its placeholder player character with the finalized character at the configured player spawn, preserve the non-player entities and other board/session data, assign the character to the local human controller, and serialize the resulting snapshot. Do not add quest/board selection or import.

## Risks / Trade-offs

- [The existing starter fixture may not contain enough board data for a complete tactical experience] -> Keep the first slice scoped to the configured starter session, verify the actual rendered experience, and add only the minimum starter-session data needed for that path; board authoring and quest ingestion remain separate.
- [A declarative creation contract cannot represent every RPG's unique mechanics] -> Publish and validate the supported vocabulary, reject unsupported behavior with actionable errors, and extend the runtime contract deliberately rather than silently approximating mechanics.
- [Theme tokens or referenced assets may be missing or incompatible with a renderer] -> Validate token values and asset references, use the neutral default for unsupported or missing theme elements, and keep theme fallback independent from character presentation fallback.
- [Serving an API from the WebGL asset server increases the impact of route and input mistakes] -> Bind to loopback, constrain routes and payload sizes, validate identifiers and package inputs, and never accept client-selected filesystem paths.
- [Package changes can make saved drafts or characters incompatible] -> Pin package versions in records and block resume/play when a required version is unavailable; do not migrate implicitly.
- [Unity WebGL and local API integration can fail differently from Python unit tests] -> Include an end-to-end check against the served WebGL/API path and verify compressed build assets remain served with their required headers.

## Migration Plan

1. Add and validate creation-flow and optional theme metadata for the existing D&D 3.5 and Dark Heresy package fixtures while preserving current package behavior for session-only use.
2. Make Python creation flows consume resolved package metadata and add the local JSON service and per-character persistence.
3. Update Unity WebGL to render package-driven creation/review screens and consume initialized session snapshots, applying the same ruleset theme to creation and board views.
4. Verify the local create, save/resume, finalize, and start-board path for both initial packages.
5. Roll back by serving the existing bundled fixture through the current client path; leave existing character records and package files intact. No remote data migration is required.
