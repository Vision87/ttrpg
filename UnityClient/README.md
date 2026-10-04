# Unity WebGL Client

This client is a Unity projection layer over the authoritative session
snapshot/event contract. It contains separate 2D tactical and 3D immersive
adapters but does not resolve rules or mutate session state.

The project targets Unity 6000.6.2f1 and is intended for a WebGL build.

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
