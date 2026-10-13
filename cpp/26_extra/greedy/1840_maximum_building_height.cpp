/*
 * Problem: 1840. 最高建筑高度 / Maximum Building Height
 * Link: https://leetcode.cn/problems/maximum-building-height/
 * Chapter: 贪心算法
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
    int maxBuilding(int n, vector<vector<int>>& restrictions) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)restrictions;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> restrictions = {{2, 1}, {4, 1}};
        auto localResult = solution.maxBuilding(n, restrictions);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> restrictions = {};
        auto localResult = solution.maxBuilding(n, restrictions);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        vector<vector<int>> restrictions = {{5, 3}, {2, 5}, {7, 4}, {10, 3}};
        auto localResult = solution.maxBuilding(n, restrictions);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
