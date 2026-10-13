/*
 * Problem: 4032. 至多 K 个不同质因数集合的最长子数组 / Longest Subarray With at Most K Distinct Prime Factors
 * Link: https://leetcode.cn/problems/longest-subarray-with-at-most-k-distinct-prime-factors/
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
    int longestSubarray(vector<int>& nums, int k) {
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
        vector<int> nums = {7, 6, 10, 12, 11};
        int k = 3;
        auto localResult = solution.longestSubarray(nums, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 6, 9, 18};
        int k = 4;
        auto localResult = solution.longestSubarray(nums, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {6, 10, 15};
        int k = 2;
        auto localResult = solution.longestSubarray(nums, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
