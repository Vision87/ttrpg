# Spec Delta

## ADDED Requirements

### Requirement: Mobile-first responsive creation chrome
The character-creation client SHALL present a mobile-first layout that adapts across named viewport breakpoints. At the narrowest breakpoints the interface SHALL use a single-column composition with compact progress, readable type, and tap-friendly controls. Wider breakpoints MAY enrich the same chrome (for example longer step labels or side-by-side editors) without requiring a separate creation flow. Layout adaptation SHALL NOT change package-declared step order, field semantics, or server validation rules.

#### Scenario: Narrow viewport uses compact single-column chrome
- **WHEN** the character-creation client is shown at a narrow mobile viewport while editing a draft
- **THEN** the client displays a single-column layout with compact step progress and does not rely on a multi-column editor layout to complete the step

#### Scenario: Wider viewport enhances without changing flow semantics
- **WHEN** the same draft is shown at a wider breakpoint that supports enhanced layout
- **THEN** the client may show richer progress labeling or side-by-side editor panes while keeping the same package-declared steps, choices, and save-before-navigate behavior

#### Scenario: Breakpoint change preserves draft state
- **WHEN** the viewport crosses a layout breakpoint during an editing session
- **THEN** the draft's current step, unsaved field edits still on screen, and previously saved choices remain available without restarting creation

### Requirement: Primary step actions above the step body
While editing a package-declared creation step, the client SHALL place the primary continue action (save-and-continue or proceed-to-review) above the scrollable step body so the user can advance without scrolling to the end of the step content. Secondary actions such as save-draft-and-exit SHALL remain available without competing visually with the primary action. Placing actions above the body SHALL NOT bypass save-before-navigate, review, or finalization validation.

#### Scenario: Continue is reachable without scrolling the step body
- **WHEN** a user opens a creation step whose body content exceeds the visible viewport height
- **THEN** the primary continue action is visible above that body without requiring the user to scroll to the end of the step content

#### Scenario: Advancing still saves the current step
- **WHEN** a user activates the primary continue action
- **THEN** the client saves the current step's edits before moving to the next step or review, consistent with existing navigation rules

#### Scenario: Secondary exit remains available
- **WHEN** a user is editing a creation step
- **THEN** a secondary save-draft-and-exit action remains available in the step action area without replacing or hiding the primary continue action

### Requirement: Compact step progress on narrow viewports
The client SHALL show ordered creation-step progress derived from the active package's creation flow. On narrow viewports the progress control SHALL use a compact presentation that identifies the current step and overall position without stacking full summary cards for every step into the first screenful. Users SHALL still be able to select any package-declared step from progress navigation, subject to save-before-navigate rules. Wider viewports MAY show additional summary text for past steps.

#### Scenario: Narrow progress stays compact
- **WHEN** the character-creation client shows step progress at a narrow viewport with multiple package-declared steps
- **THEN** the progress control remains compact and does not occupy the majority of the first screenful with full per-step summary cards

#### Scenario: Selecting a step from compact progress
- **WHEN** a user selects another package-declared step from the progress control
- **THEN** the client saves the current step's edits and navigates to the selected step

#### Scenario: Current step remains identifiable
- **WHEN** step progress is shown in compact form
- **THEN** the current step and the user's position in the ordered flow are clearly identifiable

### Requirement: Density-aware creation controls
The character-creation client SHALL size typography and interactive controls according to the active density for the current breakpoint. Primary actions SHALL use a larger hit target and more prominent type than secondary or tertiary actions. The client SHALL NOT present primary full-width actions as large thin bars with disproportionately small label text relative to the control height.

#### Scenario: Primary action meets density expectations on mobile
- **WHEN** a user views the primary continue action at a narrow mobile breakpoint
- **THEN** the control uses the mobile density type scale and a tap-friendly height so the label remains readable within the control

#### Scenario: Control roles remain distinct
- **WHEN** primary, secondary, and tertiary or icon actions appear on the same step
- **THEN** their relative prominence and size follow the active density roles rather than sharing one full-bleed oversized style
