/*
 * Problem: 2876. 有向图访问计数 / Count Visited Nodes in a Directed Graph
 * Link: https://leetcode.cn/problems/count-visited-nodes-in-a-directed-graph/
 * Chapter: 图论
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
    vector<int> countVisitedNodes(vector<int>& edges) {
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
        vector<int> edges = {1, 2, 0, 0};
        auto localResult = solution.countVisitedNodes(edges);
        vector<int> expected = {3, 3, 3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> edges = {1, 2, 3, 4, 0};
        auto localResult = solution.countVisitedNodes(edges);
        vector<int> expected = {5, 5, 5, 5, 5};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
