/*
 * Problem: 1776. 车队 II / Car Fleet II
 * Link: https://leetcode.cn/problems/car-fleet-ii/
 * Chapter: 栈
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
    vector<double> getCollisionTimes(vector<vector<int>>& cars) {
        // TODO: 在这里实现你的解法。
        (void)cars;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> cars = {{1, 2}, {2, 1}, {4, 3}, {7, 2}};
        auto localResult = solution.getCollisionTimes(cars);
        vector<double> expected = {1.0, -1.0, 3.0, -1.0};
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<vector<int>> cars = {{3, 4}, {5, 4}, {6, 3}, {9, 1}};
        auto localResult = solution.getCollisionTimes(cars);
        vector<double> expected = {2.0, 1.0, 1.5, -1.0};
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
