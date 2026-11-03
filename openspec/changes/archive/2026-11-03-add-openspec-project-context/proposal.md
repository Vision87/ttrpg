# Proposal

## Why

OpenSpec artifacts currently receive no project-specific context, so future proposal and implementation work must rediscover stable architecture, verification sources, and licensing boundaries. A short OpenSpec-only context block can reduce repeated exploration and improve precision without adding instructions to unrelated Copilot tasks.

## What Changes

- Add a concise `context:` block to `openspec/config.yaml` covering the Python-service/Unity-client boundary, the README as the source for verified setup and test commands, package and asset provenance expectations, and the code-only scope of the root MIT license.
- Keep detailed commands and descriptions in the README and notices instead of duplicating them in the context block.
- Limit the change to OpenSpec workflow context; do not add repository-wide or path-specific Copilot instructions.

## Capabilities

### New Capabilities

- None.

### Modified Capabilities

- None. This is a tooling configuration change and does not change application behavior; `.openspec.yaml` will declare `skip_specs: true`.

## Impact

- Update only `openspec/config.yaml`.
- No application code, APIs, dependencies, or runtime behavior change.
