/*
 * Problem: 211. 添加与搜索单词 - 数据结构设计 / Design Add and Search Words Data Structure
 * Link: https://leetcode.cn/problems/design-add-and-search-words-data-structure/
 * Chapter: 数据结构
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

class WordDictionary {
public:
    WordDictionary() {
        // TODO: 在这里实现你的解法。
    }
    
    void addWord(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
    }
    
    bool search(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        WordDictionary localObject;
        {
            string word = "bad";
            localObject.addWord(word);
        }
        {
            string word = "dad";
            localObject.addWord(word);
        }
        {
            string word = "mad";
            localObject.addWord(word);
        }
        {
            string word = "pad";
            auto localResult = localObject.search(word);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            string word = "bad";
            auto localResult = localObject.search(word);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            string word = ".ad";
            auto localResult = localObject.search(word);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            string word = "b..";
            auto localResult = localObject.search(word);
            bool expected = true;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
