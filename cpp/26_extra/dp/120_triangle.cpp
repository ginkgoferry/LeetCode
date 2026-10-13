/*
 * Problem: 120. 三角形最小路径和 / Triangle
 * Link: https://leetcode.cn/problems/triangle/
 * Chapter: 动态规划
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
    int minimumTotal(vector<vector<int>>& triangle) {
        // TODO: 在这里实现你的解法。
        (void)triangle;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> triangle = {{2}, {3, 4}, {6, 5, 7}, {4, 1, 8, 3}};
        auto localResult = solution.minimumTotal(triangle);
        int expected = 11;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> triangle = {{-10}};
        auto localResult = solution.minimumTotal(triangle);
        int expected = -10;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
