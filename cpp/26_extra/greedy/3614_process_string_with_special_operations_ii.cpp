/*
 * Problem: 3614. 用特殊操作处理字符串 II / Process String with Special Operations II
 * Link: https://leetcode.cn/problems/process-string-with-special-operations-ii/
 * Chapter: 贪心算法
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
    char processStr(string s, long long k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "a#b%*";
        long long k = 1LL;
        auto localResult = solution.processStr(s, k);
        char expected = 'a';
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "cd%#*#";
        long long k = 3LL;
        auto localResult = solution.processStr(s, k);
        char expected = 'd';
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "z*#";
        long long k = 0LL;
        auto localResult = solution.processStr(s, k);
        char expected = '.';
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
