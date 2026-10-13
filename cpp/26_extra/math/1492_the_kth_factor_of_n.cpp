/*
 * Problem: 1492. n 的第 k 个因子 / The kth Factor of n
 * Link: https://leetcode.cn/problems/the-kth-factor-of-n/
 * Chapter: 数学
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
    int kthFactor(int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 12;
        int k = 3;
        auto localResult = solution.kthFactor(n, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 7;
        int k = 2;
        auto localResult = solution.kthFactor(n, k);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int k = 4;
        auto localResult = solution.kthFactor(n, k);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
