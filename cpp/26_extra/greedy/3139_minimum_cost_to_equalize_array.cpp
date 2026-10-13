/*
 * Problem: 3139. 使数组中所有元素相等的最小开销 / Minimum Cost to Equalize Array
 * Link: https://leetcode.cn/problems/minimum-cost-to-equalize-array/
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
    int minCostToEqualizeArray(vector<int>& nums, int cost1, int cost2) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)cost1;
        (void)cost2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {4, 1};
        int cost1 = 5;
        int cost2 = 2;
        auto localResult = solution.minCostToEqualizeArray(nums, cost1, cost2);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3, 3, 3, 5};
        int cost1 = 2;
        int cost2 = 1;
        auto localResult = solution.minCostToEqualizeArray(nums, cost1, cost2);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 5, 3};
        int cost1 = 1;
        int cost2 = 3;
        auto localResult = solution.minCostToEqualizeArray(nums, cost1, cost2);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
