/*
 * Problem: 3381. 长度可被 K 整除的子数组的最大元素和 / Maximum Subarray Sum With Length Divisible by K
 * Link: https://leetcode.cn/problems/maximum-subarray-sum-with-length-divisible-by-k/
 * Chapter: 动态规划
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
    long long maxSubarraySum(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 2};
        int k = 1;
        auto localResult = solution.maxSubarraySum(nums, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, -2, -3, -4, -5};
        int k = 4;
        auto localResult = solution.maxSubarraySum(nums, k);
        long long expected = -10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-5, 1, 2, -3, 4};
        int k = 2;
        auto localResult = solution.maxSubarraySum(nums, k);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
