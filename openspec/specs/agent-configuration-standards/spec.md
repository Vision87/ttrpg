# Agent Configuration Standards Specification

## Purpose

Defines workspace agent operational guardrails, token budget limits, output sanitization rules, and artifact constraints to maximize execution speed and minimize token expense.

## Requirements

### Requirement: Workspace Output and File Inspection Guardrails
The workspace configuration SHALL provide an `AGENTS.md` file enforcing output truncation on long terminal outputs, quiet test suite runs, line-bounded file inspections, and fast-model subagent delegation.

#### Scenario: Long command execution
- **WHEN** an agent executes terminal commands expected to generate verbose output (>25 lines)
- **THEN** the output SHALL be filtered or truncated using stream utilities (such as `tail -n 20`, `head`, or `grep`) to limit context consumption.

#### Scenario: Large file inspection
- **WHEN** an agent inspects a source file exceeding 100 lines
- **THEN** the inspection SHALL use bounded line ranges (`StartLine`/`EndLine`) or targeted pattern matching rather than inlining the entire file.

#### Scenario: Subagent model routing
- **WHEN** an agent delegates codebase exploration, broad searches, or verification to a subagent
- **THEN** the subagent SHALL default to high-throughput models (`flash` or `flash_lite`) unless explicitly instructed otherwise.

### Requirement: OpenSpec Planning Artifact Constraints
The OpenSpec configuration in `openspec/config.yaml` SHALL declare per-artifact length rules and per-operation guidance for planning and implementation workflows.

#### Scenario: Proposal size limit
- **WHEN** an agent drafts an OpenSpec proposal
- **THEN** the proposal SHALL be constrained to 400 words or fewer, scoped strictly to Problem, Solution, Capabilities, and Impact without speculative roadmaps.

#### Scenario: Design artifact scoping
- **WHEN** an agent drafts an OpenSpec design document
- **THEN** the design SHALL be constrained to 600 words or fewer, using plain ASCII diagrams and omitting duplicate requirement texts or implementation code blocks.

#### Scenario: Task list atomicity and verification
- **WHEN** an agent generates tasks for an OpenSpec change
- **THEN** the task list SHALL be capped at 5–8 atomic items, and every task SHALL include a concrete single-line verification command.

### Requirement: Skill Progressive Disclosure
Project skills in `.agents/skills/` SHALL maintain concise `SKILL.md` entry points, offloading auxiliary multi-store management and large static reference guides to `references/` subdirectories.

#### Scenario: Single-store workflow execution
- **WHEN** an agent runs an OpenSpec skill in a standard single-repository workspace
- **THEN** the primary `SKILL.md` instruction file SHALL execute without inlining redundant standalone-store boilerplate into the active conversation context.
