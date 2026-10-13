/*
 * Problem: LCP 47. 入场安检 / 入场安检
 * Link: https://leetcode.cn/problems/oPs9Bm/
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
    int securityCheck(vector<int>& capacities, int k) {
        // TODO: 在这里实现你的解法。
        (void)capacities;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> capacities = {2, 2, 3};
        int k = 2;
        auto localResult = solution.securityCheck(capacities, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> capacities = {3, 3};
        int k = 3;
        auto localResult = solution.securityCheck(capacities, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> capacities = {4, 3, 2, 2};
        int k = 6;
        auto localResult = solution.securityCheck(capacities, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
