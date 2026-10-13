/*
 * Problem: 2646. 最小化旅行的价格总和 / Minimize the Total Price of the Trips
 * Link: https://leetcode.cn/problems/minimize-the-total-price-of-the-trips/
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
    int minimumTotalPrice(int n, vector<vector<int>>& edges, vector<int>& price, vector<vector<int>>& trips) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)edges;
        (void)price;
        (void)trips;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        vector<vector<int>> edges = {{0, 1}, {1, 2}, {1, 3}};
        vector<int> price = {2, 2, 10, 6};
        vector<vector<int>> trips = {{0, 3}, {2, 1}, {2, 3}};
        auto localResult = solution.minimumTotalPrice(n, edges, price, trips);
        int expected = 23;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        vector<vector<int>> edges = {{0, 1}};
        vector<int> price = {2, 2};
        vector<vector<int>> trips = {{0, 0}};
        auto localResult = solution.minimumTotalPrice(n, edges, price, trips);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
