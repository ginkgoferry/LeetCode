/*
 * Problem: 3455. 最短匹配子字符串 / Shortest Matching Substring
 * Link: https://leetcode.cn/problems/shortest-matching-substring/
 * Chapter: 数据结构
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
    int shortestMatchingSubstring(string s, string p) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)p;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abaacbaecebce";
        string p = "ba*c*ce";
        auto localResult = solution.shortestMatchingSubstring(s, p);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "baccbaadbc";
        string p = "cc*baa*adb";
        auto localResult = solution.shortestMatchingSubstring(s, p);
        int expected = -1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "a";
        string p = "**";
        auto localResult = solution.shortestMatchingSubstring(s, p);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "madlogic";
        string p = "*adlogi*";
        auto localResult = solution.shortestMatchingSubstring(s, p);
        int expected = 6;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
