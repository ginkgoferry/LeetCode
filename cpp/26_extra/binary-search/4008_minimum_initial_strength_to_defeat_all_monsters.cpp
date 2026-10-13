/*
 * Problem: 4008. 击败所有怪物的最小初始强度 / Minimum Initial Strength to Defeat All Monsters
 * Link: https://leetcode.cn/problems/minimum-initial-strength-to-defeat-all-monsters/
 * Chapter: 二分查找
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
    long long minInitialStrength(vector<int>& monsters, vector<vector<int>>& boosts) {
        // TODO: 在这里实现你的解法。
        (void)monsters;
        (void)boosts;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> monsters = {5, 10, 15};
        vector<vector<int>> boosts = {{1, 1, 10}};
        auto localResult = solution.minInitialStrength(monsters, boosts);
        long long expected = 30LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> monsters = {5, 10, 15};
        vector<vector<int>> boosts = {{1, 2, 10}, {1, 2, 5}};
        auto localResult = solution.minInitialStrength(monsters, boosts);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
