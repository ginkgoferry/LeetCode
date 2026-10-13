/*
 * Problem: 733. 图像渲染 / Flood Fill
 * Link: https://leetcode.cn/problems/flood-fill/
 * Chapter: 网格图
 * Difficulty: Easy
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
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // TODO: 在这里实现你的解法。
        (void)image;
        (void)sr;
        (void)sc;
        (void)color;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> image = {{1, 1, 1}, {1, 1, 0}, {1, 0, 1}};
        int sr = 1;
        int sc = 1;
        int color = 2;
        auto localResult = solution.floodFill(image, sr, sc, color);
        vector<vector<int>> expected = {{2, 2, 2}, {2, 2, 0}, {2, 0, 1}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> image = {{0, 0, 0}, {0, 0, 0}};
        int sr = 0;
        int sc = 0;
        int color = 0;
        auto localResult = solution.floodFill(image, sr, sc, color);
        vector<vector<int>> expected = {{0, 0, 0}, {0, 0, 0}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
