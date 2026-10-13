/*
 * Problem: 3981. 统计从两个字符串形成目标字符串的不同方案数 / Count Distinct Ways to Form Target from Two Strings
 * Link: https://leetcode.cn/problems/count-distinct-ways-to-form-target-from-two-strings/
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
    int interleaveCharacters(string word1, string word2, string target) {
        // TODO: 在这里实现你的解法。
        (void)word1;
        (void)word2;
        (void)target;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word1 = "abc";
        string word2 = "bac";
        string target = "abc";
        auto localResult = solution.interleaveCharacters(word1, word2, target);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "cd";
        string word2 = "cd";
        string target = "ccd";
        auto localResult = solution.interleaveCharacters(word1, word2, target);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "xy";
        string word2 = "xy";
        string target = "xyxy";
        auto localResult = solution.interleaveCharacters(word1, word2, target);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "ab";
        string word2 = "cde";
        string target = "ace";
        auto localResult = solution.interleaveCharacters(word1, word2, target);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
