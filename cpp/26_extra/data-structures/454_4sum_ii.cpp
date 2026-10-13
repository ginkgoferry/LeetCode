/*
 * Problem: 454. 四数相加 II / 4Sum II
 * Link: https://leetcode.cn/problems/4sum-ii/
 * Chapter: 数据结构
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
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        // TODO: 在这里实现你的解法。
        (void)nums1;
        (void)nums2;
        (void)nums3;
        (void)nums4;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums1 = {1, 2};
        vector<int> nums2 = {-2, -1};
        vector<int> nums3 = {-1, 2};
        vector<int> nums4 = {0, 2};
        auto localResult = solution.fourSumCount(nums1, nums2, nums3, nums4);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {0};
        vector<int> nums2 = {0};
        vector<int> nums3 = {0};
        vector<int> nums4 = {0};
        auto localResult = solution.fourSumCount(nums1, nums2, nums3, nums4);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
