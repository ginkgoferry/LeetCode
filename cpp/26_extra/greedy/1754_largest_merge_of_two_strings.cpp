/*
 * Problem: 1754. 构造字典序最大的合并字符串 / Largest Merge Of Two Strings
 * Link: https://leetcode.cn/problems/largest-merge-of-two-strings/
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
    string largestMerge(string word1, string word2) {
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
        string word1 = "cabaa";
        string word2 = "bcaaa";
        auto localResult = solution.largestMerge(word1, word2);
        string expected = "cbcabaaaaa";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word1 = "abcabc";
        string word2 = "abdcaba";
        auto localResult = solution.largestMerge(word1, word2);
        string expected = "abdcabcabcaba";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
