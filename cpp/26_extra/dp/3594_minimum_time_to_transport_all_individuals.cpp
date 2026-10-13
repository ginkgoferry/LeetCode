/*
 * Problem: 3594. 所有人渡河所需的最短时间 / Minimum Time to Transport All Individuals
 * Link: https://leetcode.cn/problems/minimum-time-to-transport-all-individuals/
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
    double minTime(int n, int k, int m, vector<int>& time, vector<double>& mul) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        (void)m;
        (void)time;
        (void)mul;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 1;
        int k = 1;
        int m = 2;
        vector<int> time = {5};
        vector<double> mul = {1.0, 1.3};
        auto localResult = solution.minTime(n, k, m, time, mul);
        double expected = 5.0;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        int m = 3;
        vector<int> time = {2, 5, 8};
        vector<double> mul = {1.0, 1.5, 0.75};
        auto localResult = solution.minTime(n, k, m, time, mul);
        double expected = 14.5;
        assert((approxEqual(localResult, expected)));
    }

    {
        // 官方样例
        int n = 2;
        int k = 1;
        int m = 2;
        vector<int> time = {10, 10};
        vector<double> mul = {2.0, 2.0};
        auto localResult = solution.minTime(n, k, m, time, mul);
        double expected = -1.0;
        assert((approxEqual(localResult, expected)));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
