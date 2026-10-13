/*
 * Problem: 1342. 将数字变成 0 的操作次数 / Number of Steps to Reduce a Number to Zero
 * Link: https://leetcode.cn/problems/number-of-steps-to-reduce-a-number-to-zero/
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
    int numberOfSteps(int num) {
        // TODO: 在这里实现你的解法。
        (void)num;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num = 14;
        auto localResult = solution.numberOfSteps(num);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 8;
        auto localResult = solution.numberOfSteps(num);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 123;
        auto localResult = solution.numberOfSteps(num);
        int expected = 12;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
