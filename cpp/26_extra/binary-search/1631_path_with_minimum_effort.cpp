/*
 * Problem: 1631. 最小体力消耗路径 / Path With Minimum Effort
 * Link: https://leetcode.cn/problems/path-with-minimum-effort/
 * Chapter: 二分查找
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
    int minimumEffortPath(vector<vector<int>>& heights) {
        // TODO: 在这里实现你的解法。
        (void)heights;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> heights = {{1, 2, 2}, {3, 8, 2}, {5, 3, 5}};
        auto localResult = solution.minimumEffortPath(heights);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> heights = {{1, 2, 3}, {3, 8, 4}, {5, 3, 5}};
        auto localResult = solution.minimumEffortPath(heights);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> heights = {{1, 2, 1, 1, 1}, {1, 2, 1, 2, 1}, {1, 2, 1, 2, 1}, {1, 2, 1, 2, 1}, {1, 1, 1, 2, 1}};
        auto localResult = solution.minimumEffortPath(heights);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
