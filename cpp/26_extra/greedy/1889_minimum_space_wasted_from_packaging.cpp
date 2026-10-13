/*
 * Problem: 1889. 装包裹的最小浪费空间 / Minimum Space Wasted From Packaging
 * Link: https://leetcode.cn/problems/minimum-space-wasted-from-packaging/
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
    int minWastedSpace(vector<int>& packages, vector<vector<int>>& boxes) {
        // TODO: 在这里实现你的解法。
        (void)packages;
        (void)boxes;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> packages = {2, 3, 5};
        vector<vector<int>> boxes = {{4, 8}, {2, 8}};
        auto localResult = solution.minWastedSpace(packages, boxes);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> packages = {2, 3, 5};
        vector<vector<int>> boxes = {{1, 4}, {2, 3}, {3, 4}};
        auto localResult = solution.minWastedSpace(packages, boxes);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> packages = {3, 5, 8, 10, 11, 12};
        vector<vector<int>> boxes = {{12}, {11, 9}, {10, 5, 14}};
        auto localResult = solution.minWastedSpace(packages, boxes);
        int expected = 9;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
