/*
 * Problem: 1824. 最少侧跳次数 / Minimum Sideway Jumps
 * Link: https://leetcode.cn/problems/minimum-sideway-jumps/
 * Chapter: 网格图
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
    int minSideJumps(vector<int>& obstacles) {
        // TODO: 在这里实现你的解法。
        (void)obstacles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> obstacles = {0, 1, 2, 3, 0};
        auto localResult = solution.minSideJumps(obstacles);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> obstacles = {0, 1, 1, 3, 3, 0};
        auto localResult = solution.minSideJumps(obstacles);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> obstacles = {0, 2, 1, 0, 3, 0};
        auto localResult = solution.minSideJumps(obstacles);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
