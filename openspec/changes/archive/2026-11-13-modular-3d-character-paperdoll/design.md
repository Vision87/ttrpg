# Design

## Context

Universal RPG Board operates with an authoritative Python backend and a Unity WebGL client. Character drafts and creation steps (race, class, abilities, skills, equipment, appearance) are managed by Python and presented through Unity's responsive IMGUI interface (`CharacterCreationClient.cs`). The 3D view in `ImmersiveProjection.cs` currently instantiates primitive cubes. See `proposal.md` for motivation.

## Goals / Non-Goals

**Goals:**
- Provide a responsive 3D paper-doll turntable in the character creation UI rendered via `RenderTexture`.
- Establish a reusable modular humanoid avatar system built from scratch with sliced body parts, weapon sockets, and procedural bone scaling.
- Enable single-draw-call WebGL performance via a shared 256x256 color palette atlas and flat-shaded shader.
- Maintain server authority: Python computes the `model_recipe` DTO detailing bone scales, active slices, sockets, and palette indices.
- Support 360-degree pointer drag rotation and zoom controls on the turntable preview.

**Non-Goals:**
- Integrating 3D animated characters into the tactical board session (`ImmersiveProjection`) in this phase (reserved for subsequent changes once paper-doll is stable).
- Cloth simulation, physics hair, or facial blendshapes/morph targets.
- Third-party model import pipelines or runtime glTF downloaders.

## Decisions

### Decision 1: Sliced Mesh Replacement over Multi-Layering
- **Approach**: The humanoid base mesh is divided into anatomical slices (`Head`, `Torso`, `Legs`, `Hands`, `Feet`). Equipping armor (e.g. Chainmail) hides the base body slice and activates the corresponding armor slice.
- **Rationale**: Eliminates polygon clipping and z-fighting entirely, especially during skeletal animation in WebGL. Keeps polygon count minimal.
- **Alternatives Considered**:
  - *Layered outer armor*: Placed on top of full body mesh. Rejected due to clipping at joints and doubled geometry.

### Decision 2: Universal Humanoid Rig with Procedural Bone Scaling
- **Approach**: A single Mecanim-compatible humanoid armature serves all races. Race silhouettes are produced at runtime by scaling specific bone transforms (e.g. Dwarf scales leg bones to 0.75x and widens spine/shoulders to 1.25x; Halfling scales root to 0.65x and head to 1.1x).
- **Rationale**: Extreme asset efficiency. Every armor piece, weapon, and animation fits every race without remodeling or duplicating meshes across races.
- **Alternatives Considered**:
  - *Separate skeleton and mesh per race category*: Rejected because it requires 4x modeling work for every armor piece.

### Decision 3: Server-Authoritative `model_recipe` Contract in Python
- **Approach**: The Python service defines `model_recipe` generation in `character/presentation.py` and returns it in draft responses:
  ```json
  {
    "race_profile": "dwarf",
    "bone_scales": { "legs": [1, 0.75, 1], "torso": [1.25, 0.85, 1.25] },
    "slices": { "head": "head_base", "torso": "armor_chainmail", "legs": "pants_chainmail" },
    "sockets": { "main_hand": "wpn_longsword", "off_hand": "shield_heavy" },
    "palette_tints": { "skin": 4, "hair": 12 }
  }
  ```
- **Rationale**: Preserves core architecture where Python is the source of truth for ruleset content and item definitions. Unity remains a renderer.
- **Alternatives Considered**:
  - *Unity-local mapping*: Rejected to keep ruleset content logic centralized in Python packages.

### Decision 4: Single Palette Atlas Texture & Flat Shading
- **Approach**: All modular parts and props are UV-mapped to single pixel coordinates on a shared 256x256 color palette PNG. A lightweight custom shader applies flat lighting based on polygon face normals.
- **Rationale**: Keeps the entire assembled character to 1 material and 1 draw call, critical for WebGL performance.
- **Alternatives Considered**:
  - *Standard PBR materials with texture sets*: Rejected due to high texture memory and multiple draw calls per equipped piece.

### Decision 5: RenderTexture Isolated Camera Turntable
- **Approach**: A dedicated camera renders the 3D character in an isolated layer onto a `RenderTexture`, which `CharacterCreationClient.cs` draws using `GUI.DrawTexture`.
- **Rationale**: Seamlessly integrates into the existing responsive IMGUI layout without clipping world background or interfering with scene lighting.
- **Alternatives Considered**:
  - *Direct screen-space world overlay*: Rejected due to layout and responsive breakpoint conflicts.

### Decision 6: Scratch Granular Construction
- **Approach**: Build the base armature, modular meshes, palette texture, and shader incrementally within the project rather than importing external packs.
- **Rationale**: Ensures complete ownership, clean bone hierarchies, exact slot matching, and pristine licensing provenance.

## Risks / Trade-offs

- **[Risk] Extreme bone scaling could distort certain mesh joints during animation**
  - *Mitigation*: Limit bone scale ranges in Python race profiles; test animations on the extreme shapes (Dwarf, Halfling) early during rig creation.
- **[Risk] WebGL RenderTexture performance on very low-end mobile devices**
  - *Mitigation*: Keep preview RenderTexture resolution moderate (e.g., 512x512) and provide a clean fallback that disables the turntable if GPU texture creation fails.
- **[Risk] Adding 3D preview increases client asset size**
  - *Mitigation*: Low-poly geometry and a single 256x256 palette PNG add negligible footprint (< 200 KB total).

## Migration Plan

1. Add Python recipe calculation to `character/presentation.py` and serialize in character draft responses.
2. Introduce low-poly palette shader, texture, and base sliced meshes in `UnityClient/Assets/`.
3. Implement `ModularCharacterAssembler` and `CharacterTurntablePreview` in Unity.
4. Hook turntable preview into `CharacterCreationClient.cs` layout, keeping existing 2D portrait picker intact.
