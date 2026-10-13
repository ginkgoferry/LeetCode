#!/usr/bin/env python3
"""Prepare missing local C++ environments from checked-in, verified example specs.

Existing solutions are never overwritten. This command does not change learning
records; run make sync and make check after preparing files.
"""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

from tools import leetcode, environment_validators, random_validators, platform_preludes, special_node_environments, tree_driver_environments


SCALAR_TYPES = {
    'integer': 'int', 'long': 'long long', 'double': 'double',
    'boolean': 'bool', 'character': 'char', 'string': 'string', 'void': 'void',
}


def cpp_type(kind: str) -> str:
    kind = kind.replace('String', 'string')
    if kind in ('NaryNode', 'NextTreeNode', 'MultilevelNode', 'QuadTreeNode'): return 'Node*'
    if kind == 'EmployeeArray': return 'vector<Employee*>'
    if kind in ('TreeNode', 'ListNode'):
        return kind + '*'
    if kind.endswith('[]'):
        return f'vector<{cpp_type(kind[:-2])}>'
    if kind.startswith('list<') and kind.endswith('>'):
        return f'vector<{cpp_type(kind[5:-1])}>'
    return SCALAR_TYPES[kind]


def literal(value, kind: str) -> str:
    kind = kind.replace('String', 'string')
    if kind.endswith('[]') or kind.startswith('list<'):
        inner = kind[:-2] if kind.endswith('[]') else kind[5:-1]
        return '{' + ', '.join(literal(v, inner) for v in value) + '}'
    if kind == 'character':
        if len(value) != 1:
            raise ValueError('Character parameter must have exactly one character')
        escaped = value.replace('\\', '\\\\').replace("'", "\\'").replace('\n', '\\n').replace('\r', '\\r').replace('\t', '\\t')
        return "'" + escaped + "'"
    if kind == 'string':
        return json.dumps(value, ensure_ascii=False)
    if kind == 'boolean':
        return 'true' if value else 'false'
    return str(value) + ('LL' if kind == 'long' else '')


