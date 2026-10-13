/*
 * Problem: 1926. 迷宫中离入口最近的出口 / Nearest Exit from Entrance in Maze
 * Link: https://leetcode.cn/problems/nearest-exit-from-entrance-in-maze/
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
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        // TODO: 在这里实现你的解法。
        (void)maze;
        (void)entrance;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<char>> maze = {{'+', '+', '.', '+'}, {'.', '.', '.', '+'}, {'+', '+', '+', '.'}};
        vector<int> entrance = {1, 2};
        auto localResult = solution.nearestExit(maze, entrance);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> maze = {{'+', '+', '+'}, {'.', '.', '.'}, {'+', '+', '+'}};
        vector<int> entrance = {1, 0};
        auto localResult = solution.nearestExit(maze, entrance);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> maze = {{'.', '+'}};
        vector<int> entrance = {0, 0};
        auto localResult = solution.nearestExit(maze, entrance);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
