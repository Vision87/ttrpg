# Spec Delta

## ADDED Requirements

### Requirement: Full-screen generated portrait flow
The system SHALL present portrait generation and candidate review in a full-screen experience within appearance configuration. Activating the existing Generate portrait action SHALL open a composer without submitting a request. The composer SHALL show the optional description and the existing service and data disclosure before submission. After submission, the experience SHALL remain visible while generation is in progress and SHALL transition to a full-screen candidate preview on success. The currently selected portrait SHALL remain unchanged unless the candidate is applied.

#### Scenario: Opening the portrait composer
- **WHEN** a user activates Generate portrait from appearance configuration
- **THEN** the system opens a full-screen composer with the optional description, service and data disclosure, a Generate action, and a way to close before submission, without submitting a generation request

#### Scenario: Submitting from the composer
- **WHEN** a user submits a portrait-generation request from the composer
- **THEN** the system saves the current appearance edits before submitting and keeps the selected portrait unchanged while the request runs

#### Scenario: Showing generation progress
- **WHEN** a submitted portrait-generation request is still in progress
- **THEN** the full-screen experience remains open and visibly indicates that generation is in progress

#### Scenario: Previewing a generated candidate
- **WHEN** portrait generation succeeds
- **THEN** the full-screen experience shows the candidate image fitted to the preview area without cropping and keeps the previously selected portrait unchanged pending an explicit apply action

#### Scenario: Resolving a candidate on a mobile layout
- **WHEN** a candidate preview is shown on a mobile layout
- **THEN** the system shows directional swipe guidance and no visible Use or Discard buttons, applies the candidate and closes the experience after a right swipe, or discards the candidate and closes the experience after a left swipe

#### Scenario: Resolving a candidate on a wider layout
- **WHEN** a candidate preview is shown on a wider layout
- **THEN** the system provides Use and Discard buttons, applies the candidate and closes the experience after Use, or discards the candidate and closes the experience after Discard

#### Scenario: Generation fails
- **WHEN** the portrait-generation request fails
- **THEN** the experience shows an actionable error, preserves the selected portrait, and allows the user to retry or close the composer

### Requirement: Shared generated portrait library
The system SHALL retain each successfully resolved generated candidate as a reusable portrait asset in a local library shared by drafts in the same data directory. Applying a candidate SHALL also select it for the current draft; discarding a candidate SHALL leave the current portrait unchanged while retaining the image in the library. The library SHALL appear as a distinct generated section in the portrait picker, and its assets SHALL remain separate from bundled portrait collections with their available generation provenance.

#### Scenario: Applying a generated candidate to the library
- **WHEN** a user applies a generated candidate
- **THEN** the system retains it in the shared library and sets the current draft's portrait to its stable generated-asset reference

#### Scenario: Discarding a generated candidate into the library
- **WHEN** a user discards a generated candidate
- **THEN** the system leaves the current draft's portrait unchanged, clears the pending candidate, and retains the generated image as a reusable library asset

#### Scenario: Selecting a generated asset from another draft
- **WHEN** a user opens the portrait picker for any draft that can access the same local data directory
- **THEN** the picker shows generated assets in a distinct section and selecting one applies its stable reference and loads the same image and provenance

#### Scenario: Including previously applied generated portraits
- **WHEN** the shared library is initialized from data containing previously applied generated portraits
- **THEN** the system includes those images in the library without changing their stable references or duplicating them on subsequent loads

#### Scenario: Previously deleted candidates
- **WHEN** the shared library is initialized and an older discarded candidate's image has already been deleted
- **THEN** the system does not fabricate or advertise that unavailable image as a library asset
