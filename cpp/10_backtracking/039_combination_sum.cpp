/*
 * Problem: 39. 组合总和 / Combination Sum
 * Link: https://leetcode.cn/problems/combination-sum/
 * Chapter: 回溯
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
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> candidates = {2, 3, 6, 7};
        int target = 7;
        assert((sortedInnerAndOuter(solution.combinationSum(candidates, target)) == sortedInnerAndOuter(vector<vector<int>>{{2, 2, 3}, {7}})));
    }

    {
        vector<int> candidates = {2, 3, 5};
        int target = 8;
        assert((sortedInnerAndOuter(solution.combinationSum(candidates, target)) == sortedInnerAndOuter(vector<vector<int>>{{2, 2, 2, 2}, {2, 3, 3}, {3, 5}})));
    }

    {
        vector<int> candidates = {2};
        int target = 1;
        assert((sortedInnerAndOuter(solution.combinationSum(candidates, target)) == sortedInnerAndOuter(vector<vector<int>>{})));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
