/*
 * Problem: 3905. 多源图像渲染 / Multi Source Flood Fill
 * Link: https://leetcode.cn/problems/multi-source-flood-fill/
 * Chapter: 网格图
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
    vector<vector<int>> colorGrid(int n, int m, vector<vector<int>>& sources) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)m;
        (void)sources;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int m = 3;
        vector<vector<int>> sources = {{0, 0, 1}, {2, 2, 2}};
        auto localResult = solution.colorGrid(n, m, sources);
        vector<vector<int>> expected = {{1, 1, 2}, {1, 2, 2}, {2, 2, 2}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int m = 3;
        vector<vector<int>> sources = {{0, 1, 3}, {1, 1, 5}};
        auto localResult = solution.colorGrid(n, m, sources);
        vector<vector<int>> expected = {{3, 3, 3}, {5, 5, 5}, {5, 5, 5}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int m = 2;
        vector<vector<int>> sources = {{1, 1, 5}};
        auto localResult = solution.colorGrid(n, m, sources);
        vector<vector<int>> expected = {{5, 5}, {5, 5}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
