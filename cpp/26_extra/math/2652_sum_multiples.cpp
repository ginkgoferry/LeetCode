/*
 * Problem: 2652. 倍数求和 / Sum Multiples
 * Link: https://leetcode.cn/problems/sum-multiples/
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
    int sumOfMultiples(int n) {
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
        int n = 7;
        auto localResult = solution.sumOfMultiples(n);
        int expected = 21;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        auto localResult = solution.sumOfMultiples(n);
        int expected = 40;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 9;
        auto localResult = solution.sumOfMultiples(n);
        int expected = 30;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
