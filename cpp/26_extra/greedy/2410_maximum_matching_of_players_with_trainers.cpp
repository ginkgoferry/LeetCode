/*
 * Problem: 2410. 运动员和训练师的最大匹配数 / Maximum Matching of Players With Trainers
 * Link: https://leetcode.cn/problems/maximum-matching-of-players-with-trainers/
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
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        // TODO: 在这里实现你的解法。
        (void)players;
        (void)trainers;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> players = {4, 7, 9};
        vector<int> trainers = {8, 2, 5, 8};
        auto localResult = solution.matchPlayersAndTrainers(players, trainers);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> players = {1, 1, 1};
        vector<int> trainers = {10};
        auto localResult = solution.matchPlayersAndTrainers(players, trainers);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
