# Spec Delta

## Purpose

Provides a UI component that displays an ordered summary of the character creation steps above the navigation bar in the character creation flow.

## ADDED Requirements

### Requirement: Display step summary header
The system SHALL display a step summary header above the navigation bar in the character creation UI, showing the ordered list of steps (e.g., "1. Choose Wealth, 2. Select Equipment, 3. Review & Save").

#### Scenario: Header appears with correct steps
- **WHEN** the character creation scene is loaded,
- **THEN** the UI displays the step summary header with the three steps in order.

#### Scenario: Header updates when steps change
- **WHEN** the step list defined in StepSummaryData is modified,
- **THEN** the header updates to reflect the new ordering and titles without requiring a restart.
