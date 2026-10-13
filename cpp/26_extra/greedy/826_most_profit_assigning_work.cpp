/*
 * Problem: 826. 安排工作以达到最大收益 / Most Profit Assigning Work
 * Link: https://leetcode.cn/problems/most-profit-assigning-work/
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
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        // TODO: 在这里实现你的解法。
        (void)difficulty;
        (void)profit;
        (void)worker;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> difficulty = {2, 4, 6, 8, 10};
        vector<int> profit = {10, 20, 30, 40, 50};
        vector<int> worker = {4, 5, 6, 7};
        auto localResult = solution.maxProfitAssignment(difficulty, profit, worker);
        int expected = 100;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> difficulty = {85, 47, 57};
        vector<int> profit = {24, 66, 99};
        vector<int> worker = {40, 25, 25};
        auto localResult = solution.maxProfitAssignment(difficulty, profit, worker);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
