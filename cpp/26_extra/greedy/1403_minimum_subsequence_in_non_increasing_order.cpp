/*
 * Problem: 1403. 非递增顺序的最小子序列 / Minimum Subsequence in Non-Increasing Order
 * Link: https://leetcode.cn/problems/minimum-subsequence-in-non-increasing-order/
 * Chapter: 贪心算法
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
    vector<int> minSubsequence(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {4, 3, 10, 9, 8};
        auto localResult = solution.minSubsequence(nums);
        vector<int> expected = {10, 9};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 4, 7, 6, 7};
        auto localResult = solution.minSubsequence(nums);
        vector<int> expected = {7, 7, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
