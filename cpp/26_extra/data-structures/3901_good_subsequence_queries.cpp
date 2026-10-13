/*
 * Problem: 3901. 好子序列查询 / Good Subsequence Queries
 * Link: https://leetcode.cn/problems/good-subsequence-queries/
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
    int countGoodSubseq(vector<int>& nums, int p, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)p;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {4, 8, 12, 16};
        int p = 2;
        vector<vector<int>> queries = {{0, 3}, {2, 6}};
        auto localResult = solution.countGoodSubseq(nums, p, queries);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 5, 7, 8};
        int p = 3;
        vector<vector<int>> queries = {{0, 6}, {1, 9}, {2, 3}};
        auto localResult = solution.countGoodSubseq(nums, p, queries);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 7, 9};
        int p = 2;
        vector<vector<int>> queries = {{1, 4}, {2, 8}};
        auto localResult = solution.countGoodSubseq(nums, p, queries);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
