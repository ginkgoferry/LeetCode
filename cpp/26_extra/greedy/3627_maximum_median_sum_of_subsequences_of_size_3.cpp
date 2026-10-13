/*
 * Problem: 3627. 中位数之和的最大值 / Maximum Median Sum of Subsequences of Size 3
 * Link: https://leetcode.cn/problems/maximum-median-sum-of-subsequences-of-size-3/
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
    long long maximumMedianSum(vector<int>& nums) {
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
        vector<int> nums = {2, 1, 3, 2, 1, 3};
        auto localResult = solution.maximumMedianSum(nums);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 10, 10, 10, 10};
        auto localResult = solution.maximumMedianSum(nums);
        long long expected = 20LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
