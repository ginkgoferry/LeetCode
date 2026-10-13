/*
 * Problem: 2598. 执行操作后的最大 MEX / Smallest Missing Non-negative Integer After Operations
 * Link: https://leetcode.cn/problems/smallest-missing-non-negative-integer-after-operations/
 * Chapter: 数学
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
    int findSmallestInteger(vector<int>& nums, int value) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)value;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, -10, 7, 13, 6, 8};
        int value = 5;
        auto localResult = solution.findSmallestInteger(nums, value);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, -10, 7, 13, 6, 8};
        int value = 7;
        auto localResult = solution.findSmallestInteger(nums, value);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
