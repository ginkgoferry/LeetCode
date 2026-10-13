#!/usr/bin/env python3
"""Local workflow helper for this multi-plan LeetCode repository.

The JSON files under ``data/`` are the source of truth.  This tool keeps the
solution headers, README progress table, and review queue in sync with them.
It intentionally uses only the Python standard library.
"""

from __future__ import annotations

import argparse
from concurrent.futures import ThreadPoolExecutor
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
if str(ROOT) not in sys.path:
    sys.path.insert(0, str(ROOT))
CATALOG_PATH = ROOT / "data" / "problems.json"
PROGRESS_PATH = ROOT / "data" / "progress.json"
README_PATH = ROOT / "README.md"
REVIEW_PATH = ROOT / "notes" / "review.md"

README_START = "<!-- AUTO_PROGRESS:START -->"
README_END = "<!-- AUTO_PROGRESS:END -->"
PLANS_START = "<!-- AUTO_PLANS:START -->"
PLANS_END = "<!-- AUTO_PLANS:END -->"

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


def load_plans(catalog: list[dict[str, Any]]) -> dict[str, dict[str, Any]]:
    directory = ROOT / "data" / "plans"
    if not directory.exists():
        return {
            "hot100": {
                "id": "hot100",
                "name": "Hot 100",
                "items": [{"id": p["id"], "section": p["chapter"]} for p in catalog],
            }
        }
    plans = {}
    for path in sorted(directory.glob("*.json")):
        plan = load_json(path)
        if not isinstance(plan, dict) or plan.get("id") != path.stem:
            raise TrackerError(f"{path.name} 的题单 ID 必须与文件名一致")
        if not re.fullmatch(r"[a-z0-9]+(?:-[a-z0-9]+)*", plan["id"]):
            raise TrackerError(f"非法题单 ID：{plan['id']}")
        if not isinstance(plan.get("items"), list) or not plan.get("name"):
            raise TrackerError(f"{path.name} 缺少题单名称或 items 数组")
        if plan["id"] in plans:
            raise TrackerError(f"重复题单：{plan['id']}")
        plans[plan["id"]] = plan
    return plans


def rating_sources(plans: dict[str, dict[str, Any]]) -> dict[str, list[dict[str, Any]]]:
    """Read explicit source scores; never write inferred scores into plan data."""
    result: dict[str, list[dict[str, Any]]] = defaultdict(list)
    for plan in plans.values():
        for item in plan['items']:
            rating = item.get('rating')
            if type(rating) is int and rating > 0:
                source = {'rating': rating, 'plan': plan['id'], 'name': plan['name'],
                          'url': plan.get('source_url', '')}
                if source not in result[str(item['id'])]:
                    result[str(item['id'])].append(source)
    return result


def rating_label(problem: dict[str, Any]) -> str:
    rating = problem.get('rating')
    if rating is None:
        return '未标分' + ('（来源分数不一致）' if problem.get('rating_conflict') else '')
    sources = problem.get('rating_sources', [])
    names = '、'.join(dict.fromkeys(s['name'] for s in sources if s['rating'] == rating))
    return str(rating) + (f'（来源：{names}）' if names else '')


def select_plan(
    catalog: list[dict[str, Any]], plan_id: str, *, occurrences: bool = False
) -> list[dict[str, Any]]:
    if plan_id == "all":
        metadata: dict[str, list[dict[str, Any]]] = defaultdict(list)
        for identifier in load_plans(catalog):
            for problem in select_plan(catalog, identifier):
                metadata[str(problem["id"])].extend(problem["training_entries"])
        result = []
        for problem in catalog:
            entries = metadata.get(str(problem["id"]), [])
            ratings = [entry["rating"] for entry in entries if entry.get("rating")]
            distinct = set(ratings)
            effective = next(iter(distinct)) if len(distinct) == 1 else None
            result.append({**problem, "training_entries": entries,
                           "rating": effective, "rating_conflict": len(distinct) > 1,
                           "rating_sources": [source for entry in entries for source in entry.get("rating_sources", [])],
                           "global_order": problem["order"]})
        return result
    plans = load_plans(catalog)
    if plan_id not in plans:
        raise TrackerError(f"未知题单：{plan_id}，可用：{', '.join(plans)} 或 all")
    index = problem_index(catalog)
    sources = rating_sources(plans)
    selected = []
    for order, item in enumerate(plans[plan_id]["items"], 1):
        if not isinstance(item, dict) or "id" not in item or not item.get("section"):
            raise TrackerError(f"题单 {plan_id} 的第 {order} 项缺少题号或章节")
        if item.get("stage", "basic") not in ("basic", "advanced"):
            raise TrackerError(f"题单 {plan_id} 的第 {order} 项训练阶段非法")
        rating = item.get("rating")
        if rating is not None and (type(rating) is not int or rating <= 0):
            raise TrackerError(f"题单 {plan_id} 的第 {order} 项难度分必须为正整数")
        key = str(item["id"])
        if key not in index:
            raise TrackerError(f"题单 {plan_id} 引用了未收录题目 {key}")
        known = sources.get(key, [])
        distinct = {source['rating'] for source in known}
        effective = rating if rating is not None else (next(iter(distinct)) if len(distinct) == 1 else None)
        selected.append({
            **index[key], "order": order, "chapter": item["section"],
            "rating": effective, "rating_sources": known, "rating_conflict": len(distinct) > 1,
            "source_note": item.get("note", ""),
            "video_url": item.get("video_url"),
            "stage": item.get("stage", training_stage(item["section"])),
        })
    pairs = [(str(p["id"]), p["chapter"]) for p in selected]
    if len(set(pairs)) != len(pairs):
        raise TrackerError(f"题单 {plan_id} 在同一章节存在重复题号")
    if occurrences:
        return selected
    unique = {}
    for problem in selected:
        key = str(problem["id"])
        if key not in unique:
            unique[key] = {**problem, "sections": [], "section_orders": {}, "training_entries": []}
        unique[key]["sections"].append(problem["chapter"])
        unique[key]["section_orders"][problem["chapter"]] = problem["order"]
        unique[key]["training_entries"].append({
            "section": problem["chapter"], "order": problem["order"],
            "rating": problem["rating"], "rating_sources": problem.get("rating_sources", []),
            "rating_conflict": problem.get("rating_conflict", False), "stage": problem["stage"],
            "source_note": problem["source_note"],
            "video_url": problem.get("video_url"),
        })
    for problem in unique.values():
        ratings = [entry["rating"] for entry in problem["training_entries"] if entry.get("rating") is not None]
        problem["rating"] = ratings[0] if ratings else None
        for entry in problem["training_entries"]:
            if entry["rating"] is None:
                entry["rating"] = problem["rating"]
        problem["chapter"] = "；".join(problem["sections"])
    return list(unique.values())


