/*
 * Problem: 3569. 分割数组后不同质数的最大数目 / Maximize Count of Distinct Primes After Split
 * Link: https://leetcode.cn/problems/maximize-count-of-distinct-primes-after-split/
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
    vector<int> maximumCount(vector<int>& nums, vector<vector<int>>& queries) {
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
        vector<int> nums = {2, 1, 3, 1, 2};
        vector<vector<int>> queries = {{1, 2}, {3, 3}};
        auto localResult = solution.maximumCount(nums, queries);
        vector<int> expected = {3, 4};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 1, 4};
        vector<vector<int>> queries = {{0, 1}};
        auto localResult = solution.maximumCount(nums, queries);
        vector<int> expected = {0};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
