# Design

## Context

See proposal.md for motivation and specs/character-creation/spec.md for the behavior contract. The IMGUI client already renders a fixed action area above an independently scrollable step body. Numeric fields and their text roll buttons are currently drawn in `DrawField`, while score-group actions are drawn after the fields inside that scrollable body. `CreationIcons` loads local `Texture2D` assets from Unity Resources; existing UI icons use PNGs and there is no dice icon.

## Goals / Non-Goals

**Goals:**
- Keep individual score inputs wide while placing a compact dice control alongside them.
- Keep full-group roll actions visible with the fixed step actions, outside the scrolling score body.
- Add a local dice icon without changing the existing runtime asset-loading model.

**Non-Goals:**
- Changing package score-group metadata, roll service behavior, or result presentation.
- Adding a new UI framework or runtime SVG dependency.

## Decisions

1. **Use a compact horizontal row for each individually rollable numeric field.**  
   Keep the field label above the row, let the numeric input use the remaining width, and place a touch-usable icon button beside it. Preserve dice-method instructions and latest result text below the row. This is preferred over replacing the input or placing the icon beneath it, both of which would reduce usable space or retain the current vertical cost.

2. **Use an SVG-authored dice icon with the existing Unity texture pipeline.**  
   Add a small original SVG source and a local PNG texture resource for the client to load through `Resources.Load<Texture2D>`. This keeps the visual crisp and source maintainable without introducing a runtime SVG package or changing the established icon loader. Provide the icon button a tooltip naming the score and roll/reroll action.

3. **Render full-group actions in the fixed action area.**  
   Draw the package-eligible group action or actions immediately after “Save draft and exit” and before closing the action panel. Keep group membership and reroll visibility checks unchanged. Remove the old group-action rendering from the bottom of the scrolling fields so each eligible action appears only once.

4. **Preserve service ownership of all roll effects.**  
   Icon and group buttons call the existing field/group roll paths. Do not generate dice or mutate score history in the client; continue displaying returned values, dice, and discarded dice using the existing result UI.

## Risks / Trade-offs

- **[Risk] An icon-only button is unclear without a mouse hover →** Include an accessible label/tooltip and use a recognizable dice glyph with a visible fallback if the texture is unavailable.
- **[Risk] Moving a group action could show it on unrelated steps →** Retain the package group-to-step applicability check before drawing each action.
- **[Risk] A narrow input row could constrain score entry →** Let the input expand to the row width and reserve only the density-scaled icon-button width.

## Migration Plan

No persisted data or API migration is required. Roll back by restoring the prior field/group control placement and removing the dice icon resource and loader mapping; package declarations and saved roll histories remain unchanged.
