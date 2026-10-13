/*
 * Problem: 1900. 最佳运动员的比拼回合 / The Earliest and Latest Rounds Where Players Compete
 * Link: https://leetcode.cn/problems/the-earliest-and-latest-rounds-where-players-compete/
 * Chapter: 动态规划
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
    vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)firstPlayer;
        (void)secondPlayer;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 11;
        int firstPlayer = 2;
        int secondPlayer = 4;
        auto localResult = solution.earliestAndLatest(n, firstPlayer, secondPlayer);
        vector<int> expected = {3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int firstPlayer = 1;
        int secondPlayer = 5;
        auto localResult = solution.earliestAndLatest(n, firstPlayer, secondPlayer);
        vector<int> expected = {1, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
