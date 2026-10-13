/*
 * Problem: 1665. 完成所有任务的最少初始能量 / Minimum Initial Energy to Finish Tasks
 * Link: https://leetcode.cn/problems/minimum-initial-energy-to-finish-tasks/
 * Chapter: 贪心算法
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
    int minimumEffort(vector<vector<int>>& tasks) {
        // TODO: 在这里实现你的解法。
        (void)tasks;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> tasks = {{1, 2}, {2, 4}, {4, 8}};
        auto localResult = solution.minimumEffort(tasks);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> tasks = {{1, 3}, {2, 4}, {10, 11}, {10, 12}, {8, 9}};
        auto localResult = solution.minimumEffort(tasks);
        int expected = 32;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> tasks = {{1, 7}, {2, 8}, {3, 9}, {4, 10}, {5, 11}, {6, 12}};
        auto localResult = solution.minimumEffort(tasks);
        int expected = 27;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
