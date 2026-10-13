/*
 * Problem: 793. 阶乘函数后 K 个零 / Preimage Size of Factorial Zeroes Function
 * Link: https://leetcode.cn/problems/preimage-size-of-factorial-zeroes-function/
 * Chapter: 二分查找
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
    int preimageSizeFZF(int k) {
        // TODO: 在这里实现你的解法。
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int k = 0;
        auto localResult = solution.preimageSizeFZF(k);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 5;
        auto localResult = solution.preimageSizeFZF(k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int k = 3;
        auto localResult = solution.preimageSizeFZF(k);
        int expected = 5;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
