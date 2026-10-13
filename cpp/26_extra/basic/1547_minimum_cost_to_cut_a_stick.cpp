/*
 * Problem: 1547. 切棍子的最小成本 / Minimum Cost to Cut a Stick
 * Link: https://leetcode.cn/problems/minimum-cost-to-cut-a-stick/
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
    int minCost(int n, vector<int>& cuts) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)cuts;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 7;
        vector<int> cuts = {1, 3, 4, 5};
        auto localResult = solution.minCost(n, cuts);
        int expected = 16;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 9;
        vector<int> cuts = {5, 6, 1, 4, 2};
        auto localResult = solution.minCost(n, cuts);
        int expected = 22;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
