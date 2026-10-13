/*
 * Problem: 2547. 拆分数组的最小代价 / Minimum Cost to Split an Array
 * Link: https://leetcode.cn/problems/minimum-cost-to-split-an-array/
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
    int minCost(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 2, 1, 3, 3};
        int k = 2;
        auto localResult = solution.minCost(nums, k);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 2, 1};
        int k = 2;
        auto localResult = solution.minCost(nums, k);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 2, 1};
        int k = 5;
        auto localResult = solution.minCost(nums, k);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
