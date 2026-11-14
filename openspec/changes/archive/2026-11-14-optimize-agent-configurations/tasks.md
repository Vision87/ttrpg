# Tasks

## 1. Workspace Rules & Output Hygiene

- [x] 1.1 Author `AGENTS.md` at project root with command piping rules (`tail`/`grep`), quiet test invocation (`pytest -q`), line-range read limits, and subagent model routing; verify file exists and word count is under 300 words (`wc -w AGENTS.md`).
- [x] 1.2 Verify `AGENTS.md` compliance against Python test suite (`python3 -m pytest -q 2>&1 | tail -5`) and confirm clean test execution with minimal output.

## 2. OpenSpec Workflow Constraints

- [x] 2.1 Update `openspec/config.yaml` to declare artifact length rules (proposals under 400 words, designs under 600 words, specs with 3-5 requirements, tasks with 5-8 items) and operation guidance for apply and archive; verify YAML syntax with `python3 -c "import yaml; yaml.safe_load(open('openspec/config.yaml'))"`.

## 3. Skill Progressive Disclosure

- [x] 3.1 Extract standalone-store boilerplate from `.agents/skills/openspec-*/SKILL.md` into reference documentation; verify all skill frontmatters remain valid and core files are reduced in size (`wc -c .agents/skills/*/SKILL.md`).
- [x] 3.2 Verify OpenSpec CLI status and change workflows operate cleanly with streamlined skills (`openspec status --change optimize-agent-configurations --json`).
