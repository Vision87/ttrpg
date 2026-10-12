# Design

## Context

See `proposal.md` for motivation and `specs/ruleset-themed-interface/spec.md` for observable behavior. Ruleset themes currently provide six color tokens and only `logo` and `display_font` asset slots. The D&D 3.5 package already declares a brown/gold palette and Cinzel. The character creator uses Unity IMGUI with mostly default flat control styles; the board projections currently use theme colors for the camera background and pieces, without a decorative frame. Theme assets are validated and resolved by the Python service, but its built-in registry currently contains only the two fonts.

## Goals / Non-Goals

**Goals:**
- Give D&D 3.5 a coherent fantasy interface with wood as the dominant surface and restrained metal trim/details.
- Use the same package-driven visual language in character creation and board framing.
- Keep the tactical play surface and pieces readable, preserve Cinzel, and leave Dark Heresy unchanged.
- Keep theme data declarative, locally installed, validated, and safe to fall back from.

**Non-Goals:**
- Recreate or reuse Baldur's Gate 2 artwork, interface assets, or exact screen layouts.
- Apply wood textures to the tactical play surface or change board rules, piece meaning, or character presentation.
- Add runtime network asset downloads or a general-purpose skin scripting system.
- Change game mechanics or Dark Heresy's visual identity.

## Decisions

### Extend the existing package theme contract with finite UI asset slots

Add a small, explicit set of visual slots for interface background, panel/surface, interactive control states, metal trim, and board frame. Theme profiles continue to reference installed assets by versioned ID; the D&D package selects the wood and metal assets while packages that omit them keep current colors and defaults. Each asset must be registered for the UI renderer, and invalid or unavailable references produce diagnostics and safe fallback styling.

This keeps theme choice with package data and avoids hardcoding `dnd35-core` branches into shared presentation code. Supporting arbitrary URLs or package-supplied scripts was rejected because it would bypass asset validation and make fallback behavior unsafe.

### Bundle original, scalable art locally

Register original wood-grain and metal-detail assets as local Unity resources and reference them through the theme asset registry. Use scalable frame/panel rendering so decorative edges do not stretch unpredictably across screen sizes. Preserve a restrained metal accent rather than covering every surface in high-contrast ornament.

Reusing Baldur's Gate 2 interface images was rejected; the direction is an original wood-and-metal fantasy interface inspired by the material palette, not a reproduction.

### Share the visual language, keep the board play area neutral

Apply package-driven panels, buttons, selection/focus states, and navigation styling throughout creation. Add the decorative board frame separately from the tactical play surface; retain clear contrast for grid contents and pieces. Continue using the existing D&D palette and Cinzel unless a specific control requires a contrast-safe variant.

### Preserve other rulesets and graceful fallbacks

Keep Dark Heresy's package theme references unchanged. Theme resolution falls back per missing visual slot to the existing color-based UI, reports unavailable assets, and never blocks creation or board use.

## Risks / Trade-offs

- [Texture detail reduces text/control contrast] -> Use measured contrast-safe overlays and verify labels, selection, disabled, and error states against each surface.
- [Decorative frame scales poorly across viewport sizes] -> Use scalable frame rendering and check narrow, wide, and high-DPI WebGL viewports.
- [Additional local art increases build size] -> Reuse a small set of tiling/reusable textures and avoid oversized backgrounds.
- [An asset slot is missing or unavailable] -> Keep the current color theme as the per-slot fallback and surface a diagnostic.

## Migration Plan

1. Extend theme slot validation and asset resolution while preserving all existing theme packages.
2. Add and register the local D&D wood/metal assets and update only the D&D 3.5 theme references.
3. Apply shared creator styles and a distinct board frame, leaving the play surface untouched.
4. Validate theme resolution, ruleset isolation, contrast/layout, and the WebGL build. Roll back by removing the new D&D asset references; existing token/font themes remain usable.
