/*
 * Problem: 2376. 统计特殊整数 / Count Special Integers
 * Link: https://leetcode.cn/problems/count-special-integers/
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
    int countSpecialNumbers(int n) {
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
        int n = 20;
        auto localResult = solution.countSpecialNumbers(n);
        int expected = 19;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        auto localResult = solution.countSpecialNumbers(n);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 135;
        auto localResult = solution.countSpecialNumbers(n);
        int expected = 110;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
