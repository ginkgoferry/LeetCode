/*
 * Problem: 792. 匹配子序列的单词数 / Number of Matching Subsequences
 * Link: https://leetcode.cn/problems/number-of-matching-subsequences/
 * Chapter: 字符串
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
    int numMatchingSubseq(string s, vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcde";
        vector<string> words = {"a", "bb", "acd", "ace"};
        auto localResult = solution.numMatchingSubseq(s, words);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "dsahjpjauf";
        vector<string> words = {"ahjpjau", "ja", "ahbwzgqnuk", "tnmlanowax"};
        auto localResult = solution.numMatchingSubseq(s, words);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
