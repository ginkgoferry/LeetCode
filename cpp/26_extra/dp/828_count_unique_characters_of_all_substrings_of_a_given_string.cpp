/*
 * Problem: 828. 统计子串中的唯一字符 / Count Unique Characters of All Substrings of a Given String
 * Link: https://leetcode.cn/problems/count-unique-characters-of-all-substrings-of-a-given-string/
 * Chapter: 动态规划
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
    int uniqueLetterString(string s) {
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
        string s = "ABC";
        auto localResult = solution.uniqueLetterString(s);
        int expected = 10;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "ABA";
        auto localResult = solution.uniqueLetterString(s);
        int expected = 8;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "LEETCODE";
        auto localResult = solution.uniqueLetterString(s);
        int expected = 92;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
