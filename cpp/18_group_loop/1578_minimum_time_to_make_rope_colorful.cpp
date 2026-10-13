/*
 * Problem: 1578. 使绳子变成彩色的最短时间 / Minimum Time to Make Rope Colorful
 * Link: https://leetcode.cn/problems/minimum-time-to-make-rope-colorful/
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
    int minCost(string colors, vector<int>& neededTime) {
        // TODO: 在这里实现你的解法。
        (void)colors;
        (void)neededTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string colors = "abaac";
        vector<int> neededTime = {1, 2, 3, 4, 5};
        auto localResult = solution.minCost(colors, neededTime);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string colors = "abc";
        vector<int> neededTime = {1, 2, 3};
        auto localResult = solution.minCost(colors, neededTime);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string colors = "aabaa";
        vector<int> neededTime = {1, 2, 3, 4, 1};
        auto localResult = solution.minCost(colors, neededTime);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string colors = "a";
        vector<int> neededTime = {1};
        auto localResult = solution.minCost(colors, neededTime);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
