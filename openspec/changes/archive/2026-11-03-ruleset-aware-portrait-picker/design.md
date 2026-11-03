# Design

## Context

See proposal.md and the spec deltas for user-facing behavior. Appearance fields currently persist portrait references as presentation strings, while the Unity client renders presentation fields as text inputs. Portrait image loading is not exposed as a catalog. The global asset registry supports versioned references and source metadata, but the character-creation service does not discover portrait collections from it. Unity artwork is bundled in the WebGL build and loaded from `Resources`; there is no runtime asset download or install path.

## Goals / Non-Goals

**Goals:**
- Keep portrait choice package-aware and independent of gameplay mechanics.
- Reuse stable, versioned presentation references and preserve attribution and license data.
- Make base and compatible bundled expansion collections easy to browse on touch and desktop.
- Keep the initial implementation self-contained in the WebGL build.

**Non-Goals:**
- Downloading or installing portrait packs after the client is built.
- Generating portraits at runtime or requiring an external image-generation service.
- Reproducing proprietary game artwork; original portraits should use setting-appropriate cues without copying protected characters or assets.

## Decisions

1. **Model portraits as presentation assets, not gameplay definitions.**  
   Add portrait-pack manifests that identify a pack, version, compatible rulesets, and portrait entries. Each entry carries a stable asset ID and revision, display metadata, image resource reference, and source/license attribution. Keep these manifests separate from the gameplay package dependency graph so enabling an art collection never changes rules.

2. **Discover bundled compatible packs automatically.**  
   The service discovers portrait manifests included with the application and returns the base collection for the selected ruleset plus compatible expansion collections. Expansion availability is determined by inclusion in the build and compatibility metadata, not by a user-managed install flow. The selected character stores the versioned portrait reference; pack provenance stays available for inspection and character history.

3. **Bundle image resources with the client for v1.**  
   Portrait images are included in Unity `Resources` under stable paths referenced by the manifests. This fits WebGL's current asset loading and avoids adding an image-download endpoint, browser cache, storage limits, and pack-install lifecycle. A later runtime-install design can replace the resource resolver while preserving asset IDs and presentation records.

4. **Use the full screen for a responsive, image-only portrait grid.**  
   The picker uses the available screen width and height for its searchable image grid, with vertical scrolling when portraits exceed the viewport and a column count derived from available width. Selecting an image immediately saves its stable reference and closes the picker. Source, attribution, and license details remain inspectable from the selected portrait in appearance configuration. Closing without selecting leaves the current portrait unchanged.

5. **Keep the selected portrait usable when art is missing.**  
   Resolve the selected revision through its bundled resource path. If the image cannot be loaded, retain the reference, emit a presentation diagnostic, and render the established portrait fallback rather than blocking character creation.

6. **Create original base artwork and use redistributable expansion art.**  
   Base packs use original artwork created for each supported game. Expansion collections include only portraits whose license permits bundling and redistribution; record a stable source URL and exact license identifier per asset and make that attribution inspectable alongside the selected portrait. Do not fetch source images at runtime.

## Risks / Trade-offs

- **[Risk] A portrait is incorrectly labeled as compatible with a game** → Require explicit ruleset compatibility metadata and review pack manifests against the selected collection boundary.
- **[Risk] Open-license terms are incomplete or do not allow redistribution** → Include an expansion portrait only after confirming its license permits redistribution; preserve per-image attribution and license identifiers.
- **[Risk] Bundling images increases WebGL download size** → Use optimized images for the grid and monitor the build size as packs grow.
- **[Risk] An asset is removed or renamed in a later pack** → Keep asset IDs and revisions stable, retain old bundled revisions needed by saved characters, and use the presentation fallback if an older revision cannot be resolved.
- **[Risk] The full-screen overlay obscures navigation or is awkward on mobile** → Keep the picker modal and its own scrolling independent from the creation-step navigation, and validate both touch and pointer use at narrow and wide viewport sizes.

## Migration Plan

No persisted data migration is required: the current presentation profile already stores a portrait reference. Existing text values remain valid until the user selects an image in the picker. Bundle new portrait resources and manifests in the client build; if a referenced image is absent, preserve the saved reference and show the fallback.

## Open Questions

- The initial portrait count and the specific art styles/character categories for each base and expansion pack can be finalized while sourcing or creating the artwork, without changing the picker or asset-pack contract.
