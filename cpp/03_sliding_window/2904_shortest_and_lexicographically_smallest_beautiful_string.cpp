/*
 * Problem: 2904. 最短且字典序最小的美丽子字符串 / Shortest and Lexicographically Smallest Beautiful String
 * Link: https://leetcode.cn/problems/shortest-and-lexicographically-smallest-beautiful-string/
 * Chapter: 滑动窗口
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
    string shortestBeautifulSubstring(string s, int k) {
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
        string s = "100011001";
        int k = 3;
        auto localResult = solution.shortestBeautifulSubstring(s, k);
        string expected = "11001";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "1011";
        int k = 2;
        auto localResult = solution.shortestBeautifulSubstring(s, k);
        string expected = "11";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "000";
        int k = 1;
        auto localResult = solution.shortestBeautifulSubstring(s, k);
        string expected = "";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
