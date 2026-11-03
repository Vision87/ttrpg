# Tasks

## 1. Layout density foundation

- [x] 1.1 Add a shared UI layout/density helper (named breakpoints `xs`–`xl`, type scale, control heights, spacing) and verify it reports the expected mode for sample widths 375, 768, 1024, and 1440
- [x] 1.2 Wire `CharacterCreationClient` and `StepSummaryHeader` to read the active density each frame instead of hard-coded 680/980-only branches, and verify editing still opens without errors
- [x] 1.3 Introduce Primary / Secondary / Tertiary / Icon `GUIStyle` roles derived from themed button textures with density font sizes and min heights, and verify a sample primary label is readable inside its control at `xs` density

## 2. Editing chrome restructure

- [x] 2.1 Restructure the editing screen to progress → step identity → action strip → independently scrollable body, and verify the primary continue control is visible on a tall step without scrolling the body
- [x] 2.2 Move "Save and continue" / "Review character" into the primary action strip and "Save draft and exit" into a quieter secondary control beneath it, and verify both still save/navigate as before
- [x] 2.3 Shrink or hide the large logo on `xs`/`sm` editing screens while keeping brand on ruleset selection, and verify the first screenful shows progress, actions, and part of the step body
- [x] 2.4 Apply role-based styles to ruleset/template/draft list actions and common step controls (±, Buy, Equip) so they no longer share one full-bleed thin plank style, and verify visual distinction between primary and tertiary actions

## 3. Compact step progress

- [x] 3.1 Replace the narrow vertical stack of full summary cards with a compact icon/dot stepper plus current step title and "Step N of M", and verify seven-step flows no longer dominate the first screenful on ~375px width
- [x] 3.2 Preserve direct step selection with save-before-navigate from the compact stepper, and verify jumping to another package step still saves the current step first
- [x] 3.3 Enrich progress on `md+` (short labels and optional past summaries) only when width allows, and verify `lg` still supports existing feats/shop side-by-side without regressing navigation

## 4. Icons (SVG → textures)

- [x] 4.1 Author SVG sources for creation step icons (ability, race/homeworld, class/career, skills, feats/talents, equipment, appearance) and action icons (continue, save, buy, equip, missing/fallback), and verify the SVG files exist in-repo under an agreed assets path
- [x] 4.2 Bake or import PNG/`Texture2D` Resources for those icons and verify they load via the existing local asset pipeline without network fetches
- [x] 4.3 Map package step ids to icon keys with text/neutral fallback, wire icons into compact progress and key actions, and verify missing icons still allow creation with a visible fallback
- [x] 4.4 Apply density-scaled themed surfaces to role-based controls under D&D wood/metal and a non-wood ruleset path, and verify theme tokens remain applied after crossing a breakpoint

## 5. Body layout reclaim and verification

- [x] 5.1 Size feats/shop (and similar) list panes from leftover body height instead of fixed desktop-only constants, and verify lists remain usable at `xs` and reclaim space at `lg`
- [x] 5.2 Manual WebGL pass at ~375, ~768, ~1024, and ~1440: confirm compact progress, above-body Continue, readable primary controls, icons/fallbacks, and unchanged package step semantics; note any follow-ups for a later desktop rethink (wide progress remains horizontally scrollable and is deferred)
