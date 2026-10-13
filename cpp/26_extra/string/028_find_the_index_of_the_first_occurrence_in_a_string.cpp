/*
 * Problem: 28. 找出字符串中第一个匹配项的下标 / Find the Index of the First Occurrence in a String
 * Link: https://leetcode.cn/problems/find-the-index-of-the-first-occurrence-in-a-string/
 * Chapter: 字符串
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
    int strStr(string haystack, string needle) {
        // TODO: 在这里实现你的解法。
        (void)haystack;
        (void)needle;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string haystack = "sadbutsad";
        string needle = "sad";
        auto localResult = solution.strStr(haystack, needle);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string haystack = "leetcode";
        string needle = "leeto";
        auto localResult = solution.strStr(haystack, needle);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
