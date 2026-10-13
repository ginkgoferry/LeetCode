/*
 * Problem: 3070. 元素和小于等于 k 的子矩阵的数目 / Count Submatrices with Top-Left Element and Sum Less Than k
 * Link: https://leetcode.cn/problems/count-submatrices-with-top-left-element-and-sum-less-than-k/
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
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{7, 6, 3}, {6, 6, 1}};
        int k = 18;
        auto localResult = solution.countSubmatrices(grid, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{7, 2, 9}, {1, 5, 0}, {2, 6, 6}};
        int k = 20;
        auto localResult = solution.countSubmatrices(grid, k);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
