/*
 * Problem: 1297. 子串的最大出现次数 / Maximum Number of Occurrences of a Substring
 * Link: https://leetcode.cn/problems/maximum-number-of-occurrences-of-a-substring/
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
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)maxLetters;
        (void)minSize;
        (void)maxSize;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "aababcaab";
        int maxLetters = 2;
        int minSize = 3;
        int maxSize = 4;
        auto localResult = solution.maxFreq(s, maxLetters, minSize, maxSize);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aaaa";
        int maxLetters = 1;
        int minSize = 3;
        int maxSize = 3;
        auto localResult = solution.maxFreq(s, maxLetters, minSize, maxSize);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aabcabcab";
        int maxLetters = 2;
        int minSize = 2;
        int maxSize = 3;
        auto localResult = solution.maxFreq(s, maxLetters, minSize, maxSize);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abcde";
        int maxLetters = 2;
        int minSize = 3;
        int maxSize = 3;
        auto localResult = solution.maxFreq(s, maxLetters, minSize, maxSize);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
