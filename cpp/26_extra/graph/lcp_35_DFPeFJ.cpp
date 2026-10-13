/*
 * Problem: LCP 35. 电动车游城市 / 电动车游城市
 * Link: https://leetcode.cn/problems/DFPeFJ/
 * Chapter: 图论
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
    int electricCarPlan(vector<vector<int>>& paths, int cnt, int start, int end, vector<int>& charge) {
        // TODO: 在这里实现你的解法。
        (void)paths;
        (void)cnt;
        (void)start;
        (void)end;
        (void)charge;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> paths = {{1, 3, 3}, {3, 2, 1}, {2, 1, 3}, {0, 1, 4}, {3, 0, 5}};
        int cnt = 6;
        int start = 1;
        int end = 0;
        vector<int> charge = {2, 10, 4, 1};
        auto localResult = solution.electricCarPlan(paths, cnt, start, end, charge);
        int expected = 43;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> paths = {{0, 4, 2}, {4, 3, 5}, {3, 0, 5}, {0, 1, 5}, {3, 2, 4}, {1, 2, 8}};
        int cnt = 8;
        int start = 0;
        int end = 2;
        vector<int> charge = {4, 1, 1, 3, 2};
        auto localResult = solution.electricCarPlan(paths, cnt, start, end, charge);
        int expected = 38;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
