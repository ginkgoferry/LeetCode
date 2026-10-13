/*
 * Problem: 773. 滑动谜题 / Sliding Puzzle
 * Link: https://leetcode.cn/problems/sliding-puzzle/
 * Chapter: 图论
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
    int slidingPuzzle(vector<vector<int>>& board) {
        // TODO: 在这里实现你的解法。
        (void)board;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> board = {{1, 2, 3}, {4, 0, 5}};
        auto localResult = solution.slidingPuzzle(board);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> board = {{1, 2, 3}, {5, 4, 0}};
        auto localResult = solution.slidingPuzzle(board);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> board = {{4, 1, 2}, {5, 0, 3}};
        auto localResult = solution.slidingPuzzle(board);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
