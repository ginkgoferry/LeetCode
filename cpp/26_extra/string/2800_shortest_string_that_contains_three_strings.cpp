/*
 * Problem: 2800. 包含三个字符串的最短字符串 / Shortest String That Contains Three Strings
 * Link: https://leetcode.cn/problems/shortest-string-that-contains-three-strings/
 * Chapter: 字符串
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
    string minimumString(string a, string b, string c) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        (void)c;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string a = "abc";
        string b = "bca";
        string c = "aaa";
        auto localResult = solution.minimumString(a, b, c);
        string expected = "aaabca";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "ab";
        string b = "ba";
        string c = "aba";
        auto localResult = solution.minimumString(a, b, c);
        string expected = "aba";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
