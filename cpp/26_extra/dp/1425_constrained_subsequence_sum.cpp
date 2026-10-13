/*
 * Problem: 1425. 带限制的子序列和 / Constrained Subsequence Sum
 * Link: https://leetcode.cn/problems/constrained-subsequence-sum/
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
    int constrainedSubsetSum(vector<int>& nums, int k) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {10, 2, -10, 5, 20};
        int k = 2;
        auto localResult = solution.constrainedSubsetSum(nums, k);
        int expected = 37;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-1, -2, -3};
        int k = 1;
        auto localResult = solution.constrainedSubsetSum(nums, k);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {10, -2, -10, -5, 20};
        int k = 2;
        auto localResult = solution.constrainedSubsetSum(nums, k);
        int expected = 23;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
