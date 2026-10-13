/*
 * Problem: 85. 最大矩形 / Maximal Rectangle
 * Link: https://leetcode.cn/problems/maximal-rectangle/
 * Chapter: 栈
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        // TODO: 在这里实现你的解法。
        (void)matrix;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<char>> matrix = {{'1', '0', '1', '0', '0'}, {'1', '0', '1', '1', '1'}, {'1', '1', '1', '1', '1'}, {'1', '0', '0', '1', '0'}};
        auto localResult = solution.maximalRectangle(matrix);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> matrix = {{'0'}};
        auto localResult = solution.maximalRectangle(matrix);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> matrix = {{'1'}};
        auto localResult = solution.maximalRectangle(matrix);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
