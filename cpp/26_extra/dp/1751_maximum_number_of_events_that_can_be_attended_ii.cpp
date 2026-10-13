/*
 * Problem: 1751. 最多可以参加的会议数目 II / Maximum Number of Events That Can Be Attended II
 * Link: https://leetcode.cn/problems/maximum-number-of-events-that-can-be-attended-ii/
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
    int maxValue(vector<vector<int>>& events, int k) {
        // TODO: 在这里实现你的解法。
        (void)events;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> events = {{1, 2, 4}, {3, 4, 3}, {2, 3, 1}};
        int k = 2;
        auto localResult = solution.maxValue(events, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> events = {{1, 2, 4}, {3, 4, 3}, {2, 3, 10}};
        int k = 2;
        auto localResult = solution.maxValue(events, k);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> events = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}, {4, 4, 4}};
        int k = 3;
        auto localResult = solution.maxValue(events, k);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
