/*
 * Problem: 3919. 在下标间移动的最小代价 / Minimum Cost to Move Between Indices
 * Link: https://leetcode.cn/problems/minimum-cost-to-move-between-indices/
 * Chapter: 数据结构
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
    vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {-5, -2, 3};
        vector<vector<int>> queries = {{0, 2}, {2, 0}, {1, 2}};
        auto localResult = solution.minCost(nums, queries);
        vector<int> expected = {6, 2, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 2, 3, 9};
        vector<vector<int>> queries = {{3, 0}, {1, 2}, {2, 0}};
        auto localResult = solution.minCost(nums, queries);
        vector<int> expected = {4, 1, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
