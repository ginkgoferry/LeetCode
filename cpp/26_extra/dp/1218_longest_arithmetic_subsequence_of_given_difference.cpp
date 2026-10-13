/*
 * Problem: 1218. 最长定差子序列 / Longest Arithmetic Subsequence of Given Difference
 * Link: https://leetcode.cn/problems/longest-arithmetic-subsequence-of-given-difference/
 * Chapter: 动态规划
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
    int longestSubsequence(vector<int>& arr, int difference) {
        // TODO: 在这里实现你的解法。
        (void)arr;
        (void)difference;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arr = {1, 2, 3, 4};
        int difference = 1;
        auto localResult = solution.longestSubsequence(arr, difference);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 3, 5, 7};
        int difference = 1;
        auto localResult = solution.longestSubsequence(arr, difference);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arr = {1, 5, 7, 8, 5, 3, 4, 2, 1};
        int difference = -2;
        auto localResult = solution.longestSubsequence(arr, difference);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
