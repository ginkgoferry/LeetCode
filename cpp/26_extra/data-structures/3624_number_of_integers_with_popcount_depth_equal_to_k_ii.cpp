/*
 * Problem: 3624. 位计数深度为 K 的整数数目 II / Number of Integers With Popcount-Depth Equal to K II
 * Link: https://leetcode.cn/problems/number-of-integers-with-popcount-depth-equal-to-k-ii/
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
    vector<int> popcountDepth(vector<long long>& nums, vector<vector<long long>>& queries) {
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
        vector<long long> nums = {2LL, 4LL};
        vector<vector<long long>> queries = {{1LL, 0LL, 1LL, 1LL}, {2LL, 1LL, 1LL}, {1LL, 0LL, 1LL, 0LL}};
        auto localResult = solution.popcountDepth(nums, queries);
        vector<int> expected = {2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<long long> nums = {3LL, 5LL, 6LL};
        vector<vector<long long>> queries = {{1LL, 0LL, 2LL, 2LL}, {2LL, 1LL, 4LL}, {1LL, 1LL, 2LL, 1LL}, {1LL, 0LL, 1LL, 0LL}};
        auto localResult = solution.popcountDepth(nums, queries);
        vector<int> expected = {3, 1, 0};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<long long> nums = {1LL, 2LL};
        vector<vector<long long>> queries = {{1LL, 0LL, 1LL, 1LL}, {2LL, 0LL, 3LL}, {1LL, 0LL, 0LL, 1LL}, {1LL, 0LL, 0LL, 2LL}};
        auto localResult = solution.popcountDepth(nums, queries);
        vector<int> expected = {1, 0, 1};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
