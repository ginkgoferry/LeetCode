/*
 * Problem: 3179. K 秒后第 N 个元素的值 / Find the N-th Value After K Seconds
 * Link: https://leetcode.cn/problems/find-the-n-th-value-after-k-seconds/
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
    int valueAfterKSeconds(int n, int k) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 4;
        int k = 5;
        auto localResult = solution.valueAfterKSeconds(n, k);
        int expected = 56;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 5;
        int k = 3;
        auto localResult = solution.valueAfterKSeconds(n, k);
        int expected = 35;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
