/*
 * Problem: 3525. 求出数组的 X 值 II / Find X Value of Array II
 * Link: https://leetcode.cn/problems/find-x-value-of-array-ii/
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
    vector<int> resultArray(vector<int>& nums, int k, vector<vector<int>>& queries) {
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
        vector<int> nums = {1, 2, 3, 4, 5};
        int k = 3;
        vector<vector<int>> queries = {{2, 2, 0, 2}, {3, 3, 3, 0}, {0, 1, 0, 1}};
        auto localResult = solution.resultArray(nums, k, queries);
        vector<int> expected = {2, 2, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 2, 4, 8, 16, 32};
        int k = 4;
        vector<vector<int>> queries = {{0, 2, 0, 2}, {0, 2, 0, 1}};
        auto localResult = solution.resultArray(nums, k, queries);
        vector<int> expected = {1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {1, 1, 2, 1, 1};
        int k = 2;
        vector<vector<int>> queries = {{2, 1, 0, 1}};
        auto localResult = solution.resultArray(nums, k, queries);
        vector<int> expected = {5};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
