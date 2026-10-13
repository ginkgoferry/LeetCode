/*
 * Problem: 2483. 商店的最少代价 / Minimum Penalty for a Shop
 * Link: https://leetcode.cn/problems/minimum-penalty-for-a-shop/
 * Chapter: 动态规划
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
    int bestClosingTime(string customers) {
        // TODO: 在这里实现你的解法。
        (void)customers;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string customers = "YYNY";
        auto localResult = solution.bestClosingTime(customers);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string customers = "NNNNN";
        auto localResult = solution.bestClosingTime(customers);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string customers = "YYYY";
        auto localResult = solution.bestClosingTime(customers);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
