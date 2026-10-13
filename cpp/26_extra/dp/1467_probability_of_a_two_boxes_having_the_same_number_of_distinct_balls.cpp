/*
 * Problem: 1467. 两个盒子中球的颜色数相同的概率 / Probability of a Two Boxes Having The Same Number of Distinct Balls
 * Link: https://leetcode.cn/problems/probability-of-a-two-boxes-having-the-same-number-of-distinct-balls/
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
    double getProbability(vector<int>& balls) {
        // TODO: 在这里实现你的解法。
        (void)balls;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> balls = {1, 1};
        auto localResult = solution.getProbability(balls);
        double expected = 1.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> balls = {2, 1, 1};
        auto localResult = solution.getProbability(balls);
        double expected = 0.66667;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> balls = {1, 2, 1, 2};
        auto localResult = solution.getProbability(balls);
        double expected = 0.6;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
