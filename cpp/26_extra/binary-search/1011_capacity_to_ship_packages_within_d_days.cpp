/*
 * Problem: 1011. 在 D 天内送达包裹的能力 / Capacity To Ship Packages Within D Days
 * Link: https://leetcode.cn/problems/capacity-to-ship-packages-within-d-days/
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
    int shipWithinDays(vector<int>& weights, int days) {
        // TODO: 在这里实现你的解法。
        (void)weights;
        (void)days;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int days = 5;
        auto localResult = solution.shipWithinDays(weights, days);
        int expected = 15;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> weights = {3, 2, 2, 4, 1, 4};
        int days = 3;
        auto localResult = solution.shipWithinDays(weights, days);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> weights = {1, 2, 3, 1, 1};
        int days = 4;
        auto localResult = solution.shipWithinDays(weights, days);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
