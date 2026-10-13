/*
 * Problem: 2368. 受限条件下可到达节点的数目 / Reachable Nodes With Restrictions
 * Link: https://leetcode.cn/problems/reachable-nodes-with-restrictions/
 * Chapter: 树与回溯
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
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)restricted;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {3, 1}, {4, 0}, {0, 5}, {5, 6}};
        vector<int> restricted = {4, 5};
        auto localResult = solution.reachableNodes(n, edges, restricted);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 5}, {0, 4}, {3, 2}, {6, 5}};
        vector<int> restricted = {4, 2, 1};
        auto localResult = solution.reachableNodes(n, edges, restricted);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
