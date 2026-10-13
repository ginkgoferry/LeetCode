/*
 * Problem: 1255. 得分最高的单词集合 / Maximum Score Words Formed by Letters
 * Link: https://leetcode.cn/problems/maximum-score-words-formed-by-letters/
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
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)letters;
        (void)score;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"dog", "cat", "dad", "good"};
        vector<char> letters = {'a', 'a', 'c', 'd', 'd', 'd', 'g', 'o', 'o'};
        vector<int> score = {1, 0, 9, 5, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        auto localResult = solution.maxScoreWords(words, letters, score);
        int expected = 23;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"xxxz", "ax", "bx", "cx"};
        vector<char> letters = {'z', 'a', 'b', 'c', 'x', 'x', 'x'};
        vector<int> score = {4, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 10};
        auto localResult = solution.maxScoreWords(words, letters, score);
        int expected = 27;
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"leetcode"};
        vector<char> letters = {'l', 'e', 't', 'c', 'o', 'd'};
        vector<int> score = {0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0};
        auto localResult = solution.maxScoreWords(words, letters, score);
        int expected = 0;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
