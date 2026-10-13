/*
 * Problem: 3102. 最小化曼哈顿距离 / Minimize Manhattan Distances
 * Link: https://leetcode.cn/problems/minimize-manhattan-distances/
 * Chapter: 数学
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
    int minimumDistance(vector<vector<int>>& points) {
        // TODO: 在这里实现你的解法。
        (void)points;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> points = {{3, 10}, {5, 15}, {10, 2}, {4, 4}};
        auto localResult = solution.minimumDistance(points);
        int expected = 12;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> points = {{1, 1}, {1, 1}, {1, 1}};
        auto localResult = solution.minimumDistance(points);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
