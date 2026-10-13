/*
 * Problem: 2685. 统计完全连通分量的数量 / Count the Number of Complete Components
 * Link: https://leetcode.cn/problems/count-the-number-of-complete-components/
 * Chapter: 图论
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
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {3, 4}};
        auto localResult = solution.countCompleteComponents(n, edges);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 6;
        vector<vector<int>> edges = {{0, 1}, {0, 2}, {1, 2}, {3, 4}, {3, 5}};
        auto localResult = solution.countCompleteComponents(n, edges);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
