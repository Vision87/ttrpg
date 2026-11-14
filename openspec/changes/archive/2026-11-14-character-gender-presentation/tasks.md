# Tasks

## 1. Server flow and draft compatibility

- [x] 1.1 Prepend and validate the system-owned presentation step for every supported ruleset while preserving package step order and versions; verify with `python3 -m pytest -q tests/creation_service_test.py tests/character_suite_test.py`.
- [x] 1.2 Persist the presentation value and stable current-step ID, and map legacy draft positions without inferring a presentation; verify with `python3 -m pytest -q tests/character_store_test.py tests/creation_service_test.py`.

## 2. Creation UI and portrait prompts

- [x] 2.1 Render the two accessible male/female symbol buttons as large square choices and require selection for new drafts; verify with `python3 -m pytest -q tests/unity_client_contract_test.py`.
- [x] 2.2 Include a selected presentation in portrait prompts and generation disclosure, and omit it when unset; verify with `python3 -m pytest -q tests/portrait_generation_test.py tests/creation_service_test.py`.

## 3. Avatar proportions

- [x] 3.1 Carry the selected presentation and race-composed proportion scales in the authoritative model recipe, retaining baseline proportions when unset; verify with `python3 -m pytest -q tests/test_character_presentation.py tests/creation_service_test.py`.
- [x] 3.2 Apply the proportion scales in the Unity assembler without changing overall height or race proportions, and build WebGL; verify with `python3 -m pytest -q tests/unity_client_contract_test.py && unity build UnityClient --target WebGL --execute-method WebGLBuild.Build --output-path UnityClient/Build/WebGL`.

## 4. Integration verification

- [x] 4.1 Run the full Python suite for cross-ruleset flow, legacy-draft, prompt, and recipe regressions; verify with `python3 -m pytest -q`.
