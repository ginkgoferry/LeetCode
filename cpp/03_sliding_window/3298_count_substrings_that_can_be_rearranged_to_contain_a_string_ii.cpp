/*
 * Problem: 3298. 统计重新排列后包含另一个字符串的子字符串数目 II / Count Substrings That Can Be Rearranged to Contain a String II
 * Link: https://leetcode.cn/problems/count-substrings-that-can-be-rearranged-to-contain-a-string-ii/
 * Chapter: 滑动窗口
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
    long long validSubstringCount(string word1, string word2) {
        // TODO: 在这里实现你的解法。
        (void)word1;
        (void)word2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word1 = "bcca";
        string word2 = "abc";
        auto localResult = solution.validSubstringCount(word1, word2);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "abcabc";
        string word2 = "abc";
        auto localResult = solution.validSubstringCount(word1, word2);
        long long expected = 10LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "abcabc";
        string word2 = "aaabc";
        auto localResult = solution.validSubstringCount(word1, word2);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
