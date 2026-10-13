/*
 * Problem: 3430. 最多 K 个元素的子数组的最值之和 / Maximum and Minimum Sums of at Most Size K Subarrays
 * Link: https://leetcode.cn/problems/maximum-and-minimum-sums-of-at-most-size-k-subarrays/
 * Chapter: 栈
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
    long long minMaxSubarraySum(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 2, 3};
        int k = 2;
        auto localResult = solution.minMaxSubarraySum(nums, k);
        long long expected = 20LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, -3, 1};
        int k = 2;
        auto localResult = solution.minMaxSubarraySum(nums, k);
        long long expected = -6LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
