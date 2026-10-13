/*
 * Problem: 542. 01 矩阵 / 01 Matrix
 * Link: https://leetcode.cn/problems/01-matrix/
 * Chapter: 网格图
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
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        // TODO: 在这里实现你的解法。
        (void)mat;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> mat = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
        auto localResult = solution.updateMatrix(mat);
        vector<vector<int>> expected = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{0, 0, 0}, {0, 1, 0}, {1, 1, 1}};
        auto localResult = solution.updateMatrix(mat);
        vector<vector<int>> expected = {{0, 0, 0}, {0, 1, 0}, {1, 2, 1}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
