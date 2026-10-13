/*
 * Problem: 2673. 使二叉树所有路径值相等的最小代价 / Make Costs of Paths Equal in a Binary Tree
 * Link: https://leetcode.cn/problems/make-costs-of-paths-equal-in-a-binary-tree/
 * Chapter: 贪心算法
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
    int minIncrements(int n, vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 7;
        vector<int> cost = {1, 5, 2, 2, 3, 3, 1};
        auto localResult = solution.minIncrements(n, cost);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<int> cost = {5, 3, 3};
        auto localResult = solution.minIncrements(n, cost);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
