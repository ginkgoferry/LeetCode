/*
 * Problem: 2751. 机器人碰撞 / Robot Collisions
 * Link: https://leetcode.cn/problems/robot-collisions/
 * Chapter: 数据结构
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
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        // TODO: 在这里实现你的解法。
        (void)positions;
        (void)healths;
        (void)directions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> positions = {5, 4, 3, 2, 1};
        vector<int> healths = {2, 17, 9, 15, 10};
        string directions = "RRRRR";
        auto localResult = solution.survivedRobotsHealths(positions, healths, directions);
        vector<int> expected = {2, 17, 9, 15, 10};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> positions = {3, 5, 2, 6};
        vector<int> healths = {10, 10, 15, 12};
        string directions = "RLRL";
        auto localResult = solution.survivedRobotsHealths(positions, healths, directions);
        vector<int> expected = {14};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> positions = {1, 2, 5, 6};
        vector<int> healths = {10, 10, 11, 11};
        string directions = "RLRL";
        auto localResult = solution.survivedRobotsHealths(positions, healths, directions);
        vector<int> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
