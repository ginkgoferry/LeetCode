/*
 * Problem: 3962. 至多 K 次交换后最大子数组和 / Maximum Subarray Sum After at Most K Swaps
 * Link: https://leetcode.cn/problems/maximum-subarray-sum-after-at-most-k-swaps/
 * Chapter: 数据结构
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
    long long maxSum(vector<int>& nums, int k) {
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
        vector<int> nums = {1, -1, 0, 2};
        int k = 1;
        auto localResult = solution.maxSum(nums, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 3, 2, 4};
        int k = 2;
        auto localResult = solution.maxSum(nums, k);
        long long expected = 13LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, -2};
        int k = 0;
        auto localResult = solution.maxSum(nums, k);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
