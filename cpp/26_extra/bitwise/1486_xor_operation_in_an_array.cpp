/*
 * Problem: 1486. 数组异或操作 / XOR Operation in an Array
 * Link: https://leetcode.cn/problems/xor-operation-in-an-array/
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
    int xorOperation(int n, int start) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)start;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 5;
        int start = 0;
        auto localResult = solution.xorOperation(n, start);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 4;
        int start = 3;
        auto localResult = solution.xorOperation(n, start);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 1;
        int start = 7;
        auto localResult = solution.xorOperation(n, start);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 10;
        int start = 5;
        auto localResult = solution.xorOperation(n, start);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
