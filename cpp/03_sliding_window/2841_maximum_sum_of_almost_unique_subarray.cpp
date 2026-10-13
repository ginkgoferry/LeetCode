/*
 * Problem: 2841. 几乎唯一子数组的最大和 / Maximum Sum of Almost Unique Subarray
 * Link: https://leetcode.cn/problems/maximum-sum-of-almost-unique-subarray/
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
    long long maxSum(vector<int>& nums, int m, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)m;
        (void)k;
        return 0;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 6, 7, 3, 1, 7};
        int m = 3;
        int k = 4;
        auto localResult = solution.maxSum(nums, m, k);
        long long expected = 18LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 9, 9, 2, 4, 5, 4};
        int m = 1;
        int k = 3;
        auto localResult = solution.maxSum(nums, m, k);
        long long expected = 23LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 1, 2, 1, 2, 1};
        int m = 3;
        int k = 3;
        auto localResult = solution.maxSum(nums, m, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {1000000000, 1000000000, 1000000000, 1000000000};
        int m = 1;
        int k = 4;
        auto localResult = solution.maxSum(nums, m, k);
        long long expected = 4000000000LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
