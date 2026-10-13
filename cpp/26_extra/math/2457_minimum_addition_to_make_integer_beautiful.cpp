/*
 * Problem: 2457. 美丽整数的最小增量 / Minimum Addition to Make Integer Beautiful
 * Link: https://leetcode.cn/problems/minimum-addition-to-make-integer-beautiful/
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
    long long makeIntegerBeautiful(long long n, int target) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        long long n = 16LL;
        int target = 6;
        auto localResult = solution.makeIntegerBeautiful(n, target);
        long long expected = 4LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 467LL;
        int target = 6;
        auto localResult = solution.makeIntegerBeautiful(n, target);
        long long expected = 33LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        long long n = 1LL;
        int target = 1;
        auto localResult = solution.makeIntegerBeautiful(n, target);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
