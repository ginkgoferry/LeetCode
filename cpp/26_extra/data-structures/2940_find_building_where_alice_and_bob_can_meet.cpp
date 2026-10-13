/*
 * Problem: 2940. 找到 Alice 和 Bob 可以相遇的建筑 / Find Building Where Alice and Bob Can Meet
 * Link: https://leetcode.cn/problems/find-building-where-alice-and-bob-can-meet/
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
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)heights;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> heights = {6, 4, 8, 5, 2, 7};
        vector<vector<int>> queries = {{0, 1}, {0, 3}, {2, 4}, {3, 4}, {2, 2}};
        auto localResult = solution.leftmostBuildingQueries(heights, queries);
        vector<int> expected = {2, 5, -1, 5, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> heights = {5, 3, 8, 2, 6, 1, 4, 6};
        vector<vector<int>> queries = {{0, 7}, {3, 5}, {5, 2}, {3, 0}, {1, 6}};
        auto localResult = solution.leftmostBuildingQueries(heights, queries);
        vector<int> expected = {7, 6, -1, 4, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
