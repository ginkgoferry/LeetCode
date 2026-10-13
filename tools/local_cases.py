"""Independent personal cases, compiled after the original problem source."""
from __future__ import annotations

import json
from pathlib import Path


def case_path(root: Path, identifier: str) -> Path:
    import re
    key = re.sub(r'[^a-zA-Z0-9_.-]', '_', str(identifier))
    return root / 'data/local_cases' / f'{key}.cpp'


def compile_source(root: Path, problem: dict) -> Path:
    extra = case_path(root, str(problem['id']))
    source = root / problem['path']
    if not extra.exists():
        return source
    wrapper = root / 'build/local_cases' / extra.name
    wrapper.parent.mkdir(parents=True, exist_ok=True)
    quote = lambda path: json.dumps(str(path), ensure_ascii=False)
    wrapper.write_text('#define main localOfficialMain\n#include ' + quote(source) + '\n#undef main\n'
                       '#include ' + quote(extra) + '\n'
                       'int main() { int result = localOfficialMain(); if(result) return result; '
                       'runExtraCases(); std::cout << "Supplemental tests passed.\\n"; return 0; }\n')
    return wrapper
