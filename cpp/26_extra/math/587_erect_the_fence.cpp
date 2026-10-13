/*
 * Problem: 587. 安装栅栏 / Erect the Fence
 * Link: https://leetcode.cn/problems/erect-the-fence/
 * Chapter: 数学
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
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        // TODO: 在这里实现你的解法。
        (void)trees;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> trees = {{1, 1}, {2, 2}, {2, 0}, {2, 4}, {3, 3}, {4, 2}};
        auto localResult = solution.outerTrees(trees);
        vector<vector<int>> expected = {{1, 1}, {2, 0}, {3, 3}, {2, 4}, {4, 2}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> trees = {{1, 2}, {2, 2}, {4, 2}};
        auto localResult = solution.outerTrees(trees);
        vector<vector<int>> expected = {{4, 2}, {2, 2}, {1, 2}};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
