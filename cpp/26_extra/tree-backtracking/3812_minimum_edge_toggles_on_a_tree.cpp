/*
 * Problem: 3812. 翻转树上最少边 / Minimum Edge Toggles on a Tree
 * Link: https://leetcode.cn/problems/minimum-edge-toggles-on-a-tree/
 * Chapter: 树与回溯
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
    vector<int> minimumFlips(int n, vector<vector<int>>& edges, string start, string target) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)start;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1}, {1, 2}};
        string start = "010";
        string target = "100";
        auto localResult = solution.minimumFlips(n, edges, start, target);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {3, 4}, {3, 5}, {1, 6}};
        string start = "0011000";
        string target = "0010001";
        auto localResult = solution.minimumFlips(n, edges, start, target);
        vector<int> expected = {1, 2, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{0, 1}};
        string start = "00";
        string target = "01";
        auto localResult = solution.minimumFlips(n, edges, start, target);
        vector<int> expected = {-1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
