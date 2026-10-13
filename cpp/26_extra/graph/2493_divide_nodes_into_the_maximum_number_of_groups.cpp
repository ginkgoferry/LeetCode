/*
 * Problem: 2493. 将节点分成尽可能多的组 / Divide Nodes Into the Maximum Number of Groups
 * Link: https://leetcode.cn/problems/divide-nodes-into-the-maximum-number-of-groups/
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
    int magnificentSets(int n, vector<vector<int>>& edges) {
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
        int n = 6;
        vector<vector<int>> edges = {{1, 2}, {1, 4}, {1, 5}, {2, 6}, {2, 3}, {4, 6}};
        auto localResult = solution.magnificentSets(n, edges);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{1, 2}, {2, 3}, {3, 1}};
        auto localResult = solution.magnificentSets(n, edges);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
