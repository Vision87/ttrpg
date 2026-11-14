# Proposal

## Why

Universal RPG Board currently represents characters in the client solely via 2D portraits and primitive placeholder cubes. Players lack immediate visual feedback on how their race, class, and equipment choices shape their character during creation. Introducing a modular low-poly 3D paper-doll turntable preview provides an engaging, responsive character creation experience while establishing a high-performance, single-draw-call 3D avatar foundation that future board sessions can build upon.

## What Changes

- **Server-Authoritative Model Recipe**: The Python character domain generates a deterministic `model_recipe` DTO detailing race bone-scale profiles, sliced body/armor parts, socketed item props, and palette tint indices based on ruleset choices and equipment state.
- **Faceted Low-Poly Modular Humanoid**: Construct a unified humanoid armature supporting part-slicing (Head, Torso, Legs, Hands, Feet) where armor slices replace base body slices to prevent geometry clipping, paired with bone sockets for weapons and shields.
- **Procedural Race Scaling**: Implement runtime bone scaling on the universal rig to express distinct racial silhouettes (Dwarf, Halfling, Elf, Human, Half-Orc) while preserving animation retargeting and equipment compatibility across all races.
- **Single-Draw-Call Palette Shading**: Utilize a shared 256x256 color palette texture and flat-shaded shader tailored for WebGL performance and retro tabletop aesthetic.
- **RenderTexture Turntable Component**: Integrate an isolated preview camera and interactive turntable inside the character creation UI, supporting 360-degree drag rotation, zoom, and an idle breathing stance.
- **Dynamic Creation Workflow Updates**: Update the 3D preview in real-time as the user selects race, class, and purchases or equips items in the shop.

## Capabilities

### New Capabilities
- `modular-3d-avatar`: Authoritative generation of modular 3D character recipes, sliced mesh composition, bone-scaling race profiles, and socketed equipment attachment.

### Modified Capabilities
- `character-creation`: Adds requirements for real-time 3D paper-doll preview and interactive turntable manipulation during character creation.

## Impact

- **Python Service**: Updates `character/presentation.py`, `character/builder.py`, and `clients/serve_webgl.py` to calculate and serialize `model_recipe` in character draft endpoints.
- **Unity Client**: Adds `ModularCharacterAssembler.cs`, `CharacterTurntablePreview.cs`, and palette shader; updates `CharacterCreationClient.cs` layout to present the turntable preview.
- **Assets**: Adds low-poly humanoid base slices, starter armor slices (leather, chainmail), starter weapons (sword, greataxe, shield), and palette texture in `UnityClient/Assets/`.
- **Compatibility**: Retains full backwards compatibility with existing 2D portrait selection and saved drafts.
