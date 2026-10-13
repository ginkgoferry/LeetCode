/*
 * Problem: 735. 小行星碰撞 / Asteroid Collision
 * Link: https://leetcode.cn/problems/asteroid-collision/
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
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // TODO: 在这里实现你的解法。
        (void)asteroids;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> asteroids = {5, 10, -5};
        auto localResult = solution.asteroidCollision(asteroids);
        vector<int> expected = {5, 10};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> asteroids = {8, -8};
        auto localResult = solution.asteroidCollision(asteroids);
        vector<int> expected = {};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> asteroids = {10, 2, -5};
        auto localResult = solution.asteroidCollision(asteroids);
        vector<int> expected = {10};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> asteroids = {3, 5, -6, 2, -1, 4};
        auto localResult = solution.asteroidCollision(asteroids);
        vector<int> expected = {-6, 2, 4};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
