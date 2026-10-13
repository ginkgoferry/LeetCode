/*
 * Problem: 2542. 最大子序列的分数 / Maximum Subsequence Score
 * Link: https://leetcode.cn/problems/maximum-subsequence-score/
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
        vector<int> nums1 = {1, 3, 3, 2};
        vector<int> nums2 = {2, 1, 3, 4};
        int k = 3;
        auto localResult = solution.maxScore(nums1, nums2, k);
        long long expected = 12LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums1 = {4, 2, 3, 1, 1};
        vector<int> nums2 = {7, 5, 10, 9, 6};
        int k = 1;
        auto localResult = solution.maxScore(nums1, nums2, k);
        long long expected = 30LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
