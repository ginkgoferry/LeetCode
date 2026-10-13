/*
 * Problem: 1798. 你能构造出连续值的最大数目 / Maximum Number of Consecutive Values You Can Make
 * Link: https://leetcode.cn/problems/maximum-number-of-consecutive-values-you-can-make/
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
    int getMaximumConsecutive(vector<int>& coins) {
        // TODO: 在这里实现你的解法。
        (void)coins;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> coins = {1, 3};
        auto localResult = solution.getMaximumConsecutive(coins);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> coins = {1, 1, 1, 4};
        auto localResult = solution.getMaximumConsecutive(coins);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> coins = {1, 4, 10, 3, 1};
        auto localResult = solution.getMaximumConsecutive(coins);
        int expected = 20;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
