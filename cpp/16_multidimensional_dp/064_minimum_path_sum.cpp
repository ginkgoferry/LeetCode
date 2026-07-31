/*
 * Problem: 64. 最小路径和 / Minimum Path Sum
 * Link: https://leetcode.cn/problems/minimum-path-sum/
 * Chapter: 多维动态规划
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
    int minPathSum(vector<vector<int>>& grid) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<vector<int>> grid = {{1, 3, 1}, {1, 5, 1}, {4, 2, 1}};
        assert((solution.minPathSum(grid) == 7));
    }

    {
        vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}};
        assert((solution.minPathSum(grid) == 12));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
