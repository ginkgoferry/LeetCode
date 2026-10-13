/*
 * Problem: 1482. 制作 m 束花所需的最少天数 / Minimum Number of Days to Make m Bouquets
 * Link: https://leetcode.cn/problems/minimum-number-of-days-to-make-m-bouquets/
 * Chapter: 二分查找
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
    int minDays(vector<int>& bloomDay, int m, int k) {
        // TODO: 在这里实现你的解法。
        (void)bloomDay;
        (void)m;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> bloomDay = {1, 10, 3, 10, 2};
        int m = 3;
        int k = 1;
        auto localResult = solution.minDays(bloomDay, m, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> bloomDay = {1, 10, 3, 10, 2};
        int m = 3;
        int k = 2;
        auto localResult = solution.minDays(bloomDay, m, k);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> bloomDay = {7, 7, 7, 7, 12, 7, 7};
        int m = 2;
        int k = 3;
        auto localResult = solution.minDays(bloomDay, m, k);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> bloomDay = {1000000000, 1000000000};
        int m = 1;
        int k = 1;
        auto localResult = solution.minDays(bloomDay, m, k);
        int expected = 1000000000;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> bloomDay = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
        int m = 4;
        int k = 2;
        auto localResult = solution.minDays(bloomDay, m, k);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
