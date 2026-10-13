/*
 * Problem: 3387. 两天自由外汇交易后的最大货币数 / Maximize Amount After Two Days of Conversions
 * Link: https://leetcode.cn/problems/maximize-amount-after-two-days-of-conversions/
 * Chapter: 图论
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
    double maxAmount(string initialCurrency, vector<vector<string>>& pairs1, vector<double>& rates1, vector<vector<string>>& pairs2, vector<double>& rates2) {
        // TODO: 在这里实现你的解法。
        (void)initialCurrency;
        (void)pairs1;
        (void)rates1;
        (void)pairs2;
        (void)rates2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string initialCurrency = "EUR";
        vector<vector<string>> pairs1 = {{"EUR", "USD"}, {"USD", "JPY"}};
        vector<double> rates1 = {2.0, 3.0};
        vector<vector<string>> pairs2 = {{"JPY", "USD"}, {"USD", "CHF"}, {"CHF", "EUR"}};
        vector<double> rates2 = {4.0, 5.0, 6.0};
        auto localResult = solution.maxAmount(initialCurrency, pairs1, rates1, pairs2, rates2);
        double expected = 720.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        string initialCurrency = "NGN";
        vector<vector<string>> pairs1 = {{"NGN", "EUR"}};
        vector<double> rates1 = {9.0};
        vector<vector<string>> pairs2 = {{"NGN", "EUR"}};
        vector<double> rates2 = {6.0};
        auto localResult = solution.maxAmount(initialCurrency, pairs1, rates1, pairs2, rates2);
        double expected = 1.5;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        string initialCurrency = "USD";
        vector<vector<string>> pairs1 = {{"USD", "EUR"}};
        vector<double> rates1 = {1.0};
        vector<vector<string>> pairs2 = {{"EUR", "JPY"}};
        vector<double> rates2 = {10.0};
        auto localResult = solution.maxAmount(initialCurrency, pairs1, rates1, pairs2, rates2);
        double expected = 1.0;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
