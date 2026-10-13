/*
 * Problem: 2360. 图中的最长环 / Longest Cycle in a Graph
 * Link: https://leetcode.cn/problems/longest-cycle-in-a-graph/
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
    int longestCycle(vector<int>& edges) {
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
        vector<int> edges = {3, 3, 4, 2, 3};
        auto localResult = solution.longestCycle(edges);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> edges = {2, -1, 3, 1};
        auto localResult = solution.longestCycle(edges);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
