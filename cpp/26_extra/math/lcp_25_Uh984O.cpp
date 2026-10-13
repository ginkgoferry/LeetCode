/*
 * Problem: LCP 25. 古董键盘 / 古董键盘
 * Link: https://leetcode.cn/problems/Uh984O/
 * Chapter: 数学
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
    int keyboard(int k, int n) {
        // TODO: 在这里实现你的解法。
        (void)k;
        (void)n;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 1;
        int n = 1;
        auto localResult = solution.keyboard(k, n);
        int expected = 26;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 1;
        int n = 2;
        auto localResult = solution.keyboard(k, n);
        int expected = 650;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
