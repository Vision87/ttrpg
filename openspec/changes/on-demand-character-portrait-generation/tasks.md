# Tasks

## 1. Local image-generation service

- [x] 1.1 Add local configuration for the ComfyUI endpoint and workflow plus optional Ollama endpoint and model; verify configuration tests cover valid settings, unavailable ComfyUI, and disabled Ollama.
- [x] 1.2 Build prompts from an explicit visual-only allowlist and add optional Ollama refinement with deterministic fallback; verify tests include race/species, class, gear, and appearance while excluding ability scores and skill ranks.
- [x] 1.3 Implement the ComfyUI workflow client to submit jobs, monitor completion, and retrieve validated images; verify fake-HTTP tests cover success, timeout, service failure, invalid image data, and size limits.

## 2. Generated portrait storage and service API

- [x] 2.1 Add draft-scoped candidate storage and stable applied-portrait references with generation metadata; verify tests preserve the image and provenance across application restart and delete discarded candidates.
- [x] 2.2 Add service operations for generating, previewing, applying, and discarding a candidate; verify service tests preserve the existing portrait on failures and reject unknown drafts or unsafe image references.
- [x] 2.3 Add a constrained binary image response route for candidates and applied portraits; verify HTTP tests return the expected image type and cannot read files outside generated-portrait storage.

## 3. Unity portrait-generation experience

- [x] 3.1 Add the optional description input, generation disclosure, and **Generate portrait** action beside **Choose portrait**; verify the client saves current appearance edits before requesting generation and contract tests cover the controls.
- [x] 3.2 Add progress and candidate preview with **Use** and **Discard** actions; verify client tests show the candidate without changing the selected portrait until **Use**, and preserve the selection on errors.
- [x] 3.3 Restore applied generated portraits after draft resume and expose available generation provenance; verify draft reload and portrait-details tests cover stable references and metadata.

## 4. Documentation and integration verification

- [x] 4.1 Document ComfyUI workflow setup, optional Ollama configuration, local data storage, and model/source-term handling; verify the documented settings match the service configuration.
- [x] 4.2 Run `python3 -m pytest -q` and build the Unity WebGL client with `unity build UnityClient --target WebGL --execute-method WebGLBuild.Build --output-path UnityClient/Build/WebGL`; verify both commands complete successfully.
