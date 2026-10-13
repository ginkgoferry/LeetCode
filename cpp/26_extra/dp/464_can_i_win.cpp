/*
 * Problem: 464. 我能赢吗 / Can I Win
 * Link: https://leetcode.cn/problems/can-i-win/
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
    bool canIWin(int maxChoosableInteger, int desiredTotal) {
        // TODO: 在这里实现你的解法。
        (void)maxChoosableInteger;
        (void)desiredTotal;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int maxChoosableInteger = 10;
        int desiredTotal = 11;
        auto localResult = solution.canIWin(maxChoosableInteger, desiredTotal);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int maxChoosableInteger = 10;
        int desiredTotal = 0;
        auto localResult = solution.canIWin(maxChoosableInteger, desiredTotal);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int maxChoosableInteger = 10;
        int desiredTotal = 1;
        auto localResult = solution.canIWin(maxChoosableInteger, desiredTotal);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
