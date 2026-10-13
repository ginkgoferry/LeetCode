# Repository Guide

## Scope

This repository is a personal C++20 workspace for multiple LeetCode study plans, including Hot 100.
Preserve the user's solution style and learning history; do not fill unsolved solutions unless asked.

## Source of truth

- `data/problems.json` owns stable problem metadata and catalog order. A null `path` means the problem is indexed but its local environment is not prepared.
- `data/plans/*.json` owns each study plan's source, scope, sections, and study order (the `items` array). Hot 100 must retain its 100 entries and original order. A problem may appear in multiple sections; overall progress and reviews count each problem once.
- `data/progress.json` owns status, dates, confidence, timing, and history.
- `data/workspace.json` owns the current study plan preference. Switching plans must never alter learning records.
- Plan items own `stage` (`basic` for the main route, `advanced` for explicitly optional/advanced sections) and optional difficulty `rating`. Missing ratings are unknown, never zero.
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

- Keep LeetCode-compatible code inside `class Solution`.
- Put local-only helpers and assertions behind `#ifdef LOCAL`.
- Complete `Idea`, `Complexity`, and `Pitfalls` when solving a problem.
- Use C++20 and compile with warnings enabled. Missing returns are compilation errors (`-Werror=return-type`).
- Unsolved non-void skeletons should use a safe placeholder return (`return {};`), keep TODO status, and never be treated as solved merely because they compile.
- Prefer focused assertions that cover the prompt examples plus one boundary case.

## Verification

- Documentation or record-only changes: `make check`.
- C++ solution changes: `make run ID=<problem-id>` and `make check`.
- Repository-wide workflow changes: `make verify`.
- Newly prepared problem environments: `make skeletons PLAN=<plan-id>`; unfinished assertions may fail at runtime.

Do not mark a problem complete merely because its skeleton compiles. Status changes should represent
the user's actual learning outcome.
