/*
 * Problem: 3462. 提取至多 K 个元素的最大总和 / Maximum Sum With at Most K Elements
 * Link: https://leetcode.cn/problems/maximum-sum-with-at-most-k-elements/
 * Chapter: 贪心算法
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
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        // TODO: 在这里实现你的解法。
        (void)grid;
        (void)limits;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> grid = {{1, 2}, {3, 4}};
        vector<int> limits = {1, 2};
        int k = 2;
        auto localResult = solution.maxSum(grid, limits, k);
        long long expected = 7LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> grid = {{5, 3, 7}, {8, 2, 6}};
        vector<int> limits = {2, 2};
        int k = 3;
        auto localResult = solution.maxSum(grid, limits, k);
        long long expected = 21LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
