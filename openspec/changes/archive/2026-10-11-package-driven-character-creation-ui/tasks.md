# Tasks

## 1. Package-Defined Creation Flows

- [x] 1.1 Extend ruleset package validation to cover ordered creation steps, supported field types, definition references, and supported validation rules; verify valid and malformed metadata with focused schema tests.
- [x] 1.2 Add creation-flow metadata to the D&D 3.5 and Dark Heresy package manifests; verify both resolve with their expected step order and referenced choices.
- [x] 1.3 Refactor character creation to consume resolved package flow metadata rather than ruleset-ID branches; verify both initial packages and a test-only compatible package use the same workflow implementation.
- [x] 1.4 Make unsupported or invalid package formulas and creation operations return actionable errors without system-default fallback; verify with rules evaluation tests, including unknown formulas.
- [x] 1.5 Validate optional package theme profiles against the supported visual-token and installed-asset contract; verify missing, unsupported, and valid theme data produce the specified diagnostics and fallback.

## 2. Character Draft Lifecycle

- [x] 2.1 Extend draft validation and updates to use package-provided fields and choices while preserving existing provenance, prerequisite, equipment, and presentation behavior; verify representative edits and validation for both initial packages.
- [x] 2.2 Persist and resume separate local drafts and finalized character records by generated identifier, retaining pinned package versions and creation state; verify round trips and unavailable-version errors.
- [x] 2.3 Implement and test final review and finalization results containing validation issues, derived values, package versions, provenance, overrides, and presentation references; verify blocking errors prevent finalization.

## 3. Local Python Service

- [x] 3.1 Add JSON service routes for ruleset discovery, flow retrieval, draft creation/update/resume, review/finalization, and starter-session launch; verify route responses and error cases with service tests.
- [x] 3.2 Serve the Unity WebGL build and service from one loopback-bound origin without accepting client filesystem paths; verify API/static routing, invalid identifiers, and compressed WebGL asset headers.

## 4. Unity WebGL Client

- [x] 4.1 Add a package-driven creation UI that renders supported fields and ordered steps from service metadata for both initial packages; verify the same UI handles a test package with a different step order.
- [x] 4.2 Add template/from-scratch selection, draft resume, presentation configuration, and final review with actionable service validation errors; verify UI state remains consistent after service rejection or resume.
- [x] 4.3 Apply the selected ruleset's declarative theme to the creation UI using supported theme tokens and asset references; verify both initial packages render their themes and missing theme data uses the neutral default.
- [x] 4.4 Replace fixture-only board entry for the creation flow with the initialized session envelope from the service and apply the same ruleset theme to the board; verify character-specific presentation remains separate and the starter session's existing entities still render.

## 5. End-to-End Verification and Run Instructions

- [x] 5.1 Add an end-to-end test that creates, saves, resumes, finalizes, and launches one character for each initial package, verifying package provenance, theme consistency across creator and board, spawn placement, controller assignment, and preservation of starter-session entities.
- [x] 5.2 Verify the served Unity WebGL/API flow in a browser or supported Unity integration test and document the local startup command, data location, and current local-solo/starter-board scope.
