/*
 * Problem: 1916. 统计为蚁群构筑房间的不同顺序 / Count Ways to Build Rooms in an Ant Colony
 * Link: https://leetcode.cn/problems/count-ways-to-build-rooms-in-an-ant-colony/
 * Chapter: 动态规划
 * Difficulty: Hard
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
    int waysToBuildRooms(vector<int>& prevRoom) {
        // TODO: 在这里实现你的解法。
        (void)prevRoom;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> prevRoom = {-1, 0, 1};
        auto localResult = solution.waysToBuildRooms(prevRoom);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> prevRoom = {-1, 0, 0, 1, 2};
        auto localResult = solution.waysToBuildRooms(prevRoom);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
