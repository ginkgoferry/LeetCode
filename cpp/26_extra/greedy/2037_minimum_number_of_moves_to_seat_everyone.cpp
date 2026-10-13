/*
 * Problem: 2037. 使每位学生都有座位的最少移动次数 / Minimum Number of Moves to Seat Everyone
 * Link: https://leetcode.cn/problems/minimum-number-of-moves-to-seat-everyone/
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
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        // TODO: 在这里实现你的解法。
        (void)seats;
        (void)students;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> seats = {3, 1, 5};
        vector<int> students = {2, 7, 4};
        auto localResult = solution.minMovesToSeat(seats, students);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> seats = {4, 1, 5, 9};
        vector<int> students = {1, 3, 2, 6};
        auto localResult = solution.minMovesToSeat(seats, students);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> seats = {2, 2, 6, 6};
        vector<int> students = {1, 3, 2, 6};
        auto localResult = solution.minMovesToSeat(seats, students);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
