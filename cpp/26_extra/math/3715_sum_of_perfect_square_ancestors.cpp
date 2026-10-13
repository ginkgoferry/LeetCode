/*
 * Problem: 3715. 完全平方数的祖先个数总和 / Sum of Perfect Square Ancestors
 * Link: https://leetcode.cn/problems/sum-of-perfect-square-ancestors/
 * Chapter: 数学
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
    long long sumOfAncestors(int n, vector<vector<int>>& edges, vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        vector<int> nums = {2, 8, 2};
        auto localResult = solution.sumOfAncestors(n, edges, nums);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {0, 2}};
        vector<int> nums = {1, 2, 4};
        auto localResult = solution.sumOfAncestors(n, edges, nums);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}};
        vector<int> nums = {1, 2, 9, 4};
        auto localResult = solution.sumOfAncestors(n, edges, nums);
        long long expected = 2LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
