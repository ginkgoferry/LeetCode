/*
 * Problem: 857. 雇佣 K 名工人的最低成本 / Minimum Cost to Hire K Workers
 * Link: https://leetcode.cn/problems/minimum-cost-to-hire-k-workers/
 * Chapter: 数据结构
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
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        // TODO: 在这里实现你的解法。
        (void)quality;
        (void)wage;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> quality = {10, 20, 5};
        vector<int> wage = {70, 50, 30};
        int k = 2;
        auto localResult = solution.mincostToHireWorkers(quality, wage, k);
        double expected = 105.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        vector<int> quality = {3, 1, 10, 10, 1};
        vector<int> wage = {4, 8, 2, 2, 7};
        int k = 3;
        auto localResult = solution.mincostToHireWorkers(quality, wage, k);
        double expected = 30.66667;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
