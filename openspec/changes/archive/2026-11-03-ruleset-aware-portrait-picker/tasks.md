# Tasks

## 1. Portrait Collections and Assets

- [x] 1.1 Define and validate portrait-pack metadata for stable asset IDs/revisions, ruleset compatibility, bundled resource paths, and source/license provenance; verify valid and invalid manifests with focused tests.
- [x] 1.2 Create original base portrait collections for each supported ruleset and register their bundled images; verify every manifest reference resolves to a client resource.
- [x] 1.3 Add an openly licensed portrait expansion collection with per-image source and license attribution; verify its license permits redistribution and all referenced images are bundled.

## 2. Catalog and Persistence

- [x] 2.1 Expose the active ruleset's base portraits and compatible bundled expansions to character creation without adding gameplay dependencies; verify incompatible collections are excluded and ruleset package versions remain unchanged.
- [x] 2.2 Persist the applied stable portrait reference and restore it from a saved draft; verify closing without a selection leaves the prior reference unchanged and resume preserves the selected revision.

## 3. Portrait Picker

- [x] 3.1 Replace the portrait text field with a full-screen, searchable image-only grid that adapts its column count to viewport width and scrolls vertically; keep selected portrait provenance inspectable in appearance configuration.
- [x] 3.2 Apply a portrait immediately when its image is selected and close the picker; preserve an unavailable-image fallback and leave mechanical choices unchanged.

## 4. Integration Verification

- [x] 4.1 Run focused asset, service, character-creation, and Unity client contract tests; verify base and expansion portraits are discoverable and their provenance is inspectable.
- [x] 4.2 Build the WebGL client and visually verify initial portrait selection and saved-draft restoration across supported viewport sizes.
- [x] 4.3 Build the WebGL client and visually verify the full-screen, vertically scrollable image grid, adaptive columns, immediate apply behavior, and selected portrait provenance at narrow and wide viewports.
