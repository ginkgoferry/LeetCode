/*
 * Problem: 2906. 构造乘积矩阵 / Construct Product Matrix
 * Link: https://leetcode.cn/problems/construct-product-matrix/
 * Chapter: 动态规划
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
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
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
        vector<vector<int>> grid = {{1, 2}, {3, 4}};
        auto localResult = solution.constructProductMatrix(grid);
        vector<vector<int>> expected = {{24, 12}, {8, 6}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{12345}, {2}, {1}};
        auto localResult = solution.constructProductMatrix(grid);
        vector<vector<int>> expected = {{2}, {0}, {0}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
