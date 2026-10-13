"""Select syntax checks from a Git change set; uncertain changes check all files."""
from __future__ import annotations

import argparse
import json
import os
import subprocess
from types import SimpleNamespace

from tools import leetcode


def select_ids(catalog: list[dict], paths: list[str] | None) -> tuple[list[str], str]:
    prepared = {p['path']: str(p['id']) for p in catalog if p.get('path')}
    if paths is None:
        return list(prepared.values()), '无法确定基准，检查全部环境'
    shared = ('common/', 'templates/', 'tools/', 'data/environments/', 'data/local_cases/', '.github/workflows/')
    if any(path.startswith(shared) or path == 'data/problems.json' or path == 'Makefile' for path in paths):
        return list(prepared.values()), '公共接口、工具或配方变更，检查全部环境'
    changed_cpp = [path for path in paths if path.endswith(('.cpp', '.hpp', '.h', '.cc'))]
    if any(path not in prepared for path in changed_cpp):
        return list(prepared.values()), '存在新增、删除或未登记的 C++ 文件，检查全部环境'
    return list(dict.fromkeys(prepared[path] for path in changed_cpp)), '只检查变更题目的环境'


def changed_paths(base: str | None) -> list[str] | None:
    if not base or set(base) == {'0'}:
        return None
    valid = subprocess.run(['git', 'rev-parse', '--verify', '--end-of-options', base + '^{commit}'],
                           cwd=leetcode.ROOT, capture_output=True)
    if valid.returncode:
        return None
    result = subprocess.run(['git', 'diff', '--name-only', '-z', valid.stdout.decode().strip(), 'HEAD'],
                            cwd=leetcode.ROOT, capture_output=True)
    return result.stdout.decode().split('\0')[:-1] if not result.returncode else None


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--base', default=os.environ.get('CI_BASE'))
    parser.add_argument('--dry-run', action='store_true')
    args = parser.parse_args()
    catalog, _ = leetcode.load_state()
    identifiers, reason = select_ids(catalog, changed_paths(args.base))
    print(f'CI 编译范围：{len(identifiers)} 道 · {reason}', flush=True)
    if args.dry_run:
        print(json.dumps(identifiers, ensure_ascii=False))
    elif identifiers:
        leetcode.command_skeletons(SimpleNamespace(plan='all', problem_ids=set(identifiers)))


if __name__ == '__main__':
    try:
        main()
    except leetcode.TrackerError as exc:
        raise SystemExit(f'错误：{exc}')
