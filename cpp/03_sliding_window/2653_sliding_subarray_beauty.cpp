/*
 * Problem: 2653. 滑动子数组的美丽值 / Sliding Subarray Beauty
 * Link: https://leetcode.cn/problems/sliding-subarray-beauty/
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
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, -1, -3, -2, 3};
        int k = 3;
        int x = 2;
        auto localResult = solution.getSubarrayBeauty(nums, k, x);
        vector<int> expected = {-1, -2, -2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, -2, -3, -4, -5};
        int k = 2;
        int x = 2;
        auto localResult = solution.getSubarrayBeauty(nums, k, x);
        vector<int> expected = {-1, -2, -3, -4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-3, 1, 2, -3, 0, -3};
        int k = 2;
        int x = 1;
        auto localResult = solution.getSubarrayBeauty(nums, k, x);
        vector<int> expected = {-3, 0, -3, -3, -3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
