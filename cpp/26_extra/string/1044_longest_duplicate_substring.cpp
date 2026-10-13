/*
 * Problem: 1044. 最长重复子串 / Longest Duplicate Substring
 * Link: https://leetcode.cn/problems/longest-duplicate-substring/
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
    string longestDupSubstring(string s) {
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
        string s = "banana";
        const auto localOriginalString = s;
        auto localResult = solution.longestDupSubstring(s);
        assert(localResult.size() == 3);
        size_t first = localOriginalString.find(localResult);
        assert(first != string::npos && localOriginalString.find(localResult, first + 1) != string::npos);
    }

    {
        // 官方样例
        string s = "abcd";
        const auto localOriginalString = s;
        auto localResult = solution.longestDupSubstring(s);
        assert(localResult.size() == 0);
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
