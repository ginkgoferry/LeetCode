/*
 * Problem: 3537. 填充特殊网格 / Fill a Special Grid
 * Link: https://leetcode.cn/problems/fill-a-special-grid/
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
    vector<vector<int>> specialGrid(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 0;
        auto localResult = solution.specialGrid(n);
        vector<vector<int>> expected = {{0}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        auto localResult = solution.specialGrid(n);
        vector<vector<int>> expected = {{3, 0}, {2, 1}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        auto localResult = solution.specialGrid(n);
        vector<vector<int>> expected = {{15, 12, 3, 0}, {14, 13, 2, 1}, {11, 8, 7, 4}, {10, 9, 6, 5}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
