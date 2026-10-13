/*
 * Problem: 3098. 求出所有子序列的能量和 / Find the Sum of Subsequence Powers
 * Link: https://leetcode.cn/problems/find-the-sum-of-subsequence-powers/
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
    int sumOfPowers(vector<int>& nums, int k) {
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
        vector<int> nums = {1, 2, 3, 4};
        int k = 3;
        auto localResult = solution.sumOfPowers(nums, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2};
        int k = 2;
        auto localResult = solution.sumOfPowers(nums, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 3, -1};
        int k = 2;
        auto localResult = solution.sumOfPowers(nums, k);
        int expected = 10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
