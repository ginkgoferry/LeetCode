/*
 * Problem: 3473. 长度至少为 M 的 K 个子数组之和 / Sum of K Subarrays With Length at Least M
 * Link: https://leetcode.cn/problems/sum-of-k-subarrays-with-length-at-least-m/
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
    int maxSum(vector<int>& nums, int k, int m) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, -1, 3, 3, 4};
        int k = 2;
        int m = 2;
        auto localResult = solution.maxSum(nums, k, m);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-10, 3, -1, -2};
        int k = 4;
        int m = 1;
        auto localResult = solution.maxSum(nums, k, m);
        int expected = -10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
