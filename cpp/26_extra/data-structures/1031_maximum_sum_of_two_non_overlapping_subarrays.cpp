/*
 * Problem: 1031. 两个无重叠子数组的最大和 / Maximum Sum of Two Non-Overlapping Subarrays
 * Link: https://leetcode.cn/problems/maximum-sum-of-two-non-overlapping-subarrays/
 * Chapter: 动态规划
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
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)firstLen;
        (void)secondLen;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {0, 6, 5, 2, 2, 5, 1, 9, 4};
        int firstLen = 1;
        int secondLen = 2;
        auto localResult = solution.maxSumTwoNoOverlap(nums, firstLen, secondLen);
        int expected = 20;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 8, 1, 3, 2, 1, 8, 9, 0};
        int firstLen = 3;
        int secondLen = 2;
        auto localResult = solution.maxSumTwoNoOverlap(nums, firstLen, secondLen);
        int expected = 29;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 1, 5, 6, 0, 9, 5, 0, 3, 8};
        int firstLen = 4;
        int secondLen = 3;
        auto localResult = solution.maxSumTwoNoOverlap(nums, firstLen, secondLen);
        int expected = 31;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
