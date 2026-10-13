/*
 * Problem: 3132. 找出与数组相加的整数 II / Find the Integer Added to Array II
 * Link: https://leetcode.cn/problems/find-the-integer-added-to-array-ii/
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
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {4, 20, 16, 12, 8};
        vector<int> nums2 = {14, 18, 10};
        auto localResult = solution.minimumAddedInteger(nums1, nums2);
        int expected = -2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {3, 5, 5, 3};
        vector<int> nums2 = {7, 7};
        auto localResult = solution.minimumAddedInteger(nums1, nums2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums1 = {1, 1, 1};
        vector<int> nums2 = {1};
        auto localResult = solution.minimumAddedInteger(nums1, nums2);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
