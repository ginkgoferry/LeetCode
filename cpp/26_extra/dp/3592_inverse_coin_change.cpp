/*
 * Problem: 3592. 硬币面值还原 / Inverse Coin Change
 * Link: https://leetcode.cn/problems/inverse-coin-change/
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
    vector<int> findCoins(vector<int>& numWays) {
        // TODO: 在这里实现你的解法。
        (void)numWays;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> numWays = {0, 1, 0, 2, 0, 3, 0, 4, 0, 5};
        auto localResult = solution.findCoins(numWays);
        vector<int> expected = {2, 4, 6};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> numWays = {1, 2, 2, 3, 4};
        auto localResult = solution.findCoins(numWays);
        vector<int> expected = {1, 2, 5};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> numWays = {1, 2, 3, 4, 15};
        auto localResult = solution.findCoins(numWays);
        vector<int> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
