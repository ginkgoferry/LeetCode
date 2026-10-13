/*
 * Problem: LCP 8. 剧情触发时间 / 剧情触发时间
 * Link: https://leetcode.cn/problems/ju-qing-hong-fa-shi-jian/
 * Chapter: 二分查找
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
    vector<int> getTriggerTime(vector<vector<int>>& increase, vector<vector<int>>& requirements) {
        // TODO: 在这里实现你的解法。
        (void)increase;
        (void)requirements;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> increase = {{2, 8, 4}, {2, 5, 0}, {10, 9, 8}};
        vector<vector<int>> requirements = {{2, 11, 3}, {15, 10, 7}, {9, 17, 12}, {8, 1, 14}};
        auto localResult = solution.getTriggerTime(increase, requirements);
        vector<int> expected = {2, -1, 3, -1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> increase = {{0, 4, 5}, {4, 8, 8}, {8, 6, 1}, {10, 10, 0}};
        vector<vector<int>> requirements = {{12, 11, 16}, {20, 2, 6}, {9, 2, 6}, {10, 18, 3}, {8, 14, 9}};
        auto localResult = solution.getTriggerTime(increase, requirements);
        vector<int> expected = {-1, 4, 3, 3, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> increase = {{1, 1, 1}};
        vector<vector<int>> requirements = {{0, 0, 0}};
        auto localResult = solution.getTriggerTime(increase, requirements);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
