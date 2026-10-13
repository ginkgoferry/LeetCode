/*
 * Problem: 2897. 对数组执行操作使平方和最大 / Apply Operations on Array to Maximize Sum of Squares
 * Link: https://leetcode.cn/problems/apply-operations-on-array-to-maximize-sum-of-squares/
 * Chapter: 位运算
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
    int maxSum(vector<int>& nums, int k) {
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
        vector<int> nums = {2, 6, 5, 8};
        int k = 2;
        auto localResult = solution.maxSum(nums, k);
        int expected = 261;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 5, 4, 7};
        int k = 3;
        auto localResult = solution.maxSum(nums, k);
        int expected = 90;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
