/*
 * Problem: 2461. 长度为 K 子数组中的最大和 / Maximum Sum of Distinct Subarrays With Length K
 * Link: https://leetcode.cn/problems/maximum-sum-of-distinct-subarrays-with-length-k/
 * Chapter: 滑动窗口
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
    long long maximumSubarraySum(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return 0;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 5, 4, 2, 9, 9, 9};
        int k = 3;
        auto localResult = solution.maximumSubarraySum(nums, k);
        long long expected = 15LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 4, 4};
        int k = 3;
        auto localResult = solution.maximumSubarraySum(nums, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {100000};
        int k = 1;
        auto localResult = solution.maximumSubarraySum(nums, k);
        long long expected = 100000LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