def training_stage(section: str) -> str:
    return "advanced" if re.search(r"进阶|选做|思维[扩拓]展|相似题目", section) else "basic"


def current_plan(catalog: list[dict[str, Any]]) -> str:
    path = ROOT / "data" / "workspace.json"
    if not path.exists():
        return "hot100"
    settings = load_json(path)
    if not isinstance(settings, dict) or settings.get("version") != 1:
        raise TrackerError("data/workspace.json 的设置版本非法")
    identifier = settings.get("current_plan")
    if not isinstance(identifier, str) or identifier not in load_plans(catalog):
        raise TrackerError(f"当前题单不存在：{identifier}，请使用 make use PLAN=<题单 ID>")
    return identifier


def requested_plan(args: argparse.Namespace, catalog: list[dict[str, Any]]) -> str:
    return args.plan or current_plan(catalog)


def command_plans(_: argparse.Namespace) -> None:
    catalog, progress = load_state()
    active = current_plan(catalog)
    for identifier, plan in load_plans(catalog).items():
        selected = select_plan(catalog, identifier)
        counts = progress_counts(selected, progress)
        rated = sum(p.get("rating") is not None for p in selected)
        marker = "* 当前" if identifier == active else "       "
        print(f"{marker} {identifier} · {plan['name']}")
        print(f"        进度 {finished_count(counts)}/{len(selected)} · 已标分 {rated} · 未标分 {len(selected) - rated}")
        print(f"        {availability_summary(selected, progress)}")
    print("\n切换题单：make use PLAN=<题单 ID>；单次查询可用 PLAN=... 覆盖。")


def command_use(args: argparse.Namespace) -> None:
    catalog, _ = load_state()
    if args.plan_id not in load_plans(catalog):
        raise TrackerError(f"未知题单：{args.plan_id}，请运行 make plans")
    path = ROOT / "data" / "workspace.json"
    settings = load_json(path) if path.exists() else {"version": 1}
    if not isinstance(settings, dict) or settings.get("version") != 1:
        raise TrackerError("data/workspace.json 的设置版本非法")
    settings["current_plan"] = args.plan_id
    save_json(path, settings)
    print(f"当前题单：{args.plan_id}。make today/next/list/stats 将默认使用它。")


def code_label(problem: dict[str, Any], prefix: str = "") -> str:
    if problem.get("path"):
        return f"[C++]({prefix}{problem['path']})"
    if problem.get("metadata_verified") is False:
        return "元数据待核对"
    return "🔒 会员题" if problem.get("paid_only") else "待准备"


def is_verified_free(problem: dict[str, Any]) -> bool:
    return problem.get("metadata_verified", True) and problem.get("paid_only", False) is False


def is_verified_paid(problem: dict[str, Any]) -> bool:
    return problem.get('metadata_verified', True) and problem.get('paid_only') is True


def environment_state(problem: dict[str, Any]) -> str:
    if problem.get("metadata_verified") is False:
        return "metadata_pending"
    if problem.get("path") and (ROOT / problem["path"]).exists():
        return "prepared"
    if problem.get("paid_only"):
        return "premium"
    return problem.get("environment_status", "pending")


def availability_summary(catalog: list[dict[str, Any]], progress: dict[str, Any]) -> str:
    free = [p for p in catalog if is_verified_free(p)]
    paid = [p for p in catalog if is_verified_paid(p)]
    unknown = [p for p in catalog if not is_verified_free(p) and not is_verified_paid(p)]

    def done(problems: list[dict[str, Any]]) -> int:
        return sum(
            get_record(progress, str(p["id"]))["status"] in FINISHED_STATUSES
            for p in problems
        )
    ready = sum(environment_state(p) == 'prepared' for p in catalog)
    return (
        f"免费题进度：{done(free)}/{len(free)} · "
        f"会员题进度：{done(paid)}/{len(paid)} · 已准备代码：{ready}"
        + (f" · 权限待核对：{len(unknown)}" if unknown else "")
    )


