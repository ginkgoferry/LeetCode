/*
 * Problem: 300. 最长递增子序列 / Longest Increasing Subsequence
 * Link: https://leetcode.cn/problems/longest-increasing-subsequence/
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
    int lengthOfLIS(vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {10, 9, 2, 5, 3, 7, 101, 18};
        assert((solution.lengthOfLIS(nums) == 4));
    }

    {
        vector<int> nums = {0, 1, 0, 3, 2, 3};
        assert((solution.lengthOfLIS(nums) == 4));
    }

    {
        vector<int> nums = {7, 7, 7, 7, 7, 7, 7};
        assert((solution.lengthOfLIS(nums) == 1));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
