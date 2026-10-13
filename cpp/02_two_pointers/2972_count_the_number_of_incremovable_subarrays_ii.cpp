/*
 * Problem: 2972. 统计移除递增子数组的数目 II / Count the Number of Incremovable Subarrays II
 * Link: https://leetcode.cn/problems/count-the-number-of-incremovable-subarrays-ii/
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
    long long incremovableSubarrayCount(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 3, 4};
        auto localResult = solution.incremovableSubarrayCount(nums);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {6, 5, 7, 8};
        auto localResult = solution.incremovableSubarrayCount(nums);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {8, 7, 6, 6};
        auto localResult = solution.incremovableSubarrayCount(nums);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
