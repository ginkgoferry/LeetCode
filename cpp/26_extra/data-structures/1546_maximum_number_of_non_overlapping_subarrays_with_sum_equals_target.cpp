/*
 * Problem: 1546. 和为目标值且不重叠的非空子数组的最大数目 / Maximum Number of Non-Overlapping Subarrays With Sum Equals Target
 * Link: https://leetcode.cn/problems/maximum-number-of-non-overlapping-subarrays-with-sum-equals-target/
 * Chapter: 数据结构
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
    int maxNonOverlapping(vector<int>& nums, int target) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 1, 1, 1, 1};
        int target = 2;
        auto localResult = solution.maxNonOverlapping(nums, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, 3, 5, 1, 4, 2, -9};
        int target = 6;
        auto localResult = solution.maxNonOverlapping(nums, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-2, 6, 6, 3, 5, 4, 1, 2, 8};
        int target = 10;
        auto localResult = solution.maxNonOverlapping(nums, target);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, 0, 0};
        int target = 0;
        auto localResult = solution.maxNonOverlapping(nums, target);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
