/*
 * Problem: 2139. 得到目标值的最少行动次数 / Minimum Moves to Reach Target Score
 * Link: https://leetcode.cn/problems/minimum-moves-to-reach-target-score/
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
    int minMoves(int target, int maxDoubles) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)maxDoubles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int target = 5;
        int maxDoubles = 0;
        auto localResult = solution.minMoves(target, maxDoubles);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 19;
        int maxDoubles = 2;
        auto localResult = solution.minMoves(target, maxDoubles);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 10;
        int maxDoubles = 4;
        auto localResult = solution.minMoves(target, maxDoubles);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