def normalized_problem_id(value: str | int) -> str:
    text = str(value).strip()
    if text.isdigit():
        return str(int(text))
    match = re.fullmatch(r"(LCP|LCR|LCS)\s*0*(\d+)", text, re.IGNORECASE)
    if match:
        return f"{match[1].upper()} {int(match[2])}"
    match = re.fullmatch(r"面试题\s*(\d+)\.(\d+)", text)
    if match:
        return f"面试题 {int(match[1]):02d}.{int(match[2]):02d}"
    return text


def build_key(value: str | int) -> str:
    identifier = normalized_problem_id(value)
    if identifier.isdigit():
        return f"{int(identifier):03d}"
    if identifier.startswith("面试题 "):
        identifier = identifier.replace("面试题 ", "interview_")
    return identifier.lower().replace(" ", "_").replace(".", "_")


def unique_problems(catalog: list[dict[str, Any]]) -> list[dict[str, Any]]:
    return list({str(p["id"]): p for p in catalog}.values())


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
        build_key(problem_id),
        problem["title"],
        problem["cn_title"],
        problem["path"],
    )
    return any(needle in str(value).casefold() for value in haystacks)


def resolve_problem(catalog: list[dict[str, Any]], query: str) -> dict[str, Any]:
    normalized = normalized_problem_id(query)
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
    stage: str = "all",
    free_only: bool = False,
    min_rating: int | None = None,
    max_rating: int | None = None,
    unrated: str = "separate",
) -> list[dict[str, Any]]:
    if any(value is not None and value <= 0 for value in (min_rating, max_rating)):
        raise TrackerError("难度分必须为正整数")
    if min_rating is not None and max_rating is not None and min_rating > max_rating:
        raise TrackerError("最低难度分不能高于最高难度分")
    if unrated == "only" and (min_rating is not None or max_rating is not None):
        raise TrackerError("只看未标分题时不能同时指定分数范围")
    result = []
    for problem in catalog:
        record = get_record(progress, str(problem["id"]))
        if statuses and record["status"] not in statuses:
            continue
        if free_only and not is_verified_free(problem):
            continue
        if difficulty and problem["difficulty"] != difficulty.upper():
            continue
        if query and not matches_query(problem, query):
            continue
        entries = problem.get("training_entries") or [{
            "section": problem["chapter"], "order": problem["order"],
            "stage": problem.get("stage", training_stage(problem["chapter"])),
            "rating": problem.get("rating"), "source_note": problem.get("source_note", ""),
        }]
        matching = []
        for entry in entries:
            if chapter and chapter.casefold() not in entry["section"].casefold():
                continue
            if stage != "all" and entry["stage"] != stage:
                continue
            rating = entry.get("rating")
            if rating is None:
                if unrated == "exclude":
                    continue
                if (min_rating is not None or max_rating is not None) and unrated != "include":
                    continue
            else:
                if unrated == "only":
                    continue
                if min_rating is not None and rating < min_rating:
                    continue
                if max_rating is not None and rating > max_rating:
                    continue
            matching.append(entry)
        if not matching:
            continue
        # A score or stage must belong to the same section that matched CHAPTER.
        rated_entries = [entry for entry in matching if entry.get("rating") is not None]
        representative = (rated_entries or matching)[0]
        projected = {**problem, "rating": representative.get("rating"),
                     "stage": representative["stage"], "source_note": representative.get("source_note", ""),
                     "video_url": representative.get("video_url"), "training_entries": matching}
        if chapter or stage != "all" or min_rating is not None or max_rating is not None or unrated == "only":
            sections = list(dict.fromkeys(entry["section"] for entry in matching))
            projected.update(chapter="；".join(sections), sections=sections,
                             order=problem.get("global_order", min(entry["order"] for entry in matching)))
        result.append(projected)
    return sorted(result, key=lambda p: p["order"])


def training_filters(args: argparse.Namespace) -> dict[str, Any]:
    return {key: getattr(args, key, default) for key, default in (
        ("stage", "all"), ("free_only", False), ("min_rating", None),
        ("max_rating", None), ("unrated", "separate"),
    )}


def missing_rating_group(
    catalog: list[dict[str, Any]], progress: dict[str, Any], args: argparse.Namespace,
    **other_filters: Any,
) -> list[dict[str, Any]]:
    filters = training_filters(args)
    filters.update(min_rating=None, max_rating=None, unrated="only")
    return filter_problems(catalog, progress, **filters, **other_filters)


def rating_notice(catalog: list[dict[str, Any]], progress: dict[str, Any], args: argparse.Namespace) -> None:
    filters = training_filters(args)
    if filters["unrated"] == "separate" and (filters["min_rating"] is not None or filters["max_rating"] is not None):
        missing = missing_rating_group(catalog, progress, args, chapter=getattr(args, "chapter", None),
                                       difficulty=getattr(args, "difficulty", None))
        print(f"未标分题 {len(missing)} 道未参与分数范围筛选；可用 UNRATED=only 单独查看。")


