/*
 * Problem: 3499. 操作后最大活跃区段数 I / Maximize Active Section with Trade I
 * Link: https://leetcode.cn/problems/maximize-active-section-with-trade-i/
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
    int maxActiveSectionsAfterTrade(string s) {
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
        string s = "01";
        auto localResult = solution.maxActiveSectionsAfterTrade(s);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "0100";
        auto localResult = solution.maxActiveSectionsAfterTrade(s);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1000100";
        auto localResult = solution.maxActiveSectionsAfterTrade(s);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "01010";
        auto localResult = solution.maxActiveSectionsAfterTrade(s);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
