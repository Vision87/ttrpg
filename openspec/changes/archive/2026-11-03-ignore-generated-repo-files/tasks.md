# Tasks

## 1. Add ignore rules

- [x] 1.1 Add a root `.gitignore` for macOS metadata, Python bytecode/cache directories, pytest state, and local virtual environments; verify representative paths with `git check-ignore -v`.
- [x] 1.2 Add `UnityClient/.gitignore` for Unity `Library/`, `Logs/`, `Temp/`, `Obj/`, `UserSettings/`, and `Build/`; verify generated paths are ignored while `Assets/`, `Packages/`, `ProjectSettings/`, and source `.meta` files are not.

## 2. Untrack generated files

- [x] 2.1 Remove already tracked generated and machine-local files from the Git index without deleting local copies; verify ignored paths are absent from `git ls-files` and representative local files still exist.

## 3. Verify repository workflows

- [x] 3.1 Run `python3 -m pytest -q` after untracking Python bytecode and verify the suite passes.
- [x] 3.2 Build the WebGL client with the documented Unity command and verify the generated output includes the source StreamingAssets fixture.
- [x] 3.3 Serve the generated WebGL output with `tools/serve_webgl.py` and verify the local entrypoint responds successfully.
