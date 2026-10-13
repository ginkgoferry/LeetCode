/*
 * Problem: 1818. 绝对差值和 / Minimum Absolute Sum Difference
 * Link: https://leetcode.cn/problems/minimum-absolute-sum-difference/
 * Chapter: 二分查找
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
    int minAbsoluteSumDiff(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {1, 7, 5};
        vector<int> nums2 = {2, 3, 5};
        auto localResult = solution.minAbsoluteSumDiff(nums1, nums2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {2, 4, 6, 8, 10};
        vector<int> nums2 = {2, 4, 6, 8, 10};
        auto localResult = solution.minAbsoluteSumDiff(nums1, nums2);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 10, 4, 4, 2, 7};
        vector<int> nums2 = {9, 3, 5, 1, 7, 4};
        auto localResult = solution.minAbsoluteSumDiff(nums1, nums2);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
