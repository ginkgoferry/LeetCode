/*
 * Problem: 46. 全排列 / Permutations
 * Link: https://leetcode.cn/problems/permutations/
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
    vector<vector<int>> permute(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {1, 2, 3};
        assert((sortedOuter(solution.permute(nums)) == sortedOuter(vector<vector<int>>{{1, 2, 3}, {1, 3, 2}, {2, 1, 3}, {2, 3, 1}, {3, 1, 2}, {3, 2, 1}})));
    }

    {
        vector<int> nums = {0, 1};
        assert((sortedOuter(solution.permute(nums)) == sortedOuter(vector<vector<int>>{{0, 1}, {1, 0}})));
    }

    {
        vector<int> nums = {1};
        assert((sortedOuter(solution.permute(nums)) == sortedOuter(vector<vector<int>>{{1}})));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
