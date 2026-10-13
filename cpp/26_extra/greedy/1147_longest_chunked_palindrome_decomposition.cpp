/*
 * Problem: 1147. 段式回文 / Longest Chunked Palindrome Decomposition
 * Link: https://leetcode.cn/problems/longest-chunked-palindrome-decomposition/
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
#endif

class Solution {
public:
    int longestDecomposition(string text) {
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
        string text = "ghiabcdefhelloadamhelloabcdefghi";
        auto localResult = solution.longestDecomposition(text);
        int expected = 7;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string text = "merchant";
        auto localResult = solution.longestDecomposition(text);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string text = "antaprezatepzapreanta";
        auto localResult = solution.longestDecomposition(text);
        int expected = 11;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
