/*
 * Problem: 1456. 定长子串中元音的最大数目 / Maximum Number of Vowels in a Substring of Given Length
 * Link: https://leetcode.cn/problems/maximum-number-of-vowels-in-a-substring-of-given-length/
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
    int maxVowels(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return 0;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abciiidef";
        int k = 3;
        auto localResult = solution.maxVowels(s, k);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "aeiou";
        int k = 2;
        auto localResult = solution.maxVowels(s, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcode";
        int k = 3;
        auto localResult = solution.maxVowels(s, k);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "rhythms";
        int k = 4;
        auto localResult = solution.maxVowels(s, k);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "tryhard";
        int k = 4;
        auto localResult = solution.maxVowels(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        int k = 1;
        auto localResult = solution.maxVowels(s, k);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
