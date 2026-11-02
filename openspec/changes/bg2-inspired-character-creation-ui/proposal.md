# Proposal

## Why

The current character-creation screens still feel like the existing generic, desktop-oriented Unity UI, and their text is difficult to read on mobile. A cohesive classic fantasy-RPG visual direction and a deliberate, scalable IMGUI typography system can make the flow feel immersive while remaining legible and usable across phone, tablet, and desktop sizes.

## What Changes

- Redesign the character-creation menus and step screens with an original visual direction inspired by classic fantasy RPG interfaces, including Baldur's Gate II, without copying its proprietary artwork or exact layouts.
- Create a mobile-first composition for navigation, step progress, choices, and actions while retaining richer layouts at wider viewports.
- Define reusable IMGUI typography roles and responsive sizing for display headings, section headings, body and instructional text, labels, controls, captions, and status/error messages. Use vector-outline font assets rendered dynamically at appropriate sizes, with readable fallbacks and contrast.
- Apply the shared visual framework to D&D 3.5 and Dark Heresy while retaining each ruleset's validated theme colors and assets as accents.
- Preserve package-defined step order and fields, save-before-navigation, and authoritative service validation; do not migrate from IMGUI.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: Require a distinctive, mobile-first menu and creation-screen presentation with legible responsive typography that preserves package flow and navigation behavior.
- `ruleset-themed-interface`: Require the shared visual framework to retain validated ruleset theme accents and use readable typography across viewport sizes.

## Impact

- **Client:** `UnityClient/Assets/Scripts/CharacterCreationClient.cs`, `CreationUiStyles.cs`, `StepSummaryHeader.cs`, and associated theme/font resources.
- **Specifications:** Existing `character-creation` and `ruleset-themed-interface` capabilities.
- **Unaffected:** Python creation APIs, package flow semantics, draft persistence, review/finalization validation, and board runtime.
- **Constraint:** Keep Unity IMGUI; do not introduce a UI framework migration or copy Baldur's Gate II assets.
