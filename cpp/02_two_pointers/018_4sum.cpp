/*
 * Problem: 18. 四数之和 / 4Sum
 * Link: https://leetcode.cn/problems/4sum/
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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 0, -1, 0, -2, 2};
        int target = 0;
        auto localResult = solution.fourSum(nums, target);
        vector<vector<int>> expected = {{-2, -1, 1, 2}, {-2, 0, 0, 2}, {-1, 0, 0, 1}};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2, 2, 2, 2};
        int target = 8;
        auto localResult = solution.fourSum(nums, target);
        vector<vector<int>> expected = {{2, 2, 2, 2}};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        vector<int> nums = {1};
        int target = 0;
        auto localResult = solution.fourSum(nums, target);
        vector<vector<int>> expected = {};
        for (auto& row : localResult) sort(row.begin(), row.end());
        for (auto& row : expected) sort(row.begin(), row.end());
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
