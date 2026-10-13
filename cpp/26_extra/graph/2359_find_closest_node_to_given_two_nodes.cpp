/*
 * Problem: 2359. 找到离给定两个节点最近的节点 / Find Closest Node to Given Two Nodes
 * Link: https://leetcode.cn/problems/find-closest-node-to-given-two-nodes/
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
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)node1;
        (void)node2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> edges = {2, 2, 3, -1};
        int node1 = 0;
        int node2 = 1;
        auto localResult = solution.closestMeetingNode(edges, node1, node2);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> edges = {1, 2, -1};
        int node1 = 0;
        int node2 = 2;
        auto localResult = solution.closestMeetingNode(edges, node1, node2);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
