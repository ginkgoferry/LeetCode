/*
 * Problem: LCP 5. 发 LeetCoin / Coin Bonus
 * Link: https://leetcode.cn/problems/coin-bonus/
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
    vector<int> bonus(int n, vector<vector<int>>& leadership, vector<vector<int>>& operations) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)leadership;
        (void)operations;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> leadership = {{1, 2}, {1, 6}, {2, 3}, {2, 5}, {1, 4}};
        vector<vector<int>> operations = {{1, 1, 500}, {2, 2, 50}, {3, 1}, {2, 6, 15}, {3, 1}};
        auto localResult = solution.bonus(n, leadership, operations);
        vector<int> expected = {650, 665};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
