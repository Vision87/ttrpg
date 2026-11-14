# Tasks

## 1. Python Domain & Model Recipe Service

- [x] 1.1 Add `ModelRecipe` dataclass, race bone-scaling profiles (Human, Dwarf, Halfling, Elf, Half-Orc), and item-to-slice/socket mapping rules in `character/presentation.py`; verify with unit tests in `tests/test_character_presentation.py`.
- [x] 1.2 Implement `generate_model_recipe(character, ruleset_definitions)` to evaluate character race, class, and equipment state into a complete recipe dictionary; verify with test scenarios for Dwarf, Halfling, and equipped armors/weapons.
- [x] 1.3 Expose `model_recipe` in character draft DTOs and serialization in `clients/` and local HTTP service; verify with draft endpoint tests.

## 2. Low-Poly Assets & Palette Shading

- [x] 2.1 Create the shared 256x256 color palette texture and flat-shaded low-poly shader in `UnityClient/Assets/Art/Shaders/`; verify shader compiles cleanly for WebGL.
- [x] 2.2 Construct the base humanoid armature and sliced body meshes (Head, Torso, Legs, Hands, Feet) mapped to the color palette; verify Unity imports the humanoid avatar without rigging errors.
- [x] 2.3 Construct starter armor slices (Leather Torso, Chainmail Torso, Chainmail Legs) and socketed props (Sword, Greataxe, Shield); verify meshes align with the shared armature and palette.

## 3. Unity Modular Compositor

- [x] 3.1 Implement `ModularCharacterAssembler.cs` in Unity to parse `ModelRecipeDto`, scale bone transforms, toggle sliced sub-meshes, and instantiate socketed hand props; verify in Unity test scene.
- [x] 3.2 Configure the humanoid avatar prefab with a looped idle breathing animation; verify animation plays smoothly across different race bone scales.

## 4. RenderTexture Turntable & UI Integration

- [x] 4.1 Implement `CharacterTurntablePreview.cs` to manage the isolated preview camera, lighting, RenderTexture rendering, pointer-drag 360-degree rotation, and zoom; verify texture output.
- [x] 4.2 Integrate the 3D turntable preview panel into `CharacterCreationClient.cs`, updating the model in real-time when race, class, or equipment options change; verify responsive UI layout.
- [x] 4.3 Implement presentation fallback in `CharacterCreationClient.cs` when 3D preview or WebGL RenderTexture fails; verify creation workflow and draft saving remain fully functional.

## 5. End-to-End Verification

- [x] 5.1 Run full Python test suite (`python3 -m pytest -q`) and verify all character and presentation tests pass.
- [x] 5.2 Verify Unity project compiles and scripts pass WebGL validation.