def display_problem(problem: dict[str, Any], record: dict[str, Any]) -> None:
    confidence = f"{record['confidence']}/5" if record.get("confidence") else "-"
    title = problem['cn_title'] + (f" / {problem['title']}" if problem.get('title') else "")
    print(f"{problem['id']:>4}  {title}")
    print(
        f"      {problem['chapter']} · {problem['difficulty']} · "
        f"{status_text(record['status'])} · 信心 {confidence}"
    )
    code = problem.get("path") or (
        "会员题，暂未准备" if problem.get("paid_only") else "待准备"
    )
    print(f"      代码：{code}")
    print(f"      题目：{problem['url']}")
    lessons = dict.fromkeys(entry['video_url'] for entry in problem.get('training_entries', [])
                            if entry.get('video_url'))
    if problem.get('video_url'):
        lessons.setdefault(problem['video_url'], None)
    for lesson in lessons:
        print(f'      课程视频：{lesson}')
    if problem.get("metadata_verified") is False:
        print("      官方元数据待核对；编号与题名目前来自原题单。")
    if problem.get("environment_note"):
        print(f"      环境：{problem['environment_note']}")
    if record.get("next_review"):
        print(f"      下次复习：{record['next_review']}")
    if problem.get("rating"):
        print(f"      题单难度分：{rating_label(problem)}")
    else:
        print(f"      题单难度分：{rating_label(problem)}")
    if problem.get("stage"):
        print("      训练阶段：" + ("进阶/选做" if problem["stage"] == "advanced" else "常规主线"))


def command_pending(args: argparse.Namespace) -> None:
    catalog, _ = load_state()
    catalog = select_plan(catalog, args.plan)
    pending = [p for p in catalog if environment_state(p) not in ("prepared", "premium")]
    counts = Counter(environment_state(p) for p in pending)
    summary = " · ".join(f"{key} {value}" for key, value in counts.items())
    print(f"待准备环境：{len(pending)}" + (f" · {summary}" if summary else "（已清零）"))
    for problem in pending[:args.limit]:
        note = problem.get("environment_note") or ("公开元数据待核对" if problem.get("metadata_verified") is False else "接口与样例待准备")
        print(f"{problem['id']:>8} {problem['cn_title']} · {note}")
    if len(pending) > args.limit:
        print(f"还有 {len(pending) - args.limit} 道；可指定 PLAN 或 LIMIT 查看。")


