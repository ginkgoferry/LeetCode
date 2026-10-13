/*
 * Problem: 802. 找到最终的安全状态 / Find Eventual Safe States
 * Link: https://leetcode.cn/problems/find-eventual-safe-states/
 * Chapter: 图论
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
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        // TODO: 在这里实现你的解法。
        (void)graph;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> graph = {{1, 2}, {2, 3}, {5}, {0}, {5}, {}, {}};
        auto localResult = solution.eventualSafeNodes(graph);
        vector<int> expected = {2, 4, 5, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> graph = {{1, 2, 3, 4}, {1, 2}, {3, 4}, {0, 4}, {}};
        auto localResult = solution.eventualSafeNodes(graph);
        vector<int> expected = {4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
