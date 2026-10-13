/*
 * Problem: 467. 环绕字符串中唯一的子字符串 / Unique Substrings in Wraparound String
 * Link: https://leetcode.cn/problems/unique-substrings-in-wraparound-string/
 * Chapter: 分组循环
 * Difficulty: Medium
 *
 * Idea:
 * - 
 *
 * Complexity:
 * - Time:
 * - Space:
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass:
 * - Last attempt:
 * - Last review:
 * - Next review:
 * - Confidence:
 * - Sessions: 0
 * - Status: TODO
 */

#include <algorithm>
#include <cassert>
#include <cmath>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

#ifdef LOCAL
#include "common/leetcode.hpp"
#endif

class Solution {
public:
    int findSubstringInWraproundString(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "a";
        auto localResult = solution.findSubstringInWraproundString(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cac";
        auto localResult = solution.findSubstringInWraproundString(s);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "zab";
        auto localResult = solution.findSubstringInWraproundString(s);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
