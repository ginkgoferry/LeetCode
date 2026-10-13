/*
 * Problem: 1397. 找到所有好字符串 / Find All Good Strings
 * Link: https://leetcode.cn/problems/find-all-good-strings/
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
    int findGoodStrings(int n, string s1, string s2, string evil) {
        // TODO: 在这里实现你的解法。
        (void)n;
        (void)s1;
        (void)s2;
        (void)evil;
        return {};
    }
};

#ifdef LOCAL
int main() {
    [[maybe_unused]] Solution solution;

    {
        // 官方样例
        int n = 2;
        string s1 = "aa";
        string s2 = "da";
        string evil = "b";
        auto localResult = solution.findGoodStrings(n, s1, s2, evil);
        int expected = 51;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 8;
        string s1 = "leetcode";
        string s2 = "leetgoes";
        string evil = "leet";
        auto localResult = solution.findGoodStrings(n, s1, s2, evil);
        int expected = 0;
        assert((localResult == expected));
    }

    {
        // 官方样例
        int n = 2;
        string s1 = "gx";
        string s2 = "gz";
        string evil = "x";
        auto localResult = solution.findGoodStrings(n, s1, s2, evil);
        int expected = 2;
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
