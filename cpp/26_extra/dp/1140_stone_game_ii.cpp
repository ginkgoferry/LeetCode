/*
 * Problem: 1140. 石子游戏 II / Stone Game II
 * Link: https://leetcode.cn/problems/stone-game-ii/
 * Chapter: 动态规划
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
    int stoneGameII(vector<int>& piles) {
        // TODO: 在这里实现你的解法。
        (void)piles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> piles = {2, 7, 9, 4, 4};
        auto localResult = solution.stoneGameII(piles);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> piles = {1, 2, 3, 4, 5, 100};
        auto localResult = solution.stoneGameII(piles);
        int expected = 104;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
