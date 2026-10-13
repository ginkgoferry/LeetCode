/*
 * Problem: 2421. 好路径的数目 / Number of Good Paths
 * Link: https://leetcode.cn/problems/number-of-good-paths/
 * Chapter: 数据结构
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
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)vals;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> vals = {1, 3, 2, 1, 3};
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {2, 3}, {2, 4}};
        auto localResult = solution.numberOfGoodPaths(vals, edges);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> vals = {1, 1, 2, 2, 3};
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {2, 3}, {2, 4}};
        auto localResult = solution.numberOfGoodPaths(vals, edges);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> vals = {1};
        vector<vector<int>> edges = {};
        auto localResult = solution.numberOfGoodPaths(vals, edges);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
