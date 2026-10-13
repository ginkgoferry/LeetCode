/*
 * Problem: 1392. 最长快乐前缀 / Longest Happy Prefix
 * Link: https://leetcode.cn/problems/longest-happy-prefix/
 * Chapter: 字符串
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
    string longestPrefix(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "level";
        auto localResult = solution.longestPrefix(s);
        string expected = "l";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ababab";
        auto localResult = solution.longestPrefix(s);
        string expected = "abab";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
