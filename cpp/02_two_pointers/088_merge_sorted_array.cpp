/*
 * Problem: 88. 合并两个有序数组 / Merge Sorted Array
 * Link: https://leetcode.cn/problems/merge-sorted-array/
 * Chapter: 双指针
 * Difficulty: Easy
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
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)m;
        (void)nums2;
        (void)n;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {1, 2, 3, 0, 0, 0};
        int m = 3;
        vector<int> nums2 = {2, 5, 6};
        int n = 3;
        solution.merge(nums1, m, nums2, n);
        vector<int> expected = {1, 2, 2, 3, 5, 6};
        assert((nums1 == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1};
        int m = 1;
        vector<int> nums2 = {};
        int n = 0;
        solution.merge(nums1, m, nums2, n);
        vector<int> expected = {1};
        assert((nums1 == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {0};
        int m = 0;
        vector<int> nums2 = {1};
        int n = 1;
        solution.merge(nums1, m, nums2, n);
        vector<int> expected = {1};
        assert((nums1 == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
