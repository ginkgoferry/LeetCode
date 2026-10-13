/*
 * Problem: 1319. 连通网络的操作次数 / Number of Operations to Make Network Connected
 * Link: https://leetcode.cn/problems/number-of-operations-to-make-network-connected/
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
    int makeConnected(int n, vector<vector<int>>& connections) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)connections;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> connections = {{0, 1}, {0, 2}, {1, 2}};
        auto localResult = solution.makeConnected(n, connections);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> connections = {{0, 1}, {0, 2}, {0, 3}, {1, 2}, {1, 3}};
        auto localResult = solution.makeConnected(n, connections);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> connections = {{0, 1}, {0, 2}, {0, 3}, {1, 2}};
        auto localResult = solution.makeConnected(n, connections);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> connections = {{0, 1}, {0, 2}, {3, 4}, {2, 3}};
        auto localResult = solution.makeConnected(n, connections);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
