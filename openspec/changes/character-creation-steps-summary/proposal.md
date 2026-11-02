# Proposal

## Why

The character creation UI currently presents the equipment shop and wealth selection without a clear, ordered overview of the steps the user must follow. New users are confused about the sequence of actions, leading to mistakes and a higher barrier to entry. Adding a concise summary of the character‑creation steps above the navigation bar will improve discoverability, reduce confusion, and streamline the onboarding experience.

## What Changes

- Add a header component that lists the ordered steps of character creation (e.g., "1. Choose Wealth, 2. Select Equipment, 3. Review & Save").
- Update the UI layout to place this header directly above the navigation bar.
- Ensure the header updates dynamically if additional steps are introduced in the future.
- Adjust styling to match existing theme and provide responsive behavior on narrow screens.

## Capabilities

### New Capabilities
- `character-creation/steps-summary`: Defines the UI contract for displaying a step‑by‑step summary above the navigation bar in the character creation flow.

### Modified Capabilities
- *(none)*

## Impact

- UI code (`CharacterCreationClient.cs`) will be modified to include the new header component.
- Unity UI prefabs/layouts will be updated to position the header.
- Tests (`equipment_test.py` and UI contract tests) will be extended to verify the presence and correctness of the step summary.
- Documentation (`README.md` and in‑app help) will be updated to describe the new UI element.
