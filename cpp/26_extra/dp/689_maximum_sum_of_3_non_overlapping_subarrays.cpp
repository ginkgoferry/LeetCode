/*
 * Problem: 689. 三个无重叠子数组的最大和 / Maximum Sum of 3 Non-Overlapping Subarrays
 * Link: https://leetcode.cn/problems/maximum-sum-of-3-non-overlapping-subarrays/
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
    vector<int> maxSumOfThreeSubarrays(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 2, 1, 2, 6, 7, 5, 1};
        int k = 2;
        auto localResult = solution.maxSumOfThreeSubarrays(nums, k);
        vector<int> expected = {0, 3, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 2, 1, 2, 1, 2, 1};
        int k = 2;
        auto localResult = solution.maxSumOfThreeSubarrays(nums, k);
        vector<int> expected = {0, 2, 4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
