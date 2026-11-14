# Workspace Agent Guidelines

## Output & Context Hygiene
- Always pipe command outputs expected to exceed 25 lines to `tail -n 20`, `head -n 20`, or `grep` to keep conversation context lean.
- Never run verbose test flags. Python tests: run `python3 -m pytest -q`. Filter by file when applicable.
- For files over 100 lines, use targeted `read_file` with `StartLine`/`EndLine` or grep; avoid reading whole files into context.
- Store large temporary artifacts or test output files in `<brain>/scratch/`.

## Code & Stack Invariants
- Python domain is authoritative for game rules & character state; Unity WebGL client is purely presentation.
- Preserve existing docstrings, licenses, and comments unrelated to code changes.
- Unity scripts live in `UnityClient/Assets/Scripts/`. Always preserve corresponding `.meta` files.

## Subagent Delegation
- For broad codebase searches, directory surveys, or multi-file research, invoke subagents using `Model: 'flash'` or `'flash_lite'` to avoid polluting parent context.
