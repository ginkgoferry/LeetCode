/*
 * Problem: 3165. 不包含相邻元素的子序列的最大和 / Maximum Sum of Subsequence With Non-adjacent Elements
 * Link: https://leetcode.cn/problems/maximum-sum-of-subsequence-with-non-adjacent-elements/
 * Chapter: 数据结构
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
    int maximumSumSubsequence(vector<int>& nums, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 5, 9};
        vector<vector<int>> queries = {{1, -2}, {0, -3}};
        auto localResult = solution.maximumSumSubsequence(nums, queries);
        int expected = 21;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {0, -1};
        vector<vector<int>> queries = {{0, -5}};
        auto localResult = solution.maximumSumSubsequence(nums, queries);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
