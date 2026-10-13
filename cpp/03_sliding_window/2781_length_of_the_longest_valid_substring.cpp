/*
 * Problem: 2781. 最长合法子字符串的长度 / Length of the Longest Valid Substring
 * Link: https://leetcode.cn/problems/length-of-the-longest-valid-substring/
 * Chapter: 滑动窗口
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
    int longestValidSubstring(string word, vector<string>& forbidden) {
        // TODO: 在这里实现你的解法。
        (void)word;
        (void)forbidden;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string word = "cbaaaabc";
        vector<string> forbidden = {"aaa", "cb"};
        auto localResult = solution.longestValidSubstring(word, forbidden);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string word = "leetcode";
        vector<string> forbidden = {"de", "le", "e"};
        auto localResult = solution.longestValidSubstring(word, forbidden);
        int expected = 4;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
