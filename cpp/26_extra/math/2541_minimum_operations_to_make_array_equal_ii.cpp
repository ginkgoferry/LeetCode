/*
 * Problem: 2541. 使数组中所有元素相等的最小操作数 II / Minimum Operations to Make Array Equal II
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-array-equal-ii/
 * Chapter: 数学
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
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {4, 3, 1, 4};
        vector<int> nums2 = {1, 3, 7, 1};
        int k = 3;
        auto localResult = solution.minOperations(nums1, nums2, k);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {3, 8, 5, 2};
        vector<int> nums2 = {2, 4, 1, 6};
        int k = 1;
        auto localResult = solution.minOperations(nums1, nums2, k);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
