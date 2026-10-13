/*
 * Problem: 40. 组合总和 II / Combination Sum II
 * Link: https://leetcode.cn/problems/combination-sum-ii/
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
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        // TODO: 在这里实现你的解法。
        (void)candidates;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
        int target = 8;
        auto localResult = solution.combinationSum2(candidates, target);
        vector<vector<int>> expected = {{1, 1, 6}, {1, 2, 5}, {1, 7}, {2, 6}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> candidates = {2, 5, 2, 1, 2};
        int target = 5;
        auto localResult = solution.combinationSum2(candidates, target);
        vector<vector<int>> expected = {{1, 2, 2}, {5}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
