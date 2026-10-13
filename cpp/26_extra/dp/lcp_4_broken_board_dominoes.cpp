/*
 * Problem: LCP 4. 覆盖 / Broken Board Dominoes
 * Link: https://leetcode.cn/problems/broken-board-dominoes/
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
    int domino(int n, int m, vector<vector<int>>& broken) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)m;
        (void)broken;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        int m = 3;
        vector<vector<int>> broken = {{1, 0}, {1, 1}};
        auto localResult = solution.domino(n, m, broken);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int m = 3;
        vector<vector<int>> broken = {};
        auto localResult = solution.domino(n, m, broken);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
