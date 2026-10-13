/*
 * Problem: 1657. 确定两个字符串是否接近 / Determine if Two Strings Are Close
 * Link: https://leetcode.cn/problems/determine-if-two-strings-are-close/
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
    bool closeStrings(string word1, string word2) {
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
        string word1 = "abc";
        string word2 = "bca";
        auto localResult = solution.closeStrings(word1, word2);
        bool expected = true;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "a";
        string word2 = "aa";
        auto localResult = solution.closeStrings(word1, word2);
        bool expected = false;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "cabbba";
        string word2 = "abbccc";
        auto localResult = solution.closeStrings(word1, word2);
        bool expected = true;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
