/*
 * Problem: 3321. 计算子数组的 x-sum II / Find X-Sum of All K-Long Subarrays II
 * Link: https://leetcode.cn/problems/find-x-sum-of-all-k-long-subarrays-ii/
 * Chapter: 数据结构
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
    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)x;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 1, 2, 2, 3, 4, 2, 3};
        int k = 6;
        int x = 2;
        auto localResult = solution.findXSum(nums, k, x);
        vector<long long> expected = {6LL, 10LL, 12LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 8, 7, 8, 7, 5};
        int k = 2;
        int x = 2;
        auto localResult = solution.findXSum(nums, k, x);
        vector<long long> expected = {11LL, 15LL, 15LL, 15LL, 12LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
