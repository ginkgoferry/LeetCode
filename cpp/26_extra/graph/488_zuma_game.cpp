/*
 * Problem: 488. 祖玛游戏 / Zuma Game
 * Link: https://leetcode.cn/problems/zuma-game/
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
    int findMinStep(string board, string hand) {
        // TODO: 在这里实现你的解法。
        (void)board;
        (void)hand;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string board = "WRRBBW";
        string hand = "RB";
        auto localResult = solution.findMinStep(board, hand);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string board = "WWRRBBWW";
        string hand = "WRBRW";
        auto localResult = solution.findMinStep(board, hand);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string board = "G";
        string hand = "GGGGG";
        auto localResult = solution.findMinStep(board, hand);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string board = "RBYYBBRRB";
        string hand = "YRBGB";
        auto localResult = solution.findMinStep(board, hand);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
