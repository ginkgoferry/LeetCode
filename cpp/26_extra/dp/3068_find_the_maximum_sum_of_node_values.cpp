/*
 * Problem: 3068. 最大节点价值之和 / Find the Maximum Sum of Node Values
 * Link: https://leetcode.cn/problems/find-the-maximum-sum-of-node-values/
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
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 1};
        int k = 3;
        vector<vector<int>> edges = {{0, 1}, {0, 2}};
        auto localResult = solution.maximumValueSum(nums, k, edges);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3};
        int k = 7;
        vector<vector<int>> edges = {{0, 1}};
        auto localResult = solution.maximumValueSum(nums, k, edges);
        long long expected = 9LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {7, 7, 7, 7, 7, 7};
        int k = 3;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 3}, {0, 4}, {0, 5}};
        auto localResult = solution.maximumValueSum(nums, k, edges);
        long long expected = 42LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
