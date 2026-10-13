/*
 * Problem: 68. 文本左右对齐 / Text Justification
 * Link: https://leetcode.cn/problems/text-justification/
 * Chapter: 分组循环
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
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        // TODO: 在这里实现你的解法。
        (void)words;
        (void)maxWidth;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        vector<string> words = {"This", "is", "an", "example", "of", "text", "justification."};
        int maxWidth = 16;
        auto localResult = solution.fullJustify(words, maxWidth);
        vector<string> expected = {"This    is    an", "example  of text", "justification.  "};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"What", "must", "be", "acknowledgment", "shall", "be"};
        int maxWidth = 16;
        auto localResult = solution.fullJustify(words, maxWidth);
        vector<string> expected = {"What   must   be", "acknowledgment  ", "shall be        "};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"Science", "is", "what", "we", "understand", "well", "enough", "to", "explain", "to", "a", "computer.", "Art", "is", "everything", "else", "we", "do"};
        int maxWidth = 20;
        auto localResult = solution.fullJustify(words, maxWidth);
        vector<string> expected = {"Science  is  what we", "understand      well", "enough to explain to", "a  computer.  Art is", "everything  else  we", "do                  "};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
