/*
 * Problem: 1061. 按字典序排列最小的等效字符串 / Lexicographically Smallest Equivalent String
 * Link: https://leetcode.cn/problems/lexicographically-smallest-equivalent-string/
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
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        // TODO: 在这里实现你的解法。
        (void)s1;
        (void)s2;
        (void)baseStr;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string s1 = "parker";
        string s2 = "morris";
        string baseStr = "parser";
        auto localResult = solution.smallestEquivalentString(s1, s2, baseStr);
        string expected = "makkek";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "hello";
        string s2 = "world";
        string baseStr = "hold";
        auto localResult = solution.smallestEquivalentString(s1, s2, baseStr);
        string expected = "hdld";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s1 = "leetcode";
        string s2 = "programs";
        string baseStr = "sourcecode";
        auto localResult = solution.smallestEquivalentString(s1, s2, baseStr);
        string expected = "aauaaaaada";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
