/*
 * Problem: 3288. 最长上升路径的长度 / Length of the Longest Increasing Path
 * Link: https://leetcode.cn/problems/length-of-the-longest-increasing-path/
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
    int maxPathLength(vector<vector<int>>& coordinates, int k) {
        // TODO: 在这里实现你的解法。
        (void)coordinates;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> coordinates = {{3, 1}, {2, 2}, {4, 1}, {0, 0}, {5, 3}};
        int k = 1;
        auto localResult = solution.maxPathLength(coordinates, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> coordinates = {{2, 1}, {7, 0}, {5, 6}};
        int k = 2;
        auto localResult = solution.maxPathLength(coordinates, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
