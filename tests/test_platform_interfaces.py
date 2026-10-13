from __future__ import annotations

import shutil
import subprocess
import tempfile
import unittest
from pathlib import Path

from tools import leetcode, platform_preludes


class PlatformInterfaceTest(unittest.TestCase):
    def test_custom_function_contract_and_master_guess_limit(self):
        compiler = shutil.which('clang++') or shutil.which('g++')
        source = '#include "common/leetcode.hpp"\n#include <set>\n'
        source += platform_preludes.PRELUDES['1237'] + platform_preludes.PRELUDES['843']
        source += '''
int main(int argc, char**) {
    vector<string> words{"abcdef", "abcxyz"};
    if (argc > 1) {
        Master limited("abcdef", words, 1);
        limited.guess("abcxyz");
        limited.guess("abcdef");
        return 0;
    }
    vector<int> expected{5, 6, 7, 11, 13, 25, 35, 12, 18};
    for (int identifier = 1; identifier <= 9; ++identifier) {
        CustomFunction function(identifier);
        assert(function.f(2, 3) == expected[identifier - 1]);
    }
    Master master("abcdef", words, 3);
    assert(!master.localSucceeded());
    assert(master.guess("zzzzzz") == -1);
    assert(master.guess("abcxyz") == 3);
    assert(!master.localSucceeded());
    assert(master.guess("abcdef") == 6);
    assert(master.localSucceeded());
}
'''
        with tempfile.TemporaryDirectory() as tmp:
            root = Path(tmp)
            cpp, binary = root / 'platform.cpp', root / 'platform'
            cpp.write_text(source)
            result = subprocess.run([compiler, '-std=c++20', '-I'+str(leetcode.ROOT), str(cpp),
                                     '-o', str(binary)], capture_output=True, text=True)
            self.assertEqual(result.returncode, 0, result.stderr)
            result = subprocess.run([str(binary)], capture_output=True, cwd=root, timeout=5)
            self.assertEqual(result.returncode, 0)
            result = subprocess.run([str(binary), 'over-limit'], capture_output=True, cwd=root, timeout=5)
            self.assertNotEqual(result.returncode, 0)
