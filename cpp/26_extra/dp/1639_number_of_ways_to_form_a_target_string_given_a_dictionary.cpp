/*
 * Problem: 1639. 通过给定词典构造目标字符串的方案数 / Number of Ways to Form a Target String Given a Dictionary
 * Link: https://leetcode.cn/problems/number-of-ways-to-form-a-target-string-given-a-dictionary/
 * Chapter: 动态规划
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
    int numWays(vector<string>& words, string target) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"acca", "bbbb", "caca"};
        string target = "aba";
        auto localResult = solution.numWays(words, target);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abba", "baab"};
        string target = "bab";
        auto localResult = solution.numWays(words, target);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abcd"};
        string target = "abcd";
        auto localResult = solution.numWays(words, target);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"abab", "baba", "abba", "baab"};
        string target = "abba";
        auto localResult = solution.numWays(words, target);
        int expected = 16;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
