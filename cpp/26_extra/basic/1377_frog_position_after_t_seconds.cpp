/*
 * Problem: 1377. T 秒后青蛙的位置 / Frog Position After T Seconds
 * Link: https://leetcode.cn/problems/frog-position-after-t-seconds/
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
    double frogPosition(int n, vector<vector<int>>& edges, int t, int target) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)t;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{1, 2}, {1, 3}, {1, 7}, {2, 4}, {2, 6}, {3, 5}};
        int t = 2;
        int target = 4;
        auto localResult = solution.frogPosition(n, edges, t, target);
        double expected = 0.16666666666666666;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int n = 7;
        vector<vector<int>> edges = {{1, 2}, {1, 3}, {1, 7}, {2, 4}, {2, 6}, {3, 5}};
        int t = 1;
        int target = 7;
        auto localResult = solution.frogPosition(n, edges, t, target);
        double expected = 0.3333333333333333;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
