/*
 * Problem: 3425. 最长特殊路径 / Longest Special Path
 * Link: https://leetcode.cn/problems/longest-special-path/
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
        vector<vector<int>> edges = {{0, 1, 2}, {1, 2, 3}, {1, 3, 5}, {1, 4, 4}, {2, 5, 6}};
        vector<int> nums = {2, 1, 2, 1, 3, 1};
        auto localResult = solution.longestSpecialPath(edges, nums);
        vector<int> expected = {6, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{1, 0, 8}};
        vector<int> nums = {2, 2};
        auto localResult = solution.longestSpecialPath(edges, nums);
        vector<int> expected = {0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
