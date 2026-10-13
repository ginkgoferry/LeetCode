/*
 * Problem: 2212. 射箭比赛中的最大得分 / Maximum Points in an Archery Competition
 * Link: https://leetcode.cn/problems/maximum-points-in-an-archery-competition/
 * Chapter: 树与回溯
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
    vector<int> maximumBobPoints(int numArrows, vector<int>& aliceArrows) {
        // TODO: 在这里实现你的解法。
        (void)numArrows;
        (void)aliceArrows;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int numArrows = 9;
        vector<int> aliceArrows = {1, 1, 0, 1, 0, 0, 2, 1, 0, 1, 2, 0};
        const auto localOriginalAlice = aliceArrows;
        auto localResult = solution.maximumBobPoints(numArrows, aliceArrows);
        assert(localResult.size() == localOriginalAlice.size());
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == numArrows);
        int score = 0;
        for (size_t i = 0; i < localResult.size(); ++i) {
            assert(localResult[i] >= 0);
            if (localResult[i] > localOriginalAlice[i]) score += static_cast<int>(i);
        }
        assert(score == 47);
    }

    {
        // 官方样例
        int numArrows = 3;
        vector<int> aliceArrows = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 2};
        const auto localOriginalAlice = aliceArrows;
        auto localResult = solution.maximumBobPoints(numArrows, aliceArrows);
        assert(localResult.size() == localOriginalAlice.size());
        assert(accumulate(localResult.begin(), localResult.end(), 0LL) == numArrows);
        int score = 0;
        for (size_t i = 0; i < localResult.size(); ++i) {
            assert(localResult[i] >= 0);
            if (localResult[i] > localOriginalAlice[i]) score += static_cast<int>(i);
        }
        assert(score == 27);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
