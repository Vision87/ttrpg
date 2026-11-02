# Tasks

## 1. Service Step Selection

- [x] 1.1 Add validated direct step selection to the creation workflow and draft API while retaining sequential advancement; verify valid jumps persist across draft reload and unknown step IDs leave the draft unchanged.

## 2. Client Navigation

- [x] 2.1 Render navigation from the active package's ordered step metadata and save current-step fields before selecting another step; verify all declared steps are navigable, the selected step is displayed only after successful saves, and existing draft values remain intact.
- [x] 2.2 Preserve sequential “Save and continue” and review/finalization behavior with the shared save path; verify the relevant Unity client contract and creation service tests pass.

## 3. Integration Verification

- [x] 3.1 Build the Unity client for WebGL and verify the rebuilt app serves the step navigator alongside the Python character service.
