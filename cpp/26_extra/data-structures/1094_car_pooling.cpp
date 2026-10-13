/*
 * Problem: 1094. 拼车 / Car Pooling
 * Link: https://leetcode.cn/problems/car-pooling/
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
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        // TODO: 在这里实现你的解法。
        (void)trips;
        (void)capacity;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> trips = {{2, 1, 5}, {3, 3, 7}};
        int capacity = 4;
        auto localResult = solution.carPooling(trips, capacity);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> trips = {{2, 1, 5}, {3, 3, 7}};
        int capacity = 5;
        auto localResult = solution.carPooling(trips, capacity);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
