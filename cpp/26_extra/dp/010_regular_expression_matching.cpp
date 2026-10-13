/*
 * Problem: 10. 正则表达式匹配 / Regular Expression Matching
 * Link: https://leetcode.cn/problems/regular-expression-matching/
 * Chapter: 动态规划
 * Difficulty: Hard
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
    bool isMatch(string s, string p) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)p;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "aa";
        string p = "a";
        auto localResult = solution.isMatch(s, p);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aa";
        string p = "a*";
        auto localResult = solution.isMatch(s, p);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ab";
        string p = ".*";
        auto localResult = solution.isMatch(s, p);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
