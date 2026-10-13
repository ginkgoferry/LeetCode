/*
 * Problem: 4. 寻找两个正序数组的中位数 / Median of Two Sorted Arrays
 * Link: https://leetcode.cn/problems/median-of-two-sorted-arrays/
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
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {1, 3};
        vector<int> nums2 = {2};
        assert((solution.findMedianSortedArrays(nums1, nums2) == 2.0));
    }

    {
        vector<int> nums1 = {1, 2};
        vector<int> nums2 = {3, 4};
        assert((solution.findMedianSortedArrays(nums1, nums2) == 2.5));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
