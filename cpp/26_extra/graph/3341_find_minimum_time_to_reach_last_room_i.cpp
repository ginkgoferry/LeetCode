/*
 * Problem: 3341. 到达最后一个房间的最少时间 I / Find Minimum Time to Reach Last Room I
 * Link: https://leetcode.cn/problems/find-minimum-time-to-reach-last-room-i/
 * Chapter: 图论
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
    int minTimeToReach(vector<vector<int>>& moveTime) {
        // TODO: 在这里实现你的解法。
        (void)moveTime;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> moveTime = {{0, 4}, {4, 4}};
        auto localResult = solution.minTimeToReach(moveTime);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> moveTime = {{0, 0, 0}, {0, 0, 0}};
        auto localResult = solution.minTimeToReach(moveTime);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> moveTime = {{0, 1}, {1, 2}};
        auto localResult = solution.minTimeToReach(moveTime);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