def render_case(identifier: str, spec: dict, case: dict) -> str:
    if identifier in tree_driver_environments.SUPPORTED:
        return tree_driver_environments.render_case(identifier, spec, case)
    if identifier in special_node_environments.SUPPORTED:
        return special_node_environments.render_case(identifier, spec, case)
    metadata = spec['metadata']
    params = metadata['params']
    lines = ['    {', '        // ' + ('额外边界用例' if case.get('kind') == 'boundary' else '官方样例')]
    tree_ownership = any('TreeNode' in p['type'] for p in params) or 'TreeNode' in metadata['return']['type']
    list_ownership = any('ListNode' in p['type'] for p in params) or 'ListNode' in metadata['return']['type']
    if tree_ownership:
        lines.append('        unordered_set<TreeNode*> localOwnedTrees;')
    if list_ownership:
        lines.append('        unordered_set<ListNode*> localOwnedLists;')
    bound_params = params
    if identifier == '1379':
        values = ', '.join('nullopt' if v is None else str(v) for v in case['args'][0])
        for name in ('original', 'cloned'):
            lines.append(f'        TreeNode* {name} = buildTree(vector<optional<int>>{{{values}}});')
            lines.append(f'        collectTreeNodes({name}, localOwnedTrees);')
        lines.append(f"        TreeNode* target = findTreeNode(original, {case['args'][1]});")
        lines.append(f"        TreeNode* localExpectedResult = findTreeNode(cloned, {case['expected']});")
        lines.append('        assert(target && localExpectedResult);')
        bound_params = []
    if identifier in ('278', '374'):
        bound_params = params[:1]
        callback = 'localBadVersion' if identifier == '278' else 'localGuessTarget'
        lines.append(f"        {callback} = {case['args'][1]};")
    for param, value in zip(bound_params, case['args'][:len(bound_params)], strict=True):
        if identifier == '237' and param['name'] == 'node':
            lines.extend(['        ListNode* localTarget = head;',
                          f'        while (localTarget && localTarget->val != {value}) localTarget = localTarget->next;',
                          '        assert(localTarget && localTarget->next);'])
        elif (identifier == '235' and param['name'] in ('p', 'q')) or (identifier == '863' and param['name'] == 'target'):
            lines.append(f"        TreeNode* {param['name']} = findTreeNode(root, {value});")
            lines.append(f"        assert({param['name']});")
        elif identifier == '1237' and param['name'] == 'num':
            lines.append(f'        CustomFunction customfunction({value});')
        elif identifier == '1095' and param['name'] == 'mountainArr':
            lines.append(f"        MountainArray mountainArr(vector<int>{literal(value, 'integer[]')});")
        elif param['type'] == 'TreeNode':
            values = ', '.join('nullopt' if v is None else str(v) for v in (value or []))
            lines.append(f"        TreeNode* {param['name']} = buildTree(vector<optional<int>>{{{values}}});")
            lines.append(f"        collectTreeNodes({param['name']}, localOwnedTrees);")
        elif param['type'] in ('list<TreeNode>', 'TreeNode[]'):
            lines.append(f"        vector<TreeNode*> {param['name']};")
            for tree in value:
                values = ', '.join('nullopt' if v is None else str(v) for v in (tree or []))
                lines.append(f"        {param['name']}.push_back(buildTree(vector<optional<int>>{{{values}}}));")
                lines.append(f"        collectTreeNodes({param['name']}.back(), localOwnedTrees);")
        elif param['type'] == 'ListNode':
            lines.append(f"        ListNode* {param['name']} = buildList(vector<int>{literal(value, 'integer[]')});")
            lines.append(f"        collectListNodes({param['name']}, localOwnedLists);")
        else:
            lines.append(f"        {cpp_type(param['type'])} {param['name']} = {literal(value, param['type'])};")
    lines.extend("        " + statement for statement in environment_validators.snapshots(identifier))
    if identifier == '235':
        lines.append(f"        TreeNode* localExpectedResult = findTreeNode(root, {case['expected']});")
        lines.append('        assert(localExpectedResult);')
    if identifier == '843':
        lines.extend(['        Master master(secret, words, allowedGuesses);',
                      '        solution.findSecretWord(words, master);',
                      '        assert(master.localSucceeded());', '    }'])
        return '\n'.join(lines)
    call_args = 'customfunction, z' if identifier == '1237' else ('target, mountainArr' if identifier == '1095' else ', '.join(p['name'] for p in bound_params))
    if identifier == '1379': call_args = 'original, cloned, target'
    if identifier == '237': call_args = 'localTarget'
    call = f"solution.{metadata['name']}({call_args})"
    return_kind = metadata['return']['type']
    output = metadata.get('output', {})
    if identifier == '470':
        lines.append('        // n 是本地调用次数，平台 API rand10() 不接收参数。')
        lines.append('        vector<int> localResult;')
        lines.append('        for (int sample = 0; sample < n; ++sample) localResult.push_back(solution.rand10());')
        localResult = 'localResult'
        expected_kind = 'integer[]'
    elif return_kind == 'void':
        lines.append(f'        {call};')
        localResult = params[output['paramindex']]['name']
        expected_kind = params[output['paramindex']]['type']
    else:
        if identifier in ('905', '922', '3992', '2122', '2334','1765','162','1901'):
            lines.append(f"        const auto original = {params[0]['name']};")
        lines.append(f'        auto localResult = {call};')
        localResult = 'localResult'
        expected_kind = return_kind
    if identifier in ('235', '1379'):
        lines.append('        assert(localResult == localExpectedResult);')
    elif identifier in environment_validators.SUPPORTED:
        lines.extend('        '+statement for statement in environment_validators.statements(identifier, case))
    elif identifier == '2334':
        if case['expected'] == -1:
            lines.append('        assert(localResult == -1);')
        else:
            lines.extend([
                '        assert(localResult > 0 && static_cast<size_t>(localResult) <= original.size());',
                '        bool found = false;',
                '        for (size_t left = 0; left + localResult <= original.size(); ++left) {',
                '            int minimum = *min_element(original.begin() + left, original.begin() + left + localResult);',
                '            if (static_cast<long long>(minimum) * localResult > threshold) found = true;',
                '        }',
                '        assert(found);',
            ])
    elif identifier in ('89', '1238'):
        first = 'start' if identifier == '1238' else '0'
        lines.extend([
            '        assert(localResult.size() == (size_t{1} << n));',
            f'        assert(localResult.front() == {first});',
            '        vector<bool> seen(size_t{1} << n, false);',
            '        for (size_t i = 0; i < localResult.size(); ++i) {',
            '            int value = localResult[i];',
            '            assert(value >= 0 && static_cast<size_t>(value) < seen.size());',
            '            assert(!seen[value]); seen[value] = true;',
            '            if (localResult.size() > 1) {',
            '                int bits = value ^ localResult[(i + 1) % localResult.size()];',
            '                assert(bits > 0 && (bits & (bits - 1)) == 0);',
            '            }',
            '        }',
        ])
    elif identifier == '1765':
        highest = max(max(row) for row in case['expected'])
        lines.extend([
            '        assert(localResult.size() == original.size());',
            '        int maximum = 0;',
            '        for (size_t row = 0; row < original.size(); ++row) {',
            '            assert(localResult[row].size() == original[row].size());',
            '            for (size_t col = 0; col < original[row].size(); ++col) {',
            '                assert(localResult[row][col] >= 0);',
            '                if (original[row][col]) assert(localResult[row][col] == 0);',
            '                if (row) assert(abs(localResult[row][col] - localResult[row-1][col]) <= 1);',
            '                if (col) assert(abs(localResult[row][col] - localResult[row][col-1]) <= 1);',
            '                maximum = max(maximum, localResult[row][col]);',
            '            }',
            '        }',
            f'        assert(maximum == {highest});',
        ])
    elif identifier == '162':
        lines.extend([
            '        assert(localResult >= 0 && static_cast<size_t>(localResult) < original.size());',
            '        assert(localResult == 0 || original[localResult] > original[localResult - 1]);',
            '        assert(static_cast<size_t>(localResult + 1) == original.size() || original[localResult] > original[localResult + 1]);',
        ])
    elif identifier == '1901':
        lines.extend([
            '        assert(localResult.size() == 2);',
            '        int row = localResult[0], col = localResult[1];',
            '        assert(row >= 0 && col >= 0 && static_cast<size_t>(row) < original.size() && static_cast<size_t>(col) < original[0].size());',
            '        const int dr[] = {-1, 1, 0, 0}, dc[] = {0, 0, -1, 1};',
            '        for (int d = 0; d < 4; ++d) {',
            '            int nr = row + dr[d], nc = col + dc[d];',
            '            if (nr >= 0 && nc >= 0 && static_cast<size_t>(nr) < original.size() && static_cast<size_t>(nc) < original[0].size())',
            '                assert(original[row][col] > original[nr][nc]);',
            '        }',
        ])
    elif identifier == '3992':
        lines.extend([
            '        auto sortedResult = localResult;',
            '        auto sortedOriginal = original;',
            '        sort(sortedResult.begin(), sortedResult.end());',
            '        sort(sortedOriginal.begin(), sortedOriginal.end());',
            '        assert(sortedResult == sortedOriginal);',
            '        bool seenX = false;',
            '        for (char value : localResult) {',
            '            if (value == x) seenX = true;',
            '            if (value == y) assert(!seenX);',
            '        }',
        ])
    elif identifier == '2900':
        lines.extend([
            f"        assert(localResult.size() == {len(case['expected'])});",
            '        size_t cursor = 0;',
            '        int previousGroup = -1;',
            '        for (const auto& word : localResult) {',
            '            while (cursor < words.size() && words[cursor] != word) ++cursor;',
            '            assert(cursor < words.size());',
            '            assert(groups[cursor] != previousGroup);',
            '            previousGroup = groups[cursor++];',
            '        }',
        ])
    elif identifier == '2122':
        lines.extend([
            '        assert(localResult.size() * 2 == original.size());',
            '        assert(!localResult.empty());',
            '        auto sortedOriginal = original;',
            '        sort(sortedOriginal.begin(), sortedOriginal.end());',
            '        long long k = static_cast<long long>(*min_element(localResult.begin(), localResult.end())) - sortedOriginal.front();',
            '        assert(k > 0);',
            '        vector<long long> rebuilt;',
            '        for (int value : localResult) {',
            '            assert(value > 0);',
            '            rebuilt.push_back(value - k);',
            '            rebuilt.push_back(value + k);',
            '        }',
            '        sort(rebuilt.begin(), rebuilt.end());',
            '        assert(equal(rebuilt.begin(), rebuilt.end(), sortedOriginal.begin()));',
        ])
    elif identifier in ('905', '922'):
        lines.extend([
            '        assert(localResult.size() == original.size());',
            '        auto sortedResult = localResult;',
            '        auto sortedOriginal = original;',
            '        sort(sortedResult.begin(), sortedResult.end());',
            '        sort(sortedOriginal.begin(), sortedOriginal.end());',
            '        assert(sortedResult == sortedOriginal);',
        ])
        if identifier == '905':
            lines.extend([
                '        bool seenOdd = false;',
                '        for (int value : localResult) {',
                '            if (value % 2 != 0) seenOdd = true;',
                '            else assert(!seenOdd);',
                '        }',
            ])
        else:
            lines.extend([
                '        for (size_t i = 0; i < localResult.size(); ++i)',
                '            assert(localResult[i] % 2 == static_cast<int>(i % 2));',
            ])
    else:
        if expected_kind == 'TreeNode':
            values = ', '.join('nullopt' if v is None else str(v) for v in (case['expected'] or []))
            lines.append(f'        vector<optional<int>> expected = {{{values}}};')
            localResult = f'treeToVector({localResult})'
        elif expected_kind == 'ListNode':
            lines.append(f"        vector<int> expected = {literal(case['expected'] or [], 'integer[]')};")
            localResult = f'listToVector({localResult})'
        elif expected_kind in ('list<TreeNode>', 'TreeNode[]'):
            lines.append('        vector<vector<optional<int>>> expected;')
            for tree in case['expected']:
                values = ', '.join('nullopt' if v is None else str(v) for v in (tree or []))
                lines.append(f'        expected.push_back(vector<optional<int>>{{{values}}});')
            lines.append('        vector<vector<optional<int>>> observed;')
            lines.append('        for (TreeNode* localTreePart : localResult) observed.push_back(treeToVector(localTreePart));')
            localResult = 'observed'
        elif expected_kind in ('list<ListNode>', 'ListNode[]'):
            lines.append(f"        vector<vector<int>> expected = {literal(case['expected'], 'integer[][]')};")
            lines.append('        vector<vector<int>> observed;')
            lines.append('        for (ListNode* localListPart : localResult) observed.push_back(listToVector(localListPart));')
            localResult = 'observed'
        else:
            lines.append(f"        {cpp_type(expected_kind)} expected = {literal(case['expected'], expected_kind)};")
        if identifier in ('15', '18'):
            lines.extend([
                '        for (auto& row : localResult) sort(row.begin(), row.end());',
                '        for (auto& row : expected) sort(row.begin(), row.end());',
            ])
        if spec.get('unordered') == 'both' and identifier not in ('15', '18'):
            lines.extend([
                '        for (auto& row : localResult) sort(row.begin(), row.end());',
                '        for (auto& row : expected) sort(row.begin(), row.end());',
            ])
        if identifier in ('15', '18', '30', '350', '438', '442', '1471') or spec.get('unordered'):
            lines.extend([
                '        sort(localResult.begin(), localResult.end());',
                '        sort(expected.begin(), expected.end());',
            ])
        tolerance = ', 1e-6' if identifier == '面试题 16.03' else ''
        condition = f'approxEqual({localResult}, expected{tolerance})' if 'double' in expected_kind else f'{localResult} == expected'
        lines.append(f'        assert(({condition}));')
        if output.get('size') == 'ret':
            name = params[output['paramindex']]['name']
            lines.extend([
                f'        assert({name}.size() >= static_cast<size_t>(localResult));',
                f'        vector<int> prefix({name}.begin(), {name}.begin() + localResult);',
                f"        vector<int> expectedPrefix = {literal(case['prefix'], 'integer[]')};",
            ])
            if identifier == '27':
                lines.extend([
                    '        sort(prefix.begin(), prefix.end());',
                    '        sort(expectedPrefix.begin(), expectedPrefix.end());',
                ])
            lines.append('        assert(prefix == expectedPrefix);')
    if return_kind == 'TreeNode':
        lines.append('        collectTreeNodes(localResult, localOwnedTrees);')
    if return_kind == 'ListNode':
        lines.append('        collectListNodes(localResult, localOwnedLists);')
    if return_kind in ('list<TreeNode>', 'TreeNode[]'):
        lines.append('        for (TreeNode* localTreePart : localResult) collectTreeNodes(localTreePart, localOwnedTrees);')
    if return_kind in ('list<ListNode>', 'ListNode[]'):
        lines.append('        for (ListNode* localListPart : localResult) collectListNodes(localListPart, localOwnedLists);')
    if tree_ownership:
        lines.append('        for (TreeNode* node : localOwnedTrees) delete node;')
    if list_ownership:
        lines.append('        for (ListNode* node : localOwnedLists) delete node;')
    lines.append('    }')
    return '\n'.join(lines)


