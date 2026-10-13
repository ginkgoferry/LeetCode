/*
 * Problem: 3836. 恰好 K 个下标对的最大得分 / Maximum Score Using Exactly K Pairs
 * Link: https://leetcode.cn/problems/maximum-score-using-exactly-k-pairs/
 * Chapter: 动态规划
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
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
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
        vector<int> nums1 = {1, 3, 2};
        vector<int> nums2 = {4, 5, 1};
        int k = 2;
        auto localResult = solution.maxScore(nums1, nums2, k);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {-2, 0, 5};
        vector<int> nums2 = {-3, 4, -1, 2};
        int k = 2;
        auto localResult = solution.maxScore(nums1, nums2, k);
        long long expected = 26LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {-3, -2};
        vector<int> nums2 = {1, 2};
        int k = 2;
        auto localResult = solution.maxScore(nums1, nums2, k);
        long long expected = -7LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
