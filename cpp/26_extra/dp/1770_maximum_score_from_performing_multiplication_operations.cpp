/*
 * Problem: 1770. 执行乘法运算的最大分数 / Maximum Score from Performing Multiplication Operations
 * Link: https://leetcode.cn/problems/maximum-score-from-performing-multiplication-operations/
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
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)multipliers;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 3};
        vector<int> multipliers = {3, 2, 1};
        auto localResult = solution.maximumScore(nums, multipliers);
        int expected = 14;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {-5, -3, -3, -2, 7, 1};
        vector<int> multipliers = {-10, -5, 3, 4, 6};
        auto localResult = solution.maximumScore(nums, multipliers);
        int expected = 102;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
