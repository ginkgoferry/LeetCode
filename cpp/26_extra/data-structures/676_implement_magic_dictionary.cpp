/*
 * Problem: 676. 实现一个魔法字典 / Implement Magic Dictionary
 * Link: https://leetcode.cn/problems/implement-magic-dictionary/
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

class MagicDictionary {
public:
    MagicDictionary() {
        // TODO: 在这里实现你的解法。
    }
    
    void buildDict(vector<string> dictionary) {
        // TODO: 在这里实现你的解法。
        (void)dictionary;
    }
    
    bool search(string searchWord) {
        // TODO: 在这里实现你的解法。
        (void)searchWord;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        MagicDictionary localObject;
        {
            vector<string> dictionary = {"hello", "leetcode"};
            localObject.buildDict(dictionary);
        }
        {
            string searchWord = "hello";
            auto localResult = localObject.search(searchWord);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            string searchWord = "hhllo";
            auto localResult = localObject.search(searchWord);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            string searchWord = "hell";
            auto localResult = localObject.search(searchWord);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            string searchWord = "leetcoded";
            auto localResult = localObject.search(searchWord);
            bool expected = false;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
