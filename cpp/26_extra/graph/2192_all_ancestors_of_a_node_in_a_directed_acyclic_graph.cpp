/*
 * Problem: 2192. 有向无环图中一个节点的所有祖先 / All Ancestors of a Node in a Directed Acyclic Graph
 * Link: https://leetcode.cn/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph/
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
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 8;
        vector<vector<int>> edges = {{0, 3}, {0, 4}, {1, 3}, {2, 4}, {2, 7}, {3, 5}, {3, 6}, {3, 7}, {4, 6}};
        auto localResult = solution.getAncestors(n, edges);
        vector<vector<int>> expected = {{}, {}, {}, {0, 1}, {0, 2}, {0, 1, 3}, {0, 1, 2, 3, 4}, {0, 1, 2, 3}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {0, 3}, {0, 4}, {1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4}, {3, 4}};
        auto localResult = solution.getAncestors(n, edges);
        vector<vector<int>> expected = {{}, {0}, {0, 1}, {0, 1, 2}, {0, 1, 2, 3}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
