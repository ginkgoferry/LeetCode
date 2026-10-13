/*
 * Problem: 2833. 距离原点最远的点 / Furthest Point From Origin
 * Link: https://leetcode.cn/problems/furthest-point-from-origin/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int furthestDistanceFromOrigin(string moves) {
        // TODO: 在这里实现你的解法。
        (void)moves;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string moves = "L_RL__R";
        auto localResult = solution.furthestDistanceFromOrigin(moves);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string moves = "_R__LL_";
        auto localResult = solution.furthestDistanceFromOrigin(moves);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string moves = "_______";
        auto localResult = solution.furthestDistanceFromOrigin(moves);
        int expected = 7;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
