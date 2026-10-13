/*
 * Problem: 2925. 在树上执行操作以后得到的最大分数 / Maximum Score After Applying Operations on a Tree
 * Link: https://leetcode.cn/problems/maximum-score-after-applying-operations-on-a-tree/
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
    long long maximumScoreAfterOperations(vector<vector<int>>& edges, vector<int>& values) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)values;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 3}, {2, 4}, {4, 5}};
        vector<int> values = {5, 2, 5, 2, 1, 1};
        auto localResult = solution.maximumScoreAfterOperations(edges, values);
        long long expected = 11LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}};
        vector<int> values = {20, 10, 9, 7, 4, 3, 5};
        auto localResult = solution.maximumScoreAfterOperations(edges, values);
        long long expected = 40LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
