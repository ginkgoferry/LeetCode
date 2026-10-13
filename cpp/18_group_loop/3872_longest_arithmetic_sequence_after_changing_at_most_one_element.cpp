/*
 * Problem: 3872. 替换最多一个元素后的最长等差子数组 / Longest Arithmetic Sequence After Changing At Most One Element
 * Link: https://leetcode.cn/problems/longest-arithmetic-sequence-after-changing-at-most-one-element/
 * Chapter: 分组循环
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
    int longestArithmetic(vector<int>& nums) {
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
        vector<int> nums = {9, 7, 5, 10, 1};
        auto localResult = solution.longestArithmetic(nums);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 6, 7};
        auto localResult = solution.longestArithmetic(nums);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
