/*
 * Problem: 54. 螺旋矩阵 / Spiral Matrix
 * Link: https://leetcode.cn/problems/spiral-matrix/
 * Chapter: 矩阵
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
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        assert((solution.spiralOrder(matrix) == vector<int>{1, 2, 3, 6, 9, 8, 7, 4, 5}));
    }

    {
        vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
        assert((solution.spiralOrder(matrix) == vector<int>{1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
