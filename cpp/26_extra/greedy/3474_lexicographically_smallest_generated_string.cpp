/*
 * Problem: 3474. 字典序最小的生成字符串 / Lexicographically Smallest Generated String
 * Link: https://leetcode.cn/problems/lexicographically-smallest-generated-string/
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
    string generateString(string str1, string str2) {
        // TODO: 在这里实现你的解法。
        (void)str1;
        (void)str2;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string str1 = "TFTF";
        string str2 = "ab";
        auto localResult = solution.generateString(str1, str2);
        string expected = "ababa";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string str1 = "TFTF";
        string str2 = "abc";
        auto localResult = solution.generateString(str1, str2);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string str1 = "F";
        string str2 = "d";
        auto localResult = solution.generateString(str1, str2);
        string expected = "a";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
