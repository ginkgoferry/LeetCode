/*
 * Problem: 208. 实现 Trie (前缀树) / Implement Trie (Prefix Tree)
 * Link: https://leetcode.cn/problems/implement-trie-prefix-tree/
 * Chapter: 图论
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


class Trie {
public:
    Trie() {
        // TODO: 在这里实现你的解法。
    }

    void insert(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
    }

    bool search(string word) {
        // TODO: 在这里实现你的解法。
        (void)word;
        return {};
    }

    bool startsWith(string prefix) {
        // TODO: 在这里实现你的解法。
        (void)prefix;
        return {};
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

#ifdef LOCAL
int main() {
    {
        Trie obj;
        obj.insert("apple");
        assert((obj.search("apple") == true));
        assert((obj.search("app") == false));
        assert((obj.startsWith("app") == true));
        obj.insert("app");
        assert((obj.search("app") == true));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