def stub_class(spec: dict) -> str:
    name = spec['metadata']['classname']
    source = spec['cpp']
    start = source.index('class ' + name)
    source = source[start:source.index('};', start) + 2]

    def replace(match):
        signature = match[1].strip()
        function = re.search(r'([A-Za-z_]\w*)\s*\(', signature)
        params = signature.split('(', 1)[1].rsplit(')', 1)[0]
        body = '    ' + signature + ' {\n        // TODO: 在这里实现你的解法。\n'
        for param in params.split(','):
            if param.strip():
                pname = param.strip().split()[-1].lstrip('&*')
                body += f'        (void){pname};\n'
        return_type = signature[:function.start()].strip()
        if return_type and return_type != 'void':
            body += '        return {};\n'
        return body + '    }'
    return re.sub(r'^    ([^\n{};]+\([^\n]*\))\s*\{\s*\}', replace, source, flags=re.M)


def render_design_case(spec: dict, case: dict, identifier: str = '') -> str:
    metadata = spec['metadata']
    methods = {m['name']: m for m in metadata['methods']}
    lines = ['    {', '        // 官方操作序列']
    ctor = metadata['constructor']['params']
    owned = any(p['type'] == 'TreeNode' for p in ctor) or any(m['return']['type'] == 'TreeNode' for m in metadata['methods'])
    if owned:
        lines.append('        unordered_set<TreeNode*> localOwnedTrees;')
    owned_lists = any(p['type'] == 'ListNode' for p in ctor)
    if owned_lists:
        lines.append('        unordered_set<ListNode*> localOwnedLists;')
    for param, value in zip(ctor, case['args'][0], strict=True):
        if param['type'] == 'TreeNode':
            values = ', '.join('nullopt' if v is None else str(v) for v in (value or []))
            lines.append(f"        TreeNode* {param['name']} = buildTree(vector<optional<int>>{{{values}}});")
            lines.append(f"        collectTreeNodes({param['name']}, localOwnedTrees);")
        elif param['type'] == 'ListNode':
            lines.append(f"        ListNode* {param['name']} = buildList(vector<int>{literal(value or [], 'integer[]')});")
            lines.append(f"        collectListNodes({param['name']}, localOwnedLists);")
        else:
            lines.append(f"        {cpp_type(param['type'])} {param['name']} = {literal(value, param['type'])};")
    lines.extend('        ' + statement for statement in random_validators.declarations(identifier))
    if identifier in random_validators.SUPPORTED:
        lines.append('        // 随机接口检查结果合法性；概率分布需要另行验证。')
    arguments = ', '.join(p['name'] for p in ctor)
    declaration = f"        {metadata['classname']} localObject" + (f'({arguments});' if ctor else ';')
    lines.append(declaration)
    for operation, arguments, expected in zip(case['commands'][1:], case['args'][1:], case['expected'][1:], strict=True):
        method = methods[operation]
        lines.append('        {')
        for param, value in zip(method['params'], arguments, strict=True):
            lines.append(f"            {cpp_type(param['type'])} {param['name']} = {literal(value, param['type'])};")
        call = f"localObject.{operation}({', '.join(p['name'] for p in method['params'])})"
        kind = method['return']['type']
        if kind == 'void':
            lines.append(f'            {call};')
        else:
            lines.append(f'            auto localResult = {call};')
            checks = random_validators.checks(identifier, operation)
            if checks is not None:
                lines.extend('            ' + statement for statement in checks)
            else:
                if kind == 'TreeNode':
                    values = ', '.join('nullopt' if v is None else str(v) for v in (expected or []))
                    lines.append(f'            vector<optional<int>> expected{{{values}}};')
                    test = 'treeToVector(localResult) == expected'
                    lines.append('            collectTreeNodes(localResult, localOwnedTrees);')
                else:
                    lines.append(f'            {cpp_type(kind)} expected = {literal(expected, kind)};')
                    test = 'approxEqual(localResult, expected)' if 'double' in kind else 'localResult == expected'
                lines.append(f'            assert(({test}));')
        lines.extend('            ' + statement for statement in random_validators.transitions(identifier, operation))
        lines.append('        }')
    if owned:
        lines.append('        for (TreeNode* node : localOwnedTrees) delete node;')
    if owned_lists:
        lines.append('        for (ListNode* node : localOwnedLists) delete node;')
    lines.append('    }')
    return '\n'.join(lines)


