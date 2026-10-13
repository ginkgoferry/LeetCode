/*
 * Problem: LCP 13. 寻宝 / 寻宝
 * Link: https://leetcode.cn/problems/xun-bao/
 * Chapter: 网格图
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
    int minimalSteps(vector<string>& maze) {
        // TODO: 在这里实现你的解法。
        (void)maze;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> maze = {"S#O", "M..", "M.T"};
        auto localResult = solution.minimalSteps(maze);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> maze = {"S#O", "M.#", "M.T"};
        auto localResult = solution.minimalSteps(maze);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> maze = {"S#O", "M.T", "M.."};
        auto localResult = solution.minimalSteps(maze);
        int expected = 17;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
