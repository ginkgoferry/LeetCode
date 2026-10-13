/*
 * Problem: 2952. 需要添加的硬币的最小数量 / Minimum Number of Coins to be Added
 * Link: https://leetcode.cn/problems/minimum-number-of-coins-to-be-added/
 * Chapter: 贪心算法
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
    int minimumAddedCoins(vector<int>& coins, int target) {
        // TODO: 在这里实现你的解法。
        (void)coins;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> coins = {1, 4, 10};
        int target = 19;
        auto localResult = solution.minimumAddedCoins(coins, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> coins = {1, 4, 10, 5, 7, 19};
        int target = 19;
        auto localResult = solution.minimumAddedCoins(coins, target);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> coins = {1, 1, 1};
        int target = 20;
        auto localResult = solution.minimumAddedCoins(coins, target);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
