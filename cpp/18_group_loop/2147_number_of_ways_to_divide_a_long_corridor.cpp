/*
 * Problem: 2147. 分隔长廊的方案数 / Number of Ways to Divide a Long Corridor
 * Link: https://leetcode.cn/problems/number-of-ways-to-divide-a-long-corridor/
 * Chapter: 分组循环
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
    int numberOfWays(string corridor) {
        // TODO: 在这里实现你的解法。
        (void)corridor;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string corridor = "SSPPSPS";
        auto localResult = solution.numberOfWays(corridor);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string corridor = "PPSPSP";
        auto localResult = solution.numberOfWays(corridor);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string corridor = "S";
        auto localResult = solution.numberOfWays(corridor);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
