# Design

## Context

See proposal.md for motivation and specs for user-visible requirements. The creation client currently renders its screens with IMGUI. Theme `display_font` assets are assigned to `GUI.skin.font`, so the decorative ruleset face also appears in body copy and controls. The project already loads local TTF and texture assets and has shared `GUIStyle` roles, but its type scale and visuals do not yet form a complete creation-screen design system.

## Goals / Non-Goals

**Goals:**
- Establish one original classic fantasy-RPG visual language for the creation journey, adapted to narrow and wide viewports.
- Make readable text the default and use decorative type selectively.
- Preserve package-driven behavior, existing ruleset theme distinctions, and the IMGUI rendering model.

**Non-Goals:**
- Reproducing Baldur's Gate II screens, logos, or proprietary artwork.
- Changing ruleset packages, creation APIs, or board-session visuals.
- Migrating the character creator to UGUI, UI Toolkit, or TextMeshPro.

## Decisions

1. **Keep the creation client in IMGUI.**  
   Continue composing screens with the existing IMGUI client and shared style helpers. This limits the redesign to presentation and avoids rewriting the established package-driven flow, field editing, and service interactions. New panels and ornamental elements use local client-owned textures and existing theme surfaces rather than introducing a new runtime UI framework.

2. **Use an original classic-fantasy visual system rather than copied game assets.**  
   Build a cohesive set of framed panels, restrained ornament, separators, selection states, and action surfaces that evokes classic fantasy RPG menus. Compose the same design language into stacked mobile panels and richer wide layouts. Keep controls and important text on high-contrast surfaces; decoration must not compete with content.

3. **Separate typography by role.**  
   Define explicit styles for display titles, section headings, body/instructions, field labels, controls, captions, and status/error text. Use theme-provided display fonts only for short display roles; use a bundled readable font for body copy and controls, with a safe local fallback. Give body and control text a larger mobile minimum than captions, enable wrapping for prose, and choose sizes from the shared viewport density rather than inheriting the global skin font.

   Fonts remain vector-outline TTF assets, loaded and rendered dynamically at the selected IMGUI sizes. IMGUI ultimately rasterizes glyphs into Unity font atlases, so this is not infinitely scalable vector rendering; generating glyphs at the active sizes avoids relying on pre-baked pixel-sized lettering and keeps edges antialiased at supported resolutions.

4. **Scale from the actual WebGL viewport and verify rendered output.**  
   Use the client viewport/breakpoint model and explicit type-size tokens, not device-pixel assumptions or bitmap-scaled text. Tune and verify the resulting font sizes and wrapping at representative narrow, tablet, and desktop CSS viewport widths; retain a minimum readable size instead of shrinking text to fit a panel.

5. **Treat ruleset themes as accents on the shared framework.**  
   Preserve validated theme colors and available assets for both D&D 3.5 and Dark Heresy, while keeping shared text contrast and control states authoritative. A missing or unsuitable theme font falls back to the readable application face and does not block creation.

6. **Keep mobile navigation and interaction touch-usable.**  
   Retain package-derived progress and save-before-navigation, but present progress, current step identity, and actions compactly above an independently scrollable body. Stack choice/detail panes on narrow viewports and keep interactive hit areas large enough for touch; use wider layouts only when the viewport supports them.

## Risks / Trade-offs

- **[Risk] IMGUI text is rasterized and device-pixel ratio differs across browsers** → Use vector-outline dynamic fonts, avoid pre-sized bitmap text, select sizes from tested CSS viewport widths, and validate actual WebGL screenshots at the target sizes.
- **[Risk] Decorative type and ornament reduce readability or contrast** → Restrict display faces to short headings, use a plain readable body face, and check contrast and wrapping over both ruleset themes.
- **[Risk] The shared fantasy style weakens ruleset identity** → Retain each validated theme's colors and assets as controlled accents rather than replacing them.
- **[Risk] New visual assets resemble copyrighted source material too closely** → Create original client-owned artwork and use the reference only for broad genre conventions and menu composition.

## Migration Plan

1. Establish typography role tokens and font fallbacks while keeping the current screen behavior.
2. Add the shared panel, frame, selection, and action visual language; keep ruleset accents.
3. Apply the system to ruleset/template/draft selection, creation steps, choice/detail views, and review.
4. Tune narrow and wide compositions without changing package order, save behavior, or service contracts.
5. Build WebGL, run existing client tests, and visually inspect the app at approximately 375, 768, 1024, and 1440 CSS pixels.
6. Roll back by reverting only creation-screen presentation styles and client-owned visual assets; no service or draft migration is required.
