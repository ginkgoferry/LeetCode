/*
 * Problem: 3301. 高度互不相同的最大塔高和 / Maximize the Total Height of Unique Towers
 * Link: https://leetcode.cn/problems/maximize-the-total-height-of-unique-towers/
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
    long long maximumTotalSum(vector<int>& maximumHeight) {
        // TODO: 在这里实现你的解法。
        (void)maximumHeight;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> maximumHeight = {2, 3, 4, 3};
        auto localResult = solution.maximumTotalSum(maximumHeight);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> maximumHeight = {15, 10};
        auto localResult = solution.maximumTotalSum(maximumHeight);
        long long expected = 25LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> maximumHeight = {2, 2, 1};
        auto localResult = solution.maximumTotalSum(maximumHeight);
        long long expected = -1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
