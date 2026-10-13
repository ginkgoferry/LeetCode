/*
 * Problem: 3488. 距离最小相等元素查询 / Closest Equal Element Queries
 * Link: https://leetcode.cn/problems/closest-equal-element-queries/
 * Chapter: 二分查找
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
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
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
        vector<int> nums = {1, 3, 1, 4, 1, 3, 2};
        vector<int> queries = {0, 3, 5};
        auto localResult = solution.solveQueries(nums, queries);
        vector<int> expected = {2, -1, 3};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 3, 4};
        vector<int> queries = {0, 1, 2, 3};
        auto localResult = solution.solveQueries(nums, queries);
        vector<int> expected = {-1, -1, -1, -1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
