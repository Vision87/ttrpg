# Universal RPG Board

Universal RPG Board is a multi-ruleset tabletop RPG platform. It combines Python domain and service code, ruleset content packages, and a Unity WebGL client to support character creation and local tabletop play.

## What it does

- Builds character workflows from ruleset package metadata, including choices, validation, equipment, and appearance.
- Keeps characters, ruleset packages, campaigns, sessions, and presentation assets in separate domain areas.
- Renders the client through Unity WebGL, with 2D tactical and 3D immersive projection components.
- Currently includes D&D 3.5 and Dark Heresy (1st edition) creation packages.

## Architecture

- `content/` contains ruleset packages and authored game data.
- `rules/`, `character/`, `campaign/`, and `session/` contain Python domain and rules logic.
- `clients/` and `tools/serve_webgl.py` expose the local character-creation service and serve the WebGL build.
- `UnityClient/` contains the browser client and its tactical and immersive renderers.

The local service is authoritative for character-creation requests and saved drafts; the Unity client presents the workflow and communicates with the service over HTTP.

## Dependencies

### Runtime

- Python 3.10 or newer for the local service. The service uses the Python standard library; the repository does not currently have a Python dependency manifest.
- Unity 6000.6.2f1 with WebGL Build Support to build the client. The Unity project declares JSON serialization, UnityWebRequest, and uGUI modules in `UnityClient/Packages/manifest.json`.

### Development and optional tools

- `pytest` is used by the Python test suite. Install it with `python3 -m pip install pytest`.
- `rsvg-convert` is only needed to regenerate the bundled portrait PNGs from their SVG sources with `python3 tools/generate_portraits.py`; it is not needed to run the service or client.

## Current scope

The documented play path is local solo play using the configured starter session. Online multiplayer and in-app ruleset authoring are not currently provided. Character presentation settings remain separate from mechanical character choices.

## Licensing

Original application code is licensed under MIT; see [`LICENSE`](LICENSE). This grant does not relicense third-party software, fonts, artwork, or ruleset material with separate or unresolved terms. See [`THIRD_PARTY_NOTICES.md`](THIRD_PARTY_NOTICES.md) for the repository's current license declarations and content provenance.

## Build and run locally

Build the WebGL client from the repository root:

```sh
unity build UnityClient --target WebGL --execute-method WebGLBuild.Build --output-path UnityClient/Build/WebGL
```

Then start the local service and serve the build:

```sh
python3 tools/serve_webgl.py --directory UnityClient/Build/WebGL --port 8000 --data-directory ~/.universal-rpg-board/data
```

Open [http://127.0.0.1:8000](http://127.0.0.1:8000) in a browser. The service binds to loopback. The data directory defaults to `~/.universal-rpg-board/data`; pass a different path with `--data-directory` to store drafts and characters elsewhere.

Run the Python tests from the repository root with:

```sh
python3 -m pytest -q
```

## Character creation UI

The character-creation UI includes a step summary header above the navigation bar. Its configuration is in `UnityClient/Assets/Data/StepSummaryData.asset`, and the header switches to a vertical layout on screens narrower than 600 pixels.

See [`UnityClient/README.md`](UnityClient/README.md) for detailed character-creation behavior and client setup.
