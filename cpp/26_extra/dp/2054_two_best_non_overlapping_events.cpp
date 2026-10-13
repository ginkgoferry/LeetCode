/*
 * Problem: 2054. 两个最好的不重叠活动 / Two Best Non-Overlapping Events
 * Link: https://leetcode.cn/problems/two-best-non-overlapping-events/
 * Chapter: 栈
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
    int maxTwoEvents(vector<vector<int>>& events) {
        // TODO: 在这里实现你的解法。
        (void)events;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> events = {{1, 3, 2}, {4, 5, 2}, {2, 4, 3}};
        auto localResult = solution.maxTwoEvents(events);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> events = {{1, 3, 2}, {4, 5, 2}, {1, 5, 5}};
        auto localResult = solution.maxTwoEvents(events);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> events = {{1, 5, 3}, {1, 5, 1}, {6, 6, 5}};
        auto localResult = solution.maxTwoEvents(events);
        int expected = 8;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
