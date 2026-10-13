/*
 * Problem: 2831. 找出最长等值子数组 / Find the Longest Equal Subarray
 * Link: https://leetcode.cn/problems/find-the-longest-equal-subarray/
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
    int longestEqualSubarray(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 3, 2, 3, 1, 3};
        int k = 3;
        auto localResult = solution.longestEqualSubarray(nums, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 2, 2, 1, 1};
        int k = 2;
        auto localResult = solution.longestEqualSubarray(nums, k);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
