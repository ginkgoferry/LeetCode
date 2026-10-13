/*
 * Problem: 3977. 有限电量到达目标节点的最少时间 / Minimum Time to Reach Target With Limited Power
 * Link: https://leetcode.cn/problems/minimum-time-to-reach-target-with-limited-power/
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
    vector<long long> minTimeMaxPower(int n, vector<vector<int>>& edges, int power, vector<int>& cost, int source, int target) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)power;
        (void)cost;
        (void)source;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        vector<vector<int>> edges = {{0, 1, 1}, {1, 4, 1}, {0, 2, 1}, {2, 3, 1}, {3, 4, 1}};
        int power = 4;
        vector<int> cost = {2, 3, 1, 1, 1};
        int source = 0;
        int target = 4;
        auto localResult = solution.minTimeMaxPower(n, edges, power, cost, source, target);
        vector<long long> expected = {3LL, 0LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        vector<vector<int>> edges = {{0, 1, 2}, {1, 2, 2}, {2, 0, 2}};
        int power = 3;
        vector<int> cost = {1, 1, 1};
        int source = 1;
        int target = 1;
        auto localResult = solution.minTimeMaxPower(n, edges, power, cost, source, target);
        vector<long long> expected = {0LL, 3LL};
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{0, 1, 3}, {2, 3, 4}};
        int power = 3;
        vector<int> cost = {1, 1, 1, 1};
        int source = 0;
        int target = 3;
        auto localResult = solution.minTimeMaxPower(n, edges, power, cost, source, target);
        vector<long long> expected = {-1LL, -1LL};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
