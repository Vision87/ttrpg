# Proposal

## Why

The root README is only a short project description and points readers elsewhere without explaining the platform, prerequisites, or a complete local run path. Expanding it will give contributors and users one accurate starting point for understanding and running the project.

## What Changes

- Expand the existing root `README.md` rather than create a duplicate.
- Summarize the platform purpose, high-level architecture, currently supported rulesets, and local-play scope.
- Document runtime and development prerequisites separately, including the Unity editor/WebGL target, Python service, test runner, and optional portrait-art generation tool.
- Provide verified build, local launch, test, and data-directory instructions, linking to `UnityClient/README.md` for detailed client notes.
- Make no application behavior, API, or dependency changes.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

None. This is a documentation-only change with no spec-level behavior changes; `.openspec.yaml` sets `skip_specs: true`.

## Impact

- Documentation: root `README.md`.
- The existing Unity client guide, `UnityClient/Packages/manifest.json`, Python service entry point, and portrait generator are sources for the README's commands and dependency descriptions.
- No production code, runtime dependencies, or persisted data are affected.
