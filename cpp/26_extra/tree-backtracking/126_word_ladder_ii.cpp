/*
 * Problem: 126. 单词接龙 II / Word Ladder II
 * Link: https://leetcode.cn/problems/word-ladder-ii/
 * Chapter: 树与回溯
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
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        // TODO: 在这里实现你的解法。
        (void)beginWord;
        (void)endWord;
        (void)wordList;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string beginWord = "hit";
        string endWord = "cog";
        vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
        auto localResult = solution.findLadders(beginWord, endWord, wordList);
        vector<vector<string>> expected = {{"hit", "hot", "dot", "dog", "cog"}, {"hit", "hot", "lot", "log", "cog"}};
        assert((localResult == expected));
    }

    {
        // 官方样例
        string beginWord = "hit";
        string endWord = "cog";
        vector<string> wordList = {"hot", "dot", "dog", "lot", "log"};
        auto localResult = solution.findLadders(beginWord, endWord, wordList);
        vector<vector<string>> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
