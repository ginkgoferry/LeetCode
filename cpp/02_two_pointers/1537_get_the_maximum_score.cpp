/*
 * Problem: 1537. 最大得分 / Get the Maximum Score
 * Link: https://leetcode.cn/problems/get-the-maximum-score/
 * Chapter: 双指针
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
    int maxSum(vector<int>& nums1, vector<int>& nums2) {
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
        vector<int> nums1 = {2, 4, 5, 8, 10};
        vector<int> nums2 = {4, 6, 8, 9};
        auto localResult = solution.maxSum(nums1, nums2);
        int expected = 30;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 3, 5, 7, 9};
        vector<int> nums2 = {3, 5, 100};
        auto localResult = solution.maxSum(nums1, nums2);
        int expected = 109;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {1, 2, 3, 4, 5};
        vector<int> nums2 = {6, 7, 8, 9, 10};
        auto localResult = solution.maxSum(nums1, nums2);
        int expected = 40;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
