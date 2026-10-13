/*
 * Problem: 3500. 将数组分割为子数组的最小代价 / Minimum Cost to Divide Array Into Subarrays
 * Link: https://leetcode.cn/problems/minimum-cost-to-divide-array-into-subarrays/
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
    long long minimumCost(vector<int>& nums, vector<int>& cost, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)cost;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 1, 4};
        vector<int> cost = {4, 6, 6};
        int k = 1;
        auto localResult = solution.minimumCost(nums, cost, k);
        long long expected = 110LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 8, 5, 1, 14, 2, 2, 12, 1};
        vector<int> cost = {7, 2, 8, 4, 2, 2, 1, 1, 2};
        int k = 7;
        auto localResult = solution.minimumCost(nums, cost, k);
        long long expected = 985LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
