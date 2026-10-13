/*
 * Problem: 3249. 统计好节点的数目 / Count the Number of Good Nodes
 * Link: https://leetcode.cn/problems/count-the-number-of-good-nodes/
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
    int countGoodNodes(vector<vector<int>>& edges) {
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
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 3}, {1, 4}, {2, 5}, {2, 6}};
        auto localResult = solution.countGoodNodes(edges);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 4}, {0, 5}, {1, 6}, {2, 7}, {3, 8}};
        auto localResult = solution.countGoodNodes(edges);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {1, 3}, {1, 4}, {0, 5}, {5, 6}, {6, 7}, {7, 8}, {0, 9}, {9, 10}, {9, 12}, {10, 11}};
        auto localResult = solution.countGoodNodes(edges);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
