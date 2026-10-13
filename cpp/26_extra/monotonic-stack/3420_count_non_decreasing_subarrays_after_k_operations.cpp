/*
 * Problem: 3420. 统计 K 次操作以内得到非递减子数组的数目 / Count Non-Decreasing Subarrays After K Operations
 * Link: https://leetcode.cn/problems/count-non-decreasing-subarrays-after-k-operations/
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
    long long countNonDecreasingSubarrays(vector<int>& nums, int k) {
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
        vector<int> nums = {6, 3, 1, 2, 4, 4};
        int k = 7;
        auto localResult = solution.countNonDecreasingSubarrays(nums, k);
        long long expected = 17LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {6, 3, 1, 3, 6};
        int k = 4;
        auto localResult = solution.countNonDecreasingSubarrays(nums, k);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
