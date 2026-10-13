/*
 * Problem: 2444. 统计定界子数组的数目 / Count Subarrays With Fixed Bounds
 * Link: https://leetcode.cn/problems/count-subarrays-with-fixed-bounds/
 * Chapter: 双指针
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
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)minK;
        (void)maxK;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 3, 5, 2, 7, 5};
        int minK = 1;
        int maxK = 5;
        auto localResult = solution.countSubarrays(nums, minK, maxK);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 1, 1};
        int minK = 1;
        int maxK = 1;
        auto localResult = solution.countSubarrays(nums, minK, maxK);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
