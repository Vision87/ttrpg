# Tasks

## 1. Feat Detail Data

- [x] 1.1 Add concise, original descriptions to the supported D&D 3.5 feat definitions and pass descriptions through feat options; verify the creation-service response includes a non-empty summary for each catalog feat.
- [x] 1.2 Expose each prerequisite's met, unmet, or unverifiable status for the inspected feat using the existing eligibility evaluation; verify representative ability, feat, skill, and unsupported prerequisites.

## 2. Feat Browser Experience

- [x] 2.1 Separate feat inspection state from draft selection and render the selected feat's description and individual requirement statuses; verify inspection leaves the selected-feat values unchanged and unmet requirements have a red visual plus a text label.
- [x] 2.2 Add explicit Add/Remove actions and preserve search and eligible-only filtering, including visibility of selected but ineligible feats for review/removal; verify selection and filtering behavior.
- [x] 2.3 Adapt the feat list and detail pane between side-by-side and stacked narrow layouts; verify narrow and wide viewport UI contracts.

## 3. Integration Verification

- [x] 3.1 Run the project test suite and build the WebGL client; verify feat summaries, prerequisite statuses, and the detail pane behavior in the integrated client.
