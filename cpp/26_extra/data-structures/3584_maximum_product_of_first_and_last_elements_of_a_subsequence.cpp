/*
 * Problem: 3584. 子序列首尾元素的最大乘积 / Maximum Product of First and Last Elements of a Subsequence
 * Link: https://leetcode.cn/problems/maximum-product-of-first-and-last-elements-of-a-subsequence/
 * Chapter: 数据结构
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
    long long maximumProduct(vector<int>& nums, int m) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {-1, -9, 2, 3, -2, -3, 1};
        int m = 1;
        auto localResult = solution.maximumProduct(nums, m);
        long long expected = 81LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 3, -5, 5, 6, -4};
        int m = 3;
        auto localResult = solution.maximumProduct(nums, m);
        long long expected = 20LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, -1, 2, -6, 5, 2, -5, 7};
        int m = 2;
        auto localResult = solution.maximumProduct(nums, m);
        long long expected = 35LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
