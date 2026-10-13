/*
 * Problem: 1424. 对角线遍历 II / Diagonal Traverse II
 * Link: https://leetcode.cn/problems/diagonal-traverse-ii/
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
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> nums = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        auto localResult = solution.findDiagonalOrder(nums);
        vector<int> expected = {1, 4, 2, 7, 5, 3, 8, 6, 9};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> nums = {{1, 2, 3, 4, 5}, {6, 7}, {8}, {9, 10, 11}, {12, 13, 14, 15, 16}};
        auto localResult = solution.findDiagonalOrder(nums);
        vector<int> expected = {1, 6, 2, 8, 7, 3, 9, 4, 12, 10, 5, 13, 11, 14, 15, 16};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> nums = {{1, 2, 3}, {4}, {5, 6, 7}, {8}, {9, 10, 11}};
        auto localResult = solution.findDiagonalOrder(nums);
        vector<int> expected = {1, 4, 2, 5, 3, 8, 6, 9, 7, 10, 11};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> nums = {{1, 2, 3, 4, 5, 6}};
        auto localResult = solution.findDiagonalOrder(nums);
        vector<int> expected = {1, 2, 3, 4, 5, 6};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
