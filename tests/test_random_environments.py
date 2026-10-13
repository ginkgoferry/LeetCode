from __future__ import annotations

import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

from tools import leetcode, prepare_environments, random_validators


class RandomEnvironmentTest(unittest.TestCase):
    def test_random_legality_accepts_alternates_and_rejects_invalid_values(self):
        fixtures = {
            '398': ('pick', 'vector<int> localOriginalNums{1,2,3,3}; int target=3;', 'integer', 3, 0),
            '382': ('getRandom', 'vector<int> localOriginalValues{1,2,3};', 'integer', 2, 4),
            '380': ('getRandom', 'set<int> localAllowedValues{1,2};', 'integer', 2, 3),
            '381': ('getRandom', 'multiset<int> localAllowedValues{1,1,2};', 'integer', 1, 3),
            '528': ('pickIndex', 'vector<int> localOriginalWeights{1,0,3};', 'integer', 2, 1),
            '710': ('pick', 'int n=7; vector<int> localOriginalBlacklist{2,3,5};', 'integer', 6, 3),
            '478': ('randPoint', 'double radius=1, x_center=0, y_center=0;', 'double[]', [-1,0], [2,0]),
            '497': ('pick', 'vector<vector<int>> localOriginalRectangles{{-2,-2,-1,-1},{1,0,3,0}};',
                    'integer[]', [-1,-1], [0,0]),
            '519': ('flip', 'int m=2,n=3; set<pair<int,int>> localFlippedCells{{0,0}};',
                    'integer[]', [1,2], [0,0]),
        }
        blocks = []
        for identifier in ('380', '381'):
            state = '\n'.join(random_validators.declarations(identifier))
            insert = '\n'.join(random_validators.transitions(identifier, 'insert'))
            remove = '\n'.join(random_validators.transitions(identifier, 'remove'))
            blocks.append('if (selected.empty()) {\n' + state + '\nint val=1;\n' + insert + '\n' +
                          insert + '\n' + remove + '\n' +
                          f'assert(localAllowedValues.count(1) == {1 if identifier == "381" else 0});\n}}')
        reset = '\n'.join(random_validators.transitions('519', 'reset'))
        blocks.append('if (selected.empty()) { set<pair<int,int>> localFlippedCells{{0,0}};\n' +
                      reset + '\nassert((localFlippedCells.insert({0,0}).second));\n}')
        for identifier, (operation, declarations, kind, valid, invalid) in fixtures.items():
            checks = '\n'.join(random_validators.checks(identifier, operation))
            candidates = [prepare_environments.literal(value, kind) for value in (valid, invalid)]
            result = prepare_environments.cpp_type(kind)
            blocks.append(f'if (selected.empty() || selected == "{identifier}") {{\n{declarations}\n'
                          f'auto localResult = selected.empty() ? {result}({candidates[0]}) : {result}({candidates[1]});\n'
                          f'{checks}\n}}')
        compiler = shutil.which('clang++') or shutil.which('g++')
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            source, binary = root / 'random.cpp', root / 'random'
            source.write_text('#include "common/leetcode.hpp"\n#include <set>\n'
                              'int main(int argc,char** argv) { string selected=argc>1?argv[1]:"";\n' +
                              '\n'.join(blocks) + '\n}\n')
            result = subprocess.run([compiler, '-std=c++20', '-I'+str(leetcode.ROOT), str(source),
                                     '-o', str(binary)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            result = subprocess.run([str(binary)], capture_output=True, cwd=root, timeout=5)
            self.assertEqual(result.returncode, 0)
            for identifier in fixtures:
                result = subprocess.run([str(binary), identifier], capture_output=True, cwd=root, timeout=5)
                self.assertNotEqual(result.returncode, 0, identifier)

