# Client Runtime Spike

## Decision status

Unity 2022.3 LTS with a WebGL-first deployment is selected. This spike remains
the contract used to verify the Unity adapters and to keep the session/rules
interfaces independent from the client runtime.

## Candidate comparison criteria

| Criterion | Required evidence |
| --- | --- |
| 2D tactical rendering | Grid/map, token, range, visibility, and event-driven state update |
| 3D immersive rendering | Model, camera, animation, audio, and effect projection from the same state |
| Shared state contract | Both views consume identical positions and ordered semantic events |
| Asset pipeline | Global versioned asset references, metadata, and fallbacks |
| Local operation | Offline character/session inspection and persistence path |
| Multiplayer path | Compatibility with an authoritative session service and reconnect |
| Input and accessibility | Precise tactical interaction, keyboard/controller potential, reduced effects |
| Testability | Headless state projection and deterministic event assertions |
| Personal-use operations | Local asset access and private content without requiring a public marketplace |

## Architecture-neutral proof of concept

The proof of concept is a renderer contract fixture, not a selected client
implementation. It must:

1. Load one canonical session snapshot containing a map, one character, one
   NPC, and their positions.
2. Apply an ordered movement and attack event sequence.
3. Produce a 2D projection and a 3D projection from the same snapshot/events.
4. Demonstrate that both projections agree on entity identity, position, and
   gameplay outcome.
5. Map one semantic effect to a presentation asset and report a fallback when
   the preferred asset is unavailable.
6. Run without resolving rules or mutating authoritative session state in
   either projection.

The Unity project under `UnityClient/` implements the DTO import and both
projection adapters. A Unity-enabled environment must still perform the final
editor import and WebGL build verification.
