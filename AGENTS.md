# Repository Guide

## Scope

This repository is a personal C++20 workspace for the LeetCode Hot 100 study plan.
Preserve the user's solution style and learning history; do not fill unsolved solutions unless asked.

## Source of truth

- `data/problems.json` owns stable problem metadata and study order.
- `data/progress.json` owns status, dates, confidence, timing, and history.
- Review fields in `cpp/**/*.cpp`, the README progress block, and `notes/review.md` are generated views.

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
- Use C++20 and compile with warnings enabled.
- Prefer focused assertions that cover the prompt examples plus one boundary case.

## Verification

- Documentation or record-only changes: `make check`.
- C++ solution changes: `make run ID=<problem-id>` and `make check`.
- Repository-wide workflow changes: `make verify`.

Do not mark a problem complete merely because its skeleton compiles. Status changes should represent
the user's actual learning outcome.
