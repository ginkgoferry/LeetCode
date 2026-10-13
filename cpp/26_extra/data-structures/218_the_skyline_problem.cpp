/*
 * Problem: 218. 天际线问题 / The Skyline Problem
 * Link: https://leetcode.cn/problems/the-skyline-problem/
 * Chapter: 数据结构
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
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        // TODO: 在这里实现你的解法。
        (void)buildings;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> buildings = {{2, 9, 10}, {3, 7, 15}, {5, 12, 12}, {15, 20, 10}, {19, 24, 8}};
        auto localResult = solution.getSkyline(buildings);
        vector<vector<int>> expected = {{2, 10}, {3, 15}, {7, 12}, {12, 0}, {15, 10}, {20, 8}, {24, 0}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> buildings = {{0, 2, 3}, {2, 5, 3}};
        auto localResult = solution.getSkyline(buildings);
        vector<vector<int>> expected = {{0, 3}, {5, 0}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