def command_stats(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    catalog = select_plan(catalog, requested_plan(args, catalog))
    rating_notice(catalog, progress, args)
    catalog = filter_problems(catalog, progress, **training_filters(args))
    counts = progress_counts(catalog, progress)
    completed = finished_count(counts)
    percentage = completed / len(catalog) * 100 if catalog else 0
    print(f"总进度：{completed}/{len(catalog)} ({percentage:.1f}%)")
    print("  " + "  ".join(f"{status} {counts[status]}" for status in STATUSES))
    print(f"今日到期复习：{len(due_problems(catalog, progress))}")
    print()
    by_chapter: dict[str, list[int]] = defaultdict(lambda: [0, 0])
    for problem in catalog:
        for chapter in problem.get("sections", [problem["chapter"]]):
            current = by_chapter[chapter]
            current[1] += 1
            if get_record(progress, str(problem["id"]))["status"] in FINISHED_STATUSES:
                current[0] += 1
    print(availability_summary(catalog, progress))
    width = max((len(chapter) for chapter in by_chapter), default=0)
    for chapter, (done, total) in by_chapter.items():
        print(f"{chapter:<{width}}  {done:>2}/{total:<2}")


def choose_next(
    catalog: list[dict[str, Any]],
    progress: dict[str, Any],
    chapter: str | None,
    difficulty: str | None,
    random_choice: bool,
    **training: Any,
) -> dict[str, Any] | None:
    candidates = filter_problems(
        catalog,
        progress,
        statuses={"DOING", "TODO"},
        chapter=chapter,
        difficulty=difficulty,
        **training,
    )
    candidates = [p for p in candidates if p.get("path") and is_verified_free(p)]
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
    catalog = select_plan(catalog, requested_plan(args, catalog))
    rating_notice(catalog, progress, args)
    problem = choose_next(
        catalog, progress, args.chapter, args.difficulty, args.random, **training_filters(args)
    )
    if problem is None:
        raise TrackerError("当前筛选条件下没有已准备代码的免费未完成题目")
    display_problem(problem, get_record(progress, str(problem["id"])))
    print(f"\n开始记录：make start ID={problem['id']}")


def command_today(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    catalog = select_plan(catalog, requested_plan(args, catalog))
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
    rating_notice(catalog, progress, args)
    problem = choose_next(catalog, progress, args.chapter, args.difficulty, False, **training_filters(args))
    if problem:
        print("\n建议新题：")
        display_problem(problem, get_record(progress, str(problem["id"])))


def command_list(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    plan_id = requested_plan(args, catalog)
    view = getattr(args, 'view', 'ratings')
    if view == 'sections' and plan_id == 'all':
        raise TrackerError('按章节浏览请指定一个题单，例如 PLAN=lingcha-basic')
    catalog = select_plan(catalog, plan_id, occurrences=view == 'sections')
    statuses = set(args.status) if args.status else None
    criteria = dict(statuses=statuses, chapter=args.chapter, difficulty=args.difficulty, query=args.query)
    problems = filter_problems(catalog, progress, **criteria, **training_filters(args))
    policy = training_filters(args)["unrated"]
    if view == 'sections':
        rating_notice(catalog, progress, args)
        sections: dict[str, list[dict[str, Any]]] = {}
        for problem in problems:
            sections.setdefault(problem['chapter'], []).append(problem)
        groups = []
        for section, group in sections.items():
            complete = sum(get_record(progress, str(p['id']))['status'] in FINISHED_STATUSES for p in group)
            groups.append((f'{section} · 学习进度 {complete}/{len(group)}', group))
    elif view == 'order':
        rating_notice(catalog, progress, args)
        groups = [('题单原始顺序', problems)]
    elif policy == "separate":
        rated = [p for p in problems if p.get("rating") is not None]
        missing = missing_rating_group(catalog, progress, args, **criteria)
        groups = [("已标分题（符合筛选）", rated), ("未标分题（未参与分数范围判断）", missing)]
    else:
        groups = [("符合筛选的题目", problems)]
    total = 0
    for title, group in groups:
        if not group:
            continue
        print(f"\n{title} · {len(group)} 道：")
        for problem in group:
            record = get_record(progress, str(problem["id"]))
            next_review = record.get("next_review") or "-"
            availability = "元数据待核对" if problem.get("metadata_verified") is False else ("🔒 会员题" if problem.get("paid_only") else (
                "代码已准备" if problem.get("path") else "待准备"
            ))
            rating = rating_label(problem)
            stage = "进阶/选做" if problem.get("stage") == "advanced" else "常规主线"
            print(
                f"{problem['id']:>4}  {problem['cn_title']:<22} "
                f"{problem['chapter']} · {stage} · {problem['difficulty']} · 分数 {rating} "
                f"{status_text(record['status'])} 复习 {next_review}  {availability}"
            )
        total += len(group)
    if not total:
        print("没有匹配的题目。")
    else:
        if view == 'sections':
            unique = len({str(p['id']) for p in problems})
            print(f'\n共显示 {total} 条分类归属，{unique} 道不同题目；重复分类共用学习记录。')
        else:
            print(f"\n共显示 {total} 道（分数未知的题不被当作 0 分）。")


def command_show(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    problem = resolve_problem(select_plan(catalog, "all"), args.problem)
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
    catalog = select_plan(catalog, args.plan)
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
    timeout = getattr(args, 'timeout', 30.0)
    if not 0 < timeout < float('inf'):
        raise TrackerError('运行超时秒数必须是有限正数')
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    if not problem.get("path"):
        raise TrackerError("会员题，暂未准备代码" if problem.get("paid_only") else "题目已收录，代码待准备")
    compiler = os.environ.get("CXX") or shutil.which("clang++") or shutil.which("g++")
    if not compiler:
        raise TrackerError("没有找到 C++ 编译器（clang++ 或 g++）")
    build_dir = ROOT / "build" / "problems"
    build_dir.mkdir(parents=True, exist_ok=True)
    suffix = "_debug" if args.debug else ""
    target = build_dir / f"{build_key(problem['id'])}{suffix}"
    flags = [
        "-std=c++20",
        "-Wall",
        "-Wextra",
        "-Wshadow",
        "-Werror=return-type",
        "-DLOCAL",
        f"-I{ROOT}",
    ]
    if args.debug:
        flags.extend(("-O0", "-g", "-fsanitize=address,undefined"))
    else:
        flags.append("-O2")
    from tools import local_cases
    command = [
        compiler,
        *flags,
        str(local_cases.compile_source(ROOT, problem)),
        "-o",
        str(target),
    ]
    print(
        f"编译 {problem['id']} {problem['cn_title']}（{'调试' if args.debug else '普通'}模式）",
        flush=True,
    )
    compile_result = subprocess.run(command, cwd=ROOT, check=False)
    if compile_result.returncode:
        raise TrackerError(f"{problem['id']} 编译失败 · 文件：{problem['path']}；按编译器指出的行号修复后重试 make run ID=\"{problem['id']}\"")
    try:
        run_result = subprocess.run([str(target)], cwd=ROOT, check=False, timeout=timeout)
    except subprocess.TimeoutExpired as exc:
        raise TrackerError(f"{problem['id']} 运行超过 {timeout:g} 秒，已停止；学习记录未改变") from exc
    if run_result.returncode:
        raise TrackerError(f"{problem['id']} 本地测试失败，退出码 {run_result.returncode} · 文件：{problem['path']}；断言信息中的文件和行号定位具体用例。可运行 make debug ID=\"{problem['id']}\"；未完成的 TODO 仍需实现。学习记录未改变。")


def command_extra(args: argparse.Namespace) -> None:
    from tools import local_cases
    catalog, _ = load_state()
    problem = resolve_problem(catalog, args.problem)
    if not problem.get('path'):
        raise TrackerError('请先准备该题环境；会员题当前只有索引')
    path = local_cases.case_path(ROOT, str(problem['id']))
    if not path.exists():
        write_text(path, '// Personal supplemental cases; official examples remain in the problem file.\n'
                   '#ifdef LOCAL\nvoid runExtraCases() {\n'
                   '    // Instantiate Solution (or the problem design class), then add valid assertions.\n'
                   '}\n#endif\n')
    print(f'补充用例：{path.relative_to(ROOT)}\n编辑 runExtraCases() 后运行 make run ID="{problem["id"]}"；已有补充用例不会覆盖。')


def command_practice(args: argparse.Namespace) -> None:
    from tools import audit_examples
    catalog, progress = load_state()
    problem = resolve_problem(catalog, args.problem)
    specs = {}
    for path in sorted((ROOT / 'data/environments').glob('*.json')):
        specs.update(load_json(path))
    issues = validate_state(catalog, progress)
    issues.extend(audit_examples.audit_local([problem], specs))
    if issues:
        raise TrackerError(f'{problem["id"]} 相关检查失败：{issues}；核对数据和官方断言配方后重试。')
    command_run(args)
    command_check(argparse.Namespace(compile=False))
    print('本题运行与仓库一致性检查通过；学习状态由你根据实际学习结果记录。')


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


def render_progress(
    catalog: list[dict[str, Any]], progress: dict[str, Any], code_prefix: str = ""
) -> str:
    unique = unique_problems(catalog)
    counts = progress_counts(unique, progress)
    completed = finished_count(counts)
    total = len(unique)
    source_details = any(p.get("rating") or p.get("source_note") for p in catalog)
    course_videos = any(p.get('video_url') for p in catalog)
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
        f"**{len(due_problems(unique, progress, report_date(progress)))}** 道题到期复习。",
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
    if source_details:
        lines[-2] += " 难度分 | 训练阶段 | 原题单备注 |"
        lines[-1] += "---:|---|---|"
    if course_videos:
        lines[-2] += ' 课程视频 |'
        lines[-1] += '---|'
    for problem in catalog:
        record = get_record(progress, str(problem["id"]))
        row = (
            f"| {problem['id']} | [{problem['cn_title']}]({problem['url']}) "
            f"| {problem['chapter']} | {problem['difficulty']} "
            f"| {status_text(record['status'])} "
            f"| {record.get('last_attempt') or '-'} "
            f"| {record.get('next_review') or '-'} "
            f"| {code_label(problem, code_prefix)} |"
        )
        if source_details:
            note = problem.get("source_note", "").replace("|", "\\|").replace("\n", " ")
            stage = "进阶/选做" if problem.get("stage") == "advanced" else "常规主线"
            row += f" {rating_label(problem)} | {stage} | {note or '-'} |"
        if course_videos:
            video = f"[观看]({problem['video_url']})" if problem.get('video_url') else '-'
            row += f' {video} |'
        lines.append(row)
    return "\n".join(lines)


def replace_generated_readme(readme: str, generated: str) -> str:
    if README_START not in readme or README_END not in readme:
        raise TrackerError("README.md 缺少 AUTO_PROGRESS 标记")
    before, rest = readme.split(README_START, 1)
    _, after = rest.split(README_END, 1)
    return f"{before}{README_START}\n\n{generated}\n\n{README_END}{after}"


def render_plan_hub(catalog: list[dict[str, Any]]) -> str:
    lines = ['| 题单 | 去重题数 | 已标分 | 已准备环境 |', '|---|---:|---:|---:|']
    for identifier, plan in load_plans(catalog).items():
        selected = select_plan(catalog, identifier)
        rated = sum(p.get('rating') is not None for p in selected)
        prepared = sum(environment_state(p) == 'prepared' for p in selected)
        lines.append(f"| [{plan['name']}](notes/plans/{identifier}.md) | {len(selected)} | {rated} | {prepared} |")
    counts = Counter(environment_state(p) for p in catalog)
    lines.extend(['', '题单之间有重复题，上表数量不能直接相加。'
                  f"全库去重后收录 {len(catalog):,} 道题，已准备 {counts['prepared']:,} 个本地环境；"
                  f"{counts['premium']:,} 道已确认会员题保留索引。"])
    if counts['metadata_pending']:
        lines.append(f"{counts['metadata_pending']:,} 道的公开元数据和接口仍待核对。")
    adapters = sum(count for state, count in counts.items()
                   if state not in ('prepared', 'premium', 'metadata_pending'))
    if adapters:
        lines.append(f'另有 {adapters} 道已核对题目仍需准备或修复本地适配器。')
    elif not counts['metadata_pending']:
        lines.append('当前收录的免费题均已准备本地环境，元数据与环境待办已清零。')
    return '\n'.join(lines)


def replace_plan_hub(readme: str, catalog: list[dict[str, Any]]) -> str:
    if PLANS_START not in readme and PLANS_END not in readme:
        return readme  # Older standalone tracker fixtures do not contain a plan hub.
    if PLANS_START not in readme or PLANS_END not in readme:
        raise TrackerError('README 题单总览生成标记不完整')
    before, rest = readme.split(PLANS_START, 1)
    _, after = rest.split(PLANS_END, 1)
    return f'{before}{PLANS_START}\n\n{render_plan_hub(catalog)}\n\n{PLANS_END}{after}'


def review_row(problem: dict[str, Any], record: dict[str, Any]) -> str:
    confidence = f"{record['confidence']}/5" if record.get("confidence") else "-"
    target = f"../{problem['path']}" if problem.get("path") else problem["url"]
    return (
        f"| {problem['id']} | [{problem['cn_title']}]({target}) "
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
        if not problem.get("path"):
            continue
        path = ROOT / problem["path"]
        record = get_record(progress, str(problem["id"]))
        try:
            expected[path] = solution_header(read_text(path), record)
        except TrackerError as exc:
            raise TrackerError(f"{problem['path']}：{exc}") from exc
    expected[README_PATH] = replace_generated_readme(
        replace_plan_hub(read_text(README_PATH), catalog),
        render_progress(select_plan(catalog, "hot100"), progress)
    )
    for plan_id, plan in load_plans(catalog).items():
        selected = select_plan(catalog, plan_id)
        body = render_progress(
            select_plan(catalog, plan_id, occurrences=True), progress, code_prefix="../../"
        )
        body = body.replace("### 完整题单", "### 已收录题目")
        header = f"# {plan['name']}\n\n> 自动生成；题单索引见 data/plans/。\n\n"
        if plan.get("source_url"):
            header += f"[原始题单]({plan['source_url']}) · 收录范围：{plan.get('scope', '完整题单')}\n\n"
        header += availability_summary(selected, progress) + "\n\n"
        rated = sum(p.get("rating") is not None for p in selected)
        header += f"难度分：{rated} 道已标分 · {len(selected) - rated} 道未标分（未知不等于 0 分）\n\n"
        header += f"章节条目：{len(plan['items'])} · 去重题目：{len(selected)}（同题多分类只计一次进度）\n\n"
        expected[ROOT / "notes" / "plans" / f"{plan_id}.md"] = header + body + "\n"
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
    try:
        plans = load_plans(catalog)
        current_plan(catalog)
        if ("hot100" not in plans or len(plans["hot100"]["items"]) != 100
                or len(select_plan(catalog, "hot100")) != 100):
            errors.append("Hot 100 题单应为 100 道")
        for plan_id, plan in plans.items():
            selected = select_plan(catalog, plan_id)
            if plan.get("source_entry_count", len(plan["items"])) != len(plan["items"]):
                errors.append(f"题单 {plan_id} 的条目数与来源快照不一致")
            if plan.get("source_problem_count", len(selected)) != len(selected):
                errors.append(f"题单 {plan_id} 的去重题目数与来源快照不一致")
    except (TrackerError, KeyError, TypeError) as exc:
        errors.append(f"题单数据非法：{exc}")
    ids = [str(problem.get("id")) for problem in catalog]
    paths = [problem["path"] for problem in catalog if problem.get("path")]
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
        path = ROOT / problem["path"] if problem.get("path") else None
        metadata = metadata_from_solution(path) if path and path.exists() else {}
        if path and path.exists():
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
    from tools import local_cases
    compiler = os.environ.get("CXX") or shutil.which("clang++") or shutil.which("g++")
    if not compiler:
        raise TrackerError("没有找到 C++ 编译器（clang++ 或 g++）")
    build_dir = ROOT / "build" / "tests"
    build_dir.mkdir(parents=True, exist_ok=True)
    candidates = [
        problem
        for problem in catalog
        if get_record(progress, str(problem["id"]))["status"] in FINISHED_STATUSES
        and problem.get("path")
    ]
    if not candidates:
        print("当前没有需要编译的已完成题目。")
        return 0
    failed = 0
    for problem in candidates:
        target = build_dir / build_key(problem["id"])
        compile_command = [
            compiler,
            "-std=c++20",
            "-Wall",
            "-Wextra",
            "-Wshadow",
            "-Werror=return-type",
            "-O2",
            "-DLOCAL",
            f"-I{ROOT}",
            str(local_cases.compile_source(ROOT, problem)),
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
        try:
            run_result = subprocess.run(
                [str(target)], cwd=ROOT, text=True, capture_output=True, check=False, timeout=30
            )
        except subprocess.TimeoutExpired:
            failed += 1
            print(f"FAIL 超时 {problem['id']} {problem['cn_title']}（30 秒）")
            continue
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


def command_skeletons(args: argparse.Namespace) -> None:
    """Compile prepared environments without executing unfinished solutions."""
    catalog, _ = load_state()
    catalog = select_plan(catalog, args.plan)
    compiler = os.environ.get("CXX") or shutil.which("clang++") or shutil.which("g++")
    if not compiler:
        raise TrackerError("没有找到 C++ 编译器（clang++ 或 g++）")
    candidates = [p for p in catalog if p.get("path")]
    if getattr(args, 'problem_ids', None) is not None:
        candidates = [p for p in candidates if str(p['id']) in args.problem_ids]
    failed = 0
    warnings = 0

    def compile_environment(problem: dict[str, Any]) -> subprocess.CompletedProcess:
        from tools import local_cases
        return subprocess.run(
            [compiler, "-std=c++20", "-Wall", "-Wextra", "-Wshadow", "-Werror=return-type", "-DLOCAL",
             f"-I{ROOT}", "-fsyntax-only", str(local_cases.compile_source(ROOT, problem))],
            cwd=ROOT, text=True, capture_output=True, check=False,
        )
    with ThreadPoolExecutor(max_workers=4) as pool:
        for index, (problem, result) in enumerate(
            zip(candidates, pool.map(compile_environment, candidates)), 1
        ):
            if result.returncode:
                failed += 1
                print(f"FAIL {problem['id']} {problem['cn_title']}", flush=True)
            if result.stderr:
                warnings += "warning:" in result.stderr
                print(result.stderr.rstrip(), flush=True)
            if index % 25 == 0:
                print(f"环境编译检查：{index}/{len(candidates)}", flush=True)
    print(f"环境编译检查：{len(candidates) - failed}/{len(candidates)} 通过，{warnings} 个文件有警告；学习状态未改变。")
    if failed:
        raise TrackerError(f"有 {failed} 个本地环境编译失败")


def command_check(args: argparse.Namespace) -> None:
    catalog, progress = load_state()
    errors = validate_state(catalog, progress)
    environment_dir = ROOT / 'data/environments'
    if environment_dir.exists():
        if str(ROOT) not in sys.path:
            sys.path.insert(0, str(ROOT))
        from tools import audit_examples
        specs = {}
        for path in sorted(environment_dir.glob('*.json')):
            specs.update(load_json(path))
        errors.extend(f"{item['id']} 本地示例：{item['error']} · 文件：{item.get('file', '-')} · 配方：{item.get('recipe', '-')} · {item.get('action', '核对环境配方后重试 make check')}"
                      for item in audit_examples.audit_local(catalog, specs))
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


def add_training_arguments(parser: argparse.ArgumentParser) -> None:
    parser.add_argument("--stage", choices=("all", "basic", "advanced"), default="all",
                        help="训练阶段：常规主线或原题单进阶/选做")
    parser.add_argument("--free-only", action="store_true", help="只看免费题")
    parser.add_argument("--min-rating", type=int, help="最低题单难度分（含边界）")
    parser.add_argument("--max-rating", type=int, help="最高题单难度分（含边界）")
    parser.add_argument("--unrated", choices=("separate", "include", "exclude", "only"),
                        default="separate", help="未标分题：单独列出/纳入候选/排除/只看未标分")


def build_parser() -> argparse.ArgumentParser:
    parser = argparse.ArgumentParser(
        description="LeetCode 多题单本地刷题、记录与复习工具"
    )
    subparsers = parser.add_subparsers(dest="command", required=True)
    extra = subparsers.add_parser('extra', help='创建独立个人补充用例文件，不修改官方用例')
    extra.add_argument('problem')
    extra.set_defaults(handler=command_extra)
    practice = subparsers.add_parser('practice', help='本题编译运行加数据、文档与断言一致性检查')
    practice.add_argument('problem')
    practice.add_argument('--debug', action='store_true')
    practice.add_argument('--timeout', type=float, default=30)
    practice.set_defaults(handler=command_practice)

    pending = subparsers.add_parser("pending", help="查看元数据和本地环境待准备清单")
    pending.add_argument("--plan", default="all")
    pending.add_argument("--limit", type=int, default=20)
    pending.set_defaults(handler=command_pending)

    plans = subparsers.add_parser("plans", help="列出题单和当前选择")
    plans.set_defaults(handler=command_plans)
    use = subparsers.add_parser("use", help="设置当前学习题单")
    use.add_argument("plan_id")
    use.set_defaults(handler=command_use)

    stats = subparsers.add_parser("stats", help="查看总进度和专题进度")
    stats.add_argument("--plan", help="题单 ID，默认当前题单；all 表示全库")
    add_training_arguments(stats)
    stats.set_defaults(handler=command_stats)

    today = subparsers.add_parser("today", help="查看今天的复习和新题建议")
    today.add_argument("--limit", type=int, default=5, help="最多显示几道到期题")
    today.add_argument("--chapter", help="只推荐指定专题的新题（支持部分匹配）")
    today.add_argument("--difficulty", choices=("EASY", "MEDIUM", "HARD"))
    today.add_argument("--plan", help="题单 ID，默认当前题单；all 表示全库")
    add_training_arguments(today)
    today.set_defaults(handler=command_today)

    next_parser = subparsers.add_parser("next", help="选择下一道未完成题")
    next_parser.add_argument("--chapter", help="按专题筛选（支持部分匹配）")
    next_parser.add_argument("--difficulty", choices=("EASY", "MEDIUM", "HARD"))
    next_parser.add_argument("--random", action="store_true", help="在候选题中随机选择")
    next_parser.add_argument("--plan", help="题单 ID，默认当前题单；all 表示全库")
    add_training_arguments(next_parser)
    next_parser.set_defaults(handler=command_next)

    list_parser = subparsers.add_parser("list", help="筛选并列出题目")
    list_parser.add_argument(
        "--status", type=normalize_status, action="append", help="可重复传入"
    )
    list_parser.add_argument("--chapter", help="按专题筛选（支持部分匹配）")
    list_parser.add_argument("--difficulty", choices=("EASY", "MEDIUM", "HARD"))
    list_parser.add_argument("--query", help="按题号、中英文标题或文件名搜索")
    list_parser.add_argument("--plan", help="题单 ID，默认当前题单；all 表示全库")
    list_parser.add_argument('--view', choices=('ratings', 'sections', 'order'), default='ratings',
                             help='按难度分分组、按章节浏览或保持原始顺序')
    add_training_arguments(list_parser)
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
    reviews.add_argument("--plan", default="all", help="题单 ID，默认全库复习")
    reviews.set_defaults(handler=command_reviews)

    run = subparsers.add_parser("run", help="按题号编译并运行本地断言")
    run.add_argument("problem", help="题号、标题或文件名")
    run.add_argument("--debug", action="store_true", help="启用 Address/UB Sanitizer")
    run.add_argument('--timeout', type=float, default=30, help='运行秒数上限，默认 30 秒；不修改学习记录')
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
    skeletons = subparsers.add_parser("skeletons", help="编译已准备环境，不运行未完成解法")
    skeletons.add_argument("--plan", default="hot100", help="题单 ID，all 表示全库")
    skeletons.set_defaults(handler=command_skeletons)
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
