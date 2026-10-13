/*
 * Problem: 2030. 含特定字母的最小子序列 / Smallest K-Length Subsequence With Occurrences of a Letter
 * Link: https://leetcode.cn/problems/smallest-k-length-subsequence-with-occurrences-of-a-letter/
 * Chapter: 栈
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
    string smallestSubsequence(string s, int k, char letter, int repetition) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        (void)letter;
        (void)repetition;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "leet";
        int k = 3;
        char letter = 'e';
        int repetition = 1;
        auto localResult = solution.smallestSubsequence(s, k, letter, repetition);
        string expected = "eet";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcode";
        int k = 4;
        char letter = 'e';
        int repetition = 2;
        auto localResult = solution.smallestSubsequence(s, k, letter, repetition);
        string expected = "ecde";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "bb";
        int k = 2;
        char letter = 'b';
        int repetition = 2;
        auto localResult = solution.smallestSubsequence(s, k, letter, repetition);
        string expected = "bb";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
