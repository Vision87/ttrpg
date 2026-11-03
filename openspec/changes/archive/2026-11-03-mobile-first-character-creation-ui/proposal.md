# Proposal

## Why

The Unity WebGL character-creation UI is desktop-assumed: full-bleed wood-textured buttons with tiny type, fat step cards, fixed list heights, and primary actions buried below long step bodies. On phones and narrow iframes the step body is hard to reach and awkward to use. We need a mobile-first layout with readable density, reachable Continue actions, and icons that identify steps and actions without relying on cramped text alone.

## What Changes

- Redesign character-creation chrome as **mobile-first**, with named viewport breakpoints and layout modes that enhance toward tablet/desktop rather than shrinking a desktop UI.
- Place **primary step actions (Save and continue / Review) above** the scrollable step body so users need not scroll to the page end to proceed; keep secondary actions quieter beneath them.
- Replace oversized thin full-width buttons and tiny fonts with **role-based controls** (primary, secondary, tertiary, icon) and a density/type scale that tracks breakpoint.
- Compact the step progress header for narrow viewports (icon/dot stepper); allow richer summaries only as width grows.
- Author **SVG step and action icons**, ship them as Unity textures, and wire them into progress and common actions (replace unicode-only status markers where icons apply).
- Keep the existing wood/metal ruleset theme and package-driven flow/behavior; do **not** migrate to UGUI/UI Toolkit in this change.
- **Defer** a full large-desktop rethink (side rails, rich two-pane polish beyond reclaiming existing side-by-side) to a follow-up; this change establishes the mobile base and modest `md+` enhancement.

## Capabilities

### New Capabilities

- (none)

### Modified Capabilities

- `character-creation`: Require a mobile-first responsive creation chrome, compact progress at narrow widths, primary navigation actions above the step body, and density-aware controls without changing package step semantics or server validation.
- `ruleset-themed-interface`: Require theme-compatible UI icon assets and density-scaled themed controls so ruleset visual identity still applies on compact layouts.

## Impact

- **Client**: `UnityClient/Assets/Scripts/CharacterCreationClient.cs`, `StepSummaryHeader.cs`, related responsive helpers; new icon textures under Resources (SVG sources retained in-repo).
- **Theme assets**: Additional local texture slots or Resources keys for step/action icons; D&D 3.5 wood/metal control chrome resized for role-based buttons.
- **Unaffected**: Python character-creation service APIs, package `creation_flow` contracts, draft/review validation, board session runtime.
- **Follow-up**: Explicit `lg`/`xl` layout rethink after the mobile base lands.
