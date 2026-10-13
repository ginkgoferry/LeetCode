/*
 * Problem: 3241. 标记所有节点需要的时间 / Time Taken to Mark All Nodes
 * Link: https://leetcode.cn/problems/time-taken-to-mark-all-nodes/
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
    vector<int> timeTaken(vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {0, 2}};
        auto localResult = solution.timeTaken(edges);
        vector<int> expected = {2, 4, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}};
        auto localResult = solution.timeTaken(edges);
        vector<int> expected = {1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{2, 4}, {0, 1}, {2, 3}, {0, 2}};
        auto localResult = solution.timeTaken(edges);
        vector<int> expected = {4, 6, 3, 5, 5};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
