/*
 * Problem: 3351. 好子序列的元素之和 / Sum of Good Subsequences
 * Link: https://leetcode.cn/problems/sum-of-good-subsequences/
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
    int sumOfGoodSubsequences(vector<int>& nums) {
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
        vector<int> nums = {1, 2, 1};
        auto localResult = solution.sumOfGoodSubsequences(nums);
        int expected = 14;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 4, 5};
        auto localResult = solution.sumOfGoodSubsequences(nums);
        int expected = 40;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
