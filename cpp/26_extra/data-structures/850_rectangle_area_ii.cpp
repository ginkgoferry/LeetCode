/*
 * Problem: 850. 矩形面积 II / Rectangle Area II
 * Link: https://leetcode.cn/problems/rectangle-area-ii/
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
    int rectangleArea(vector<vector<int>>& rectangles) {
        // TODO: 在这里实现你的解法。
        (void)rectangles;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> rectangles = {{0, 0, 2, 2}, {1, 0, 2, 3}, {1, 0, 3, 1}};
        auto localResult = solution.rectangleArea(rectangles);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> rectangles = {{0, 0, 1000000000, 1000000000}};
        auto localResult = solution.rectangleArea(rectangles);
        int expected = 49;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
