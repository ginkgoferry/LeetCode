/*
 * Problem: 4017. 数组中的峰值 II / Peaks in Array II
 * Link: https://leetcode.cn/problems/peaks-in-array-ii/
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
    vector<long long> countOfPeaks(vector<int>& nums, vector<vector<int>>& queries) {
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
        vector<int> nums = {1, 3, 2, 4};
        vector<vector<int>> queries = {{1, 0, 3}, {2, 1, 1}, {1, 0, 3}};
        auto localResult = solution.countOfPeaks(nums, queries);
        vector<long long> expected = {2LL, 0LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {9, 8, 9, 8};
        vector<vector<int>> queries = {{1, 1, 3}, {2, 2, 1}, {1, 0, 2}};
        auto localResult = solution.countOfPeaks(nums, queries);
        vector<long long> expected = {1LL, 0LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {3, 6, 2, 7, 1};
        vector<vector<int>> queries = {{1, 1, 3}, {2, 3, 0}, {1, 0, 4}};
        auto localResult = solution.countOfPeaks(nums, queries);
        vector<long long> expected = {0LL, 3LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
