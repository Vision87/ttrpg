# Unity WebGL Client

This client is a Unity projection layer over the authoritative session
snapshot/event contract. It contains separate 2D tactical and 3D immersive
adapters but does not resolve rules or mutate session state.

The project targets Unity 6000.6.2f1 and is intended for a WebGL build.

## Local character creation and play

From the repository root, build the WebGL client and start the local service:

```sh
unity build UnityClient --target WebGL \
  --execute-method WebGLBuild.Build \
  --output-path UnityClient/Build/WebGL
python3 tools/serve_webgl.py \
  --directory UnityClient/Build/WebGL \
  --port 8000 \
  --data-directory ~/.universal-rpg-board/data
```

Open <http://127.0.0.1:8000>. The Unity client loads installed package flows
from the Python service, creates or resumes a local draft, validates and saves
the character, then starts it in the configured starter session. The initial
packages are D&D 3.5 and Dark Heresy. Draft and character JSON records are stored
under the selected data directory in separate `drafts/` and `characters/`
folders; the default is `~/.universal-rpg-board/data`.
D&D 3.5 ability scores can be rolled individually or as a complete set using
4d6, dropping the lowest die, with individual scores and the full set
rerollable. The dice and results are generated and retained by the local
service; other rulesets expose rolling only when their package declares a
supported method.

The skill step follows each game's different rules. D&D 3.5 offers the seeded
skill catalog and allocates level-one skill points using class skills,
Intelligence, and the human bonus. Class skills cost one point per rank;
cross-class skills cost two points per rank and allow half-ranks. Rank caps and
the complete starting budget are checked before finalization. Each skill has
decrease/increase controls, with the point cost and remaining budget shown as
you allocate. Dark Heresy
(1st edition) records trained skills as selections rather than D&D-style ranks;
trained-only skills are labeled. XP-priced skill advances such as +10/+20 are
not part of this level-one creator.

D&D 3.5 feat selection includes the core SRD feat catalog. Search the list or
switch between showing every feat with unmet prerequisites explained and
showing only currently eligible feats. Feat titles and prerequisite metadata
are sourced from the [D&D 3.5 SRD feat list](https://www.d20srd.org/srd/feats.htm);
unmodeled prerequisite types are conservatively marked unavailable.

### Step summary header

The character creation flow includes an ordered step summary header displayed directly
above the navigation bar (`StepSummaryHeader.cs`). Its purpose is to give users a clear
overview of the sequence of actions in character creation.
- Step titles can be configured via the `StepSummaryData.asset` ScriptableObject
  (`UnityClient/Assets/Data/StepSummaryData.asset`).
- The component dynamically updates when the step list changes at runtime without
  requiring an application restart.
- On screens narrower than 600 px, `ResponsiveStepHeader` automatically stacks step
  items vertically.


This first path is local solo play on the configured starter session. It does
not provide online multiplayer, in-app ruleset authoring, board selection, or
player-adjustable application themes. Package-provided themes are applied to
both creation and board views; character-specific appearance remains separate.
The D&D 3.5 package uses locally bundled wood surfaces, bronze-metal control
states, and a nine-sliced board frame. Themes with missing visual assets fall
back to the default UI styles; other rulesets do not inherit D&D decoration.

To wire the first scene:

1. Create a scene with `SessionClient`, `TacticalProjection`, and
   `ImmersiveProjection` components.
2. Assign `StreamingAssets/session-fixture.json` as the `initialSession`
   `TextAsset`.
3. Build for WebGL from Unity's Build Settings or run the batch method:

   ```text
   unity build UnityClient --target WebGL \
     --execute-method WebGLBuild.Build \
     --output-path UnityClient/Build/WebGL
   ```
