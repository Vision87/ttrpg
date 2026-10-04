# Module Boundaries

The platform is organized around contracts rather than a selected client
runtime. Client technology remains a deliberate spike until the renderer
requirements have been compared.

```text
domain/
  shared identifiers, versions, provenance, validation, and serialization

rules/
  package manifests, definitions, evaluation, deterministic dice, extensions

character/
  profiles, templates, drafts, derived statistics, and presentation profiles

campaign/
  package configuration, incarnations, compatibility, and migration branches

session/
  authoritative state, controllers, permissions, actions, and event history

assets/
  global manifests, revisions, semantic mappings, and fallbacks

clients/
  2D tactical projection, 3D immersive projection, and shared session UI

tests/
  contract, conformance, integration, and end-to-end scenarios
```

## Boundary rules

- `domain` owns shared contracts and must not depend on a client or renderer.
- `rules` may depend on `domain`, but never on presentation code.
- `character` may consume rules contracts and asset references, but stores
  explicit choices separately from derived values.
- `campaign` owns campaign-local state and compatibility decisions; reusable
  character identity remains outside a campaign incarnation.
- `session` is the authoritative source for gameplay state and ordered events.
- `assets` provides presentation resources and semantic mappings without
  deciding gameplay outcomes.
- `clients` project authoritative state and events; they must not resolve rules
  independently.
- `tests` may depend on public contracts, but production modules must not
  depend on tests.

The concrete source-language layout can mirror these boundaries after the
client/runtime spike selects the implementation stack.
