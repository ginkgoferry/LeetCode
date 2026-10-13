/*
 * Problem: 1438. 绝对差不超过限制的最长连续子数组 / Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit
 * Link: https://leetcode.cn/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/
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
    int longestSubarray(vector<int>& nums, int limit) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)limit;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {8, 2, 4, 7};
        int limit = 4;
        auto localResult = solution.longestSubarray(nums, limit);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, 1, 2, 4, 7, 2};
        int limit = 5;
        auto localResult = solution.longestSubarray(nums, limit);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 2, 2, 2, 4, 4, 2, 2};
        int limit = 0;
        auto localResult = solution.longestSubarray(nums, limit);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
