/*
 * Problem: 30. 串联所有单词的子串 / Substring with Concatenation of All Words
 * Link: https://leetcode.cn/problems/substring-with-concatenation-of-all-words/
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
    vector<int> findSubstring(string s, vector<string>& words) {
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
        string s = "barfoothefoobarman";
        vector<string> words = {"foo", "bar"};
        auto localResult = solution.findSubstring(s, words);
        vector<int> expected = {0, 9};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "wordgoodgoodgoodbestword";
        vector<string> words = {"word", "good", "best", "word"};
        auto localResult = solution.findSubstring(s, words);
        vector<int> expected = {};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "barfoofoobarthefoobarman";
        vector<string> words = {"bar", "foo", "the"};
        auto localResult = solution.findSubstring(s, words);
        vector<int> expected = {6, 9, 12};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    {
        // 额外边界用例
        string s = "a";
        vector<string> words = {"a"};
        auto localResult = solution.findSubstring(s, words);
        vector<int> expected = {0};
        sort(localResult.begin(), localResult.end());
        sort(expected.begin(), expected.end());
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
