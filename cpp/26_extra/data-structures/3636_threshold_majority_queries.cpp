/*
 * Problem: 3636. 查询超过阈值频率最高元素 / Threshold Majority Queries
 * Link: https://leetcode.cn/problems/threshold-majority-queries/
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
    vector<int> subarrayMajority(vector<int>& nums, vector<vector<int>>& queries) {
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
        vector<int> nums = {1, 1, 2, 2, 1, 1};
        vector<vector<int>> queries = {{0, 5, 4}, {0, 3, 3}, {2, 3, 2}};
        auto localResult = solution.subarrayMajority(nums, queries);
        vector<int> expected = {1, -1, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 2, 3, 2, 3, 2, 3};
        vector<vector<int>> queries = {{0, 6, 4}, {1, 5, 2}, {2, 4, 1}, {3, 3, 1}};
        auto localResult = solution.subarrayMajority(nums, queries);
        vector<int> expected = {3, 2, 3, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
