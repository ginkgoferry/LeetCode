/*
 * Problem: 3494. 酿造药水需要的最少总时间 / Find the Minimum Amount of Time to Brew Potions
 * Link: https://leetcode.cn/problems/find-the-minimum-amount-of-time-to-brew-potions/
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
    long long minTime(vector<int>& skill, vector<int>& mana) {
        // TODO: 在这里实现你的解法。
        (void)skill;
        (void)mana;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> skill = {1, 5, 2, 4};
        vector<int> mana = {5, 1, 4, 2};
        auto localResult = solution.minTime(skill, mana);
        long long expected = 110LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> skill = {1, 1, 1};
        vector<int> mana = {1, 1, 1};
        auto localResult = solution.minTime(skill, mana);
        long long expected = 5LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> skill = {1, 2, 3, 4};
        vector<int> mana = {1, 2};
        auto localResult = solution.minTime(skill, mana);
        long long expected = 21LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
