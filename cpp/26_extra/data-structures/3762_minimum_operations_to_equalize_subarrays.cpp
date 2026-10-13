/*
 * Problem: 3762. 使数组元素相等的最小操作次数 / Minimum Operations to Equalize Subarrays
 * Link: https://leetcode.cn/problems/minimum-operations-to-equalize-subarrays/
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
    vector<long long> minOperations(vector<int>& nums, int k, vector<vector<int>>& queries) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)k;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 4, 7};
        int k = 3;
        vector<vector<int>> queries = {{0, 1}, {0, 2}};
        auto localResult = solution.minOperations(nums, k, queries);
        vector<long long> expected = {1LL, 2LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 4};
        int k = 2;
        vector<vector<int>> queries = {{0, 2}, {0, 0}, {1, 2}};
        auto localResult = solution.minOperations(nums, k, queries);
        vector<long long> expected = {-1LL, 0LL, 1LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
