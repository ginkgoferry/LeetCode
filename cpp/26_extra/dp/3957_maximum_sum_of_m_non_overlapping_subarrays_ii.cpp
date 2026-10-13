/*
 * Problem: 3957. M 个非重叠子数组最大和 II / Maximum Sum of M Non-Overlapping Subarrays II
 * Link: https://leetcode.cn/problems/maximum-sum-of-m-non-overlapping-subarrays-ii/
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
    long long maximumSum(vector<int>& nums, int m, int l, int r) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)m;
        (void)l;
        (void)r;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {4, 1, -5, 2};
        int m = 2;
        int l = 1;
        int r = 3;
        auto localResult = solution.maximumSum(nums, m, l, r);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 0, 3, 4};
        int m = 2;
        int l = 1;
        int r = 2;
        auto localResult = solution.maximumSum(nums, m, l, r);
        long long expected = 8LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, 7, -4};
        int m = 1;
        int l = 2;
        int r = 3;
        auto localResult = solution.maximumSum(nums, m, l, r);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-3, -4, -1};
        int m = 2;
        int l = 1;
        int r = 2;
        auto localResult = solution.maximumSum(nums, m, l, r);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
