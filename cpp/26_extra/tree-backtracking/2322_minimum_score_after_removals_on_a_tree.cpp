/*
 * Problem: 2322. 从树中删除边的最小分数 / Minimum Score After Removals on a Tree
 * Link: https://leetcode.cn/problems/minimum-score-after-removals-on-a-tree/
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
    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 5, 5, 4, 11};
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {1, 3}, {3, 4}};
        auto localResult = solution.minimumScore(nums, edges);
        int expected = 9;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 5, 2, 4, 4, 2};
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {5, 2}, {4, 3}, {1, 3}};
        auto localResult = solution.minimumScore(nums, edges);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
