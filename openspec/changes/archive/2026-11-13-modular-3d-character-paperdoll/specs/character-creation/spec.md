# Spec Delta

## ADDED Requirements

### Requirement: Interactive 3D paper-doll turntable preview
The character-creation interface SHALL present an interactive 3D paper-doll turntable preview rendered from the draft's authoritative `model_recipe`. The preview SHALL render to an isolated off-screen texture displayed within the creation workflow layout, update in real-time as the user modifies race, class, or equipment choices, and allow the user to drag to rotate the character 360 degrees and zoom the camera.

#### Scenario: Real-time update on race selection
- **WHEN** a user selects or changes a race option in the creation flow
- **THEN** the client updates the 3D paper doll to reflect the new race's silhouette and bone scales without requiring manual page refresh or navigation.

#### Scenario: Real-time update on equipment selection
- **WHEN** a user purchases or equips an item in the equipment step
- **THEN** the client updates the 3D paper doll with the corresponding armor slice or socketed weapon prop.

#### Scenario: User rotates the 3D character
- **WHEN** a user drags horizontally across the 3D turntable preview viewport
- **THEN** the character rotates around its vertical axis to display front, side, and rear views.

#### Scenario: Presentation fallback when 3D preview is unavailable
- **WHEN** 3D WebGL rendering of the turntable fails or is unsupported
- **THEN** the character creation interface preserves all creation controls and falls back gracefully without blocking draft progression or saving.
