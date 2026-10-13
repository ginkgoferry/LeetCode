/*
 * Problem: 498. 对角线遍历 / Diagonal Traverse
 * Link: https://leetcode.cn/problems/diagonal-traverse/
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
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
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
        vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        auto localResult = solution.findDiagonalOrder(mat);
        vector<int> expected = {1, 2, 4, 7, 5, 3, 6, 8, 9};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> mat = {{1, 2}, {3, 4}};
        auto localResult = solution.findDiagonalOrder(mat);
        vector<int> expected = {1, 2, 3, 4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
