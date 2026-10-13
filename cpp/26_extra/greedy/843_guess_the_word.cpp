/*
 * Problem: 843. 猜猜这个单词 / Guess the Word
 * Link: https://leetcode.cn/problems/guess-the-word/
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

// LOCAL Master protocol. Only guess() belongs to the submitted API.
class Master {
    string secret;
    set<string> allowed;
    int limit, calls = 0;
    bool found = false;
public:
    Master(string word, const vector<string>& words, int maximum)
        : secret(std::move(word)), allowed(words.begin(), words.end()), limit(maximum) {}
    int guess(string word) {
        assert(++calls <= limit);
        if (!allowed.count(word)) return -1;
        assert(word.size() == secret.size());
        int matches = 0;
        for (size_t i = 0; i < word.size(); ++i) matches += word[i] == secret[i];
        found |= word == secret;
        return matches;
    }
    bool localSucceeded() const { return found && calls <= limit; }
};

#endif

class Solution {
public:
    void findSecretWord(vector<string>& words, Master& master) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)master;
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string secret = "acckzz";
        vector<string> words = {"acckzz", "ccbazz", "eiowzz", "abcczz"};
        int allowedGuesses = 10;
        Master master(secret, words, allowedGuesses);
        solution.findSecretWord(words, master);
        assert(master.localSucceeded());
    }

    {
        // 官方样例
        string secret = "hamada";
        vector<string> words = {"hamada", "khaled"};
        int allowedGuesses = 10;
        Master master(secret, words, allowedGuesses);
        solution.findSecretWord(words, master);
        assert(master.localSucceeded());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
