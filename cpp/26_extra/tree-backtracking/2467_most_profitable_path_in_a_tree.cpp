/*
 * Problem: 2467. 树上最大得分和路径 / Most Profitable Path in a Tree
 * Link: https://leetcode.cn/problems/most-profitable-path-in-a-tree/
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
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)bob;
        (void)amount;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {1, 3}, {3, 4}};
        int bob = 3;
        vector<int> amount = {-2, 4, 2, -4, 6};
        auto localResult = solution.mostProfitablePath(edges, bob, amount);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1}};
        int bob = 1;
        vector<int> amount = {-7280, 2350};
        auto localResult = solution.mostProfitablePath(edges, bob, amount);
        int expected = -7280;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
