/*
 * Problem: 15. 三数之和 / 3Sum
 * Link: https://leetcode.cn/problems/3sum/
 * Chapter: 双指针
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
    vector<vector<int>> threeSum(vector<int>& nums) {

    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {-1, 0, 1, 2, -1, -4};
        assert((sortedInnerAndOuter(solution.threeSum(nums)) == sortedInnerAndOuter(vector<vector<int>>{{-1, -1, 2}, {-1, 0, 1}})));
    }

    {
        vector<int> nums = {0, 1, 1};
        assert((sortedInnerAndOuter(solution.threeSum(nums)) == sortedInnerAndOuter(vector<vector<int>>{})));
    }

    {
        vector<int> nums = {0, 0, 0};
        assert((sortedInnerAndOuter(solution.threeSum(nums)) == sortedInnerAndOuter(vector<vector<int>>{{0, 0, 0}})));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
