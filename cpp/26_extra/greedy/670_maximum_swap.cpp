/*
 * Problem: 670. 最大交换 / Maximum Swap
 * Link: https://leetcode.cn/problems/maximum-swap/
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
    int maximumSwap(int num) {
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
        int num = 2736;
        auto localResult = solution.maximumSwap(num);
        int expected = 7236;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int num = 9973;
        auto localResult = solution.maximumSwap(num);
        int expected = 9973;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
