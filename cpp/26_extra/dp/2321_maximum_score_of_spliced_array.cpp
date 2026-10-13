/*
 * Problem: 2321. 拼接数组的最大分数 / Maximum Score Of Spliced Array
 * Link: https://leetcode.cn/problems/maximum-score-of-spliced-array/
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
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {60, 60, 60};
        vector<int> nums2 = {10, 90, 10};
        auto localResult = solution.maximumsSplicedArray(nums1, nums2);
        int expected = 210;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {20, 40, 20, 70, 30};
        vector<int> nums2 = {50, 20, 50, 40, 20};
        auto localResult = solution.maximumsSplicedArray(nums1, nums2);
        int expected = 220;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {7, 11, 13};
        vector<int> nums2 = {1, 1, 1};
        auto localResult = solution.maximumsSplicedArray(nums1, nums2);
        int expected = 31;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
