#!/usr/bin/env python3
"""Local workflow helper for this LeetCode Hot 100 repository.

The JSON files under ``data/`` are the source of truth.  This tool keeps the
solution headers, README progress table, and review queue in sync with them.
It intentionally uses only the Python standard library.
"""

from __future__ import annotations

import argparse
import json
import os
import random
import re
import shutil
import subprocess
import sys
from collections import Counter, defaultdict
from datetime import date, datetime, timedelta
from pathlib import Path
from typing import Any, Iterable


ROOT = Path(__file__).resolve().parents[1]
CATALOG_PATH = ROOT / "data" / "problems.json"
PROGRESS_PATH = ROOT / "data" / "progress.json"
README_PATH = ROOT / "README.md"
REVIEW_PATH = ROOT / "notes" / "review.md"

README_START = "<!-- AUTO_PROGRESS:START -->"
README_END = "<!-- AUTO_PROGRESS:END -->"

STATUSES = ("TODO", "DOING", "HINT", "DONE", "REVIEW", "STAR")
FINISHED_STATUSES = {"HINT", "DONE", "REVIEW", "STAR"}
STATUS_LABELS = {
    "TODO": "未开始",
    "DOING": "进行中",
    "HINT": "借助提示完成",
    "DONE": "独立完成",
    "REVIEW": "需要复习",
    "STAR": "重点反复复习",
}
STATUS_ICONS = {
    "TODO": "⬜",
    "DOING": "🟦",
    "HINT": "🟨",
    "DONE": "✅",
    "REVIEW": "🔁",
    "STAR": "⭐",
}
REVIEW_INTERVALS = {1: 1, 2: 3, 3: 7, 4: 14, 5: 30}


class TrackerError(RuntimeError):
    """A user-facing tracker error."""


def read_text(path: Path) -> str:
    return path.read_text(encoding="utf-8")


def write_text(path: Path, content: str) -> bool:
    """Atomically write text and return whether the file changed."""
    if path.exists() and read_text(path) == content:
        return False
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_name(f".{path.name}.tmp")
    temporary.write_text(content, encoding="utf-8")
    temporary.replace(path)
    return True


def load_json(path: Path) -> Any:
    try:
        return json.loads(read_text(path))
    except FileNotFoundError as exc:
        raise TrackerError(
            f"缺少 {path.relative_to(ROOT)}，请确认 data/ 已完整拉取"
        ) from exc
    except json.JSONDecodeError as exc:
        raise TrackerError(f"{path.relative_to(ROOT)} 不是合法 JSON：{exc}") from exc


def save_json(path: Path, value: Any) -> bool:
    return write_text(path, json.dumps(value, ensure_ascii=False, indent=2) + "\n")


def load_state() -> tuple[list[dict[str, Any]], dict[str, Any]]:
    catalog = load_json(CATALOG_PATH)
    progress = load_json(PROGRESS_PATH)
    if not isinstance(catalog, list):
        raise TrackerError("data/problems.json 顶层必须是数组")
    if not isinstance(progress, dict) or not isinstance(progress.get("problems"), dict):
        raise TrackerError("data/progress.json 缺少 problems 对象")
    return catalog, progress


def today_iso() -> str:
    return date.today().isoformat()


def parse_iso(value: str, field: str = "日期") -> str:
    try:
        return date.fromisoformat(value).isoformat()
    except ValueError as exc:
        raise TrackerError(f"{field}必须使用 YYYY-MM-DD 格式：{value}") from exc


def normalize_status(value: str) -> str:
    status = value.upper()
    if status not in STATUSES:
        raise argparse.ArgumentTypeError(f"状态必须是：{', '.join(STATUSES)}")
    return status


def empty_record() -> dict[str, Any]:
    return {
        "status": "TODO",
        "sessions": 0,
        "reviews": 0,
        "confidence": None,
        "first_pass": None,
        "last_attempt": None,
        "last_review": None,
        "next_review": None,
        "total_minutes": 0,
        "history": [],
    }


def problem_index(catalog: Iterable[dict[str, Any]]) -> dict[str, dict[str, Any]]:
    return {str(problem["id"]): problem for problem in catalog}


def get_record(progress: dict[str, Any], problem_id: str) -> dict[str, Any]:
    records = progress["problems"]
    if problem_id not in records:
        records[problem_id] = empty_record()
    return records[problem_id]


def matches_query(problem: dict[str, Any], query: str) -> bool:
    needle = query.casefold().strip()
    problem_id = str(problem["id"])
    haystacks = (
        problem_id,
        f"{int(problem_id):03d}",
        problem["title"],
        problem["cn_title"],
        problem["path"],
    )
    return any(needle in str(value).casefold() for value in haystacks)


