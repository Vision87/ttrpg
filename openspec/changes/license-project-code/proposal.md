# Proposal

## Why

The repository currently has no root license, so users cannot tell what reuse rights apply to the original application code. A single blanket license would also be misleading because the repository contains separately licensed fonts and artwork, D&D 3.5 SRD-derived data, and provisional Dark Heresy examples with external source references.

## What Changes

- Propose a root MIT license for original application code, subject to confirming the copyright notice holder before publication.
- Clarify in the README that the root license does not relicense third-party software, fonts, artwork, or ruleset material.
- Add a third-party notices document that records verified license declarations and clearly identifies provenance or redistribution terms that remain unresolved.
- Preserve package-level and asset-level licensing metadata; do not claim unverified game content is covered by MIT.

## Capabilities

### New Capabilities

- `repository-licensing`: Define the repository's root license scope and how separately licensed or unresolved content is disclosed.

### Modified Capabilities

- None.

## Impact

- Add a root `LICENSE` file and a third-party notices document.
- Update `README.md` to explain the scope and link to notices.
- Review current content metadata for accurate notices, especially the D&D 3.5 OGL declaration and the provisional Dark Heresy examples.
- No application behavior, APIs, or runtime dependencies are intended to change.
