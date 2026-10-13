/*
 * Problem: 2040. 两个有序数组的第 K 小乘积 / Kth Smallest Product of Two Sorted Arrays
 * Link: https://leetcode.cn/problems/kth-smallest-product-of-two-sorted-arrays/
 * Chapter: 二分查找
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
    long long kthSmallestProduct(vector<int>& nums1, vector<int>& nums2, long long k) {
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
        vector<int> nums1 = {2, 5};
        vector<int> nums2 = {3, 4};
        long long k = 2LL;
        auto localResult = solution.kthSmallestProduct(nums1, nums2, k);
        long long expected = 8LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {-4, -2, 0, 3};
        vector<int> nums2 = {2, 4};
        long long k = 6LL;
        auto localResult = solution.kthSmallestProduct(nums1, nums2, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {-2, -1, 0, 1, 2};
        vector<int> nums2 = {-3, -1, 2, 4, 5};
        long long k = 3LL;
        auto localResult = solution.kthSmallestProduct(nums1, nums2, k);
        long long expected = -6LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
