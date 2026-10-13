/*
 * Problem: 3207. 与敌人战斗后的最大分数 / Maximum Points After Enemy Battles
 * Link: https://leetcode.cn/problems/maximum-points-after-enemy-battles/
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
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {
        // TODO: 在这里实现你的解法。
        (void)enemyEnergies;
        (void)currentEnergy;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> enemyEnergies = {3, 2, 2};
        int currentEnergy = 2;
        auto localResult = solution.maximumPoints(enemyEnergies, currentEnergy);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> enemyEnergies = {2};
        int currentEnergy = 10;
        auto localResult = solution.maximumPoints(enemyEnergies, currentEnergy);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
