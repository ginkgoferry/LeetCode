/*
 * Problem: 212. 单词搜索 II / Word Search II
 * Link: https://leetcode.cn/problems/word-search-ii/
 * Chapter: 数据结构
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
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)board;
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<vector<char>> board = {{'o', 'a', 'a', 'n'}, {'e', 't', 'a', 'e'}, {'i', 'h', 'k', 'r'}, {'i', 'f', 'l', 'v'}};
        vector<string> words = {"oath", "pea", "eat", "rain"};
        auto localResult = solution.findWords(board, words);
        vector<string> expected = {"eat", "oath"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<vector<char>> board = {{'a', 'b'}, {'c', 'd'}};
        vector<string> words = {"abcb"};
        auto localResult = solution.findWords(board, words);
        vector<string> expected = {};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
