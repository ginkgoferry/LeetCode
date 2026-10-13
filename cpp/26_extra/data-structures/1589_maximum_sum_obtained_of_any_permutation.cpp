/*
 * Problem: 1589. 所有排列中的最大和 / Maximum Sum Obtained of Any Permutation
 * Link: https://leetcode.cn/problems/maximum-sum-obtained-of-any-permutation/
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
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)requests;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 5};
        vector<vector<int>> requests = {{1, 3}, {0, 1}};
        auto localResult = solution.maxSumRangeQuery(nums, requests);
        int expected = 19;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 5, 6};
        vector<vector<int>> requests = {{0, 1}};
        auto localResult = solution.maxSumRangeQuery(nums, requests);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4, 5, 10};
        vector<vector<int>> requests = {{0, 2}, {1, 3}, {1, 1}};
        auto localResult = solution.maxSumRangeQuery(nums, requests);
        int expected = 47;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
