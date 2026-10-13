/*
 * Problem: LCP 21. 追逐游戏 / 追逐游戏
 * Link: https://leetcode.cn/problems/Za25hA/
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
    int chaseGame(vector<vector<int>>& edges, int startA, int startB) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)startA;
        (void)startB;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{1, 2}, {2, 3}, {3, 4}, {4, 1}, {2, 5}, {5, 6}};
        int startA = 3;
        int startB = 5;
        auto localResult = solution.chaseGame(edges, startA, startB);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{1, 2}, {2, 3}, {3, 4}, {4, 1}};
        int startA = 1;
        int startB = 3;
        auto localResult = solution.chaseGame(edges, startA, startB);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
