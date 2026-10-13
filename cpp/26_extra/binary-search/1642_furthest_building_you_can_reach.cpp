/*
 * Problem: 1642. 可以到达的最远建筑 / Furthest Building You Can Reach
 * Link: https://leetcode.cn/problems/furthest-building-you-can-reach/
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
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        // TODO: 在这里实现你的解法。
        (void)heights;
        (void)bricks;
        (void)ladders;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> heights = {4, 2, 7, 6, 9, 14, 12};
        int bricks = 5;
        int ladders = 1;
        auto localResult = solution.furthestBuilding(heights, bricks, ladders);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> heights = {4, 12, 2, 7, 3, 18, 20, 3, 19};
        int bricks = 10;
        int ladders = 2;
        auto localResult = solution.furthestBuilding(heights, bricks, ladders);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> heights = {14, 3, 19, 3};
        int bricks = 17;
        int ladders = 0;
        auto localResult = solution.furthestBuilding(heights, bricks, ladders);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
