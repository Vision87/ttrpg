# Design

## Context

See `proposal.md` for background and motivation. The workspace currently contains no rules files, leading to unbounded command log dumps and unconstrained file reads. Simultaneously, `openspec/config.yaml` lacks length constraints on generated planning artifacts, creating bloated documents that compound token costs during iterative `apply-change` turns.

## Goals / Non-Goals

**Goals:**
- Establish permanent, always-on workspace guardrails via a lightweight `AGENTS.md` (<300 tokens).
- Configure enforceable artifact size and task limits in `openspec/config.yaml`.
- Restructure project skills to separate core workflows from auxiliary multi-store resolution guidance using progressive disclosure.

**Non-Goals:**
- Modifying Python game domain logic, test assertions, or ruleset packages.
- Modifying Unity WebGL client scripts or rendering pipelines.
- Disabling or removing any required OpenSpec core capabilities.

## Architecture

```
+-------------------------------------------------------------------------+
|                      AGENT EXECUTION TOPOLOGY                           |
+-------------------------------------------------------------------------+
|                                                                         |
|  [Root AGENTS.md] (<300 tokens, always on)                              |
|   - Enforces: `pytest -q`, pipe >25 lines to tail/grep, bounded reads   |
|   - Directs subagents to `flash` / `flash_lite`                         |
|                                                                         |
|  [openspec/config.yaml Rules & Operations]                              |
|   - Caps proposals: max 400 words                                       |
|   - Caps designs: max 600 words                                         |
|   - Caps tasks: 5-8 atomic tasks with 1-line verification commands     |
|                                                                         |
|  [.agents/skills/ Progressive Disclosure]                               |
|   - Core SKILL.md: slim execution loop (~1k tokens)                     |
|   - references/store-guidance.md: loaded only when targeting stores     |
|                                                                         |
+-------------------------------------------------------------------------+
```

## Decisions

### Decision 1: Single root `AGENTS.md` vs multiple subdirectory rules
- **Rationale**: A single root `AGENTS.md` applies universally across both Python and Unity subdirectories without directory traversal overhead. Keeping it strictly under 300 tokens ensures it stays well within the 20,000-token aggregate rules budget.
- **Alternatives considered**:
  - *Multiple `.agents/rules/*.md` files*: Adds file system clutter and increases chance of duplicated context loading.
  - *No rules (status quo)*: Causes uncontrolled multi-thousand token command output dumps.

### Decision 2: Declarative artifact caps in `openspec/config.yaml`
- **Rationale**: OpenSpec natively parses `rules:` for each artifact type and injects them as constraints during drafting. Restricting proposals to 400 words and tasks to 5–8 items cuts downstream context re-reading costs by over 70%.
- **Alternatives considered**:
  - *Ad-hoc prompting*: Requires user to manually remind agent to be concise on every proposal, prone to forgetting.

### Decision 3: Progressive disclosure for OpenSpec skills
- **Rationale**: Extracting the 7.9 KB store-selection boilerplate into `references/store-guidance.md` trims 2,000 tokens of inactive instructions from every active skill run.
- **Alternatives considered**:
  - *Full deletion of store guidance*: Breaks compatibility if the workspace is ever converted to a multi-store setup. Moving it to `references/` preserves full capability on demand.

## Risks / Trade-offs

- **[Risk]** Overly strict output truncation (`tail -n 20`) might hide the root cause of a deep build error.
  - **Mitigation**: Agents retain the ability to inspect complete error logs by directing verbose output to `<brain>/scratch/` when debugging.
- **[Risk]** Running `openspec update --force` in the future could overwrite tailored skill files.
  - **Mitigation**: Place shared references in standardized `references/` folders that preserve core instructions while documenting the progressive pattern.