def resolve_problem(catalog: list[dict[str, Any]], query: str) -> dict[str, Any]:
    normalized = query.lstrip("0") or "0"
    exact = [problem for problem in catalog if str(problem["id"]) == normalized]
    if exact:
        return exact[0]
    matches = [problem for problem in catalog if matches_query(problem, query)]
    if not matches:
        raise TrackerError(f"没有找到题目：{query}")
    if len(matches) > 1:
        preview = "、".join(f"{p['id']} {p['cn_title']}" for p in matches[:8])
        raise TrackerError(f"匹配到多道题，请输入更精确的编号或名称：{preview}")
    return matches[0]


def metadata_from_solution(path: Path) -> dict[str, str]:
    text = read_text(path)
    fields: dict[str, str] = {}
    for key in ("Problem", "Link", "Chapter", "Difficulty"):
        match = re.search(
            rf"^ \* {re.escape(key)}:[ \t]*(.*?)[ \t]*$", text, re.MULTILINE
        )
        if match:
            fields[key.lower()] = match.group(1)
    status_match = re.search(
        r"^ \* - Status:[ \t]*(.*?)[ \t]*$", text, re.MULTILINE
    )
    if status_match and status_match.group(1) in STATUSES:
        fields["status"] = status_match.group(1)
    first_match = re.search(
        r"^ \* - First pass:[ \t]*(.*?)[ \t]*$", text, re.MULTILINE
    )
    if first_match and first_match.group(1):
        fields["first_pass"] = first_match.group(1)
    return fields


def status_text(status: str) -> str:
    return f"{STATUS_ICONS[status]} {status}"


def progress_counts(catalog: list[dict[str, Any]], progress: dict[str, Any]) -> Counter[str]:
    return Counter(
        get_record(progress, str(problem["id"]))["status"] for problem in catalog
    )


def finished_count(counts: Counter[str]) -> int:
    return sum(counts[status] for status in FINISHED_STATUSES)


def report_date(progress: dict[str, Any]) -> str:
    """Use a persisted date so generated files do not drift merely as time passes."""
    return progress.get("updated_at") or today_iso()


def due_problems(
    catalog: list[dict[str, Any]], progress: dict[str, Any], on_date: str | None = None
) -> list[dict[str, Any]]:
    reference = on_date or today_iso()
    due: list[dict[str, Any]] = []
    for problem in catalog:
        record = get_record(progress, str(problem["id"]))
        status = record["status"]
        next_review = record.get("next_review")
        needs_unscheduled_review = status in FINISHED_STATUSES and not next_review
        if status in FINISHED_STATUSES and (
            needs_unscheduled_review or (next_review and next_review <= reference)
        ):
            due.append(problem)
    return sorted(
        due,
        key=lambda problem: (
            get_record(progress, str(problem["id"])).get("next_review") or "0000-00-00",
            problem["order"],
        ),
    )


def upcoming_reviews(
    catalog: list[dict[str, Any]], progress: dict[str, Any], on_date: str | None = None
) -> list[dict[str, Any]]:
    reference = on_date or today_iso()
    result = []
    for problem in catalog:
        record = get_record(progress, str(problem["id"]))
        next_review = record.get("next_review")
        if next_review and next_review > reference:
            result.append(problem)
    return sorted(
        result,
        key=lambda problem: (
            get_record(progress, str(problem["id"]))["next_review"],
            problem["order"],
        ),
    )


def filter_problems(
    catalog: list[dict[str, Any]],
    progress: dict[str, Any],
    *,
    statuses: set[str] | None = None,
    chapter: str | None = None,
    difficulty: str | None = None,
    query: str | None = None,
) -> list[dict[str, Any]]:
    result = []
    for problem in catalog:
        record = get_record(progress, str(problem["id"]))
        if statuses and record["status"] not in statuses:
            continue
        if chapter and chapter.casefold() not in problem["chapter"].casefold():
            continue
        if difficulty and problem["difficulty"] != difficulty.upper():
            continue
        if query and not matches_query(problem, query):
            continue
        result.append(problem)
    return result


def display_problem(problem: dict[str, Any], record: dict[str, Any]) -> None:
    confidence = f"{record['confidence']}/5" if record.get("confidence") else "-"
    print(f"{problem['id']:>4}  {problem['cn_title']} / {problem['title']}")
    print(
        f"      {problem['chapter']} · {problem['difficulty']} · "
        f"{status_text(record['status'])} · 信心 {confidence}"
    )
    print(f"      代码：{problem['path']}")
    print(f"      题目：{problem['url']}")
    if record.get("next_review"):
        print(f"      下次复习：{record['next_review']}")


def command_stats(_: argparse.Namespace) -> None:
    catalog, progress = load_state()
    counts = progress_counts(catalog, progress)
    completed = finished_count(counts)
    percentage = completed / len(catalog) * 100 if catalog else 0
    print(f"总进度：{completed}/{len(catalog)} ({percentage:.1f}%)")
    print("  " + "  ".join(f"{status} {counts[status]}" for status in STATUSES))
    print(f"今日到期复习：{len(due_problems(catalog, progress))}")
    print()
    by_chapter: dict[str, list[int]] = defaultdict(lambda: [0, 0])
    for problem in catalog:
        current = by_chapter[problem["chapter"]]
        current[1] += 1
        if get_record(progress, str(problem["id"]))["status"] in FINISHED_STATUSES:
            current[0] += 1
    width = max(len(chapter) for chapter in by_chapter)
    for chapter, (done, total) in by_chapter.items():
        print(f"{chapter:<{width}}  {done:>2}/{total:<2}")


