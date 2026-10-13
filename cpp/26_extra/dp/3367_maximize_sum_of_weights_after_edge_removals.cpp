/*
 * Problem: 3367. 移除边之后的权重最大和 / Maximize Sum of Weights after Edge Removals
 * Link: https://leetcode.cn/problems/maximize-sum-of-weights-after-edge-removals/
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
    long long maximizeSumOfWeights(vector<vector<int>>& edges, int k) {
        // TODO: 在这里实现你的解法。
        (void)edges;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1, 4}, {0, 2, 2}, {2, 3, 12}, {2, 4, 6}};
        int k = 2;
        auto localResult = solution.maximizeSumOfWeights(edges, k);
        long long expected = 22LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<int>> edges = {{0, 1, 5}, {1, 2, 10}, {0, 3, 15}, {3, 4, 20}, {3, 5, 5}, {0, 6, 10}};
        int k = 3;
        auto localResult = solution.maximizeSumOfWeights(edges, k);
        long long expected = 65LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
