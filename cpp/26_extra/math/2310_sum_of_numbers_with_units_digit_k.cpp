/*
 * Problem: 2310. 个位数字为 K 的整数之和 / Sum of Numbers With Units Digit K
 * Link: https://leetcode.cn/problems/sum-of-numbers-with-units-digit-k/
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
    int minimumNumbers(int num, int k) {
        // TODO: 在这里实现你的解法。
        (void)num;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int num = 58;
        int k = 9;
        auto localResult = solution.minimumNumbers(num, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 37;
        int k = 2;
        auto localResult = solution.minimumNumbers(num, k);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 0;
        int k = 7;
        auto localResult = solution.minimumNumbers(num, k);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
