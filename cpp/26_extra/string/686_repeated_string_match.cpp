/*
 * Problem: 686. 重复叠加字符串匹配 / Repeated String Match
 * Link: https://leetcode.cn/problems/repeated-string-match/
 * Chapter: 字符串
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
    int repeatedStringMatch(string a, string b) {
        // TODO: 在这里实现你的解法。
        (void)a;
        (void)b;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        string a = "abcd";
        string b = "cdabcdab";
        auto localResult = solution.repeatedStringMatch(a, b);
        int expected = 3;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "a";
        string b = "aa";
        auto localResult = solution.repeatedStringMatch(a, b);
        int expected = 2;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "a";
        string b = "a";
        auto localResult = solution.repeatedStringMatch(a, b);
        int expected = 1;
        assert((localResult == expected));
    }

    {
        // 官方样例
        string a = "abc";
        string b = "wxyz";
        auto localResult = solution.repeatedStringMatch(a, b);
        int expected = -1;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
