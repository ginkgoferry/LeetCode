/*
 * Problem: 1032. 字符流 / Stream of Characters
 * Link: https://leetcode.cn/problems/stream-of-characters/
 * Chapter: 字符串
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

class StreamChecker {
public:
    StreamChecker(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
    }
    
    bool query(char letter) {
        // TODO: 在这里实现你的解法。
        (void)letter;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<string> words = {"cd", "f", "kl"};
        StreamChecker localObject(words);
        {
            char letter = 'a';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'b';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'c';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'd';
            auto localResult = localObject.query(letter);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            char letter = 'e';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'f';
            auto localResult = localObject.query(letter);
            bool expected = true;
            assert((localResult == expected));
        }
        {
            char letter = 'g';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'h';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'i';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'j';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'k';
            auto localResult = localObject.query(letter);
            bool expected = false;
            assert((localResult == expected));
        }
        {
            char letter = 'l';
            auto localResult = localObject.query(letter);
            bool expected = true;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
