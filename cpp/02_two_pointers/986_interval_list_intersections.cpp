/*
 * Problem: 986. 区间列表的交集 / Interval List Intersections
 * Link: https://leetcode.cn/problems/interval-list-intersections/
 * Chapter: 双指针
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
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        // TODO: 在这里实现你的解法。
        (void)firstList;
        (void)secondList;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> firstList = {{0, 2}, {5, 10}, {13, 23}, {24, 25}};
        vector<vector<int>> secondList = {{1, 5}, {8, 12}, {15, 24}, {25, 26}};
        auto localResult = solution.intervalIntersection(firstList, secondList);
        vector<vector<int>> expected = {{1, 2}, {5, 5}, {8, 10}, {15, 23}, {24, 24}, {25, 25}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> firstList = {{1, 3}, {5, 9}};
        vector<vector<int>> secondList = {};
        auto localResult = solution.intervalIntersection(firstList, secondList);
        vector<vector<int>> expected = {};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> firstList = {};
        vector<vector<int>> secondList = {{4, 8}, {10, 12}};
        auto localResult = solution.intervalIntersection(firstList, secondList);
        vector<vector<int>> expected = {};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> firstList = {{1, 7}};
        vector<vector<int>> secondList = {{3, 10}};
        auto localResult = solution.intervalIntersection(firstList, secondList);
        vector<vector<int>> expected = {{3, 7}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
