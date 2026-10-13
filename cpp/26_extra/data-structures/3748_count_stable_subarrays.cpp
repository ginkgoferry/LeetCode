/*
 * Problem: 3748. 统计稳定子数组的数目 / Count Stable Subarrays
 * Link: https://leetcode.cn/problems/count-stable-subarrays/
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
    vector<long long> countStableSubarrays(vector<int>& nums, vector<vector<int>>& queries) {
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
        vector<int> nums = {3, 1, 2};
        vector<vector<int>> queries = {{0, 1}, {1, 2}, {0, 2}};
        auto localResult = solution.countStableSubarrays(nums, queries);
        vector<long long> expected = {2LL, 3LL, 4LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2};
        vector<vector<int>> queries = {{0, 1}, {0, 0}};
        auto localResult = solution.countStableSubarrays(nums, queries);
        vector<long long> expected = {3LL, 1LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
