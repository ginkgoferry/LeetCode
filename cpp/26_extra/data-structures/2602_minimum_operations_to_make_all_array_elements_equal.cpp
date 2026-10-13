/*
 * Problem: 2602. 使数组元素全部相等的最少操作次数 / Minimum Operations to Make All Array Elements Equal
 * Link: https://leetcode.cn/problems/minimum-operations-to-make-all-array-elements-equal/
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
    vector<long long> minOperations(vector<int>& nums, vector<int>& queries) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)queries;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {3, 1, 6, 8};
        vector<int> queries = {1, 5};
        auto localResult = solution.minOperations(nums, queries);
        vector<long long> expected = {14LL, 10LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 9, 6, 3};
        vector<int> queries = {10};
        auto localResult = solution.minOperations(nums, queries);
        vector<long long> expected = {20LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
