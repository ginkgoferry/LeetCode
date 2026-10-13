/*
 * Problem: 1923. 最长公共子路径 / Longest Common Subpath
 * Link: https://leetcode.cn/problems/longest-common-subpath/
 * Chapter: 字符串
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
    int longestCommonSubpath(int n, vector<vector<int>>& paths) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)paths;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> paths = {{0, 1, 2, 3, 4}, {2, 3, 4}, {4, 0, 1, 2, 3}};
        auto localResult = solution.longestCommonSubpath(n, paths);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> paths = {{0}, {1}, {2}};
        auto localResult = solution.longestCommonSubpath(n, paths);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> paths = {{0, 1, 2, 3, 4}, {4, 3, 2, 1, 0}};
        auto localResult = solution.longestCommonSubpath(n, paths);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
