/*
 * Problem: 面试题 17.25. 单词矩阵 / Word Rectangle LCCI
 * Link: https://leetcode.cn/problems/word-rectangle-lcci/
 * Chapter: 树与回溯
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
    vector<string> maxRectangle(vector<string>& words) {
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
        vector<string> words = {"this", "real", "hard", "trh", "hea", "iar", "sld"};
        auto localResult = solution.maxRectangle(words);
        vector<string> expected = {"this", "real", "hard"};
        assert((localResult == expected));
    }

    {
        // 官方样例
        vector<string> words = {"aa"};
        auto localResult = solution.maxRectangle(words);
        vector<string> expected = {"aa", "aa"};
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
