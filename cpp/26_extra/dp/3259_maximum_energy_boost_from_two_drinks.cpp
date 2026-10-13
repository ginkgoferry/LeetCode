/*
 * Problem: 3259. 超级饮料的最大强化能量 / Maximum Energy Boost From Two Drinks
 * Link: https://leetcode.cn/problems/maximum-energy-boost-from-two-drinks/
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
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        // TODO: 在这里实现你的解法。
        (void)energyDrinkA;
        (void)energyDrinkB;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> energyDrinkA = {1, 3, 1};
        vector<int> energyDrinkB = {3, 1, 1};
        auto localResult = solution.maxEnergyBoost(energyDrinkA, energyDrinkB);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> energyDrinkA = {4, 1, 1};
        vector<int> energyDrinkB = {1, 1, 3};
        auto localResult = solution.maxEnergyBoost(energyDrinkA, energyDrinkB);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
