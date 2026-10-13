/*
 * Problem: 2462. 雇佣 K 位工人的总代价 / Total Cost to Hire K Workers
 * Link: https://leetcode.cn/problems/total-cost-to-hire-k-workers/
 * Chapter: 数据结构
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
    long long totalCost(vector<int>& costs, int k, int candidates) {
        // TODO: 在这里实现你的解法。
        (void)costs;
        (void)k;
        (void)candidates;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> costs = {17, 12, 10, 2, 7, 2, 11, 20, 8};
        int k = 3;
        int candidates = 4;
        auto localResult = solution.totalCost(costs, k, candidates);
        long long expected = 11LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> costs = {1, 2, 4, 1};
        int k = 3;
        int candidates = 3;
        auto localResult = solution.totalCost(costs, k, candidates);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
