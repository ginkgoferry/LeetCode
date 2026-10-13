/*
 * Problem: 1855. 下标对中的最大距离 / Maximum Distance Between a Pair of Values
 * Link: https://leetcode.cn/problems/maximum-distance-between-a-pair-of-values/
 * Chapter: 双指针
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
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {55, 30, 5, 4, 2};
        vector<int> nums2 = {100, 20, 10, 10, 5};
        auto localResult = solution.maxDistance(nums1, nums2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {2, 2, 2};
        vector<int> nums2 = {10, 10, 1};
        auto localResult = solution.maxDistance(nums1, nums2);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {30, 29, 19, 5};
        vector<int> nums2 = {25, 25, 25, 25, 25};
        auto localResult = solution.maxDistance(nums1, nums2);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
