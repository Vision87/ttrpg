# Tasks

## 1. License and notices

- [x] 1.1 Confirm the copyright holder and year with the project maintainer, then add a root MIT `LICENSE` scoped to original application code only; verify the notice and scope statement are present.
- [x] 1.2 Add `THIRD_PARTY_NOTICES.md` documenting the existing font OFL notices and portrait CC0 declarations, the D&D package's declared OGL basis, and the unresolved Dark Heresy redistribution terms; verify source references are retained and no unresolved content is described as MIT-licensed.
- [x] 1.3 Update `README.md` to explain the code-only license scope and link to `THIRD_PARTY_NOTICES.md`; verify both local links resolve and the scope agrees with `LICENSE`.

## 2. Validation

- [x] 2.1 Review the license and notices against the package and asset metadata, run `openspec validate license-project-code`, and run `git diff --check`; confirm no runtime files or package dependencies changed.
