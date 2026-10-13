/*
 * Problem: 326. 3 的幂 / Power of Three
 * Link: https://leetcode.cn/problems/power-of-three/
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
    bool isPowerOfThree(int n) {
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
        int n = 27;
        auto localResult = solution.isPowerOfThree(n);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 0;
        auto localResult = solution.isPowerOfThree(n);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 9;
        auto localResult = solution.isPowerOfThree(n);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 45;
        auto localResult = solution.isPowerOfThree(n);
        bool expected = false;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
