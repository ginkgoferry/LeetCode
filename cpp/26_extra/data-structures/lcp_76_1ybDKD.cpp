/*
 * Problem: LCP 76. 魔法棋盘 / 魔法棋盘
 * Link: https://leetcode.cn/problems/1ybDKD/
 * Chapter: 动态规划
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
    long long getSchemeCount(int n, int m, vector<string>& chessboard) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)m;
        (void)chessboard;
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
        vector<string> chessboard = {"..R", "..B", "?R?"};
        auto localResult = solution.getSchemeCount(n, m, chessboard);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int m = 3;
        vector<string> chessboard = {"?R?", "B?B", "?R?"};
        auto localResult = solution.getSchemeCount(n, m, chessboard);
        long long expected = 105LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
