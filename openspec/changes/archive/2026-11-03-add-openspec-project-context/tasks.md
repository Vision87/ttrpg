# Tasks

## 1. Add OpenSpec project context

- [x] 1.1 Add a concise `context:` block to `openspec/config.yaml` with the agreed service/client boundary, README reference for setup and test commands, package/asset provenance guidance, and code-only license scope; verify it appears in `openspec instructions apply --change add-openspec-project-context --json`.
- [x] 1.2 Run `openspec validate add-openspec-project-context` and `git diff --check`; confirm the implementation changes only `openspec/config.yaml`.