def render_environment(problem: dict, spec: dict, template: str) -> str:
    source = template
    identifier = str(problem['id'])
    if identifier == '690':
        source = source.replace('#include "common/leetcode.hpp"', '#include "common/leetcode.hpp"\n' + tree_driver_environments.EMPLOYEE)
    if str(problem['id']) in special_node_environments.SUPPORTED:
        source = source.replace('#include "common/leetcode.hpp"',
            '#define Node LocalRandomListNode\n#include "common/leetcode.hpp"\n#undef Node\n' +
            special_node_environments.prelude(str(problem['id'])))
    prelude = platform_preludes.PRELUDES.get(str(problem['id']))
    if prelude:
        source = source.replace('#include "common/leetcode.hpp"', '#include "common/leetcode.hpp"\n' + prelude)
    if str(problem['id']) == '470':
        source = source.replace('#include "common/leetcode.hpp"', '#include "common/leetcode.hpp"\n'
            '#include <random>\n'
            '// LOCAL 平台接口模拟，不属于 rand10 的解法。\n'
            'inline int rand7() {\n'
            '    static mt19937 engine(7);\n'
            '    return uniform_int_distribution<int>(1, 7)(engine);\n'
            '}')
    for label, value in (
        ('Problem', f"{problem['id']}. {problem['cn_title']} / {problem['title']}"),
        ('Link', problem['url']), ('Chapter', problem['chapter']),
        ('Difficulty', problem['difficulty'].title()),
    ):
        source = source.replace(f' * {label}:', f' * {label}: {value}', 1)
    if 'local_test_source' in spec:
        # Legacy fixtures retain their reviewed platform-specific assertions.
        # Recovery restores a TODO interface, never a stored algorithm solution.
        start = source.index('class Solution {')
        return source[:start] + spec['recovery_cpp'] + '\n\n' + spec['local_test_source']
    if identifier in tree_driver_environments.CODECS:
        start = source.index('class Solution {'); end = source.index('#ifdef LOCAL\nint main', start)
        source = source[:start] + stub_class(spec) + '\n\n' + source[end:]
        source = source.replace('    [[maybe_unused]] Solution solution;', '    Codec serializer, deserializer;')
        start = source.index('    // Add local assertions here'); end = source.index('    cout <<', start)
        tests = '\n\n'.join(render_case(identifier, spec, case) for case in spec['cases'])
        return source[:start] + tests + '\n\n' + source[end:]
    if spec['metadata'].get('systemdesign'):
        start = source.index('class Solution {')
        end = source.index('#ifdef LOCAL\nint main', start)
        source = source[:start] + stub_class(spec) + '\n\n' + source[end:]
        source = source.replace('    [[maybe_unused]] Solution solution;\n', '')
        start = source.index('    // Add local assertions here')
        end = source.index('    cout <<', start)
        tests = '\n\n'.join(render_design_case(spec, case, str(problem['id'])) for case in spec['cases'])
        return source[:start] + tests + '\n\n' + source[end:]
    code = spec['cpp']
    solution = re.search(r'^class Solution\b', code, re.M)
    if solution:code = code[solution.start():]
    match = re.search(r'public:\s*(.+?\))\s*\{', code, re.S)
    if not match:
        raise ValueError(f"Unsupported C++ interface: {problem['id']}")
    signature = ' '.join(match[1].split())
    body = '    ' + signature + ' {\n        // TODO: 在这里实现你的解法。\n'
    raw_params = signature.split('(', 1)[1].rsplit(')', 1)[0]
    for parameter in raw_params.split(','):
        if parameter.strip():
            name = parameter.strip().split()[-1].lstrip('&*')
            body += f'        (void){name};\n'
    if spec['metadata']['return']['type'] != 'void':
        body += '        return {};\n'
    body += '    }'
    source = source.replace('    // Paste the LeetCode function signature here.', body)
    start = source.index('    // Add local assertions here')
    end = source.index('    cout <<', start)
    tests = '\n\n'.join(render_case(str(problem['id']), spec, case) for case in spec['cases'])
    source = source[:start] + tests + '\n\n' + source[end:]
    source = source.replace('#include <cassert>', '#include <cassert>\n#include <cmath>')
    return source


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--plan', default='lingcha-sliding-window')
    args = parser.parse_args()
    catalog, _ = leetcode.load_state()
    selected = leetcode.select_plan(catalog, args.plan)
    specs = {}
    for path in sorted((leetcode.ROOT / 'data/environments').glob('*.json')):
        specs.update(leetcode.load_json(path))
    template = leetcode.read_text(leetcode.ROOT / 'templates/solution.cpp')
    prepared = 0
    index = leetcode.problem_index(catalog)
    for problem in selected:
        problem = index[str(problem['id'])]
        if problem.get('paid_only') or not problem.get('path'):
            continue
        path = leetcode.ROOT / problem['path']
        if path.exists():
            continue
        key = str(problem['id'])
        if key not in specs:
            raise leetcode.TrackerError(f'{key} 缺少核对过的接口与样例')
        leetcode.write_text(path, render_environment(problem, specs[key], template))
        prepared += 1
    print(f'已准备 {prepared} 个环境；已有文件保持原样。请运行 make sync 和 make check。')


if __name__ == '__main__':
    try:
        main()
    except leetcode.TrackerError as exc:
        raise SystemExit(f'错误：{exc}')
