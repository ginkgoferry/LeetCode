/*
 * Problem: 983. 最低票价 / Minimum Cost For Tickets
 * Link: https://leetcode.cn/problems/minimum-cost-for-tickets/
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
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        // TODO: 在这里实现你的解法。
        (void)days;
        (void)costs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> days = {1, 4, 6, 7, 8, 20};
        vector<int> costs = {2, 7, 15};
        auto localResult = solution.mincostTickets(days, costs);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> days = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 30, 31};
        vector<int> costs = {2, 7, 15};
        auto localResult = solution.mincostTickets(days, costs);
        int expected = 17;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
