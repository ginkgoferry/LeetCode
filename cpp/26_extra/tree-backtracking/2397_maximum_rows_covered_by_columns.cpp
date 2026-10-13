/*
 * Problem: 2397. 被列覆盖的最多行数 / Maximum Rows Covered by Columns
 * Link: https://leetcode.cn/problems/maximum-rows-covered-by-columns/
 * Chapter: 树与回溯
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
    int maximumRows(vector<vector<int>>& matrix, int numSelect) {
        // TODO: 在这里实现你的解法。
        (void)matrix;
        (void)numSelect;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> matrix = {{0, 0, 0}, {1, 0, 1}, {0, 1, 1}, {0, 0, 1}};
        int numSelect = 2;
        auto localResult = solution.maximumRows(matrix, numSelect);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> matrix = {{1}, {0}};
        int numSelect = 1;
        auto localResult = solution.maximumRows(matrix, numSelect);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
