/*
 * Problem: 2250. 统计包含每个点的矩形数目 / Count Number of Rectangles Containing Each Point
 * Link: https://leetcode.cn/problems/count-number-of-rectangles-containing-each-point/
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
    vector<int> countRectangles(vector<vector<int>>& rectangles, vector<vector<int>>& points) {
        // TODO: 在这里实现你的解法。
        (void)rectangles;
        (void)points;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> rectangles = {{1, 2}, {2, 3}, {2, 5}};
        vector<vector<int>> points = {{2, 1}, {1, 4}};
        auto localResult = solution.countRectangles(rectangles, points);
        vector<int> expected = {2, 1};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> rectangles = {{1, 1}, {2, 2}, {3, 3}};
        vector<vector<int>> points = {{1, 3}, {1, 1}};
        auto localResult = solution.countRectangles(rectangles, points);
        vector<int> expected = {1, 3};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
