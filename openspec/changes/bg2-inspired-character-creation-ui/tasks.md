# Tasks

## 1. Typography system

- [x] 1.1 Define reusable IMGUI text roles for display, section, body/instructions, field labels, controls, captions, and status messages; verify every creation screen uses a declared role or an explicit error style
- [x] 1.2 Separate decorative ruleset display fonts from body/control text and provide a readable local font fallback; verify D&D 3.5, Dark Heresy, and missing-font paths remain legible
- [x] 1.3 Set responsive type-size, spacing, wrapping, and contrast tokens with a readable mobile minimum; verify text does not clip at 375px and remains visually hierarchical at 768px, 1024px, and 1440px

## 2. Shared fantasy-RPG visual language

- [x] 2.1 Create original local panel, frame, divider, selection, and action surfaces inspired by classic fantasy RPG menus without copying Baldur's Gate II assets; verify all assets load locally with fallbacks
- [x] 2.2 Apply the shared visual system to ruleset, template, and draft selection, creation steps, choice/detail panes, and review; verify consistent panel and control states across screens
- [x] 2.3 Preserve validated D&D 3.5 and Dark Heresy theme colors/assets as accents while maintaining text contrast; verify both themes and missing-asset fallback paths

## 3. Mobile-first screen compositions

- [x] 3.1 Compose progress, current step identity, and primary/secondary actions above an independently scrollable step body; verify Continue remains visible on a long step and save-before-navigation still works
- [x] 3.2 Adapt ruleset/template/draft selection and choice/detail panes to a single-column mobile layout with touch-usable controls; verify no content requires a desktop-width pane
- [x] 3.3 Retain richer wide layouts where appropriate without changing package step order, field behavior, or draft values; verify existing navigation and creation contracts pass

## 4. Integration and visual verification

- [x] 4.1 Run focused Unity client contract tests and build the WebGL client; verify no compile errors and the generated app loads its local fonts and visual assets
- [x] 4.2 Visually inspect the creation flow at approximately 375, 768, 1024, and 1440 CSS pixels under both ruleset themes; verify readable typography, panel hierarchy, actions, responsive layout, and unchanged package-driven semantics
