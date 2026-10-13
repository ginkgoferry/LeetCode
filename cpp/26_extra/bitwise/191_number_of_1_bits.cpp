/*
 * Problem: 191. 位1的个数 / Number of 1 Bits
 * Link: https://leetcode.cn/problems/number-of-1-bits/
 * Chapter: 位运算
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
    int hammingWeight(int n) {
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
        int n = 11;
        auto localResult = solution.hammingWeight(n);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 128;
        auto localResult = solution.hammingWeight(n);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2147483645;
        auto localResult = solution.hammingWeight(n);
        int expected = 30;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
