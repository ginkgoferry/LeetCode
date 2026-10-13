/*
 * Problem: 3169. 无需开会的工作日 / Count Days Without Meetings
 * Link: https://leetcode.cn/problems/count-days-without-meetings/
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
    int countDays(int days, vector<vector<int>>& meetings) {
        // TODO: 在这里实现你的解法。
        (void)days;
        (void)meetings;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int days = 10;
        vector<vector<int>> meetings = {{5, 7}, {1, 3}, {9, 10}};
        auto localResult = solution.countDays(days, meetings);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int days = 5;
        vector<vector<int>> meetings = {{2, 4}, {1, 3}};
        auto localResult = solution.countDays(days, meetings);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int days = 6;
        vector<vector<int>> meetings = {{1, 6}};
        auto localResult = solution.countDays(days, meetings);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
