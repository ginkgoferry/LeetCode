/*
 * Problem: 1686. 石子游戏 VI / Stone Game VI
 * Link: https://leetcode.cn/problems/stone-game-vi/
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
    int stoneGameVI(vector<int>& aliceValues, vector<int>& bobValues) {
        // TODO: 在这里实现你的解法。
        (void)aliceValues;
        (void)bobValues;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> aliceValues = {1, 3};
        vector<int> bobValues = {2, 1};
        auto localResult = solution.stoneGameVI(aliceValues, bobValues);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> aliceValues = {1, 2};
        vector<int> bobValues = {3, 1};
        auto localResult = solution.stoneGameVI(aliceValues, bobValues);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> aliceValues = {2, 4, 3};
        vector<int> bobValues = {1, 6, 7};
        auto localResult = solution.stoneGameVI(aliceValues, bobValues);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
