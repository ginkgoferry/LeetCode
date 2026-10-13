/*
 * Problem: 2790. 长度递增组的最大数目 / Maximum Number of Groups With Increasing Length
 * Link: https://leetcode.cn/problems/maximum-number-of-groups-with-increasing-length/
 * Chapter: 贪心算法
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
    int maxIncreasingGroups(vector<int>& usageLimits) {
        // TODO: 在这里实现你的解法。
        (void)usageLimits;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> usageLimits = {1, 2, 5};
        auto localResult = solution.maxIncreasingGroups(usageLimits);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> usageLimits = {2, 1, 2};
        auto localResult = solution.maxIncreasingGroups(usageLimits);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> usageLimits = {1, 1};
        auto localResult = solution.maxIncreasingGroups(usageLimits);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
