/*
 * Problem: 3312. 查询排序后的最大公约数 / Sorted GCD Pair Queries
 * Link: https://leetcode.cn/problems/sorted-gcd-pair-queries/
 * Chapter: 数学
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
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {
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
        vector<int> nums = {2, 3, 4};
        vector<long long> queries = {0LL, 2LL, 2LL};
        auto localResult = solution.gcdValues(nums, queries);
        vector<int> expected = {1, 2, 2};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {4, 4, 2, 1};
        vector<long long> queries = {5LL, 3LL, 1LL, 0LL};
        auto localResult = solution.gcdValues(nums, queries);
        vector<int> expected = {4, 2, 1, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {2, 2};
        vector<long long> queries = {0LL, 0LL};
        auto localResult = solution.gcdValues(nums, queries);
        vector<int> expected = {2, 2};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
