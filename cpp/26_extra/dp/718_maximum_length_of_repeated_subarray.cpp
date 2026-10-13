/*
 * Problem: 718. 最长重复子数组 / Maximum Length of Repeated Subarray
 * Link: https://leetcode.cn/problems/maximum-length-of-repeated-subarray/
 * Chapter: 动态规划
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
    int findLength(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {1, 2, 3, 2, 1};
        vector<int> nums2 = {3, 2, 1, 4, 7};
        auto localResult = solution.findLength(nums1, nums2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {0, 0, 0, 0, 0};
        vector<int> nums2 = {0, 0, 0, 0, 0};
        auto localResult = solution.findLength(nums1, nums2);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
