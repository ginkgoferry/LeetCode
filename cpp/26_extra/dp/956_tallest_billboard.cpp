/*
 * Problem: 956. 最高的广告牌 / Tallest Billboard
 * Link: https://leetcode.cn/problems/tallest-billboard/
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
    int tallestBillboard(vector<int>& rods) {
        // TODO: 在这里实现你的解法。
        (void)rods;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<int> rods = {1, 2, 3, 6};
        auto localResult = solution.tallestBillboard(rods);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> rods = {1, 2, 3, 4, 5, 6};
        auto localResult = solution.tallestBillboard(rods);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<int> rods = {1, 2};
        auto localResult = solution.tallestBillboard(rods);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
