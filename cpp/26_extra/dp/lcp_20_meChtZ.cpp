/*
 * Problem: LCP 20. 快速公交 / 快速公交
 * Link: https://leetcode.cn/problems/meChtZ/
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
    int busRapidTransit(int target, int inc, int dec, vector<int>& jump, vector<int>& cost) {
        // TODO: 在这里实现你的解法。
        (void)target;
        (void)inc;
        (void)dec;
        (void)jump;
        (void)cost;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int target = 31;
        int inc = 5;
        int dec = 3;
        vector<int> jump = {6};
        vector<int> cost = {10};
        auto localResult = solution.busRapidTransit(target, inc, dec, jump, cost);
        int expected = 33;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int target = 612;
        int inc = 4;
        int dec = 5;
        vector<int> jump = {3, 6, 8, 11, 5, 10, 4};
        vector<int> cost = {4, 7, 6, 3, 7, 6, 4};
        auto localResult = solution.busRapidTransit(target, inc, dec, jump, cost);
        int expected = 26;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
