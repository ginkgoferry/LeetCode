/*
 * Problem: 3961. 设备评分的最大和 / Maximize Sum of Device Ratings
 * Link: https://leetcode.cn/problems/maximize-sum-of-device-ratings/
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
    long long maxRatings(vector<vector<int>>& units) {
        // TODO: 在这里实现你的解法。
        (void)units;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> units = {{1, 3}, {2, 2}};
        auto localResult = solution.maxRatings(units);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> units = {{1, 2, 3}, {4, 5, 6}};
        auto localResult = solution.maxRatings(units);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> units = {{5, 5, 5}, {1, 1, 1}};
        auto localResult = solution.maxRatings(units);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
