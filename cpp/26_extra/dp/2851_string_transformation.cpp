/*
 * Problem: 2851. 字符串转换 / String Transformation
 * Link: https://leetcode.cn/problems/string-transformation/
 * Chapter: 动态规划
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
    int numberOfWays(string s, string t, long long k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)t;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcd";
        string t = "cdab";
        long long k = 2LL;
        auto localResult = solution.numberOfWays(s, t, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ababab";
        string t = "ababab";
        long long k = 1LL;
        auto localResult = solution.numberOfWays(s, t, k);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
