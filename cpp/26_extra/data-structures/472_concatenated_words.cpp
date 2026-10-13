/*
 * Problem: 472. 连接词 / Concatenated Words
 * Link: https://leetcode.cn/problems/concatenated-words/
 * Chapter: 动态规划
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
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
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
        vector<string> words = {"cat", "cats", "catsdogcats", "dog", "dogcatsdog", "hippopotamuses", "rat", "ratcatdogcat"};
        auto localResult = solution.findAllConcatenatedWordsInADict(words);
        vector<string> expected = {"catsdogcats", "dogcatsdog", "ratcatdogcat"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"cat", "dog", "catdog"};
        auto localResult = solution.findAllConcatenatedWordsInADict(words);
        vector<string> expected = {"catdog"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
