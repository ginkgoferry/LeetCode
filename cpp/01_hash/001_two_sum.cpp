/*
 * Problem: 1. 两数之和 / Two Sum
 * Link: https://leetcode.cn/problems/two-sum/
 * Chapter: 哈希
 * Difficulty: Easy
 *
 * Idea:
 * - 遍历数组，用哈希表记录已经访问过的数字及其下标。
 * - 对每个数，先检查 target - nums[i] 是否已经出现过。
 *
 * Complexity:
 * - Time: O(n)
 * - Space: O(n)
 *
 * Pitfalls:
 * - 
 *
 * Review:
 * - First pass: 2026-07-05
 * - Last attempt: 2026-07-05
 * - Last review:
 * - Next review:
 * - Confidence:
 * - Sessions: 1
 * - Status: DONE
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
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> idx;
        for (int j = 0; j < n; j++) {
            auto it = idx.find(target - nums[j]);
            if (it != idx.end()) return {it->second, j};
            idx[nums[j]] = j;
        }
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        vector<int> nums = {2, 7, 11, 15};
        int target = 9;
        auto result = solution.twoSum(nums, target);
        auto expected = vector<int>{0, 1};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        vector<int> nums = {3, 2, 4};
        int target = 6;
        auto result = solution.twoSum(nums, target);
        auto expected = vector<int>{1, 2};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    {
        vector<int> nums = {3, 3};
        int target = 6;
        auto result = solution.twoSum(nums, target);
        auto expected = vector<int>{0, 1};
        sort(result.begin(), result.end());
        sort(expected.begin(), expected.end());
        assert((result == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
