/*
 * Problem: 1519. 子树中标签相同的节点数 / Number of Nodes in the Sub-Tree With the Same Label
 * Link: https://leetcode.cn/problems/number-of-nodes-in-the-sub-tree-with-the-same-label/
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
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)labels;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 4}, {1, 5}, {2, 3}, {2, 6}};
        string labels = "abaedcd";
        auto localResult = solution.countSubTrees(n, edges, labels);
        vector<int> expected = {2, 1, 1, 1, 1, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {0, 3}};
        string labels = "bbbb";
        auto localResult = solution.countSubTrees(n, edges, labels);
        vector<int> expected = {4, 2, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {0, 4}};
        string labels = "aabab";
        auto localResult = solution.countSubTrees(n, edges, labels);
        vector<int> expected = {3, 2, 1, 1, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
