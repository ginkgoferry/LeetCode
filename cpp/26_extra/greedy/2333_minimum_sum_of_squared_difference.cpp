/*
 * Problem: 2333. 最小差值平方和 / Minimum Sum of Squared Difference
 * Link: https://leetcode.cn/problems/minimum-sum-of-squared-difference/
 * Chapter: 贪心算法
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
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        (void)k1;
        (void)k2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {1, 2, 3, 4};
        vector<int> nums2 = {2, 10, 20, 19};
        int k1 = 0;
        int k2 = 0;
        auto localResult = solution.minSumSquareDiff(nums1, nums2, k1, k2);
        long long expected = 579LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 4, 10, 12};
        vector<int> nums2 = {5, 8, 6, 9};
        int k1 = 1;
        int k2 = 1;
        auto localResult = solution.minSumSquareDiff(nums1, nums2, k1, k2);
        long long expected = 43LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
