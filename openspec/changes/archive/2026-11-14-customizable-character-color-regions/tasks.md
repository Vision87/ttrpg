# Tasks

## 1. Appearance Color Contract

- [x] 1.1 Extend appearance-color validation and persistence for trouser and iris tints while accepting legacy requests and preserving omitted values; verify both request shapes and omitted-field behavior with service tests.
- [x] 1.2 Include the new tints in model-recipe generation and provide palette defaults when a draft has no saved trouser or iris color; verify new and legacy draft recipe tests.

## 2. Semantic Avatar Regions

- [x] 2.1 Assign tint-region identifiers independently from palette UVs to skin, hair, upper clothing, trousers, accents, and eye geometry; verify representative combined meshes retain their region identifiers.
- [x] 2.2 Update the shared shader and assembler to apply each tint only to its assigned region; verify same-swatch unrelated geometry remains unchanged and the avatar still uses one shared material.
- [x] 2.3 Add visible iris geometry with its own tint region while retaining fixed eye whites and pupils; verify a rendered preview shows all three eye regions distinctly.

## 3. Client Controls and Integration

- [x] 3.1 Add separate trouser and iris swatch rows and send, reload, and reset their values through the draft color API; verify color selections persist independently across draft resumption.
- [x] 3.2 Adjust the preview panel layout for the additional controls; verify all swatches and the preview remain usable at narrow and wide viewport sizes.
- [x] 3.3 Run the targeted appearance and Unity contract tests and build WebGL; verify the shader compiles and the preview renders the independent colors.

## 4. Race- and Subrace-Specific Palettes

- [x] 4.1 Define skin, hair, and iris palettes for every selectable base race and subrace; include the full selected race-choice ID and its options in the model recipe while retaining the base geometry profile.
- [x] 4.2 Persist skin, hair, and iris colors by full race choice, migrate only allowed legacy shared or base-profile values to the active choice, and reject API colors outside its palette.
- [x] 4.3 Update the Unity DTO and color UI to show only the active race choice's skin, hair, and iris options.
- [x] 4.4 Verify palette coverage, per-choice switching and draft reload, unavailable-color rejection, legacy migration, targeted tests, and the WebGL build.
