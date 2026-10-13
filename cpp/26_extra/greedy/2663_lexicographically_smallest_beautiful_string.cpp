/*
 * Problem: 2663. 字典序最小的美丽字符串 / Lexicographically Smallest Beautiful String
 * Link: https://leetcode.cn/problems/lexicographically-smallest-beautiful-string/
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
    string smallestBeautifulString(string s, int k) {
        // TODO: 在这里实现你的解法。
        (void)s;
        (void)k;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s = "abcz";
        int k = 26;
        auto localResult = solution.smallestBeautifulString(s, k);
        string expected = "abda";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "dc";
        int k = 4;
        auto localResult = solution.smallestBeautifulString(s, k);
        string expected = "";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
