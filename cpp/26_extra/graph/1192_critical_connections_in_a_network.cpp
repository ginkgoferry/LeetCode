/*
 * Problem: 1192. 查找集群内的关键连接 / Critical Connections in a Network
 * Link: https://leetcode.cn/problems/critical-connections-in-a-network/
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
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
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
        vector<vector<int>> connections = {{0, 1}, {1, 2}, {2, 0}, {1, 3}};
        auto localResult = solution.criticalConnections(n, connections);
        vector<vector<int>> expected = {{1, 3}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> connections = {{0, 1}};
        auto localResult = solution.criticalConnections(n, connections);
        vector<vector<int>> expected = {{0, 1}};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
