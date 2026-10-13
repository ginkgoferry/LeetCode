/*
 * Problem: 3218. 切蛋糕的最小总开销 I / Minimum Cost for Cutting Cake I
 * Link: https://leetcode.cn/problems/minimum-cost-for-cutting-cake-i/
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
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        // TODO: 在这里实现你的解法。
        (void)m;
        (void)n;
        (void)horizontalCut;
        (void)verticalCut;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int m = 3;
        int n = 2;
        vector<int> horizontalCut = {1, 3};
        vector<int> verticalCut = {5};
        auto localResult = solution.minimumCost(m, n, horizontalCut, verticalCut);
        int expected = 13;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int m = 2;
        int n = 2;
        vector<int> horizontalCut = {7};
        vector<int> verticalCut = {4};
        auto localResult = solution.minimumCost(m, n, horizontalCut, verticalCut);
        int expected = 15;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
