/*
 * Problem: 521. 最长特殊序列 Ⅰ / Longest Uncommon Subsequence I
 * Link: https://leetcode.cn/problems/longest-uncommon-subsequence-i/
 * Chapter: 贪心算法
 * Difficulty: Easy
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
    int findLUSlength(string a, string b) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string a = "aba";
        string b = "cdc";
        auto localResult = solution.findLUSlength(a, b);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "aaa";
        string b = "bbb";
        auto localResult = solution.findLUSlength(a, b);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "aaa";
        string b = "aaa";
        auto localResult = solution.findLUSlength(a, b);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
