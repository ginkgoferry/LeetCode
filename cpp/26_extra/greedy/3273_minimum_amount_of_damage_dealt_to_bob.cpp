/*
 * Problem: 3273. 对 Bob 造成的最少伤害 / Minimum Amount of Damage Dealt to Bob
 * Link: https://leetcode.cn/problems/minimum-amount-of-damage-dealt-to-bob/
 * Chapter: 贪心算法
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
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        // TODO: 在这里实现你的解法。
        (void)power;
        (void)damage;
        (void)health;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int power = 4;
        vector<int> damage = {1, 2, 3, 4};
        vector<int> health = {4, 5, 6, 8};
        auto localResult = solution.minDamage(power, damage, health);
        long long expected = 39LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int power = 1;
        vector<int> damage = {1, 1, 1, 1};
        vector<int> health = {1, 2, 3, 4};
        auto localResult = solution.minDamage(power, damage, health);
        long long expected = 20LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int power = 8;
        vector<int> damage = {40};
        vector<int> health = {59};
        auto localResult = solution.minDamage(power, damage, health);
        long long expected = 320LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
