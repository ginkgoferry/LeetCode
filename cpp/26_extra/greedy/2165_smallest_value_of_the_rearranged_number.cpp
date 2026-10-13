/*
 * Problem: 2165. 重排数字的最小值 / Smallest Value of the Rearranged Number
 * Link: https://leetcode.cn/problems/smallest-value-of-the-rearranged-number/
 * Chapter: 贪心算法
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
    long long smallestNumber(long long num) {
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
        long long num = 310LL;
        auto localResult = solution.smallestNumber(num);
        long long expected = 103LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long num = -7605LL;
        auto localResult = solution.smallestNumber(num);
        long long expected = -7650LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
