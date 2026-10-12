# Proposal

## Why

The D&D 3.5 character creator currently applies its brown-and-gold colors and Cinzel font to a mostly flat Unity interface. A richer wood-and-metal treatment across character creation and board chrome would make the D&D experience feel like a dedicated fantasy game interface while keeping the play surface readable.

## What Changes

- Give the D&D 3.5 interface package a locally bundled, wood-and-metal visual identity for creation screens and board framing.
- Extend ruleset theme presentation so shared panels, controls, and board chrome can use consistent decorative surfaces without ruleset-specific client branches.
- Keep the tactical play area visually neutral and legible, retain Cinzel, and leave other rulesets such as Dark Heresy unchanged.

## Capabilities

### New Capabilities

### Modified Capabilities
- `ruleset-themed-interface`: Apply richer package-provided visual styling consistently across character creation and board chrome while preserving readable gameplay surfaces and character-specific presentation.

## Impact

- D&D 3.5 package theme metadata and locally bundled Unity UI assets.
- Unity character-creation controls and tactical/immersive board presentation.
- Ruleset theme resolution and validation for safe, locally installed visual assets.
- No external runtime asset downloads or changes to game mechanics.
