/*
 * Problem: 2227. 加密解密字符串 / Encrypt and Decrypt Strings
 * Link: https://leetcode.cn/problems/encrypt-and-decrypt-strings/
 * Chapter: 贪心算法
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

class Encrypter {
public:
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        // TODO: 在这里实现你的解法。
        (void)keys;
        (void)values;
        (void)dictionary;
    }
    
    string encrypt(string word1) {
        // TODO: 在这里实现你的解法。
        (void)word1;
        return {};
    }
    
    int decrypt(string word2) {
        // TODO: 在这里实现你的解法。
        (void)word2;
        return {};
    }
};

#ifdef LOCAL
int main() {

    {
        // 官方操作序列
        vector<char> keys = {'a', 'b', 'c', 'd'};
        vector<string> values = {"ei", "zf", "ei", "am"};
        vector<string> dictionary = {"abcd", "acbd", "adbc", "badc", "dacb", "cadb", "cbda", "abad"};
        Encrypter localObject(keys, values, dictionary);
        {
            string word1 = "abcd";
            auto localResult = localObject.encrypt(word1);
            string expected = "eizfeiam";
            assert((localResult == expected));
        }
        {
            string word2 = "eizfeiam";
            auto localResult = localObject.decrypt(word2);
            int expected = 2;
            assert((localResult == expected));
        }
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
