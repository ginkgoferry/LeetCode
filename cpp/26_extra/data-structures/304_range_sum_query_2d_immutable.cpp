/*
 * Problem: 304. 二维区域和检索 - 矩阵不可变 / Range Sum Query 2D - Immutable
 * Link: https://leetcode.cn/problems/range-sum-query-2d-immutable/
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

class NumMatrix {
public:
    NumMatrix(vector<vector<int>>& matrix) {
        // TODO: 在这里实现你的解法。
        (void)matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        // TODO: 在这里实现你的解法。
        (void)row1;
        (void)col1;
        (void)row2;
        (void)col2;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<vector<int>> matrix = {{3, 0, 1, 4, 2}, {5, 6, 3, 2, 1}, {1, 2, 0, 1, 5}, {4, 1, 0, 1, 7}, {1, 0, 3, 0, 5}};
        NumMatrix localObject(matrix);
        {
            int row1 = 2;
            int col1 = 1;
            int row2 = 4;
            int col2 = 3;
            auto localResult = localObject.sumRegion(row1, col1, row2, col2);
            int expected = 8;
            assert((localResult == expected));
        }
        {
            int row1 = 1;
            int col1 = 1;
            int row2 = 2;
            int col2 = 2;
            auto localResult = localObject.sumRegion(row1, col1, row2, col2);
            int expected = 11;
            assert((localResult == expected));
        }
        {
            int row1 = 1;
            int col1 = 2;
            int row2 = 2;
            int col2 = 4;
            auto localResult = localObject.sumRegion(row1, col1, row2, col2);
            int expected = 12;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
