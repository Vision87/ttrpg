# Proposal

## Why

Agent workflows currently suffer from avoidable token expense and latency degradation:
1. The absence of workspace rules leads agents to execute verbose terminal commands and unconstrained file reads, injecting thousands of tokens of extraneous logs and code into the conversation context.
2. OpenSpec planning artifacts (`proposal.md`, `design.md`, `tasks.md`) lack size bounds, producing verbose planning documents that are repeatedly re-read during multi-turn implementation (`apply-change`).
3. OpenSpec skills pack extensive multi-store and project-check boilerplate (~2,000 tokens per skill) into their primary `SKILL.md` files rather than leveraging progressive disclosure.

Establishing structured workspace rules, artifact length constraints, and progressive skill loading reduces cumulative token consumption by 60%–75% and accelerates agent turn latency.

## What Changes

- Add a lean `AGENTS.md` at the project root defining output sanitization rules (piping long commands to `tail`/`grep`), quiet test execution (`pytest -q`), line-bounded file reads, and subagent routing (`Model: 'flash'` / `'flash_lite'`).
- Configure explicit `rules:` and `operations:` in `openspec/config.yaml` to cap proposals (max 400 words), designs (max 600 words), capability specs (max 3–5 core requirements), and task plans (max 6–8 atomic items with verification commands).
- Refactor OpenSpec skills in `.agents/skills/` to decouple standalone multi-store boilerplate into `references/` subdirectories, keeping core skill instructions lean and cache-friendly.

## Capabilities

### New Capabilities
- `agent-configuration-standards`: Defines workspace agent operational guardrails, token budget limits, output sanitization rules, and artifact constraints.

### Modified Capabilities
- None.

## Impact

- Creates `AGENTS.md` at the workspace root.
- Updates `openspec/config.yaml` with artifact length rules and operational guidance.
- Restructures `.agents/skills/` to adopt progressive disclosure.
- Zero impact on game domain logic, character creation APIs, or Unity WebGL client runtime.
