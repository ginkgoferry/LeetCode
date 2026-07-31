/*
 * Problem: 73. 矩阵置零 / Set Matrix Zeroes
 * Link: https://leetcode.cn/problems/set-matrix-zeroes/
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
    void setZeroes(vector<vector<int>>& matrix) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
        solution.setZeroes(matrix);
        assert((matrix == vector<vector<int>>{{1, 0, 1}, {0, 0, 0}, {1, 0, 1}}));
    }

    {
        vector<vector<int>> matrix = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
        solution.setZeroes(matrix);
        assert((matrix == vector<vector<int>>{{0, 0, 0, 0}, {0, 4, 5, 0}, {0, 3, 1, 0}}));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
