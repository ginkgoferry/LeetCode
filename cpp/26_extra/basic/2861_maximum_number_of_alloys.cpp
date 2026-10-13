/*
 * Problem: 2861. 最大合金数 / Maximum Number of Alloys
 * Link: https://leetcode.cn/problems/maximum-number-of-alloys/
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
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        (void)budget;
        (void)composition;
        (void)stock;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 3;
        int k = 2;
        int budget = 15;
        vector<vector<int>> composition = {{1, 1, 1}, {1, 1, 10}};
        vector<int> stock = {0, 0, 0};
        vector<int> cost = {1, 2, 3};
        auto localResult = solution.maxNumberOfAlloys(n, k, budget, composition, stock, cost);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        int budget = 15;
        vector<vector<int>> composition = {{1, 1, 1}, {1, 1, 10}};
        vector<int> stock = {0, 0, 100};
        vector<int> cost = {1, 2, 3};
        auto localResult = solution.maxNumberOfAlloys(n, k, budget, composition, stock, cost);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        int k = 3;
        int budget = 10;
        vector<vector<int>> composition = {{2, 1}, {1, 2}, {1, 1}};
        vector<int> stock = {1, 1};
        vector<int> cost = {5, 5};
        auto localResult = solution.maxNumberOfAlloys(n, k, budget, composition, stock, cost);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
