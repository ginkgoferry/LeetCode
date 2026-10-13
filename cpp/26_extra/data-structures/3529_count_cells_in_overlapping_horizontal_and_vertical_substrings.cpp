/*
 * Problem: 3529. 统计水平子串和垂直子串重叠格子的数目 / Count Cells in Overlapping Horizontal and Vertical Substrings
 * Link: https://leetcode.cn/problems/count-cells-in-overlapping-horizontal-and-vertical-substrings/
 * Chapter: 数据结构
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
    int countCells(vector<vector<char>>& grid, string pattern) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)pattern;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<char>> grid = {{'a', 'a', 'c', 'c'}, {'b', 'b', 'b', 'c'}, {'a', 'a', 'b', 'a'}, {'c', 'a', 'a', 'c'}, {'a', 'a', 'b', 'a'}};
        string pattern = "abaca";
        auto localResult = solution.countCells(grid, pattern);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> grid = {{'c', 'a', 'a', 'a'}, {'a', 'a', 'b', 'a'}, {'b', 'b', 'a', 'a'}, {'a', 'a', 'b', 'a'}};
        string pattern = "aba";
        auto localResult = solution.countCells(grid, pattern);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> grid = {{'a'}};
        string pattern = "a";
        auto localResult = solution.countCells(grid, pattern);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
