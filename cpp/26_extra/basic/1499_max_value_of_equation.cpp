/*
 * Problem: 1499. 满足不等式的最大值 / Max Value of Equation
 * Link: https://leetcode.cn/problems/max-value-of-equation/
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
    int findMaxValueOfEquation(vector<vector<int>>& points, int k) {
        // TODO: 在这里实现你的解法。
        (void)points;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> points = {{1, 3}, {2, 0}, {5, 10}, {6, -10}};
        int k = 1;
        auto localResult = solution.findMaxValueOfEquation(points, k);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{0, 0}, {3, 0}, {9, 2}};
        int k = 3;
        auto localResult = solution.findMaxValueOfEquation(points, k);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
