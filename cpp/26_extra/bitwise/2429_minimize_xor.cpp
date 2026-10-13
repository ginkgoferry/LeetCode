/*
 * Problem: 2429. 最小异或 / Minimize XOR
 * Link: https://leetcode.cn/problems/minimize-xor/
 * Chapter: 位运算
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
    int minimizeXor(int num1, int num2) {
        // TODO: 在这里实现你的解法。
        (void)num1;
        (void)num2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num1 = 3;
        int num2 = 5;
        auto localResult = solution.minimizeXor(num1, num2);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num1 = 1;
        int num2 = 12;
        auto localResult = solution.minimizeXor(num1, num2);
        int expected = 3;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
