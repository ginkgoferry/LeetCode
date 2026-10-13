/*
 * Problem: 2335. 装满杯子需要的最短总时长 / Minimum Amount of Time to Fill Cups
 * Link: https://leetcode.cn/problems/minimum-amount-of-time-to-fill-cups/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int fillCups(vector<int>& amount) {
        // TODO: 在这里实现你的解法。
        (void)amount;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> amount = {1, 4, 2};
        auto localResult = solution.fillCups(amount);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> amount = {5, 4, 4};
        auto localResult = solution.fillCups(amount);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> amount = {5, 0, 0};
        auto localResult = solution.fillCups(amount);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
