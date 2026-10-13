/*
 * Problem: 2910. 合法分组的最少组数 / Minimum Number of Groups to Create a Valid Assignment
 * Link: https://leetcode.cn/problems/minimum-number-of-groups-to-create-a-valid-assignment/
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
    int minGroupsForValidAssignment(vector<int>& balls) {
        // TODO: 在这里实现你的解法。
        (void)balls;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> balls = {3, 2, 3, 2, 3};
        auto localResult = solution.minGroupsForValidAssignment(balls);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> balls = {10, 10, 10, 3, 1, 1};
        auto localResult = solution.minGroupsForValidAssignment(balls);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
