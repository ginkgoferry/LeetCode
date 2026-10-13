/*
 * Problem: 1716. 计算力扣银行的钱 / Calculate Money in Leetcode Bank
 * Link: https://leetcode.cn/problems/calculate-money-in-leetcode-bank/
 * Chapter: 数学
 * Difficulty: Easy
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
    int totalMoney(int n) {
        // TODO: 在这里实现你的解法。
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        auto localResult = solution.totalMoney(n);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        auto localResult = solution.totalMoney(n);
        int expected = 37;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 20;
        auto localResult = solution.totalMoney(n);
        int expected = 96;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
