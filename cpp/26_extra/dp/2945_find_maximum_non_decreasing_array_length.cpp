/*
 * Problem: 2945. 找到最大非递减数组的长度 / Find Maximum Non-decreasing Array Length
 * Link: https://leetcode.cn/problems/find-maximum-non-decreasing-array-length/
 * Chapter: 动态规划
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
    int findMaximumLength(vector<int>& nums) {
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
        vector<int> nums = {5, 2, 2};
        auto localResult = solution.findMaximumLength(nums);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4};
        auto localResult = solution.findMaximumLength(nums);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 3, 2, 6};
        auto localResult = solution.findMaximumLength(nums);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
