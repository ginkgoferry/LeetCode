/*
 * Problem: 3306. 元音辅音字符串计数 II / Count of Substrings Containing Every Vowel and K Consonants II
 * Link: https://leetcode.cn/problems/count-of-substrings-containing-every-vowel-and-k-consonants-ii/
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
    long long countOfSubstrings(string word, int k) {
        // TODO: 在这里实现你的解法。
        (void)word;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "aeioqq";
        int k = 1;
        auto localResult = solution.countOfSubstrings(word, k);
        long long expected = 0LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "aeiou";
        int k = 0;
        auto localResult = solution.countOfSubstrings(word, k);
        long long expected = 1LL;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "ieaouqqieaouqq";
        int k = 1;
        auto localResult = solution.countOfSubstrings(word, k);
        long long expected = 3LL;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
