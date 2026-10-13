/*
 * Problem: 1156. 单字符重复子串的最大长度 / Swap For Longest Repeated Character Substring
 * Link: https://leetcode.cn/problems/swap-for-longest-repeated-character-substring/
 * Chapter: 滑动窗口
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
    int maxRepOpt1(string text) {
        // TODO: 在这里实现你的解法。
        (void)text;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string text = "ababa";
        auto localResult = solution.maxRepOpt1(text);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string text = "aaabaaa";
        auto localResult = solution.maxRepOpt1(text);
        int expected = 6;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string text = "aaabbaaa";
        auto localResult = solution.maxRepOpt1(text);
        int expected = 4;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string text = "aaaaa";
        auto localResult = solution.maxRepOpt1(text);
        int expected = 5;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string text = "abcdef";
        auto localResult = solution.maxRepOpt1(text);
        int expected = 1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
