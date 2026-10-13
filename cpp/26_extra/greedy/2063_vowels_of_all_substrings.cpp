/*
 * Problem: 2063. 所有子字符串中的元音 / Vowels of All Substrings
 * Link: https://leetcode.cn/problems/vowels-of-all-substrings/
 * Chapter: 贪心算法
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
    long long countVowels(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "aba";
        auto localResult = solution.countVowels(word);
        long long expected = 6LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "abc";
        auto localResult = solution.countVowels(word);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "ltcd";
        auto localResult = solution.countVowels(word);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "noosabasboosa";
        auto localResult = solution.countVowels(word);
        long long expected = 237LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
