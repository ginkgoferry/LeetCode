/*
 * Problem: 2499. 让数组不相等的最小总代价 / Minimum Total Cost to Make Arrays Unequal
 * Link: https://leetcode.cn/problems/minimum-total-cost-to-make-arrays-unequal/
 * Chapter: 贪心算法
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
    long long minimumTotalCost(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {1, 2, 3, 4, 5};
        vector<int> nums2 = {1, 2, 3, 4, 5};
        auto localResult = solution.minimumTotalCost(nums1, nums2);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {2, 2, 2, 1, 3};
        vector<int> nums2 = {1, 2, 2, 3, 3};
        auto localResult = solution.minimumTotalCost(nums1, nums2);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 2, 2};
        vector<int> nums2 = {1, 2, 2};
        auto localResult = solution.minimumTotalCost(nums1, nums2);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
