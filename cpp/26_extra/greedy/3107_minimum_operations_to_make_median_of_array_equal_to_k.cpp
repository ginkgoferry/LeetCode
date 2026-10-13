/*
 * Problem: 3107. 使数组中位数等于 K 的最少操作数 / Minimum Operations to Make Median of Array Equal to K
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-median-of-array-equal-to-k/
 * Chapter: 贪心算法
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
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
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
        vector<int> nums = {2, 5, 6, 8, 5};
        int k = 4;
        auto localResult = solution.minOperationsToMakeMedianK(nums, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 5, 6, 8, 5};
        int k = 7;
        auto localResult = solution.minOperationsToMakeMedianK(nums, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 5, 6};
        int k = 4;
        auto localResult = solution.minOperationsToMakeMedianK(nums, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
