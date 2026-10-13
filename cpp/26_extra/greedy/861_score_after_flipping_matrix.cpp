/*
 * Problem: 861. 翻转矩阵后的得分 / Score After Flipping Matrix
 * Link: https://leetcode.cn/problems/score-after-flipping-matrix/
 * Chapter: 贪心算法
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
    int matrixScore(vector<vector<int>>& grid) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};
        auto localResult = solution.matrixScore(grid);
        int expected = 39;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{0}};
        auto localResult = solution.matrixScore(grid);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
