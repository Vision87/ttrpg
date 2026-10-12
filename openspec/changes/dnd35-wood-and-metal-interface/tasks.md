# Tasks

## 1. Package Theme Assets

- [x] 1.1 Extend the validated theme contract with finite UI surface/state/frame asset slots, renderer checks, diagnostics, and per-slot fallback; verify with theme schema and resolver tests.
- [x] 1.2 Add original locally bundled wood and restrained metal UI assets, register their versioned references, and apply them only to D&D 3.5 while retaining its palette and Cinzel; verify D&D theme output and unchanged Dark Heresy theme output.

## 2. Render the Shared D&D Interface

- [x] 2.1 Apply package-driven wood surfaces and metal details to character-creation panels, controls, navigation, and interaction states without reducing text contrast; verify Unity UI contract tests and narrow/wide viewport behavior.
- [x] 2.2 Add a wood-and-metal frame to D&D board presentation without texturing the tactical play surface or obscuring pieces; verify tactical/immersive projection contracts and visual behavior.

## 3. Integration Verification

- [x] 3.1 Run the full project checks and build the WebGL client; verify successful build provenance and confirm themes with missing assets safely fall back without affecting creation or board use.
