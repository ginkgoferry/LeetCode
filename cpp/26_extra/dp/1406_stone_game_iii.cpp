/*
 * Problem: 1406. 石子游戏 III / Stone Game III
 * Link: https://leetcode.cn/problems/stone-game-iii/
 * Chapter: 动态规划
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
    string stoneGameIII(vector<int>& stoneValue) {
        // TODO: 在这里实现你的解法。
        (void)stoneValue;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> stoneValue = {1, 2, 3, 7};
        auto localResult = solution.stoneGameIII(stoneValue);
        string expected = "Bob";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stoneValue = {1, 2, 3, -9};
        auto localResult = solution.stoneGameIII(stoneValue);
        string expected = "Alice";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> stoneValue = {1, 2, 3, 6};
        auto localResult = solution.stoneGameIII(stoneValue);
        string expected = "Tie";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
