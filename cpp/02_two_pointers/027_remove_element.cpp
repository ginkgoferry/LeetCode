/*
 * Problem: 27. 移除元素 / Remove Element
 * Link: https://leetcode.cn/problems/remove-element/
 * Chapter: 双指针
 * Difficulty: Easy
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
    int removeElement(vector<int>& nums, int val) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)val;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 2, 2, 3};
        int val = 3;
        auto localResult = solution.removeElement(nums, val);
        int expected = 2;
        assert((localResult == expected));
        assert(nums.size() >= static_cast<size_t>(localResult));
        vector<int> prefix(nums.begin(), nums.begin() + localResult);
        vector<int> expectedPrefix = {2, 2};
        sort(prefix.begin(), prefix.end());
        sort(expectedPrefix.begin(), expectedPrefix.end());
        assert(prefix == expectedPrefix);
    }

    {
        // 官方样例
        vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
        int val = 2;
        auto localResult = solution.removeElement(nums, val);
        int expected = 5;
        assert((localResult == expected));
        assert(nums.size() >= static_cast<size_t>(localResult));
        vector<int> prefix(nums.begin(), nums.begin() + localResult);
        vector<int> expectedPrefix = {0, 1, 4, 0, 3};
        sort(prefix.begin(), prefix.end());
        sort(expectedPrefix.begin(), expectedPrefix.end());
        assert(prefix == expectedPrefix);
    }

    {
        // 额外边界用例
        vector<int> nums = {};
        int val = 1;
        auto localResult = solution.removeElement(nums, val);
        int expected = 0;
        assert((localResult == expected));
        assert(nums.size() >= static_cast<size_t>(localResult));
        vector<int> prefix(nums.begin(), nums.begin() + localResult);
        vector<int> expectedPrefix = {};
        sort(prefix.begin(), prefix.end());
        sort(expectedPrefix.begin(), expectedPrefix.end());
        assert(prefix == expectedPrefix);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
