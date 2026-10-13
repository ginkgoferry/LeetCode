/*
 * Problem: LCR 185. 统计结果概率 / 统计结果概率
 * Link: https://leetcode.cn/problems/nge-tou-zi-de-dian-shu-lcof/
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
    vector<double> statisticsProbability(int num) {
        // TODO: 在这里实现你的解法。
        (void)num;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num = 3;
        auto localResult = solution.statisticsProbability(num);
        vector<double> expected = {0.00463, 0.01389, 0.02778, 0.0463, 0.06944, 0.09722, 0.11574, 0.125, 0.125, 0.11574, 0.09722, 0.06944, 0.0463, 0.02778, 0.01389, 0.00463};
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int num = 5;
        auto localResult = solution.statisticsProbability(num);
        vector<double> expected = {0.00013, 0.00064, 0.00193, 0.0045, 0.009, 0.0162, 0.02636, 0.03922, 0.05401, 0.06944, 0.08372, 0.09452, 0.10031, 0.10031, 0.09452, 0.08372, 0.06944, 0.05401, 0.03922, 0.02636, 0.0162, 0.009, 0.0045, 0.00193, 0.00064, 0.00013};
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
