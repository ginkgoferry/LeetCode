/*
 * Problem: 1301. 最大得分的路径数目 / Number of Paths with Max Score
 * Link: https://leetcode.cn/problems/number-of-paths-with-max-score/
 * Chapter: 动态规划
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
    vector<int> pathsWithMaxScore(vector<string>& board) {
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
        vector<string> board = {"E23", "2X2", "12S"};
        auto localResult = solution.pathsWithMaxScore(board);
        vector<int> expected = {7, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> board = {"E12", "1X1", "21S"};
        auto localResult = solution.pathsWithMaxScore(board);
        vector<int> expected = {4, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> board = {"E11", "XXX", "11S"};
        auto localResult = solution.pathsWithMaxScore(board);
        vector<int> expected = {0, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
