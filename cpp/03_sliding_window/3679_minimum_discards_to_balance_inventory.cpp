/*
 * Problem: 3679. 使库存平衡的最少丢弃次数 / Minimum Discards to Balance Inventory
 * Link: https://leetcode.cn/problems/minimum-discards-to-balance-inventory/
 * Chapter: 滑动窗口
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
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        // TODO: 在这里实现你的解法。
        (void)arrivals;
        (void)w;
        (void)m;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> arrivals = {1, 2, 1, 3, 1};
        int w = 4;
        int m = 2;
        auto localResult = solution.minArrivalsToDiscard(arrivals, w, m);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> arrivals = {1, 2, 3, 3, 3, 4};
        int w = 3;
        int m = 2;
        auto localResult = solution.minArrivalsToDiscard(arrivals, w, m);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
