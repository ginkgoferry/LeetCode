/*
 * Problem: 2400. 恰好移动 k 步到达某一位置的方法数目 / Number of Ways to Reach a Position After Exactly k Steps
 * Link: https://leetcode.cn/problems/number-of-ways-to-reach-a-position-after-exactly-k-steps/
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
    int numberOfWays(int startPos, int endPos, int k) {
        // TODO: 在这里实现你的解法。
        (void)startPos;
        (void)endPos;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int startPos = 1;
        int endPos = 2;
        int k = 3;
        auto localResult = solution.numberOfWays(startPos, endPos, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int startPos = 2;
        int endPos = 5;
        int k = 10;
        auto localResult = solution.numberOfWays(startPos, endPos, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
