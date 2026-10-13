/*
 * Problem: 1163. 按字典序排在最后的子串 / Last Substring in Lexicographical Order
 * Link: https://leetcode.cn/problems/last-substring-in-lexicographical-order/
 * Chapter: 字符串
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
    string lastSubstring(string s) {
        // TODO: 在这里实现你的解法。
        (void)s;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abab";
        auto localResult = solution.lastSubstring(s);
        string expected = "bab";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "leetcode";
        auto localResult = solution.lastSubstring(s);
        string expected = "tcode";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
