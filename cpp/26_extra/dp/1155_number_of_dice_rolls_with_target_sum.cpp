/*
 * Problem: 1155. 掷骰子等于目标和的方法数 / Number of Dice Rolls With Target Sum
 * Link: https://leetcode.cn/problems/number-of-dice-rolls-with-target-sum/
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
    int numRollsToTarget(int n, int k, int target) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        int k = 6;
        int target = 3;
        auto localResult = solution.numRollsToTarget(n, k, target);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int k = 6;
        int target = 7;
        auto localResult = solution.numRollsToTarget(n, k, target);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 30;
        int k = 30;
        int target = 500;
        auto localResult = solution.numRollsToTarget(n, k, target);
        int expected = 222616187;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
