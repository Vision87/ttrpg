# Tasks

## 1. Summary data contract

- [x] 1.1 Inspect the D&D 3.5 feat package and creation-service response shape to confirm where short summaries are sourced and where a fallback can be generated; verify a missing summary is detectable and testable.
- [x] 1.2 Add the concise summary contract to the feat option payload and verify the service response includes a non-empty summary for representative catalog entries with and without existing short text.

## 2. Fallback generation and validation

- [x] 2.1 Implement a fallback summary generator for feats that only expose a longer description or metadata text, ensuring it trims to a concise source-derived phrase without inventing new content.
- [x] 2.2 Add validation for empty or missing summaries and verify the generation path preserves the existing feature catalog and prerequisite metadata.

## 3. UI integration and verification

- [x] 3.1 Wire the summary into the feat detail pane and confirm it renders from the creation payload without affecting selection, search, or eligible-only filtering behavior.
- [x] 3.2 Run the relevant project checks and WebGL build verification to confirm the feat detail pane remains functional and the summary appears for both direct and fallback-generated entries.
