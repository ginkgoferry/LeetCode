/*
 * Problem: 3988. 创建一个恰好有 K 条路径的网格图 I / Create Grid With Exactly K Paths I
 * Link: https://leetcode.cn/problems/create-grid-with-exactly-k-paths-i/
 * Chapter: 贪心算法
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
    vector<string> createGrid(int m, int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 2;
        int n = 3;
        int k = 2;
        auto localResult = solution.createGrid(m, n, k);
        assert(localResult.size() == static_cast<size_t>(m));
        for (const auto& row : localResult) { assert(row.size() == static_cast<size_t>(n)); for (char ch : row) assert(ch == '.' || ch == '#'); }
        vector<vector<int>> paths(m, vector<int>(n));
        for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) {
            if (localResult[i][j] == '#') continue;
            if (i == 0 && j == 0) paths[i][j] = 1;
            else paths[i][j] = min(k + 1, (i ? paths[i-1][j] : 0) + (j ? paths[i][j-1] : 0));
        }
        assert(paths[m-1][n-1] == k);
    }

    {
        // 官方样例
        int m = 3;
        int n = 3;
        int k = 4;
        auto localResult = solution.createGrid(m, n, k);
        assert(localResult.size() == static_cast<size_t>(m));
        for (const auto& row : localResult) { assert(row.size() == static_cast<size_t>(n)); for (char ch : row) assert(ch == '.' || ch == '#'); }
        vector<vector<int>> paths(m, vector<int>(n));
        for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) {
            if (localResult[i][j] == '#') continue;
            if (i == 0 && j == 0) paths[i][j] = 1;
            else paths[i][j] = min(k + 1, (i ? paths[i-1][j] : 0) + (j ? paths[i][j-1] : 0));
        }
        assert(paths[m-1][n-1] == k);
    }

    {
        // 官方样例
        int m = 1;
        int n = 4;
        int k = 2;
        auto localResult = solution.createGrid(m, n, k);
        assert(localResult.empty());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
