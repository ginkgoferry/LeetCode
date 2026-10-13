/*
 * Problem: 1541. 平衡括号字符串的最少插入次数 / Minimum Insertions to Balance a Parentheses String
 * Link: https://leetcode.cn/problems/minimum-insertions-to-balance-a-parentheses-string/
 * Chapter: 数据结构
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
    int minInsertions(string s) {
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
        string s = "(()))";
        auto localResult = solution.minInsertions(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "())";
        auto localResult = solution.minInsertions(s);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "))())(";
        auto localResult = solution.minInsertions(s);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "((((((";
        auto localResult = solution.minInsertions(s);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = ")))))))";
        auto localResult = solution.minInsertions(s);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
