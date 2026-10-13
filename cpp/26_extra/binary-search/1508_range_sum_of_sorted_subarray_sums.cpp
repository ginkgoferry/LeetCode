/*
 * Problem: 1508. 子数组和排序后的区间和 / Range Sum of Sorted Subarray Sums
 * Link: https://leetcode.cn/problems/range-sum-of-sorted-subarray-sums/
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
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)n;
        (void)left;
        (void)right;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4};
        int n = 4;
        int left = 1;
        int right = 5;
        auto localResult = solution.rangeSum(nums, n, left, right);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4};
        int n = 4;
        int left = 3;
        int right = 4;
        auto localResult = solution.rangeSum(nums, n, left, right);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4};
        int n = 4;
        int left = 1;
        int right = 10;
        auto localResult = solution.rangeSum(nums, n, left, right);
        int expected = 50;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
