/*
 * Problem: 2260. 必须拿起的最小连续卡牌数 / Minimum Consecutive Cards to Pick Up
 * Link: https://leetcode.cn/problems/minimum-consecutive-cards-to-pick-up/
 * Chapter: 数据结构
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
    int minimumCardPickup(vector<int>& cards) {
        // TODO: 在这里实现你的解法。
        (void)cards;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> cards = {3, 4, 2, 3, 4, 7};
        auto localResult = solution.minimumCardPickup(cards);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> cards = {1, 0, 5, 3};
        auto localResult = solution.minimumCardPickup(cards);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
