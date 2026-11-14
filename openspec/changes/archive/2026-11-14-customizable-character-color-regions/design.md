# Design

## Context

The Unity client samples a palette atlas through mesh UV0 and currently identifies tint groups by comparing the sampled swatch index. This couples appearance regions that share a swatch, including trousers with upper clothing and the sword grip with clothing accents. Python owns draft presentation data and returns palette tints in the model recipe; see the proposal and delta specs for the intended behavior.

The existing model geometry profiles collapse subraces to a base race. Appearance palettes need finer identity: every selectable base race and subrace has its own skin, hair, and iris options and saved values.

## Goals / Non-Goals

**Goals:**
- Keep palette sampling and semantic tint-region identification independent.
- Preserve the shared palette material and the current preset-swatch interaction.
- Carry the additional color values through draft persistence and model-recipe generation.
- Keep older drafts and requests usable without requiring a data migration.

**Non-Goals:**
- Add arbitrary RGB/hex color entry.
- Make metal armor, eye whites, or pupils customizable.
- Add separate materials or increase the avatar's material count.

## Decisions

### Encode tint regions separately from palette UVs

Keep UV0 for palette-atlas sampling and add a per-mesh-vertex semantic region identifier in UV1. Mesh construction assigns stable region identifiers for skin, hair, upper clothing, trousers, accents, and irises. The shader uses the region identifier to select a tint property instead of inferring the region from the palette swatch. This prevents a palette swatch reused by unrelated geometry, such as a weapon grip, from causing color bleed while retaining one shared material.

**Alternative considered:** Reserve distinct palette indices for each tintable region. This is less invasive initially, but it couples semantic identity to texture layout and remains vulnerable to future swatch reuse.

### Add a distinct iris surface

Construct a small iris surface between each existing white eye and black pupil, with its own semantic region identifier. Keep the existing sclera and pupil meshes unchanged. This adds an eye tint target without changing the model recipe's mechanical or facial-animation behavior.

**Alternative considered:** Tint the full eye or recolor the pupil. Rejected because the request is for eye color and changing the white or black parts would reduce legibility.

### Extend the existing appearance-color contract compatibly

Retain `cloths` for upper clothing and `secondary` for accents, and add `pants` and `iris` tint names. The Unity client submits all four existing and two new color fields. The Python service accepts the established four-field request shape as well as the extended shape; omitted new fields do not erase saved values. Drafts without the new values use the atlas defaults for trousers and irises. The model recipe exposes the new tints alongside existing appearance tints.

**Alternative considered:** Replace `cloths` and `secondary` with a new nested color schema. Rejected because it would require migrating saved drafts and coordinated changes to every existing client.

### Key appearance palettes by the full race choice

Keep `race_profile` as the key for shared body geometry and proportions, and carry the canonical full race-choice ID (for example, `race.elf.wood`) separately for appearance customization. Define the allowed skin, hair, and iris swatches for every selectable base race and subrace in Python. The model recipe sends the active choice and its allowed options to Unity, and the API accepts only values in those options. Store the three tint values under the full race-choice ID so switching among subraces restores each choice independently.

When migrating older drafts, move shared or base-profile skin, hair, and iris values to the active full race choice only if each value is allowed by its palette. Do not apply a legacy color that is outside the active palette. Every selectable race choice must have explicit palette data; tests check coverage as new race choices are added.

**Alternative considered:** Key appearance values by `race_profile`. Rejected because subraces sharing one geometry profile would then share their saved colors and allowed options.

### Keep the existing swatch-row interaction

Add separate preset rows for trousers and irises, keeping the existing upper-clothing and accent rows. Preserve the current skin and hair rows. Adjust the preview layout's reserved color-panel height or scrolling so all controls remain reachable at narrow viewports.

## Risks / Trade-offs

- **[Risk] Combined meshes may lose or misalign UV1 region identifiers.** Mitigation: verify region data survives mesh combination and add focused checks for representative clothing, props, and face geometry.
- **[Risk] Small iris geometry may be hidden by the pupil or appear indistinct in WebGL.** Mitigation: validate front-facing preview renders at the smallest supported viewport and tune iris size/depth while keeping sclera and pupil visible.
- **[Risk] Older requests could overwrite new color values if omitted fields are treated as resets.** Mitigation: distinguish omission from an explicit reset and test both legacy and extended request shapes.
- **[Risk] New race or subrace choices may lack a palette definition.** Mitigation: require explicit palette entries for every selectable race choice and test the palette registry against the available choices.
- **[Trade-off] A semantic UV channel adds a small amount of vertex data.** This is preferable to extra materials or texture sets and preserves the shared-material rendering approach.

## Migration Plan

1. Define explicit skin, hair, and iris palettes for every selectable base race and subrace, and extend the model recipe with the full race-choice ID and active palette options.
2. Extend the Python color contract and recipe to include optional trouser and iris tints while continuing to accept legacy requests and drafts. Persist skin, hair, and iris by full race choice, validate updates against its palette, and migrate allowed legacy colors to the active choice.
3. Add semantic tint-region identifiers to generated meshes and update the shared shader and assembler to apply the new regions.
4. Add iris geometry and the two new swatch rows, draw skin, hair, and iris swatches from the active model recipe, then adjust the preview layout for the additional controls.
5. Verify per-choice palette coverage, persistence and switching, legacy compatibility, region isolation, API rejection of unavailable colors, and WebGL preview rendering.

Rollback requires no draft migration: the new tint fields are additive, and existing `skin`, `hair`, `cloths`, and `secondary` values remain readable.
