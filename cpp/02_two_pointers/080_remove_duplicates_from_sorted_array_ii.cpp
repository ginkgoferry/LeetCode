/*
 * Problem: 80. 删除有序数组中的重复项 II / Remove Duplicates from Sorted Array II
 * Link: https://leetcode.cn/problems/remove-duplicates-from-sorted-array-ii/
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
    int removeDuplicates(vector<int>& nums) {
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
        vector<int> nums = {1, 1, 1, 2, 2, 3};
        auto localResult = solution.removeDuplicates(nums);
        int expected = 5;
        assert((localResult == expected));
        assert(nums.size() >= static_cast<size_t>(localResult));
        vector<int> prefix(nums.begin(), nums.begin() + localResult);
        vector<int> expectedPrefix = {1, 1, 2, 2, 3};
        assert(prefix == expectedPrefix);
    }

    {
        // 官方样例
        vector<int> nums = {0, 0, 1, 1, 1, 1, 2, 3, 3};
        auto localResult = solution.removeDuplicates(nums);
        int expected = 7;
        assert((localResult == expected));
        assert(nums.size() >= static_cast<size_t>(localResult));
        vector<int> prefix(nums.begin(), nums.begin() + localResult);
        vector<int> expectedPrefix = {0, 0, 1, 1, 2, 3, 3};
        assert(prefix == expectedPrefix);
    }

    {
        // 额外边界用例
        vector<int> nums = {1};
        auto localResult = solution.removeDuplicates(nums);
        int expected = 1;
        assert((localResult == expected));
        assert(nums.size() >= static_cast<size_t>(localResult));
        vector<int> prefix(nums.begin(), nums.begin() + localResult);
        vector<int> expectedPrefix = {1};
        assert(prefix == expectedPrefix);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
