/*
 * Problem: 2056. 棋盘上有效移动组合的数目 / Number of Valid Move Combinations On Chessboard
 * Link: https://leetcode.cn/problems/number-of-valid-move-combinations-on-chessboard/
 * Chapter: 数据结构
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
    int countCombinations(vector<string>& pieces, vector<vector<int>>& positions) {
        // TODO: 在这里实现你的解法。
        (void)pieces;
        (void)positions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> pieces = {"rook"};
        vector<vector<int>> positions = {{1, 1}};
        auto localResult = solution.countCombinations(pieces, positions);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> pieces = {"queen"};
        vector<vector<int>> positions = {{1, 1}};
        auto localResult = solution.countCombinations(pieces, positions);
        int expected = 22;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> pieces = {"bishop"};
        vector<vector<int>> positions = {{4, 3}};
        auto localResult = solution.countCombinations(pieces, positions);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> pieces = {"rook", "rook"};
        vector<vector<int>> positions = {{1, 1}, {8, 8}};
        auto localResult = solution.countCombinations(pieces, positions);
        int expected = 223;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> pieces = {"queen", "bishop"};
        vector<vector<int>> positions = {{5, 7}, {3, 4}};
        auto localResult = solution.countCombinations(pieces, positions);
        int expected = 281;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
