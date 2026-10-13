/*
 * Problem: 648. 单词替换 / Replace Words
 * Link: https://leetcode.cn/problems/replace-words/
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
    string replaceWords(vector<string>& dictionary, string sentence) {
        // TODO: 在这里实现你的解法。
        (void)dictionary;
        (void)sentence;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> dictionary = {"cat", "bat", "rat"};
        string sentence = "the cattle was rattled by the battery";
        auto localResult = solution.replaceWords(dictionary, sentence);
        string expected = "the cat was rat by the bat";
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> dictionary = {"a", "b", "c"};
        string sentence = "aadsfasf absbs bbab cadsfafs";
        auto localResult = solution.replaceWords(dictionary, sentence);
        string expected = "a a b c";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
