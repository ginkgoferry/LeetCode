/*
 * Problem: 3995. 转换字符串的最小成本 III / Minimum Cost to Convert String III
 * Link: https://leetcode.cn/problems/minimum-cost-to-convert-string-iii/
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
    int minCost(string source, string target, vector<vector<string>>& rules, vector<int>& costs) {
        // TODO: 在这里实现你的解法。
        (void)source;
        (void)target;
        (void)rules;
        (void)costs;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string source = "hello";
        string target = "world";
        vector<vector<string>> rules = {{"he", "wo"}, {"llo", "rld"}};
        vector<int> costs = {3, 4};
        auto localResult = solution.minCost(source, target, rules, costs);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string source = "cat";
        string target = "dog";
        vector<vector<string>> rules = {{"c*t", "dog"}};
        vector<int> costs = {2};
        auto localResult = solution.minCost(source, target, rules, costs);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string source = "test";
        string target = "next";
        vector<vector<string>> rules = {{"*e*t", "next"}};
        vector<int> costs = {4};
        auto localResult = solution.minCost(source, target, rules, costs);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string source = "ab";
        string target = "bc";
        vector<vector<string>> rules = {{"a*", "bd"}};
        vector<int> costs = {9};
        auto localResult = solution.minCost(source, target, rules, costs);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