def choose_next(
    catalog: list[dict[str, Any]],
    progress: dict[str, Any],
    chapter: str | None,
    difficulty: str | None,
    random_choice: bool,
) -> dict[str, Any] | None:
    candidates = filter_problems(
        catalog,
        progress,
        statuses={"DOING", "TODO"},
        chapter=chapter,
        difficulty=difficulty,
    )
    if not candidates:
        return None
    doing = [
        problem
        for problem in candidates
        if get_record(progress, str(problem["id"]))["status"] == "DOING"
    ]
    pool = doing or candidates
    return random.choice(pool) if random_choice else pool[0]


def command_next(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    problem = choose_next(
        catalog, progress, args.chapter, args.difficulty, args.random
    )
    if problem is None:
        raise TrackerError("当前筛选条件下没有未完成题目")
    display_problem(problem, get_record(progress, str(problem["id"])))
    print(f"\n开始记录：make start ID={problem['id']}")


def command_today(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    due = due_problems(catalog, progress)
    print(f"今天 · {today_iso()}")
    if due:
        print(f"\n优先复习（到期 {len(due)} 道）：")
        for problem in due[: args.limit]:
            record = get_record(progress, str(problem["id"]))
            print(
                f"  {problem['id']:>4}  {problem['cn_title']:<20} "
                f"{status_text(record['status'])}  到期 {record.get('next_review') or '未排期'}"
            )
        print(f"  复习后：make reviewed ID={due[0]['id']} CONFIDENCE=3")
    else:
        print("\n没有到期复习，适合推进新题。")
    problem = choose_next(catalog, progress, args.chapter, args.difficulty, False)
    if problem:
        print("\n建议新题：")
        display_problem(problem, get_record(progress, str(problem["id"])))


def command_list(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    statuses = set(args.status) if args.status else None
    problems = filter_problems(
        catalog,
        progress,
        statuses=statuses,
        chapter=args.chapter,
        difficulty=args.difficulty,
        query=args.query,
    )
    if not problems:
        print("没有匹配的题目。")
        return
    for problem in problems:
        record = get_record(progress, str(problem["id"]))
        next_review = record.get("next_review") or "-"
        print(
            f"{problem['id']:>4}  {problem['cn_title']:<22} "
            f"{problem['chapter']:<8} {problem['difficulty']:<6} "
            f"{status_text(record['status']):<10} 复习 {next_review}"
        )
    print(f"\n共 {len(problems)} 道。")


def command_show(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    record = get_record(progress, str(problem["id"]))
    display_problem(problem, record)
    print(
        f"      学习次数：{record['sessions']} · 复习次数：{record['reviews']} · "
        f"累计 {record['total_minutes']} 分钟"
    )
    if record["history"]:
        print("\n最近记录：")
        for event in record["history"][-args.limit :][::-1]:
            details = [event["type"], event.get("status", "")]
            if event.get("confidence"):
                details.append(f"信心 {event['confidence']}/5")
            if event.get("minutes"):
                details.append(f"{event['minutes']} 分钟")
            if event.get("note"):
                details.append(event["note"])
            print(f"  {event['date']}  " + " · ".join(item for item in details if item))


def schedule_review(record: dict[str, Any], activity_date: str, confidence: int) -> None:
    interval = REVIEW_INTERVALS[confidence]
    record["next_review"] = (
        date.fromisoformat(activity_date) + timedelta(days=interval)
    ).isoformat()


def add_history(
    record: dict[str, Any],
    *,
    activity_type: str,
    activity_date: str,
    status: str | None,
    confidence: int | None,
    minutes: int,
    note: str | None,
) -> None:
    event: dict[str, Any] = {"date": activity_date, "type": activity_type}
    if status:
        event["status"] = status
    if confidence is not None:
        event["confidence"] = confidence
    if minutes:
        event["minutes"] = minutes
    if note:
        event["note"] = note.strip()
    record["history"].append(event)


def validate_activity_args(confidence: int | None, minutes: int) -> None:
    if confidence is not None and confidence not in REVIEW_INTERVALS:
        raise TrackerError("信心分必须在 1 到 5 之间")
    if minutes < 0:
        raise TrackerError("用时不能是负数")


def persist_activity(
    catalog: list[dict[str, Any]],
    progress: dict[str, Any],
    problem: dict[str, Any],
    record: dict[str, Any],
) -> None:
    progress["updated_at"] = today_iso()
    save_json(PROGRESS_PATH, progress)
    changed = sync_project(catalog, progress, write=True)
    print(f"已记录 {problem['id']} {problem['cn_title']}，并同步 {changed} 个文件。")
    display_problem(problem, record)


def command_start(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    record = get_record(progress, str(problem["id"]))
    activity_date = parse_iso(args.date)
    if record["status"] == "TODO":
        record["status"] = "DOING"
    record["last_attempt"] = activity_date
    add_history(
        record,
        activity_type="开始",
        activity_date=activity_date,
        status=record["status"],
        confidence=None,
        minutes=0,
        note=args.note,
    )
    persist_activity(catalog, progress, problem, record)


def command_record(args: argparse.Namespace) -> None:
    validate_activity_args(args.confidence, args.minutes)
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    record = get_record(progress, str(problem["id"]))
    activity_date = parse_iso(args.date)
    record["status"] = args.status
    record["sessions"] += 1
    record["last_attempt"] = activity_date
    record["total_minutes"] += args.minutes
    effective_confidence = args.confidence
    if args.status in FINISHED_STATUSES:
        effective_confidence = effective_confidence or 3
        record["confidence"] = effective_confidence
        record["first_pass"] = record["first_pass"] or activity_date
        schedule_review(record, activity_date, effective_confidence)
    elif args.confidence is not None:
        record["confidence"] = args.confidence
    elif args.status == "TODO":
        record["next_review"] = None
    add_history(
        record,
        activity_type="刷题",
        activity_date=activity_date,
        status=args.status,
        confidence=effective_confidence,
        minutes=args.minutes,
        note=args.note,
    )
    persist_activity(catalog, progress, problem, record)


def command_reviewed(args: argparse.Namespace) -> None:
    validate_activity_args(args.confidence, args.minutes)
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    record = get_record(progress, str(problem["id"]))
    if record["status"] in {"TODO", "DOING"} and args.status is None:
        raise TrackerError("未完成题不能直接记复习；请先 record，或通过 --status 指定完成状态")
    activity_date = parse_iso(args.date)
    status = args.status or record["status"]
    if status not in FINISHED_STATUSES:
        raise TrackerError("复习后的状态必须是 HINT、DONE、REVIEW 或 STAR")
    record["status"] = status
    record["sessions"] += 1
    record["reviews"] += 1
    record["confidence"] = args.confidence
    record["first_pass"] = record["first_pass"] or activity_date
    record["last_attempt"] = activity_date
    record["last_review"] = activity_date
    record["total_minutes"] += args.minutes
    schedule_review(record, activity_date, args.confidence)
    add_history(
        record,
        activity_type="复习",
        activity_date=activity_date,
        status=status,
        confidence=args.confidence,
        minutes=args.minutes,
        note=args.note,
    )
    persist_activity(catalog, progress, problem, record)


def command_note(args: argparse.Namespace) -> None:
    if not args.text.strip():
        raise TrackerError("笔记内容不能为空")
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    record = get_record(progress, str(problem["id"]))
    activity_date = parse_iso(args.date)
    add_history(
        record,
        activity_type="笔记",
        activity_date=activity_date,
        status=record["status"],
        confidence=None,
        minutes=0,
        note=args.text,
    )
    persist_activity(catalog, progress, problem, record)


def command_reviews(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    due = due_problems(catalog, progress, args.date)
    if not due:
        print(f"{args.date} 没有到期复习。")
        return
    for problem in due:
        record = get_record(progress, str(problem["id"]))
        print(
            f"{problem['id']:>4}  {problem['cn_title']:<22} "
            f"{status_text(record['status']):<10} "
            f"到期 {record.get('next_review') or '未排期'}"
        )
    print(f"\n共 {len(due)} 道待复习。")


def command_run(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    compiler = os.environ.get("CXX") or shutil.which("clang++") or shutil.which("g++")
    if not compiler:
        raise TrackerError("没有找到 C++ 编译器（clang++ 或 g++）")
    build_dir = ROOT / "build" / "problems"
    build_dir.mkdir(parents=True, exist_ok=True)
    suffix = "_debug" if args.debug else ""
    target = build_dir / f"{int(problem['id']):03d}{suffix}"
    flags = [
        "-std=c++20",
        "-Wall",
        "-Wextra",
        "-Wshadow",
        "-DLOCAL",
        f"-I{ROOT}",
    ]
    if args.debug:
        flags.extend(("-O0", "-g", "-fsanitize=address,undefined"))
    else:
        flags.append("-O2")
    command = [
        compiler,
        *flags,
        str(ROOT / problem["path"]),
        "-o",
        str(target),
    ]
    print(
        f"编译 {problem['id']} {problem['cn_title']}（{'调试' if args.debug else '普通'}模式）",
        flush=True,
    )
    compile_result = subprocess.run(command, cwd=ROOT, check=False)
    if compile_result.returncode:
        raise TrackerError(f"{problem['id']} 编译失败")
    run_result = subprocess.run([str(target)], cwd=ROOT, check=False)
    if run_result.returncode:
        raise TrackerError(f"{problem['id']} 本地测试失败，退出码 {run_result.returncode}")


def solution_header(text: str, record: dict[str, Any]) -> str:
    value = lambda field: record.get(field) or ""
    confidence = f"{record['confidence']} / 5" if record.get("confidence") else ""
    line = lambda label, content: (
        f" * - {label}: {content}" if content != "" else f" * - {label}:"
    )
    replacement = "\n".join(
        (
            line("First pass", value("first_pass")),
            line("Last attempt", value("last_attempt")),
            line("Last review", value("last_review")),
            line("Next review", value("next_review")),
            line("Confidence", confidence),
            line("Sessions", record.get("sessions", 0)),
            line("Status", record["status"]),
        )
    )
    pattern = re.compile(
        r"^ \* - First pass:.*\n"
        r"(?:^ \* - (?:Last attempt|Last review|Next review|Confidence|Sessions):.*\n)*"
        r"^ \* - Status:.*$",
        re.MULTILINE,
    )
    updated, count = pattern.subn(replacement, text, count=1)
    if count != 1:
        raise TrackerError("题解头部缺少标准 Review / First pass / Status 字段")
    return updated


def progress_bar(done: int, total: int, width: int = 20) -> str:
    filled = round(done / total * width) if total else 0
    return "█" * filled + "░" * (width - filled)


def render_progress(catalog: list[dict[str, Any]], progress: dict[str, Any]) -> str:
    counts = progress_counts(catalog, progress)
    completed = finished_count(counts)
    total = len(catalog)
    percentage = completed / total * 100 if total else 0
    lines = [
        f"**总进度：{completed} / {total}（{percentage:.1f}%）**",
        "",
        f"`{progress_bar(completed, total)}`",
        "",
        " · ".join(
            f"{STATUS_ICONS[status]} {status} {counts[status]}" for status in STATUSES
        ),
        "",
        f"截至 {report_date(progress)}，有 "
        f"**{len(due_problems(catalog, progress, report_date(progress)))}** 道题到期复习。",
        "",
        "### 分专题进度",
        "",
        "| 专题 | 已完成 | 总数 | 进度 |",
        "|---|---:|---:|---:|",
    ]
    chapters: dict[str, list[dict[str, Any]]] = defaultdict(list)
    for problem in catalog:
        chapters[problem["chapter"]].append(problem)
    for chapter, problems in chapters.items():
        done = sum(
            get_record(progress, str(problem["id"]))["status"] in FINISHED_STATUSES
            for problem in problems
        )
        lines.append(f"| {chapter} | {done} | {len(problems)} | {done / len(problems):.0%} |")
    lines.extend(
        (
            "",
            "### 完整题单",
            "",
            "| # | 题目 | 专题 | 难度 | 状态 | 最近学习 | 下次复习 | 代码 |",
            "|---:|---|---|---|---|---|---|---|",
        )
    )
    for problem in catalog:
        record = get_record(progress, str(problem["id"]))
        lines.append(
            f"| {problem['id']} | [{problem['cn_title']}]({problem['url']}) "
            f"| {problem['chapter']} | {problem['difficulty']} "
            f"| {status_text(record['status'])} "
            f"| {record.get('last_attempt') or '-'} "
            f"| {record.get('next_review') or '-'} "
            f"| [C++]({problem['path']}) |"
        )
    return "\n".join(lines)


def replace_generated_readme(readme: str, generated: str) -> str:
    if README_START not in readme or README_END not in readme:
        raise TrackerError("README.md 缺少 AUTO_PROGRESS 标记")
    before, rest = readme.split(README_START, 1)
    _, after = rest.split(README_END, 1)
    return f"{before}{README_START}\n{generated}\n{README_END}{after}"


def review_row(problem: dict[str, Any], record: dict[str, Any]) -> str:
    confidence = f"{record['confidence']}/5" if record.get("confidence") else "-"
    return (
        f"| {problem['id']} | [{problem['cn_title']}](../{problem['path']}) "
        f"| {status_text(record['status'])} | {confidence} "
        f"| {record.get('last_review') or '-'} | {record.get('next_review') or '未排期'} |"
    )


def render_review(catalog: list[dict[str, Any]], progress: dict[str, Any]) -> str:
    reference = report_date(progress)
    due = due_problems(catalog, progress, reference)
    upcoming = upcoming_reviews(catalog, progress, reference)
    lines = [
        "# 复习队列",
        "",
        "> 此文件由 `python3 tools/leetcode.py sync` 自动生成，请通过 `record`、`reviewed`、`note` 命令更新记录。",
        "",
        f"数据更新时间：{reference}",
        "",
        "## 已到期",
        "",
    ]
    header = [
        "| # | 题目 | 状态 | 信心 | 上次复习 | 下次复习 |",
        "|---:|---|---|---:|---|---|",
    ]
    if due:
        lines.extend(header)
        lines.extend(
            review_row(problem, get_record(progress, str(problem["id"])))
            for problem in due
        )
    else:
        lines.append("暂无到期题目。")
    lines.extend(("", "## 即将复习", ""))
    if upcoming:
        lines.extend(header)
        lines.extend(
            review_row(problem, get_record(progress, str(problem["id"])))
            for problem in upcoming[:30]
        )
    else:
        lines.append("暂无已排期题目。")

    events: list[tuple[str, int, dict[str, Any], dict[str, Any]]] = []
    for problem in catalog:
        record = get_record(progress, str(problem["id"]))
        for index, event in enumerate(record["history"]):
            events.append((event["date"], index, problem, event))
    events.sort(key=lambda item: (item[0], item[1]), reverse=True)
    lines.extend(("", "## 最近记录", ""))
    if not events:
        lines.append("还没有通过工具写入的学习记录。")
    else:
        lines.extend(
            (
                "| 日期 | 题目 | 类型 | 状态 | 信心 | 用时 | 备注 |",
                "|---|---|---|---|---:|---:|---|",
            )
        )
        for _, _, problem, event in events[:30]:
            note = str(event.get("note", "-")).replace("|", "\\|").replace("\n", " ")
            lines.append(
                f"| {event['date']} | {problem['id']} {problem['cn_title']} "
                f"| {event['type']} | {event.get('status', '-')} "
                f"| {event.get('confidence', '-')} "
                f"| {event.get('minutes', '-')} | {note} |"
            )
    return "\n".join(lines) + "\n"


def expected_project_files(
    catalog: list[dict[str, Any]], progress: dict[str, Any]
) -> dict[Path, str]:
    expected: dict[Path, str] = {}
    for problem in catalog:
        path = ROOT / problem["path"]
        record = get_record(progress, str(problem["id"]))
        try:
            expected[path] = solution_header(read_text(path), record)
        except TrackerError as exc:
            raise TrackerError(f"{problem['path']}：{exc}") from exc
    expected[README_PATH] = replace_generated_readme(
        read_text(README_PATH), render_progress(catalog, progress)
    )
    expected[REVIEW_PATH] = render_review(catalog, progress)
    return expected


def sync_project(
    catalog: list[dict[str, Any]], progress: dict[str, Any], *, write: bool
) -> int:
    expected = expected_project_files(catalog, progress)
    changed = 0
    for path, content in expected.items():
        if not path.exists() or read_text(path) != content:
            changed += 1
            if write:
                write_text(path, content)
                print(f"同步：{path.relative_to(ROOT)}")
    return changed


def command_sync(_: argparse.Namespace) -> None:
    catalog, progress = load_state()
    changed = sync_project(catalog, progress, write=True)
    if changed:
        print(f"同步完成，共更新 {changed} 个文件。")
    else:
        print("所有题解头部和文档已经同步。")


def validate_state(
    catalog: list[dict[str, Any]], progress: dict[str, Any]
) -> list[str]:
    errors: list[str] = []
    if progress.get("version") != 1:
        errors.append(f"不支持的进度数据版本：{progress.get('version')}")
    updated_at = progress.get("updated_at")
    if not updated_at:
        errors.append("data/progress.json 缺少 updated_at")
    else:
        try:
            date.fromisoformat(updated_at)
        except (TypeError, ValueError):
            errors.append(f"data/progress.json 的 updated_at 日期非法：{updated_at}")
    if len(catalog) != 100:
        errors.append(f"题目目录应为 100 道，当前为 {len(catalog)} 道")
    ids = [str(problem.get("id")) for problem in catalog]
    paths = [problem.get("path") for problem in catalog]
    orders = [problem.get("order") for problem in catalog]
    if len(ids) != len(set(ids)):
        errors.append("data/problems.json 存在重复题号")
    if len(paths) != len(set(paths)):
        errors.append("data/problems.json 存在重复路径")
    if orders != list(range(1, len(catalog) + 1)):
        errors.append("data/problems.json 的 order 必须从 1 连续递增")
    catalog_ids = set(ids)
    record_ids = set(progress["problems"])
    if catalog_ids != record_ids:
        errors.append(
            f"题目目录与进度记录题号不一致（缺少 {sorted(catalog_ids - record_ids)}，"
            f"多出 {sorted(record_ids - catalog_ids)}）"
        )

    catalog_paths = {str(path) for path in paths}
    source_paths = {
        path.relative_to(ROOT).as_posix() for path in (ROOT / "cpp").rglob("*.cpp")
    }
    missing_sources = sorted(catalog_paths - source_paths)
    extra_sources = sorted(source_paths - catalog_paths)
    if missing_sources:
        errors.append(f"目录中的题解文件不存在：{', '.join(missing_sources)}")
    if extra_sources:
        errors.append(f"有未收录的题解文件：{', '.join(extra_sources)}")

    for problem in catalog:
        problem_id = str(problem["id"])
        path = ROOT / problem["path"]
        if not path.exists():
            continue
        metadata = metadata_from_solution(path)
        if metadata.get("link") != problem["url"]:
            errors.append(f"{problem['path']} 的 Link 与题目目录不一致")
        expected_problem = (
            f"{problem['id']}. {problem['cn_title']} / {problem['title']}"
        )
        if metadata.get("problem") != expected_problem:
            errors.append(f"{problem['path']} 的 Problem 与题目目录不一致")
        if metadata.get("chapter") != problem["chapter"]:
            errors.append(f"{problem['path']} 的 Chapter 与题目目录不一致")
        if metadata.get("difficulty", "").upper() != problem["difficulty"]:
            errors.append(f"{problem['path']} 的 Difficulty 与题目目录不一致")
        record = get_record(progress, problem_id)
        if record.get("status") not in STATUSES:
            errors.append(f"{problem_id} 的状态非法：{record.get('status')}")
        confidence = record.get("confidence")
        if confidence is not None and confidence not in REVIEW_INTERVALS:
            errors.append(f"{problem_id} 的信心分必须在 1 到 5 之间")
        for field in ("sessions", "reviews", "total_minutes"):
            value = record.get(field)
            if not isinstance(value, int) or isinstance(value, bool) or value < 0:
                errors.append(f"{problem_id} 的 {field} 必须是非负整数")
        for field in ("first_pass", "last_attempt", "last_review", "next_review"):
            value = record.get(field)
            if value:
                try:
                    date.fromisoformat(value)
                except (TypeError, ValueError):
                    errors.append(f"{problem_id} 的 {field} 日期非法：{value}")
        if not isinstance(record.get("history"), list):
            errors.append(f"{problem_id} 的 history 必须是数组")
        else:
            for index, event in enumerate(record["history"], start=1):
                if not isinstance(event, dict):
                    errors.append(f"{problem_id} 的第 {index} 条历史必须是对象")
                    continue
                try:
                    date.fromisoformat(event.get("date", ""))
                except (TypeError, ValueError):
                    errors.append(f"{problem_id} 的第 {index} 条历史日期非法")
                if not event.get("type"):
                    errors.append(f"{problem_id} 的第 {index} 条历史缺少 type")
        if record.get("status") in FINISHED_STATUSES and not record.get("first_pass"):
            errors.append(f"{problem_id} 已完成但缺少 first_pass")

    markdown_link = re.compile(r"\[[^\]]*]\(([^)]+)\)")
    markdown_files = [
        path
        for path in ROOT.rglob("*.md")
        if ".git" not in path.parts and "build" not in path.parts
    ]
    for markdown_path in markdown_files:
        for target in markdown_link.findall(read_text(markdown_path)):
            target = target.strip().split("#", 1)[0]
            if (
                not target
                or target.startswith(("http://", "https://", "mailto:", "/"))
            ):
                continue
            local_target = (markdown_path.parent / target).resolve()
            if not local_target.exists():
                errors.append(
                    f"{markdown_path.relative_to(ROOT)} 包含失效链接：{target}"
                )
    return errors


def compile_and_run(
    catalog: list[dict[str, Any]], progress: dict[str, Any], verbose: bool
) -> int:
    compiler = os.environ.get("CXX") or shutil.which("clang++") or shutil.which("g++")
    if not compiler:
        raise TrackerError("没有找到 C++ 编译器（clang++ 或 g++）")
    build_dir = ROOT / "build" / "tests"
    build_dir.mkdir(parents=True, exist_ok=True)
    candidates = [
        problem
        for problem in catalog
        if get_record(progress, str(problem["id"]))["status"] in FINISHED_STATUSES
    ]
    if not candidates:
        print("当前没有需要编译的已完成题目。")
        return 0
    failed = 0
    for problem in candidates:
        target = build_dir / f"{int(problem['id']):03d}"
        compile_command = [
            compiler,
            "-std=c++20",
            "-Wall",
            "-Wextra",
            "-Wshadow",
            "-O2",
            "-DLOCAL",
            f"-I{ROOT}",
            str(ROOT / problem["path"]),
            "-o",
            str(target),
        ]
        compile_result = subprocess.run(
            compile_command, cwd=ROOT, text=True, capture_output=True, check=False
        )
        if compile_result.returncode:
            failed += 1
            print(f"FAIL 编译 {problem['id']} {problem['cn_title']}")
            print(compile_result.stderr.rstrip())
            continue
        run_result = subprocess.run(
            [str(target)], cwd=ROOT, text=True, capture_output=True, check=False
        )
        if run_result.returncode:
            failed += 1
            print(f"FAIL 测试 {problem['id']} {problem['cn_title']}")
            print((run_result.stdout + run_result.stderr).rstrip())
        elif verbose:
            print(f"PASS {problem['id']} {problem['cn_title']}")
    print(f"本地测试：{len(candidates) - failed}/{len(candidates)} 通过")
    return failed


def command_test(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    failures = compile_and_run(catalog, progress, args.verbose)
    if failures:
        raise TrackerError(f"有 {failures} 道已完成题目未通过本地测试")


def command_check(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    errors = validate_state(catalog, progress)
    try:
        drift = sync_project(catalog, progress, write=False)
        if drift:
            errors.append(f"有 {drift} 个文件未同步，请运行 make sync")
    except TrackerError as exc:
        errors.append(str(exc))
    if errors:
        for error in errors:
            print(f"ERROR {error}", file=sys.stderr)
        raise TrackerError(f"项目检查失败，共 {len(errors)} 个问题")
    print(f"结构与文档检查通过：{len(catalog)} 道题，数据一致。")
    if args.compile:
        failures = compile_and_run(catalog, progress, args.verbose)
        if failures:
            raise TrackerError(f"有 {failures} 道已完成题目未通过本地测试")


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description="LeetCode Hot 100 本地刷题、记录与复习工具"
    )
    subparsers = parser.add_subparsers(dest="command", required=True)

    stats = subparsers.add_parser("stats", help="查看总进度和专题进度")
    stats.set_defaults(handler=command_stats)

    today = subparsers.add_parser("today", help="查看今天的复习和新题建议")
    today.add_argument("--limit", type=int, default=5, help="最多显示几道到期题")
    today.add_argument("--chapter", help="只推荐指定专题的新题（支持部分匹配）")
    today.add_argument("--difficulty", choices=("EASY", "MEDIUM", "HARD"))
    today.set_defaults(handler=command_today)

    next_parser = subparsers.add_parser("next", help="选择下一道未完成题")
    next_parser.add_argument("--chapter", help="按专题筛选（支持部分匹配）")
    next_parser.add_argument("--difficulty", choices=("EASY", "MEDIUM", "HARD"))
    next_parser.add_argument("--random", action="store_true", help="在候选题中随机选择")
    next_parser.set_defaults(handler=command_next)

    list_parser = subparsers.add_parser("list", help="筛选并列出题目")
    list_parser.add_argument(
        "--status", type=normalize_status, action="append", help="可重复传入"
    )
    list_parser.add_argument("--chapter", help="按专题筛选（支持部分匹配）")
    list_parser.add_argument("--difficulty", choices=("EASY", "MEDIUM", "HARD"))
    list_parser.add_argument("--query", help="按题号、中英文标题或文件名搜索")
    list_parser.set_defaults(handler=command_list)

    show = subparsers.add_parser("show", help="查看一道题的记录")
    show.add_argument("problem", help="题号、标题或文件名")
    show.add_argument("--limit", type=int, default=10, help="显示最近几条记录")
    show.set_defaults(handler=command_show)

    start = subparsers.add_parser("start", help="开始一道题并标记为 DOING")
    start.add_argument("problem", help="题号、标题或文件名")
    start.add_argument("--date", default=today_iso())
    start.add_argument("--minutes", type=int, default=0)
    start.add_argument("--note")
    start.set_defaults(handler=command_start)

    record = subparsers.add_parser("record", help="记录一次刷题结果")
    record.add_argument("problem", help="题号、标题或文件名")
    record.add_argument("status", type=normalize_status)
    record.add_argument("-c", "--confidence", type=int, choices=range(1, 6))
    record.add_argument("-m", "--minutes", type=int, default=0)
    record.add_argument("-n", "--note")
    record.add_argument("--date", default=today_iso())
    record.set_defaults(handler=command_record)

    reviewed = subparsers.add_parser("reviewed", help="记录一次复习并安排下次复习")
    reviewed.add_argument("problem", help="题号、标题或文件名")
    reviewed.add_argument("-c", "--confidence", type=int, choices=range(1, 6), default=3)
    reviewed.add_argument("-m", "--minutes", type=int, default=0)
    reviewed.add_argument("-n", "--note")
    reviewed.add_argument("--status", type=normalize_status)
    reviewed.add_argument("--date", default=today_iso())
    reviewed.set_defaults(handler=command_reviewed)

    note = subparsers.add_parser("note", help="给一道题追加简短记录")
    note.add_argument("problem", help="题号、标题或文件名")
    note.add_argument("text", help="笔记内容")
    note.add_argument("--date", default=today_iso())
    note.set_defaults(handler=command_note)

    reviews = subparsers.add_parser("reviews", help="列出到期复习题")
    reviews.add_argument("--date", default=today_iso(), type=parse_iso)
    reviews.set_defaults(handler=command_reviews)

    run = subparsers.add_parser("run", help="按题号编译并运行本地断言")
    run.add_argument("problem", help="题号、标题或文件名")
    run.add_argument("--debug", action="store_true", help="启用 Address/UB Sanitizer")
    run.set_defaults(handler=command_run)

    sync = subparsers.add_parser("sync", help="同步题解头部和 Markdown 文档")
    sync.set_defaults(handler=command_sync)

    check = subparsers.add_parser("check", help="检查目录、进度和文档一致性")
    check.add_argument("--compile", action="store_true", help="同时测试已完成题目")
    check.add_argument("--verbose", action="store_true")
    check.set_defaults(handler=command_check)

    test = subparsers.add_parser("test", help="编译并运行所有已完成题目")
    test.add_argument("--verbose", action="store_true")
    test.set_defaults(handler=command_test)
    return parser


def main() -> int:
    parser = build_parser()
    args = parser.parse_args()
    try:
        args.handler(args)
    except TrackerError as exc:
        print(f"错误：{exc}", file=sys.stderr)
        return 2
    except KeyboardInterrupt:
        print("\n已取消。", file=sys.stderr)
        return 130
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
