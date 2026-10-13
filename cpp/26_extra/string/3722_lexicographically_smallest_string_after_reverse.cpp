/*
 * Problem: 3722. 反转后字典序最小的字符串 / Lexicographically Smallest String After Reverse
 * Link: https://leetcode.cn/problems/lexicographically-smallest-string-after-reverse/
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
    string lexSmallest(string s) {
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
        string s = "dcab";
        auto localResult = solution.lexSmallest(s);
        string expected = "acdb";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "abba";
        auto localResult = solution.lexSmallest(s);
        string expected = "aabb";
        assert((localResult == expected));
    }

    {
        // 官方样例
        string s = "zxy";
        auto localResult = solution.lexSmallest(s);
        string expected = "xzy";
        assert((localResult == expected));
    }

    cout << "All tests passed.\n";
    return 0;
}
#endif
