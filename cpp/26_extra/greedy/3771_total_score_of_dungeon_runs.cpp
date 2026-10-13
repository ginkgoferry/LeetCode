/*
 * Problem: 3771. 探索地牢的得分 / Total Score of Dungeon Runs
 * Link: https://leetcode.cn/problems/total-score-of-dungeon-runs/
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
    long long totalScore(int hp, vector<int>& damage, vector<int>& requirement) {
        // TODO: 在这里实现你的解法。
        (void)hp;
        (void)damage;
        (void)requirement;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int hp = 11;
        vector<int> damage = {3, 6, 7};
        vector<int> requirement = {4, 2, 5};
        auto localResult = solution.totalScore(hp, damage, requirement);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int hp = 2;
        vector<int> damage = {10000, 1};
        vector<int> requirement = {1, 1};
        auto localResult = solution.totalScore(hp, damage, requirement);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
