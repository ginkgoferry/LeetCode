/*
 * Problem: 3366. 最小数组和 / Minimum Array Sum
 * Link: https://leetcode.cn/problems/minimum-array-sum/
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
    int minArraySum(vector<int>& nums, int k, int op1, int op2) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)op1;
        (void)op2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {2, 8, 3, 19, 3};
        int k = 3;
        int op1 = 1;
        int op2 = 1;
        auto localResult = solution.minArraySum(nums, k, op1, op2);
        int expected = 23;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 4, 3};
        int k = 3;
        int op1 = 2;
        int op2 = 1;
        auto localResult = solution.minArraySum(nums, k, op1, op2);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
