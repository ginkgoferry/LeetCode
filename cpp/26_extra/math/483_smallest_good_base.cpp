/*
 * Problem: 483. 最小好进制 / Smallest Good Base
 * Link: https://leetcode.cn/problems/smallest-good-base/
 * Chapter: 数学
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
    string smallestGoodBase(string n) {
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
        string n = "13";
        auto localResult = solution.smallestGoodBase(n);
        string expected = "3";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string n = "4681";
        auto localResult = solution.smallestGoodBase(n);
        string expected = "8";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string n = "1000000000000000000";
        auto localResult = solution.smallestGoodBase(n);
        string expected = "999999999999999999";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
