/*
 * Problem: 3782. 交替删除操作后最后剩下的整数 / Last Remaining Integer After Alternating Deletion Operations
 * Link: https://leetcode.cn/problems/last-remaining-integer-after-alternating-deletion-operations/
 * Chapter: 位运算
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
    long long lastInteger(long long n) {
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
        long long n = 8LL;
        auto localResult = solution.lastInteger(n);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 5LL;
        auto localResult = solution.lastInteger(n);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 1LL;
        auto localResult = solution.lastInteger(n);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
