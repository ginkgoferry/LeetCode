/*
 * Problem: 1223. 掷骰子模拟 / Dice Roll Simulation
 * Link: https://leetcode.cn/problems/dice-roll-simulation/
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
    int dieSimulator(int n, vector<int>& rollMax) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)rollMax;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        vector<int> rollMax = {1, 1, 2, 2, 2, 3};
        auto localResult = solution.dieSimulator(n, rollMax);
        int expected = 34;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<int> rollMax = {1, 1, 1, 1, 1, 1};
        auto localResult = solution.dieSimulator(n, rollMax);
        int expected = 30;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> rollMax = {1, 1, 1, 2, 2, 3};
        auto localResult = solution.dieSimulator(n, rollMax);
        int expected = 181;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
