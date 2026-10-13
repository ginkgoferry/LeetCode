/*
 * Problem: 3486. 最长特殊路径 II / Longest Special Path II
 * Link: https://leetcode.cn/problems/longest-special-path-ii/
 * Chapter: 树与回溯
 * Difficulty: Hard
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
    vector<int> longestSpecialPath(vector<vector<int>>& edges, vector<int>& nums) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)nums;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1, 1}, {1, 2, 3}, {1, 3, 1}, {2, 4, 6}, {4, 7, 2}, {3, 5, 2}, {3, 6, 5}, {6, 8, 3}};
        vector<int> nums = {1, 1, 0, 3, 1, 2, 1, 1, 0};
        auto localResult = solution.longestSpecialPath(edges, nums);
        vector<int> expected = {9, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{1, 0, 3}, {0, 2, 4}, {0, 3, 5}};
        vector<int> nums = {1, 1, 0, 2};
        auto localResult = solution.longestSpecialPath(edges, nums);
        vector<int> expected = {5, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
