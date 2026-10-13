/*
 * Problem: 2343. 裁剪数字后查询第 K 小的数字 / Query Kth Smallest Trimmed Number
 * Link: https://leetcode.cn/problems/query-kth-smallest-trimmed-number/
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
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
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
        vector<string> nums = {"102", "473", "251", "814"};
        vector<vector<int>> queries = {{1, 1}, {2, 3}, {4, 2}, {1, 2}};
        auto localResult = solution.smallestTrimmedNumbers(nums, queries);
        vector<int> expected = {2, 2, 1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> nums = {"24", "37", "96", "04"};
        vector<vector<int>> queries = {{2, 1}, {2, 2}};
        auto localResult = solution.smallestTrimmedNumbers(nums, queries);
        vector<int> expected = {3, 0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
