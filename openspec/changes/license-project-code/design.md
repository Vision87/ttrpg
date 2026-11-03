# Design

## Context

See `proposal.md` for motivation and `specs/repository-licensing/spec.md` for the required licensing boundary. The repository has no root license. Current metadata marks bundled portrait artwork as CC0, includes SIL Open Font License notices for fonts, declares D&D 3.5 SRD-derived data under the Open Game License, and describes Dark Heresy equipment examples as provisional with external source references but no explicit license.

## Goals / Non-Goals

**Goals:**

- Make a root MIT license apply only to original application code.
- Point readers to separate notices for third-party software, fonts, artwork, and ruleset material.
- Record known license declarations and clearly flag content whose redistribution terms are not verified.

**Non-Goals:**

- Re-license third-party material or replace its original notices.
- Assert that Dark Heresy material is redistributable or resolve rights questions that cannot be established from repository metadata.
- Change game behavior, package contents, or dependencies.

## Decisions

- **Use MIT for original project code as the proposed default.** It is a simple permissive choice consistent with the user's stated uncertainty and the recommendation discussed during exploration. Apache-2.0 remains an alternative if an explicit patent grant is desired; GPL is a better fit only if redistributed derivatives must remain open.
- **Make scope explicit next to the standard license text.** The root `LICENSE` and README will state that the grant covers original application code only and does not override separately licensed content.
- **Create a focused third-party notices document.** Record the existing font OFL notices and portrait CC0 declarations; describe the D&D package's OGL declaration as requiring accurate source/notice review; identify the Dark Heresy package's redistribution status as unresolved. Retain the source references and existing package-level metadata.
- **Do not infer a copyright holder.** Confirm the appropriate copyright notice name and year with the project maintainer before writing the root license file.

## Risks / Trade-offs

- [Readers may interpret a root MIT file as covering every repository file] -> Repeat the code-only scope in the README and link a separate third-party notices document.
- [Existing ruleset metadata may not establish redistribution rights] -> Preserve the distinction between declared source/license information and verified permission; do not mark unresolved material as MIT.
- [Notices may become stale as packages or assets change] -> Keep references to the source files and licenses that already carry package- or asset-level metadata.
- [Incorrect copyright attribution could be published] -> Require maintainer confirmation before inserting the copyright line.

## Migration Plan

No runtime migration is required. Add the license and notices documents, update the README, and validate that the notice links and scope statements agree. If the proposed MIT choice is later rejected, replace the planning decision before creating or publishing the license file.

## Open Questions

- Which copyright holder name and year should appear in the root MIT license? Confirm with the project maintainer before implementation.
