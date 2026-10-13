/*
 * Problem: 3505. 使 K 个子数组内元素相等的最少操作数 / Minimum Operations to Make Elements Within K Subarrays Equal
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-elements-within-k-subarrays-equal/
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
    long long minOperations(vector<int>& nums, int x, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)x;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {5, -2, 1, 3, 7, 3, 6, 4, -1};
        int x = 3;
        int k = 2;
        auto localResult = solution.minOperations(nums, x, k);
        long long expected = 8LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {9, -2, -2, -2, 1, 5};
        int x = 2;
        int k = 2;
        auto localResult = solution.minOperations(nums, x, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
