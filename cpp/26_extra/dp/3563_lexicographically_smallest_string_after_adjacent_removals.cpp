/*
 * Problem: 3563. 移除相邻字符后字典序最小的字符串 / Lexicographically Smallest String After Adjacent Removals
 * Link: https://leetcode.cn/problems/lexicographically-smallest-string-after-adjacent-removals/
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
    string lexicographicallySmallestString(string s) {
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
        string s = "abc";
        auto localResult = solution.lexicographicallySmallestString(s);
        string expected = "a";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "bcda";
        auto localResult = solution.lexicographicallySmallestString(s);
        string expected = "";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "zdce";
        auto localResult = solution.lexicographicallySmallestString(s);
        string expected = "zdce";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
