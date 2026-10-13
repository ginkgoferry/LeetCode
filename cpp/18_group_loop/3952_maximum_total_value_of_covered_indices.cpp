/*
 * Problem: 3952. 下标覆盖处的最大总和 / Maximum Total Value of Covered Indices
 * Link: https://leetcode.cn/problems/maximum-total-value-of-covered-indices/
 * Chapter: 分组循环
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
    long long maxTotal(vector<int>& nums, string s) {
        // TODO: 在这里实现你的解法。
        (void)nums;
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> nums = {9, 2, 6, 1};
        string s = "0101";
        auto localResult = solution.maxTotal(nums, s);
        long long expected = 15LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {5, 1, 4};
        string s = "001";
        auto localResult = solution.maxTotal(nums, s);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> nums = {9, 3, 5};
        string s = "011";
        auto localResult = solution.maxTotal(nums, s);
        long long expected = 14LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
