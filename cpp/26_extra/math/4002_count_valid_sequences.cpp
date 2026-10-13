/*
 * Problem: 4002. 统计有效序列数目 / Count Valid Sequences
 * Link: https://leetcode.cn/problems/count-valid-sequences/
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
    int countValidSequences(int n, int k) {
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
        int n = 5;
        int k = 3;
        auto localResult = solution.countValidSequences(n, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 3;
        int k = 2;
        auto localResult = solution.countValidSequences(n, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 5;
        auto localResult = solution.countValidSequences(n, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
