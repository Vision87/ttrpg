# Design

## Context

There is no repository-level ignore file. Unity's tracked `Library/` tree currently contains 2,691 files (about 363 MB); `Logs/`, `UserSettings/`, the WebGL build, Python bytecode, and `.DS_Store` files are tracked as well. The local service serves `UnityClient/Build/WebGL`, while the Unity source fixture lives under `UnityClient/Assets/StreamingAssets`.

## Goals / Non-Goals

**Goals:**

- Separate general Python/macOS ignore rules from Unity-project-generated files.
- Stop tracking generated and machine-local files without deleting their local copies.
- Keep rebuild inputs and Unity project metadata tracked.

**Non-Goals:**

- Rewrite Git history or purge generated artifacts from prior commits.
- Ignore Unity source assets, package manifests, project settings, or `.meta` files.
- Change application code, dependencies, or the local service API.

## Decisions

1. **Use two layered ignore files.** Put Python caches, pytest state, virtual environments, and macOS metadata in the repository-root `.gitignore`. Put Unity-generated directories in `UnityClient/.gitignore`. A single root file was considered, but separating Unity rules keeps them scoped to the Unity project and easier to maintain.
2. **Ignore the entire Unity `Build/` directory.** The WebGL output is generated, and the user chose not to version it. The documented workflow already builds it before starting the server. Keep source inputs such as `Assets/StreamingAssets/session-fixture.json`; do not ignore `Assets/`, `Packages/`, `ProjectSettings/`, or Unity `.meta` files.
3. **Untrack existing files without removing workstation copies.** Remove already tracked generated paths from the index with `git rm --cached` after adding the ignore rules. Do not use a normal `git rm` for these paths.
4. **Do not rewrite repository history.** This cleanup prevents future commits from tracking the files but leaves existing historical objects intact; history rewriting is a separate, higher-risk operation.

## Risks / Trade-offs

- [Fresh checkouts have no WebGL output] -> Contributors must run the documented Unity 6000.6.2f1 WebGL build before serving the client.
- [An ignore pattern could hide a source input] -> Scope Unity rules to generated directories and verify the tracked `Assets/StreamingAssets/session-fixture.json`, package manifest, project settings, and `.meta` files remain tracked.
- [Tracked files remain tracked if only ignore rules are added] -> Explicitly untrack current generated files and verify no ignored paths remain in `git ls-files`.

## Migration Plan

1. Add the root and Unity-specific ignore rules.
2. Remove currently tracked Python bytecode, `.DS_Store`, Unity `Library/`, `Logs/`, `UserSettings/`, and `Build/` files from the index while preserving local copies.
3. Verify representative paths match the ignore rules, ignored paths are no longer tracked, and source inputs remain tracked.
4. Build the WebGL client and run the local server from the generated output when end-to-end validation is needed.
