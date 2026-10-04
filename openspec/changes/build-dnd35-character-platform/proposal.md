# Proposal

## Why

Create a personal-use virtual tabletop that makes D&D 3.5 character creation and play the primary experience, while remaining extensible for supplements and homebrew rules. Users need both a guided path for beginners and full control for expert builders, with characters reusable across compatible campaigns and presented consistently in tactical 2D and immersive 3D views.

## What Changes

- Add a rules-aware D&D 3.5 character builder supporting race, class levels, ability scores, skills, feats, spells, equipment, derived statistics, and homebrew choices.
- Provide ruleset templates for quick character creation and allow users to save reusable personal templates.
- Introduce a declarative rules/content model with sandboxed scripts for exceptional mechanics, supplements, and campaign extensions.
- Add reusable character identities with campaign-specific incarnations, progression, inventory, and history.
- Add campaign compatibility analysis that detects missing packages, custom mechanics, scripts, and conflicts before play.
- Provide read-only preview and explicit migration branching for incompatible characters; never silently remove or reinterpret custom rules.
- Add a global asset library and presentation profiles for portraits, tokens, models, animations, sounds, and visual effects.
- Add an authoritative session/event model rendered by a precise 2D tactical view and a 3D immersive presentation view.
- Support solo and multiplayer-ready sessions through controller and permission abstractions.

## Capabilities

### New Capabilities

- `character-creation`: Guided and expert D&D 3.5 character creation, validation, templates, appearance, and presentation configuration.
- `ruleset-extensibility`: Core rules packages, composable supplements and homebrew extensions, declarative effects, and sandboxed advanced mechanics.
- `character-campaign-compatibility`: Reusable characters, campaign-specific incarnations, compatibility reports, preview mode, and migration branches.
- `session-play-and-rendering`: Authoritative session state, event-driven gameplay, 2D tactical rendering, 3D immersive rendering, and presentation effects.
- `global-asset-library`: Cross-campaign presentation assets and versioned character presentation profiles.

### Modified Capabilities

None.

## Impact

This is a greenfield platform change affecting the domain model, rules runtime, character and campaign persistence, asset management, session/event APIs, multiplayer synchronization boundaries, and 2D/3D client rendering. It will require a D&D 3.5 rules/content package and a private asset/content workflow, but does not require commercialization or public distribution in the initial scope.
