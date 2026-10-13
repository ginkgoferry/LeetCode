/*
 * Problem: 1927. 求和游戏 / Sum Game
 * Link: https://leetcode.cn/problems/sum-game/
 * Chapter: 数学
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
    bool sumGame(string num) {
        // TODO: 在这里实现你的解法。
        (void)num;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string num = "5023";
        auto localResult = solution.sumGame(num);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "25??";
        auto localResult = solution.sumGame(num);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string num = "?3295???";
        auto localResult = solution.sumGame(num);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
