/*
 * Problem: 2760. 最长奇偶子数组 / Longest Even Odd Subarray With Threshold
 * Link: https://leetcode.cn/problems/longest-even-odd-subarray-with-threshold/
 * Chapter: 分组循环
 * Difficulty: Easy
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
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)threshold;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 2, 5, 4};
        int threshold = 5;
        auto localResult = solution.longestAlternatingSubarray(nums, threshold);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2};
        int threshold = 2;
        auto localResult = solution.longestAlternatingSubarray(nums, threshold);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 3, 4, 5};
        int threshold = 4;
        auto localResult = solution.longestAlternatingSubarray(nums, threshold);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {0};
        int threshold = 0;
        auto localResult = solution.longestAlternatingSubarray(nums, threshold);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
