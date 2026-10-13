/*
 * Problem: LCP 75. 传送卷轴 / 传送卷轴
 * Link: https://leetcode.cn/problems/rdmXM7/
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
    int challengeOfTheKeeper(vector<string>& maze) {
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
        vector<string> maze = {".....", "##S..", "...#.", "T.#..", "###.."};
        auto localResult = solution.challengeOfTheKeeper(maze);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> maze = {".#..", "..##", ".#S.", ".#.T"};
        auto localResult = solution.challengeOfTheKeeper(maze);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> maze = {"S###.", "..###", "#..##", "##..#", "###.T"};
        auto localResult = solution.challengeOfTheKeeper(maze);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
