# Repository Guide

## Scope

This repository is a personal C++20 workspace for multiple LeetCode study plans, including Hot 100.
Preserve the user's solution style and learning history; do not fill unsolved solutions unless asked.

## Implemented capabilities and defaults

Read `docs/FEATURES.md` for the current feature inventory and code entry points, and
`docs/WORKFLOW.md` for parameters, import steps, and troubleshooting. Keep these and README
aligned with CLI and Makefile help when changing behavior. Use the generated README hub or
`make plans` for live coverage counts instead of duplicating counts in policy documents.

- `today`, `next`, `list`, and `stats` use the saved current plan; an explicit PLAN overrides one query.
- `browse` shows a concrete plan's chapter occurrences and progress; `list VIEW=order` deduplicates by first occurrence.
- `reviews` and `pending` default to all plans. Reviews accepts PLAN and DATE, not training/rating filters.
- `skeletons` defaults to hot100; `prepare` defaults to lingcha-sliding-window. Neither follows the saved current plan.
- Problem lookup, activity records, run/debug/practice, and supplemental-case creation use the shared catalog.
- New-problem recommendations prefer DOING, then TODO in filtered plan order, and require verified free metadata and a code path.
- Automatic source refresh and personalized weakness-based routing are not implemented; importing is manual.

## Source of truth

- `data/problems.json` owns stable problem metadata and catalog order. A null `path` means the problem is indexed but its local environment is not prepared.
- `data/plans/*.json` owns each study plan's source, scope, sections, and study order (the `items` array). Hot 100 must retain its 100 entries and original order. A problem may appear in multiple sections; overall progress and reviews count each problem once.
- `data/progress.json` owns status, dates, confidence, timing, and history.
- `data/workspace.json` owns the current study plan preference. Switching plans must never alter learning records.
- Plan items own `stage` (`basic` for the main route, `advanced` for explicitly optional/advanced sections) and optional difficulty `rating`. Missing ratings are unknown, never zero. Preserve explicit source scores; derived views may reuse consistent scores from other plans with provenance. Prefer explicit current-plan scores; conflicting external scores remain unknown when no current score exists.
- Official metadata owns paid/free classification. Unknown or unverified permissions must not be treated as free. Paid problems retain plan entries but are excluded from new-problem recommendations; current paid entries have no local environment.
- Legacy Hot 100 environment recipes preserve reviewed LOCAL assertions and fixture digests. Review and update the matching recipe when changing these assertions. Recovery restores TODO interfaces, never stored algorithm solutions.
- `data/environments/*.json` contains verified C++ interfaces and local example specs. `make prepare PLAN=...` only creates missing source files and never overwrites solutions.
- `data/local_cases/*.cpp` owns optional personal supplemental tests through `runExtraCases()`. Keep official assertions in environment recipes; personal tests are included only by local ID-based commands.
- Review fields in `cpp/**/*.cpp`, the README progress block, `notes/plans/*.md`, and `notes/review.md` are generated views.

After changing progress or metadata, run:

```bash
make sync
make check
```

Do not hand-edit generated progress fields without also updating their source data.

## Solution conventions

- Keep the platform-compatible interface: `class Solution` for ordinary problems, or the required design class / `Codec` for those prompts.
- Put local-only helpers and assertions behind `#ifdef LOCAL`.
- Complete `Idea`, `Complexity`, and `Pitfalls` when solving a problem.
- Use C++20 and compile with warnings enabled. Missing returns are compilation errors (`-Werror=return-type`).
- Unsolved non-void skeletons should use a safe placeholder return (`return {};`), keep TODO status, and never be treated as solved merely because they compile.
- Official examples are the baseline. Use property or identity checks where multiple outputs or borrowed nodes are valid; random legality checks do not prove a distribution. Additional cases must satisfy prompt constraints and be explicitly distinguished from official examples.
- Prefer `make extra ID=...` and `data/local_cases/*.cpp` for personal tests. Guard local helpers with LOCAL and provide `void runExtraCases()`. ID-based run/debug/practice runs official assertions first; FILE-based commands bypass supplemental cases and the ID runtime timeout.
- Keep node constructor parameter names distinct from member names for GCC and Clang compatibility.
- Generated Markdown tables must have matching header/separator cell counts and blank lines around auto-generated blocks; repair the generator, not only its generated README output.

## Verification

- Documentation or record-only changes: `make check`.
- C++ solution changes: `make practice ID=<problem-id>` (or `make run ID=<problem-id>` and `make check`).
- Repository-wide workflow changes: `make verify`.
- Newly prepared problem environments: `make skeletons PLAN=<plan-id>`; unfinished assertions may fail at runtime.

- `make unit` runs tool tests. `make test` adds runtime tests of HINT/DONE/REVIEW/STAR records. `make verify` also checks data, generated views, and actual official assertions; it does not syntax-check every TODO.
- `make check` audits actual LOCAL assertions against recipes without requiring a temporary question cache. With a complete public cache, use `python3 -m tools.audit_examples --cache-dir ...` to compare source examples as well.
- `make practice` does not auto-sync, run all unit tests, or change progress. Fix reported drift through its source data before rerunning.
- Restoring a missing environment produces a TODO skeleton and preserves historical progress; recover personal algorithms from Git or backups before runtime validation.
- CI runs verify for pushes/PRs, then syntax-checks changed problems or all prepared environments for shared changes. Missing/invalid Git bases and unknown C++ paths trigger full checks. `make ci BASE=... DRY_RUN=1` previews committed differences only. Warnings are reported separately from compile errors; a green run alone does not certify zero warnings.
- Tests that simulate learning operations must use disposable copies. Do not write fake learning records to the real progress file.

Do not mark a problem complete merely because its skeleton compiles. Status changes should represent
the user's actual learning outcome.
