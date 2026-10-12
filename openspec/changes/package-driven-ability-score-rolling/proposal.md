# Proposal

## Why

The creator currently accepts manually entered ability scores, but players cannot generate scores with dice or reroll them. This makes character creation less faithful to games that use rolled scores and offers no visible record of how those scores were generated.

## What Changes

- Add safe, package-declared dice methods and reroll policies for numeric creation fields.
- In D&D 3.5, roll each ability as 4d6, dropping the lowest die; support rerolling one ability or the complete six-score set.
- Add a declared score group so the service and client can offer “Roll All” and “Reroll All” only when the package supports the operation.
- Keep the service authoritative for dice generation and retain dice, dropped results, assigned scores, and individual/set roll history across draft resume and character finalization.
- Preserve manual score entry and existing creation behavior for packages that do not declare rolling.

## Capabilities

### New Capabilities

None.

### Modified Capabilities

- `character-creation`: Add package-enabled individual and full-set ability score rolling, rerolling, and durable roll history.
- `multi-ruleset-injection`: Validate bounded dice declarations, score-group membership, and reroll policies.
- `universal-character-builder`: Render individual and full-set roll controls from package metadata without ruleset-specific client logic.

## Impact

- Ruleset creation-flow schema and the D&D 3.5 package manifest.
- Character creation workflow, local JSON service routes, draft/character provenance, and resume behavior.
- Unity WebGL creation UI and DTOs.
- Schema, service, persistence, and Unity contract tests; local creator documentation.

