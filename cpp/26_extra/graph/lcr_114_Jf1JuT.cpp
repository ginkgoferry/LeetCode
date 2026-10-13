/*
 * Problem: LCR 114. 火星词典 / 火星词典
 * Link: https://leetcode.cn/problems/Jf1JuT/
 * Chapter: 图论
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
    string alienOrder(vector<string>& words) {
        // TODO: 在这里实现你的解法。
        (void)words;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"wrt", "wrf", "er", "ett", "rftt"};
        const auto localOriginalWords = words;
        auto localResult = solution.alienOrder(words);
        set<char> alphabet;
        for (const auto& word : localOriginalWords) for (char ch : word) alphabet.insert(ch);
        assert(localResult.size() == alphabet.size());
        map<char, int> ranks;
        for (size_t i = 0; i < localResult.size(); ++i) {
            char ch = localResult[i]; assert(alphabet.count(ch) && !ranks.count(ch)); ranks[ch] = static_cast<int>(i);
        }
        for (size_t i = 1; i < localOriginalWords.size(); ++i) {
            const auto& a = localOriginalWords[i-1]; const auto& b = localOriginalWords[i];
            size_t common = 0; while (common < min(a.size(), b.size()) && a[common] == b[common]) ++common;
            if (common == min(a.size(), b.size())) assert(a.size() <= b.size());
            else assert(ranks[a[common]] < ranks[b[common]]);
        }
    }

    {
        // 官方样例
        vector<string> words = {"z", "x"};
        const auto localOriginalWords = words;
        auto localResult = solution.alienOrder(words);
        set<char> alphabet;
        for (const auto& word : localOriginalWords) for (char ch : word) alphabet.insert(ch);
        assert(localResult.size() == alphabet.size());
        map<char, int> ranks;
        for (size_t i = 0; i < localResult.size(); ++i) {
            char ch = localResult[i]; assert(alphabet.count(ch) && !ranks.count(ch)); ranks[ch] = static_cast<int>(i);
        }
        for (size_t i = 1; i < localOriginalWords.size(); ++i) {
            const auto& a = localOriginalWords[i-1]; const auto& b = localOriginalWords[i];
            size_t common = 0; while (common < min(a.size(), b.size()) && a[common] == b[common]) ++common;
            if (common == min(a.size(), b.size())) assert(a.size() <= b.size());
            else assert(ranks[a[common]] < ranks[b[common]]);
        }
    }

    {
        // 官方样例
        vector<string> words = {"z", "x", "z"};
        const auto localOriginalWords = words;
        auto localResult = solution.alienOrder(words);
        assert(localResult.empty());
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
