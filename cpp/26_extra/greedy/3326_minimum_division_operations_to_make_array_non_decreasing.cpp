/*
 * Problem: 3326. 使数组非递减的最少除法操作次数 / Minimum Division Operations to Make Array Non Decreasing
 * Link: https://leetcode.cn/problems/minimum-division-operations-to-make-array-non-decreasing/
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
    int minOperations(vector<int>& nums) {
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
        vector<int> nums = {25, 7};
        auto localResult = solution.minOperations(nums);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {7, 7, 6};
        auto localResult = solution.minOperations(nums);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 1, 1};
        auto localResult = solution.minOperations(nums);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
