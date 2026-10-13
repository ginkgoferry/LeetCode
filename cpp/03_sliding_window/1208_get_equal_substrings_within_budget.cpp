/*
 * Problem: 1208. 尽可能使字符串相等 / Get Equal Substrings Within Budget
 * Link: https://leetcode.cn/problems/get-equal-substrings-within-budget/
 * Chapter: 滑动窗口
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
    int equalSubstring(string s, string t, int maxCost) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        (void)maxCost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcd";
        string t = "bcdf";
        int maxCost = 3;
        auto localResult = solution.equalSubstring(s, t, maxCost);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcd";
        string t = "cdef";
        int maxCost = 3;
        auto localResult = solution.equalSubstring(s, t, maxCost);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcd";
        string t = "acde";
        int maxCost = 0;
        auto localResult = solution.equalSubstring(s, t, maxCost);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
