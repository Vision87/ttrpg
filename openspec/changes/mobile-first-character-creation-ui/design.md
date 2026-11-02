# Design

## Context

See proposal.md for motivation. Character creation is a Unity IMGUI WebGL client (`CharacterCreationClient`, `StepSummaryHeader`) themed with local PNG wood/metal textures via `GUI.skin`. Layout today uses ad-hoc `Screen.width` cuts (680 header stack, 980 side-by-side), a single outer `BeginScrollView`, full-width default buttons with wood 9-slice and default font size, and unicode step markers. Specs require mobile-first chrome, primary actions above the step body, compact progress, density-aware controls, and theme-compatible icons without changing package flow or service APIs. This design stays on IMGUI; UGUI/UI Toolkit migration is out of scope.

## Goals / Non-Goals

**Goals:**
- Introduce a shared breakpoint + density model consumed by creation chrome, progress, and controls.
- Restructure editing layout so progress, step identity, and actions sit above an independently scrollable body.
- Ship SVG-authored icons as Unity textures and wire them into progress and key actions.
- Preserve D&D 3.5 wood/metal theming and Dark Heresy theme tokens under the new density roles.

**Non-Goals:**
- Migrating the client to UGUI, UI Toolkit, or a non-Unity web UI.
- Redesigning board HUD / session projection chrome.
- Changing creation-flow package schema, Python APIs, or validation semantics.
- A polished desktop-only information architecture (side rails, multi-column shell beyond existing feats/shop side-by-side reclaim).

## Decisions

1. **Shared `UiLayout` density helper (IMGUI)**  
   Centralize named breakpoints (`xs` <480, `sm` 480–679, `md` 680–979, `lg` 980–1279, `xl` ≥1280), type scale, control min heights, and spacing. `CharacterCreationClient` and `StepSummaryHeader` read the active mode each `OnGUI` from `Screen.width`.  
   - *Rationale:* Replaces scattered magic numbers and keeps mobile-first rules in one place.  
   - *Alternatives:* Per-widget hardcoding (status quo); full UI Toolkit migration (deferred).

2. **Chrome stack: progress → identity → actions → body scroll**  
   Split the editing screen so the outer area is not one undifferentiated scroll of header+fields+buttons. Primary continue and secondary save-draft sit in a fixed action strip above a body `BeginScrollView`. Long lists (feats, shop) scroll inside the body (and nested where already required).  
   - *Rationale:* Matches the confirmed UX: Continue reachable without scrolling to page end; avoids bottom-pinned bars fighting mobile browser chrome.  
   - *Alternatives:* Sticky bottom CTA (rejected); keep buttons after fields (status quo).

3. **Compact stepper on `xs`/`sm`; enrich later**  
   Narrow: icon/dot row + current step title + "Step N of M". `md+`: optional short labels; past-step summaries only when width allows without dominating the viewport. Remove the narrow-path vertical stack of seven summary cards.  
   - *Rationale:* Directly fixes first-screenful overflow on phones.  
   - *Alternatives:* Keep cards with horizontal-only scroll (still heavy); collapse to a dropdown (worse discoverability for direct step jump).

4. **Control roles instead of one skin button style**  
   Define Primary / Secondary / Tertiary / Icon styles derived from themed `GUI.skin.button` textures with explicit `fontSize`, padding, and `fixedHeight` (or min height via layout) per density. Primary is full-width on `xs`/`sm`; secondary is quieter (text or outlined) beneath it. Shop Buy/Equip and ± steppers use tertiary/icon sizes, not primary plank stretch.  
   - *Rationale:* Fixes “large thin wood bar + tiny font.”  
   - *Alternatives:* Only bump global `GUI.skin.button.fontSize` (insufficient role separation).

5. **SVG sources → baked Texture2D icons**  
   Author simple monochrome/line SVG icons for steps (ability, race/homeworld, class/career, skills, feats/talents, equipment, appearance) and actions (continue, save, buy, equip, unequipped/missing). Import or convert to PNG/`Texture2D` under `Resources` (or theme asset slots). Runtime loads textures; no Unity Vector Graphics dependency required for v1. Map package step ids/labels to icon keys with a small client table + text fallback.  
   - *Rationale:* Fits existing IMGUI/`Resources.Load` pipeline and theme safety rules; SVG remains editable source.  
   - *Alternatives:* Runtime SVG via Vector Graphics package (heavier); unicode-only (fails the icon goal).

6. **Theme application stays token + local asset based**  
   Density scaling applies on top of existing `ApplyThemeStyles` colors and control textures. Do not require package JSON changes for v1 icon set; ship default creation icons with the client, overridable later via theme asset slots if needed.  
   - *Rationale:* Keeps `ruleset-themed-interface` safety model; avoids blocking on package schema work.  
   - *Alternatives:* Require every package to declare icons before mobile UI ships (too heavy for this change).

7. **Modest `md`/`lg` enhancement only**  
   Reclaim list heights from leftover viewport; keep existing ~980 side-by-side for feats/shop when mode is `lg+`. Do not invent a new desktop shell in this change.  
   - *Rationale:* Honors “mobile first, rethink bigger screens later.”  
   - *Alternatives:* Design full `xl` rail layout now (scope creep).

## Risks / Trade-offs

- **[Risk] IMGUI nested scroll / focus quirks on WebGL** → Keep a single body scroll where possible; limit nested scrolls to known list panes; verify touch drag on target mobile browsers.  
- **[Risk] Wood 9-slice looks wrong at short primary heights** → Retune button border/`border` slices and padding; add a dedicated primary control texture if needed.  
- **[Risk] Step-to-icon mapping drifts across rulesets** → Prefer stable step `id` keys from package flow; fall back to label heuristics then text-only.  
- **[Risk] Logo + title still steal vertical space on `xs`** → Shrink or hide logo on `xs`/`sm` editing screens; keep brand on ruleset picker.  
- **[Trade-off] Baked PNG icons vs live SVG** → Slightly more asset pipeline work; much simpler runtime and WebGL stripping.

## Migration Plan

1. Land `UiLayout` helper and density styles without changing action placement; verify theme still applies.  
2. Restructure editing chrome (actions above body scroll) behind the same screens.  
3. Replace step header with compact stepper; keep direct step navigation behavior.  
4. Add icon textures and wire progress/actions with text fallbacks.  
5. Tune feats/shop list heights against leftover body space; confirm `lg` side-by-side still works.  
6. Manual pass on representative widths: ~375, ~768, ~1024, ~1440 WebGL.  
7. Rollback = revert client scripts/assets; no service migration.

## Open Questions

- Whether theme packages should gain optional icon asset slots in a later change, or remain client-default icons indefinitely.  
- Exact icon metaphor set for Dark Heresy step ids vs D&D (shared generic set vs ruleset-specific art pack).
