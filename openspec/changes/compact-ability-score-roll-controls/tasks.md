# Tasks

## 1. Dice icon and individual roll controls

- [x] 1.1 Add an original dice SVG and a Unity-loadable local texture, register it in the icon loader, and verify the resource resolves with the standard fallback available
- [x] 1.2 Render each permitted individual score roll as a tooltip-labeled dice-icon button beside its numeric input, preserve package gating and result text, and verify with focused client contract tests

## 2. Full-set roll action placement

- [x] 2.1 Move each eligible package-declared score-group roll or reroll action below “Save draft and exit” and outside the scrollable score fields; verify its placement and package/reroll gating with focused client contract tests

## 3. Integration verification

- [x] 3.1 Run focused Unity client tests and build WebGL, then verify the ability-score step keeps existing authoritative roll values and history while presenting the compact controls
