/*
 * Problem: 3332. 旅客可以得到的最多点数 / Maximum Points Tourist Can Earn
 * Link: https://leetcode.cn/problems/maximum-points-tourist-can-earn/
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
    int maxScore(int n, int k, vector<vector<int>>& stayScore, vector<vector<int>>& travelScore) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        (void)stayScore;
        (void)travelScore;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        int k = 1;
        vector<vector<int>> stayScore = {{2, 3}};
        vector<vector<int>> travelScore = {{0, 2}, {1, 0}};
        auto localResult = solution.maxScore(n, k, stayScore, travelScore);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        vector<vector<int>> stayScore = {{3, 4, 2}, {2, 1, 2}};
        vector<vector<int>> travelScore = {{0, 2, 1}, {2, 0, 4}, {3, 2, 0}};
        auto localResult = solution.maxScore(n, k, stayScore, travelScore);
        int expected = 8;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
