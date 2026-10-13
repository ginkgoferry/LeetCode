/*
 * Problem: 1314. 矩阵区域和 / Matrix Block Sum
 * Link: https://leetcode.cn/problems/matrix-block-sum/
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
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        // TODO: 在这里实现你的解法。
        (void)mat;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int k = 1;
        auto localResult = solution.matrixBlockSum(mat, k);
        vector<vector<int>> expected = {{12, 21, 16}, {27, 45, 33}, {24, 39, 28}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int k = 2;
        auto localResult = solution.matrixBlockSum(mat, k);
        vector<vector<int>> expected = {{45, 45, 45}, {45, 45, 45}, {45, 45, 45}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
